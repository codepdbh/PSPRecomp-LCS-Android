#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0185[4093] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0, 0,
    9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 37, 0, 0, 38, 0, 39, 0, 0, 0,
    40, 0, 0, 0, 41, 0, 42, 0, 0, 43, 0, 0, 44, 0, 45, 0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0,
    0, 61, 0, 0, 62, 0, 63, 0, 64, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 70, 0, 71, 0, 72, 73, 0,
    0, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 77, 0, 0, 78, 0, 79, 0, 80, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0,
    85, 0, 0, 86, 0, 87, 0, 88, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 93, 0, 0, 94, 0, 95, 0, 96, 97, 0, 0,
    0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0, 102, 0, 103, 0, 104, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0,
    109, 0, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 119, 120,
    0, 121, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 0, 127, 128, 0, 129, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0,
    0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 0,
    0, 140, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0,
    154, 155, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0,
    0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0,
    188, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 197, 0, 0, 198, 0,
    0, 0, 199, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212,
    0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0,
    223, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 228, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 241, 0, 242, 0, 243, 244, 0, 0, 0, 245, 0, 0, 246,
    0, 0, 247, 0, 248, 0, 249, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260,
    0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 268,
    0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 279, 0, 280, 0, 0, 0,
    281, 0, 282, 0, 283, 0, 284, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 290, 0, 291, 0, 292,
    0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 299, 0, 0,
    300, 0, 301, 0, 0, 302, 0, 303, 0, 0, 304, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 308, 0, 0, 0, 0, 0, 309, 0,
    310, 0, 311, 0, 0, 0, 0, 312, 0, 313, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 320, 0, 321, 0, 322, 0, 323, 0, 0, 0, 0, 324,
    0, 0, 325, 0, 326, 0, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 0, 332, 0, 0, 333, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0,
    0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0, 343, 0, 0, 0,
    344, 0, 345, 0, 346, 0, 347, 0, 0, 348, 0, 349, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353,
    0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 356, 0, 0, 357, 0, 358, 359, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 364, 365, 0, 0, 0, 0, 366, 0, 367, 0, 368, 0, 0, 0, 0, 369, 0,
    0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0,
    377, 0, 378, 0, 0, 0, 379, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 385, 0,
    0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0,
    0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0,
    403, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 407, 0, 408, 409, 0, 0, 0, 410, 0, 411, 412, 0, 0, 0, 413, 0, 414, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 425, 426, 0, 427, 0, 428, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0,
    0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0,
    0, 0, 0, 437, 0, 438, 0, 0, 439, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0, 443, 0, 0, 0, 444, 0, 0, 445, 446, 0, 447, 0, 448,
    0, 449, 0, 450, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 463,
    0, 0, 464, 0, 465, 0, 466, 0, 0, 467, 0, 0, 468, 0, 469, 470, 0, 0, 471, 0, 472, 0, 473, 474, 475, 0, 0, 0, 476, 0, 0, 0,
    0, 0, 477, 0, 478, 0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0,
    492, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 496, 0, 0, 0, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 0, 0,
    0, 0, 0, 503, 0, 504, 0, 505, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510,
    0, 0, 511, 512, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 517, 518, 0, 519, 0, 0, 0, 0, 0, 520,
    0, 0, 0, 0, 521, 0, 522, 523, 0, 0, 0, 0, 524, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 529, 530, 0,
    531, 0, 0, 0, 532, 533, 0, 0, 0, 0, 0, 534, 0, 535, 0, 536, 0, 537, 0, 538, 0, 539, 0, 540, 0, 541, 0, 0, 0, 0, 0, 0,
    0, 542, 0, 0, 543, 0, 544, 545, 0, 546, 0, 0, 0, 547, 548, 0, 0, 0, 0, 0, 549, 0, 550, 0, 551, 0, 552, 0, 553, 0, 554, 0,
    555, 0, 556, 0, 0, 0, 557, 0, 0, 558, 0, 559, 560, 0, 561, 0, 562, 563, 0, 0, 0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569,
    0, 570, 0, 571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 575, 0, 576, 0, 0, 577, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 580, 0, 581, 0, 0, 0, 582, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0,
    0, 0, 0, 0, 586, 0, 0, 587, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 591, 592, 0, 0,
    0, 593, 594, 0, 0, 595, 0, 596, 0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 601, 0, 602, 603, 0, 0, 604, 0, 605, 606, 0, 607,
    0, 608, 0, 0, 609, 0, 0, 610, 0, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 616,
    0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 619, 0, 620, 0, 621, 622, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0,
    625, 0, 626, 0, 0, 0, 0, 627, 0, 0, 628, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 635, 0, 636, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 641, 0, 0, 0, 642, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0,
    644, 0, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0,
    0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 656, 0, 0, 657, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 0, 661,
    0, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 665, 0, 666, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 668, 0, 0, 0, 0, 669, 0, 0, 670, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0, 0, 0, 673,
    674, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 680, 0, 681, 0, 682, 683, 0, 0, 0, 684, 0, 685,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 691, 0, 0,
    0, 0, 0, 692, 0, 693, 0, 694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 697, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0,
    0, 700, 0, 0, 0, 701, 0, 702, 0, 0, 703, 0, 0, 0, 0, 704, 0, 705, 706, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0,
    0, 710, 0, 711, 712, 0, 0, 0, 713, 0, 0, 0, 0, 0, 714, 715, 0, 0, 0, 0, 716, 0, 717, 0, 718, 0, 0, 0, 0, 719, 0, 720,
    0, 0, 721, 0, 0, 722, 0, 723, 724, 725, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 727, 0, 0, 728, 0, 0, 729, 0, 0, 0, 0, 730,
    0, 731, 732, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 736, 0, 737, 738, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 740,
    0, 741, 0, 742, 0, 743, 744, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 747, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 750, 0, 0, 751, 0, 0, 752, 0, 753, 0, 754, 0, 755, 0, 0,
    756, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0,
    0, 0, 761, 0, 762, 0, 763, 764, 0, 0, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 0, 769,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 772, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 774, 0, 775, 0, 776,
    777, 0, 0, 778, 0, 0, 779, 0, 780, 0, 0, 0, 0, 781, 0, 782, 0, 783, 0, 0, 784, 0, 0, 0, 0, 785, 0, 786, 0, 787, 0, 0,
    0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 789, 0, 790, 0, 0, 791, 792, 0, 793, 0, 794, 0, 0, 0, 0, 0, 0, 795, 0, 796, 797, 0,
    0, 798, 0, 0, 799, 0, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 801, 0, 802, 0, 0, 803, 0, 0, 804, 0, 0, 0, 0,
    805, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0,
    0, 0, 0, 808, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 811, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 814, 0, 0, 0, 815, 0, 0, 816, 0, 0, 0, 817,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 819, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0,
    0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 824, 0, 0, 0, 825, 0, 0, 826, 0, 0, 0, 827, 0, 0, 0, 0,
    828, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 831, 0, 0, 0, 832, 0, 833, 0, 834, 835, 0, 0, 0, 0, 0, 0, 836,
    0, 837, 0, 838, 0, 839, 0, 840, 0, 0, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 0, 842, 843, 844, 0, 0, 0, 845, 0, 0, 0,
    846, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0, 850, 0, 0, 851,
    0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0, 0, 853, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0,
    0, 0, 0, 856, 0, 0, 0, 0, 857, 858, 0, 859, 0, 0, 0, 0, 860, 0, 861, 0, 0, 0, 0, 0, 862, 0, 863, 0, 864, 0, 865, 0,
    866, 0, 867, 0, 0, 868, 0, 869, 0, 870, 0, 0, 871, 0, 0, 872, 0, 0, 873, 0, 0, 0, 0, 0, 874, 0, 875, 0, 876, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 877, 0, 0, 0, 0, 878, 0, 0, 0, 879, 0, 0, 880, 0, 0, 0, 0, 881, 882, 0, 883, 0, 884, 0, 885, 886, 0, 0, 0, 0, 0,
    887, 0, 0, 0, 0, 0, 0, 0, 888, 0, 889, 0, 0, 890, 0, 0, 0, 891, 0, 0, 892, 0, 0, 0, 0, 0, 893, 894, 0, 0, 895, 0,
    0, 896, 0, 897, 0, 898, 899, 0, 0, 0, 900, 0, 0, 0, 0, 0, 0, 0, 0, 0, 901, 0, 902, 0, 0, 903, 0, 0, 904, 0, 0, 905,
    0, 0, 906, 0, 0, 0, 0, 0, 0, 907, 0, 0, 908, 909, 0, 0, 0, 0, 910, 0, 0, 0, 0, 0, 911, 0, 0, 912, 913, 0, 0, 0,
    0, 914, 0, 0, 0, 0, 0, 915, 0, 0, 0, 0, 0, 0, 916, 0, 0, 917, 0, 0, 918, 0, 0, 919, 0, 0, 0, 0, 920, 0, 0, 0,
    921, 0, 0, 0, 0, 0, 0, 922, 0, 0, 923, 0, 0, 0, 924, 0, 0, 0, 925, 0, 0, 926, 0, 0, 0, 927, 0, 0, 928, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 929, 930, 0, 0, 0, 0, 931, 0, 0, 0, 932, 0, 933, 0, 934, 0, 935, 0, 0, 936,
};
void recomp_unit_0185_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AE8004u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0185[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AE8004;
    case 2u: goto L_08AE801C;
    case 3u: goto L_08AE8024;
    case 4u: goto L_08AE8034;
    case 5u: goto L_08AE8040;
    case 6u: goto L_08AE805C;
    case 7u: goto L_08AE806C;
    case 8u: goto L_08AE8078;
    case 9u: goto L_08AE8084;
    case 10u: goto L_08AE808C;
    case 11u: goto L_08AE80AC;
    case 12u: goto L_08AE80B4;
    case 13u: goto L_08AE80C4;
    case 14u: goto L_08AE80D0;
    case 15u: goto L_08AE80D8;
    case 16u: goto L_08AE80EC;
    case 17u: goto L_08AE8194;
    case 18u: goto L_08AE81A8;
    case 19u: goto L_08AE81B0;
    case 20u: goto L_08AE81C4;
    case 21u: goto L_08AE81CC;
    case 22u: goto L_08AE81D4;
    case 23u: goto L_08AE8208;
    case 24u: goto L_08AE822C;
    case 25u: goto L_08AE8244;
    case 26u: goto L_08AE8260;
    case 27u: goto L_08AE8278;
    case 28u: goto L_08AE8280;
    case 29u: goto L_08AE82A4;
    case 30u: goto L_08AE82BC;
    case 31u: goto L_08AE82CC;
    case 32u: goto L_08AE82DC;
    case 33u: goto L_08AE82E8;
    case 34u: goto L_08AE844C;
    case 35u: goto L_08AE8454;
    case 36u: goto L_08AE845C;
    case 37u: goto L_08AE8460;
    case 38u: goto L_08AE846C;
    case 39u: goto L_08AE8474;
    case 40u: goto L_08AE8484;
    case 41u: goto L_08AE8494;
    case 42u: goto L_08AE849C;
    case 43u: goto L_08AE84A8;
    case 44u: goto L_08AE84B4;
    case 45u: goto L_08AE84BC;
    case 46u: goto L_08AE84C4;
    case 47u: goto L_08AE84D0;
    case 48u: goto L_08AE84E0;
    case 49u: goto L_08AE84F8;
    case 50u: goto L_08AE8508;
    case 51u: goto L_08AE8518;
    case 52u: goto L_08AE8520;
    case 53u: goto L_08AE852C;
    case 54u: goto L_08AE8538;
    case 55u: goto L_08AE8540;
    case 56u: goto L_08AE8548;
    case 57u: goto L_08AE8550;
    case 58u: goto L_08AE8564;
    case 59u: goto L_08AE8574;
    case 60u: goto L_08AE857C;
    case 61u: goto L_08AE8588;
    case 62u: goto L_08AE8594;
    case 63u: goto L_08AE859C;
    case 64u: goto L_08AE85A4;
    case 65u: goto L_08AE85A8;
    case 66u: goto L_08AE85B8;
    case 67u: goto L_08AE85C8;
    case 68u: goto L_08AE85D0;
    case 69u: goto L_08AE85DC;
    case 70u: goto L_08AE85E8;
    case 71u: goto L_08AE85F0;
    case 72u: goto L_08AE85F8;
    case 73u: goto L_08AE85FC;
    case 74u: goto L_08AE860C;
    case 75u: goto L_08AE861C;
    case 76u: goto L_08AE8624;
    case 77u: goto L_08AE8630;
    case 78u: goto L_08AE863C;
    case 79u: goto L_08AE8644;
    case 80u: goto L_08AE864C;
    case 81u: goto L_08AE8650;
    case 82u: goto L_08AE8660;
    case 83u: goto L_08AE8670;
    case 84u: goto L_08AE8678;
    case 85u: goto L_08AE8684;
    case 86u: goto L_08AE8690;
    case 87u: goto L_08AE8698;
    case 88u: goto L_08AE86A0;
    case 89u: goto L_08AE86A4;
    case 90u: goto L_08AE86B4;
    case 91u: goto L_08AE86C4;
    case 92u: goto L_08AE86CC;
    case 93u: goto L_08AE86D8;
    case 94u: goto L_08AE86E4;
    case 95u: goto L_08AE86EC;
    case 96u: goto L_08AE86F4;
    case 97u: goto L_08AE86F8;
    case 98u: goto L_08AE8708;
    case 99u: goto L_08AE8718;
    case 100u: goto L_08AE8720;
    case 101u: goto L_08AE872C;
    case 102u: goto L_08AE8738;
    case 103u: goto L_08AE8740;
    case 104u: goto L_08AE8748;
    case 105u: goto L_08AE8750;
    case 106u: goto L_08AE8760;
    case 107u: goto L_08AE8770;
    case 108u: goto L_08AE8778;
    case 109u: goto L_08AE8784;
    case 110u: goto L_08AE8790;
    case 111u: goto L_08AE8798;
    case 112u: goto L_08AE87A0;
    case 113u: goto L_08AE87A8;
    case 114u: goto L_08AE87B0;
    case 115u: goto L_08AE87BC;
    case 116u: goto L_08AE87CC;
    case 117u: goto L_08AE87D8;
    case 118u: goto L_08AE87E0;
    case 119u: goto L_08AE87FC;
    case 120u: goto L_08AE8800;
    case 121u: goto L_08AE8808;
    case 122u: goto L_08AE8814;
    case 123u: goto L_08AE8824;
    case 124u: goto L_08AE882C;
    case 125u: goto L_08AE8834;
    case 126u: goto L_08AE883C;
    case 127u: goto L_08AE884C;
    case 128u: goto L_08AE8850;
    case 129u: goto L_08AE8858;
    case 130u: goto L_08AE8870;
    case 131u: goto L_08AE8878;
    case 132u: goto L_08AE8888;
    case 133u: goto L_08AE8890;
    case 134u: goto L_08AE88A4;
    case 135u: goto L_08AE88C8;
    case 136u: goto L_08AE88D0;
    case 137u: goto L_08AE88DC;
    case 138u: goto L_08AE88EC;
    case 139u: goto L_08AE88F8;
    case 140u: goto L_08AE8908;
    case 141u: goto L_08AE8914;
    case 142u: goto L_08AE8920;
    case 143u: goto L_08AE8928;
    case 144u: goto L_08AE8938;
    case 145u: goto L_08AE8940;
    case 146u: goto L_08AE8958;
    case 147u: goto L_08AE8970;
    case 148u: goto L_08AE8978;
    case 149u: goto L_08AE899C;
    case 150u: goto L_08AE89BC;
    case 151u: goto L_08AE89D4;
    case 152u: goto L_08AE89E0;
    case 153u: goto L_08AE89E8;
    case 154u: goto L_08AE8A04;
    case 155u: goto L_08AE8A08;
    case 156u: goto L_08AE8A10;
    case 157u: goto L_08AE8A1C;
    case 158u: goto L_08AE8A30;
    case 159u: goto L_08AE8A40;
    case 160u: goto L_08AE8A4C;
    case 161u: goto L_08AE8A58;
    case 162u: goto L_08AE8A74;
    case 163u: goto L_08AE8AA8;
    case 164u: goto L_08AE8AB4;
    case 165u: goto L_08AE8ABC;
    case 166u: goto L_08AE8AC4;
    case 167u: goto L_08AE8ADC;
    case 168u: goto L_08AE8B1C;
    case 169u: goto L_08AE8B3C;
    case 170u: goto L_08AE8B84;
    case 171u: goto L_08AE8B94;
    case 172u: goto L_08AE8BB4;
    case 173u: goto L_08AE8BC8;
    case 174u: goto L_08AE8BD8;
    case 175u: goto L_08AE8BE8;
    case 176u: goto L_08AE8BF4;
    case 177u: goto L_08AE8BFC;
    case 178u: goto L_08AE8C0C;
    case 179u: goto L_08AE8C14;
    case 180u: goto L_08AE8C24;
    case 181u: goto L_08AE8C2C;
    case 182u: goto L_08AE8C3C;
    case 183u: goto L_08AE8C4C;
    case 184u: goto L_08AE8C58;
    case 185u: goto L_08AE8C60;
    case 186u: goto L_08AE8C6C;
    case 187u: goto L_08AE8C7C;
    case 188u: goto L_08AE8C84;
    case 189u: goto L_08AE8C90;
    case 190u: goto L_08AE8CA0;
    case 191u: goto L_08AE8CA8;
    case 192u: goto L_08AE8CB4;
    case 193u: goto L_08AE8CC4;
    case 194u: goto L_08AE8CCC;
    case 195u: goto L_08AE8CD8;
    case 196u: goto L_08AE8CE8;
    case 197u: goto L_08AE8CF0;
    case 198u: goto L_08AE8CFC;
    case 199u: goto L_08AE8D0C;
    case 200u: goto L_08AE8D14;
    case 201u: goto L_08AE8D20;
    case 202u: goto L_08AE8D68;
    case 203u: goto L_08AE8DAC;
    case 204u: goto L_08AE8DC4;
    case 205u: goto L_08AE8DCC;
    case 206u: goto L_08AE8DD4;
    case 207u: goto L_08AE8DEC;
    case 208u: goto L_08AE8E14;
    case 209u: goto L_08AE8E28;
    case 210u: goto L_08AE8E3C;
    case 211u: goto L_08AE8E70;
    case 212u: goto L_08AE8E80;
    case 213u: goto L_08AE8E94;
    case 214u: goto L_08AE8E9C;
    case 215u: goto L_08AE8EA4;
    case 216u: goto L_08AE8EAC;
    case 217u: goto L_08AE8EC4;
    case 218u: goto L_08AE8ED0;
    case 219u: goto L_08AE8ED8;
    case 220u: goto L_08AE8EE4;
    case 221u: goto L_08AE8EF0;
    case 222u: goto L_08AE8EFC;
    case 223u: goto L_08AE8F04;
    case 224u: goto L_08AE8F14;
    case 225u: goto L_08AE8F1C;
    case 226u: goto L_08AE8F30;
    case 227u: goto L_08AE8F68;
    case 228u: goto L_08AE8F6C;
    case 229u: goto L_08AE8F9C;
    case 230u: goto L_08AE8FA4;
    case 231u: goto L_08AE8FB4;
    case 232u: goto L_08AE8FBC;
    case 233u: goto L_08AE8FD4;
    case 234u: goto L_08AE8FDC;
    case 235u: goto L_08AE8FE8;
    case 236u: goto L_08AE9030;
    case 237u: goto L_08AE906C;
    case 238u: goto L_08AE9074;
    case 239u: goto L_08AE90B8;
    case 240u: goto L_08AE90C8;
    case 241u: goto L_08AE90D0;
    case 242u: goto L_08AE90D8;
    case 243u: goto L_08AE90E0;
    case 244u: goto L_08AE90E4;
    case 245u: goto L_08AE90F4;
    case 246u: goto L_08AE9100;
    case 247u: goto L_08AE910C;
    case 248u: goto L_08AE9114;
    case 249u: goto L_08AE911C;
    case 250u: goto L_08AE9120;
    case 251u: goto L_08AE9134;
    case 252u: goto L_08AE9148;
    case 253u: goto L_08AE9158;
    case 254u: goto L_08AE9160;
    case 255u: goto L_08AE9188;
    case 256u: goto L_08AE9190;
    case 257u: goto L_08AE91A4;
    case 258u: goto L_08AE91CC;
    case 259u: goto L_08AE91E4;
    case 260u: goto L_08AE9200;
    case 261u: goto L_08AE920C;
    case 262u: goto L_08AE921C;
    case 263u: goto L_08AE922C;
    case 264u: goto L_08AE9234;
    case 265u: goto L_08AE9244;
    case 266u: goto L_08AE9264;
    case 267u: goto L_08AE9278;
    case 268u: goto L_08AE9280;
    case 269u: goto L_08AE9288;
    case 270u: goto L_08AE9298;
    case 271u: goto L_08AE92D8;
    case 272u: goto L_08AE92F4;
    case 273u: goto L_08AE9310;
    case 274u: goto L_08AE931C;
    case 275u: goto L_08AE9330;
    case 276u: goto L_08AE9340;
    case 277u: goto L_08AE9354;
    case 278u: goto L_08AE9364;
    case 279u: goto L_08AE936C;
    case 280u: goto L_08AE9374;
    case 281u: goto L_08AE9384;
    case 282u: goto L_08AE938C;
    case 283u: goto L_08AE9394;
    case 284u: goto L_08AE939C;
    case 285u: goto L_08AE93AC;
    case 286u: goto L_08AE93B8;
    case 287u: goto L_08AE93D0;
    case 288u: goto L_08AE93DC;
    case 289u: goto L_08AE93E8;
    case 290u: goto L_08AE93F0;
    case 291u: goto L_08AE93F8;
    case 292u: goto L_08AE9400;
    case 293u: goto L_08AE9408;
    case 294u: goto L_08AE9420;
    case 295u: goto L_08AE9438;
    case 296u: goto L_08AE9440;
    case 297u: goto L_08AE9468;
    case 298u: goto L_08AE9470;
    case 299u: goto L_08AE9478;
    case 300u: goto L_08AE9484;
    case 301u: goto L_08AE948C;
    case 302u: goto L_08AE9498;
    case 303u: goto L_08AE94A0;
    case 304u: goto L_08AE94AC;
    case 305u: goto L_08AE94B4;
    case 306u: goto L_08AE94C8;
    case 307u: goto L_08AE94E0;
    case 308u: goto L_08AE94E4;
    case 309u: goto L_08AE94FC;
    case 310u: goto L_08AE9504;
    case 311u: goto L_08AE950C;
    case 312u: goto L_08AE9520;
    case 313u: goto L_08AE9528;
    case 314u: goto L_08AE9534;
    case 315u: goto L_08AE953C;
    case 316u: goto L_08AE9544;
    case 317u: goto L_08AE9574;
    case 318u: goto L_08AE95B4;
    case 319u: goto L_08AE95C0;
    case 320u: goto L_08AE95D4;
    case 321u: goto L_08AE95DC;
    case 322u: goto L_08AE95E4;
    case 323u: goto L_08AE95EC;
    case 324u: goto L_08AE9600;
    case 325u: goto L_08AE960C;
    case 326u: goto L_08AE9614;
    case 327u: goto L_08AE9620;
    case 328u: goto L_08AE9628;
    case 329u: goto L_08AE9630;
    case 330u: goto L_08AE9638;
    case 331u: goto L_08AE9640;
    case 332u: goto L_08AE964C;
    case 333u: goto L_08AE9658;
    case 334u: goto L_08AE9660;
    case 335u: goto L_08AE9670;
    case 336u: goto L_08AE9690;
    case 337u: goto L_08AE969C;
    case 338u: goto L_08AE96B0;
    case 339u: goto L_08AE96C0;
    case 340u: goto L_08AE96D4;
    case 341u: goto L_08AE96E4;
    case 342u: goto L_08AE96EC;
    case 343u: goto L_08AE96F4;
    case 344u: goto L_08AE9704;
    case 345u: goto L_08AE970C;
    case 346u: goto L_08AE9714;
    case 347u: goto L_08AE971C;
    case 348u: goto L_08AE9728;
    case 349u: goto L_08AE9730;
    case 350u: goto L_08AE9734;
    case 351u: goto L_08AE973C;
    case 352u: goto L_08AE9760;
    case 353u: goto L_08AE9780;
    case 354u: goto L_08AE97A0;
    case 355u: goto L_08AE97B0;
    case 356u: goto L_08AE97BC;
    case 357u: goto L_08AE97C8;
    case 358u: goto L_08AE97D0;
    case 359u: goto L_08AE97D4;
    case 360u: goto L_08AE97E0;
    case 361u: goto L_08AE97F4;
    case 362u: goto L_08AE9820;
    case 363u: goto L_08AE982C;
    case 364u: goto L_08AE9840;
    case 365u: goto L_08AE9844;
    case 366u: goto L_08AE9858;
    case 367u: goto L_08AE9860;
    case 368u: goto L_08AE9868;
    case 369u: goto L_08AE987C;
    case 370u: goto L_08AE988C;
    case 371u: goto L_08AE98A8;
    case 372u: goto L_08AE98B4;
    case 373u: goto L_08AE98C8;
    case 374u: goto L_08AE98D8;
    case 375u: goto L_08AE98EC;
    case 376u: goto L_08AE98FC;
    case 377u: goto L_08AE9904;
    case 378u: goto L_08AE990C;
    case 379u: goto L_08AE991C;
    case 380u: goto L_08AE9924;
    case 381u: goto L_08AE992C;
    case 382u: goto L_08AE9934;
    case 383u: goto L_08AE9968;
    case 384u: goto L_08AE9974;
    case 385u: goto L_08AE997C;
    case 386u: goto L_08AE998C;
    case 387u: goto L_08AE999C;
    case 388u: goto L_08AE99B8;
    case 389u: goto L_08AE99C4;
    case 390u: goto L_08AE99F4;
    case 391u: goto L_08AE9A0C;
    case 392u: goto L_08AE9A2C;
    case 393u: goto L_08AE9A34;
    case 394u: goto L_08AE9A50;
    case 395u: goto L_08AE9A5C;
    case 396u: goto L_08AE9A64;
    case 397u: goto L_08AE9A6C;
    case 398u: goto L_08AE9A74;
    case 399u: goto L_08AE9A7C;
    case 400u: goto L_08AE9AA4;
    case 401u: goto L_08AE9AD4;
    case 402u: goto L_08AE9B78;
    case 403u: goto L_08AE9B84;
    case 404u: goto L_08AE9B90;
    case 405u: goto L_08AE9BA4;
    case 406u: goto L_08AE9C54;
    case 407u: goto L_08AE9C8C;
    case 408u: goto L_08AE9C94;
    case 409u: goto L_08AE9C98;
    case 410u: goto L_08AE9CA8;
    case 411u: goto L_08AE9CB0;
    case 412u: goto L_08AE9CB4;
    case 413u: goto L_08AE9CC4;
    case 414u: goto L_08AE9CCC;
    case 415u: goto L_08AE9CDC;
    case 416u: goto L_08AE9CE4;
    case 417u: goto L_08AE9D84;
    case 418u: goto L_08AE9D8C;
    case 419u: goto L_08AE9E40;
    case 420u: goto L_08AE9E4C;
    case 421u: goto L_08AE9E70;
    case 422u: goto L_08AE9E7C;
    case 423u: goto L_08AE9EB0;
    case 424u: goto L_08AE9EB8;
    case 425u: goto L_08AE9EC4;
    case 426u: goto L_08AE9EC8;
    case 427u: goto L_08AE9ED0;
    case 428u: goto L_08AE9ED8;
    case 429u: goto L_08AE9EE0;
    case 430u: goto L_08AE9EF0;
    case 431u: goto L_08AE9F08;
    case 432u: goto L_08AE9F40;
    case 433u: goto L_08AE9F48;
    case 434u: goto L_08AE9F54;
    case 435u: goto L_08AE9F70;
    case 436u: goto L_08AE9F78;
    case 437u: goto L_08AE9F90;
    case 438u: goto L_08AE9F98;
    case 439u: goto L_08AE9FA4;
    case 440u: goto L_08AE9FB0;
    case 441u: goto L_08AE9FB8;
    case 442u: goto L_08AE9FC8;
    case 443u: goto L_08AE9FD0;
    case 444u: goto L_08AE9FE0;
    case 445u: goto L_08AE9FEC;
    case 446u: goto L_08AE9FF0;
    case 447u: goto L_08AE9FF8;
    case 448u: goto L_08AEA000;
    case 449u: goto L_08AEA008;
    case 450u: goto L_08AEA010;
    case 451u: goto L_08AEA018;
    case 452u: goto L_08AEA020;
    case 453u: goto L_08AEA048;
    case 454u: goto L_08AEA070;
    case 455u: goto L_08AEA080;
    case 456u: goto L_08AEA0C4;
    case 457u: goto L_08AEA0D8;
    case 458u: goto L_08AEA1A4;
    case 459u: goto L_08AEA1AC;
    case 460u: goto L_08AEA1C0;
    case 461u: goto L_08AEA1CC;
    case 462u: goto L_08AEA1DC;
    case 463u: goto L_08AEA200;
    case 464u: goto L_08AEA20C;
    case 465u: goto L_08AEA214;
    case 466u: goto L_08AEA21C;
    case 467u: goto L_08AEA228;
    case 468u: goto L_08AEA234;
    case 469u: goto L_08AEA23C;
    case 470u: goto L_08AEA240;
    case 471u: goto L_08AEA24C;
    case 472u: goto L_08AEA254;
    case 473u: goto L_08AEA25C;
    case 474u: goto L_08AEA260;
    case 475u: goto L_08AEA264;
    case 476u: goto L_08AEA274;
    case 477u: goto L_08AEA28C;
    case 478u: goto L_08AEA294;
    case 479u: goto L_08AEA29C;
    case 480u: goto L_08AEA2A4;
    case 481u: goto L_08AEA2AC;
    case 482u: goto L_08AEA2B4;
    case 483u: goto L_08AEA2BC;
    case 484u: goto L_08AEA2C4;
    case 485u: goto L_08AEA2CC;
    case 486u: goto L_08AEA2D4;
    case 487u: goto L_08AEA2DC;
    case 488u: goto L_08AEA2E4;
    case 489u: goto L_08AEA2EC;
    case 490u: goto L_08AEA2F4;
    case 491u: goto L_08AEA2FC;
    case 492u: goto L_08AEA304;
    case 493u: goto L_08AEA30C;
    case 494u: goto L_08AEA32C;
    case 495u: goto L_08AEA334;
    case 496u: goto L_08AEA33C;
    case 497u: goto L_08AEA350;
    case 498u: goto L_08AEA358;
    case 499u: goto L_08AEA360;
    case 500u: goto L_08AEA368;
    case 501u: goto L_08AEA370;
    case 502u: goto L_08AEA378;
    case 503u: goto L_08AEA390;
    case 504u: goto L_08AEA398;
    case 505u: goto L_08AEA3A0;
    case 506u: goto L_08AEA3A8;
    case 507u: goto L_08AEA3B8;
    case 508u: goto L_08AEA3CC;
    case 509u: goto L_08AEA3F0;
    case 510u: goto L_08AEA400;
    case 511u: goto L_08AEA40C;
    case 512u: goto L_08AEA410;
    case 513u: goto L_08AEA414;
    case 514u: goto L_08AEA42C;
    case 515u: goto L_08AEA43C;
    case 516u: goto L_08AEA444;
    case 517u: goto L_08AEA45C;
    case 518u: goto L_08AEA460;
    case 519u: goto L_08AEA468;
    case 520u: goto L_08AEA480;
    case 521u: goto L_08AEA494;
    case 522u: goto L_08AEA49C;
    case 523u: goto L_08AEA4A0;
    case 524u: goto L_08AEA4B4;
    case 525u: goto L_08AEA4BC;
    case 526u: goto L_08AEA4C4;
    case 527u: goto L_08AEA4E4;
    case 528u: goto L_08AEA4F0;
    case 529u: goto L_08AEA4F8;
    case 530u: goto L_08AEA4FC;
    case 531u: goto L_08AEA504;
    case 532u: goto L_08AEA514;
    case 533u: goto L_08AEA518;
    case 534u: goto L_08AEA530;
    case 535u: goto L_08AEA538;
    case 536u: goto L_08AEA540;
    case 537u: goto L_08AEA548;
    case 538u: goto L_08AEA550;
    case 539u: goto L_08AEA558;
    case 540u: goto L_08AEA560;
    case 541u: goto L_08AEA568;
    case 542u: goto L_08AEA588;
    case 543u: goto L_08AEA594;
    case 544u: goto L_08AEA59C;
    case 545u: goto L_08AEA5A0;
    case 546u: goto L_08AEA5A8;
    case 547u: goto L_08AEA5B8;
    case 548u: goto L_08AEA5BC;
    case 549u: goto L_08AEA5D4;
    case 550u: goto L_08AEA5DC;
    case 551u: goto L_08AEA5E4;
    case 552u: goto L_08AEA5EC;
    case 553u: goto L_08AEA5F4;
    case 554u: goto L_08AEA5FC;
    case 555u: goto L_08AEA604;
    case 556u: goto L_08AEA60C;
    case 557u: goto L_08AEA61C;
    case 558u: goto L_08AEA628;
    case 559u: goto L_08AEA630;
    case 560u: goto L_08AEA634;
    case 561u: goto L_08AEA63C;
    case 562u: goto L_08AEA644;
    case 563u: goto L_08AEA648;
    case 564u: goto L_08AEA658;
    case 565u: goto L_08AEA660;
    case 566u: goto L_08AEA668;
    case 567u: goto L_08AEA670;
    case 568u: goto L_08AEA678;
    case 569u: goto L_08AEA680;
    case 570u: goto L_08AEA688;
    case 571u: goto L_08AEA690;
    case 572u: goto L_08AEA6A0;
    case 573u: goto L_08AEA6BC;
    case 574u: goto L_08AEA6CC;
    case 575u: goto L_08AEA6D4;
    case 576u: goto L_08AEA6DC;
    case 577u: goto L_08AEA6E8;
    case 578u: goto L_08AEA74C;
    case 579u: goto L_08AEA7AC;
    case 580u: goto L_08AEA7B0;
    case 581u: goto L_08AEA7B8;
    case 582u: goto L_08AEA7C8;
    case 583u: goto L_08AEA7D0;
    case 584u: goto L_08AEA7E4;
    case 585u: goto L_08AEA7F4;
    case 586u: goto L_08AEA814;
    case 587u: goto L_08AEA820;
    case 588u: goto L_08AEA82C;
    case 589u: goto L_08AEA840;
    case 590u: goto L_08AEA868;
    case 591u: goto L_08AEA874;
    case 592u: goto L_08AEA878;
    case 593u: goto L_08AEA888;
    case 594u: goto L_08AEA88C;
    case 595u: goto L_08AEA898;
    case 596u: goto L_08AEA8A0;
    case 597u: goto L_08AEA8A8;
    case 598u: goto L_08AEA8B4;
    case 599u: goto L_08AEA8C0;
    case 600u: goto L_08AEA8CC;
    case 601u: goto L_08AEA8D4;
    case 602u: goto L_08AEA8DC;
    case 603u: goto L_08AEA8E0;
    case 604u: goto L_08AEA8EC;
    case 605u: goto L_08AEA8F4;
    case 606u: goto L_08AEA8F8;
    case 607u: goto L_08AEA900;
    case 608u: goto L_08AEA908;
    case 609u: goto L_08AEA914;
    case 610u: goto L_08AEA920;
    case 611u: goto L_08AEA92C;
    case 612u: goto L_08AEA934;
    case 613u: goto L_08AEA950;
    case 614u: goto L_08AEA96C;
    case 615u: goto L_08AEA978;
    case 616u: goto L_08AEA980;
    case 617u: goto L_08AEA994;
    case 618u: goto L_08AEA9AC;
    case 619u: goto L_08AEA9B8;
    case 620u: goto L_08AEA9C0;
    case 621u: goto L_08AEA9C8;
    case 622u: goto L_08AEA9CC;
    case 623u: goto L_08AEA9D8;
    case 624u: goto L_08AEA9E4;
    case 625u: goto L_08AEAA04;
    case 626u: goto L_08AEAA0C;
    case 627u: goto L_08AEAA20;
    case 628u: goto L_08AEAA2C;
    case 629u: goto L_08AEAA34;
    case 630u: goto L_08AEAA50;
    case 631u: goto L_08AEAA78;
    case 632u: goto L_08AEAAAC;
    case 633u: goto L_08AEAAB8;
    case 634u: goto L_08AEAAC4;
    case 635u: goto L_08AEAACC;
    case 636u: goto L_08AEAAD4;
    case 637u: goto L_08AEAADC;
    case 638u: goto L_08AEAB08;
    case 639u: goto L_08AEAB30;
    case 640u: goto L_08AEAB38;
    case 641u: goto L_08AEAB44;
    case 642u: goto L_08AEAB54;
    case 643u: goto L_08AEAB60;
    case 644u: goto L_08AEAB84;
    case 645u: goto L_08AEAB90;
    case 646u: goto L_08AEAB98;
    case 647u: goto L_08AEABBC;
    case 648u: goto L_08AEABEC;
    case 649u: goto L_08AEAC44;
    case 650u: goto L_08AEAC7C;
    case 651u: goto L_08AEAC90;
    case 652u: goto L_08AEACA4;
    case 653u: goto L_08AEACC0;
    case 654u: goto L_08AEACD4;
    case 655u: goto L_08AEACE0;
    case 656u: goto L_08AEAD14;
    case 657u: goto L_08AEAD20;
    case 658u: goto L_08AEAD38;
    case 659u: goto L_08AEAD5C;
    case 660u: goto L_08AEAD6C;
    case 661u: goto L_08AEAD80;
    case 662u: goto L_08AEADA0;
    case 663u: goto L_08AEADA8;
    case 664u: goto L_08AEADE4;
    case 665u: goto L_08AEADF0;
    case 666u: goto L_08AEADF8;
    case 667u: goto L_08AEAE24;
    case 668u: goto L_08AEAE2C;
    case 669u: goto L_08AEAE40;
    case 670u: goto L_08AEAE4C;
    case 671u: goto L_08AEAE68;
    case 672u: goto L_08AEAE70;
    case 673u: goto L_08AEAE80;
    case 674u: goto L_08AEAE84;
    case 675u: goto L_08AEAE8C;
    case 676u: goto L_08AEAED0;
    case 677u: goto L_08AEAF00;
    case 678u: goto L_08AEAF38;
    case 679u: goto L_08AEAF48;
    case 680u: goto L_08AEAF54;
    case 681u: goto L_08AEAF5C;
    case 682u: goto L_08AEAF64;
    case 683u: goto L_08AEAF68;
    case 684u: goto L_08AEAF78;
    case 685u: goto L_08AEAF80;
    case 686u: goto L_08AEAFB0;
    case 687u: goto L_08AEAFBC;
    case 688u: goto L_08AEAFCC;
    case 689u: goto L_08AEAFDC;
    case 690u: goto L_08AEAFEC;
    case 691u: goto L_08AEAFF8;
    case 692u: goto L_08AEB010;
    case 693u: goto L_08AEB018;
    case 694u: goto L_08AEB020;
    case 695u: goto L_08AEB030;
    case 696u: goto L_08AEB040;
    case 697u: goto L_08AEB04C;
    case 698u: goto L_08AEB058;
    case 699u: goto L_08AEB068;
    case 700u: goto L_08AEB088;
    case 701u: goto L_08AEB098;
    case 702u: goto L_08AEB0A0;
    case 703u: goto L_08AEB0AC;
    case 704u: goto L_08AEB0C0;
    case 705u: goto L_08AEB0C8;
    case 706u: goto L_08AEB0CC;
    case 707u: goto L_08AEB0D8;
    case 708u: goto L_08AEB0E8;
    case 709u: goto L_08AEB0FC;
    case 710u: goto L_08AEB108;
    case 711u: goto L_08AEB110;
    case 712u: goto L_08AEB114;
    case 713u: goto L_08AEB124;
    case 714u: goto L_08AEB13C;
    case 715u: goto L_08AEB140;
    case 716u: goto L_08AEB154;
    case 717u: goto L_08AEB15C;
    case 718u: goto L_08AEB164;
    case 719u: goto L_08AEB178;
    case 720u: goto L_08AEB180;
    case 721u: goto L_08AEB18C;
    case 722u: goto L_08AEB198;
    case 723u: goto L_08AEB1A0;
    case 724u: goto L_08AEB1A4;
    case 725u: goto L_08AEB1A8;
    case 726u: goto L_08AEB1C8;
    case 727u: goto L_08AEB1D4;
    case 728u: goto L_08AEB1E0;
    case 729u: goto L_08AEB1EC;
    case 730u: goto L_08AEB200;
    case 731u: goto L_08AEB208;
    case 732u: goto L_08AEB20C;
    case 733u: goto L_08AEB218;
    case 734u: goto L_08AEB228;
    case 735u: goto L_08AEB23C;
    case 736u: goto L_08AEB248;
    case 737u: goto L_08AEB250;
    case 738u: goto L_08AEB254;
    case 739u: goto L_08AEB264;
    case 740u: goto L_08AEB280;
    case 741u: goto L_08AEB288;
    case 742u: goto L_08AEB290;
    case 743u: goto L_08AEB298;
    case 744u: goto L_08AEB29C;
    case 745u: goto L_08AEB2B0;
    case 746u: goto L_08AEB2E0;
    case 747u: goto L_08AEB2E8;
    case 748u: goto L_08AEB318;
    case 749u: goto L_08AEB344;
    case 750u: goto L_08AEB348;
    case 751u: goto L_08AEB354;
    case 752u: goto L_08AEB360;
    case 753u: goto L_08AEB368;
    case 754u: goto L_08AEB370;
    case 755u: goto L_08AEB378;
    case 756u: goto L_08AEB384;
    case 757u: goto L_08AEB3A8;
    case 758u: goto L_08AEB3D4;
    case 759u: goto L_08AEB3E0;
    case 760u: goto L_08AEB3E8;
    case 761u: goto L_08AEB40C;
    case 762u: goto L_08AEB414;
    case 763u: goto L_08AEB41C;
    case 764u: goto L_08AEB420;
    case 765u: goto L_08AEB430;
    case 766u: goto L_08AEB444;
    case 767u: goto L_08AEB458;
    case 768u: goto L_08AEB474;
    case 769u: goto L_08AEB480;
    case 770u: goto L_08AEB4A8;
    case 771u: goto L_08AEB4B8;
    case 772u: goto L_08AEB4C4;
    case 773u: goto L_08AEB4E0;
    case 774u: goto L_08AEB4F0;
    case 775u: goto L_08AEB4F8;
    case 776u: goto L_08AEB500;
    case 777u: goto L_08AEB504;
    case 778u: goto L_08AEB510;
    case 779u: goto L_08AEB51C;
    case 780u: goto L_08AEB524;
    case 781u: goto L_08AEB538;
    case 782u: goto L_08AEB540;
    case 783u: goto L_08AEB548;
    case 784u: goto L_08AEB554;
    case 785u: goto L_08AEB568;
    case 786u: goto L_08AEB570;
    case 787u: goto L_08AEB578;
    case 788u: goto L_08AEB598;
    case 789u: goto L_08AEB5AC;
    case 790u: goto L_08AEB5B4;
    case 791u: goto L_08AEB5C0;
    case 792u: goto L_08AEB5C4;
    case 793u: goto L_08AEB5CC;
    case 794u: goto L_08AEB5D4;
    case 795u: goto L_08AEB5F0;
    case 796u: goto L_08AEB5F8;
    case 797u: goto L_08AEB5FC;
    case 798u: goto L_08AEB608;
    case 799u: goto L_08AEB614;
    case 800u: goto L_08AEB630;
    case 801u: goto L_08AEB650;
    case 802u: goto L_08AEB658;
    case 803u: goto L_08AEB664;
    case 804u: goto L_08AEB670;
    case 805u: goto L_08AEB684;
    case 806u: goto L_08AEB698;
    case 807u: goto L_08AEB6FC;
    case 808u: goto L_08AEB710;
    case 809u: goto L_08AEB718;
    case 810u: goto L_08AEB754;
    case 811u: goto L_08AEB798;
    case 812u: goto L_08AEB7A8;
    case 813u: goto L_08AEB7CC;
    case 814u: goto L_08AEB7D4;
    case 815u: goto L_08AEB7E4;
    case 816u: goto L_08AEB7F0;
    case 817u: goto L_08AEB800;
    case 818u: goto L_08AEB834;
    case 819u: goto L_08AEB84C;
    case 820u: goto L_08AEB854;
    case 821u: goto L_08AEB87C;
    case 822u: goto L_08AEB894;
    case 823u: goto L_08AEB8B8;
    case 824u: goto L_08AEB8C4;
    case 825u: goto L_08AEB8D4;
    case 826u: goto L_08AEB8E0;
    case 827u: goto L_08AEB8F0;
    case 828u: goto L_08AEB904;
    case 829u: goto L_08AEB910;
    case 830u: goto L_08AEB934;
    case 831u: goto L_08AEB940;
    case 832u: goto L_08AEB950;
    case 833u: goto L_08AEB958;
    case 834u: goto L_08AEB960;
    case 835u: goto L_08AEB964;
    case 836u: goto L_08AEB980;
    case 837u: goto L_08AEB988;
    case 838u: goto L_08AEB990;
    case 839u: goto L_08AEB998;
    case 840u: goto L_08AEB9A0;
    case 841u: goto L_08AEB9C0;
    case 842u: goto L_08AEB9DC;
    case 843u: goto L_08AEB9E0;
    case 844u: goto L_08AEB9E4;
    case 845u: goto L_08AEB9F4;
    case 846u: goto L_08AEBA04;
    case 847u: goto L_08AEBA14;
    case 848u: goto L_08AEBA30;
    case 849u: goto L_08AEBA68;
    case 850u: goto L_08AEBA74;
    case 851u: goto L_08AEBA80;
    case 852u: goto L_08AEBA8C;
    case 853u: goto L_08AEBAB4;
    case 854u: goto L_08AEBAB8;
    case 855u: goto L_08AEBAFC;
    case 856u: goto L_08AEBB10;
    case 857u: goto L_08AEBB24;
    case 858u: goto L_08AEBB28;
    case 859u: goto L_08AEBB30;
    case 860u: goto L_08AEBB44;
    case 861u: goto L_08AEBB4C;
    case 862u: goto L_08AEBB64;
    case 863u: goto L_08AEBB6C;
    case 864u: goto L_08AEBB74;
    case 865u: goto L_08AEBB7C;
    case 866u: goto L_08AEBB84;
    case 867u: goto L_08AEBB8C;
    case 868u: goto L_08AEBB98;
    case 869u: goto L_08AEBBA0;
    case 870u: goto L_08AEBBA8;
    case 871u: goto L_08AEBBB4;
    case 872u: goto L_08AEBBC0;
    case 873u: goto L_08AEBBCC;
    case 874u: goto L_08AEBBE4;
    case 875u: goto L_08AEBBEC;
    case 876u: goto L_08AEBBF4;
    case 877u: goto L_08AEBC88;
    case 878u: goto L_08AEBC9C;
    case 879u: goto L_08AEBCAC;
    case 880u: goto L_08AEBCB8;
    case 881u: goto L_08AEBCCC;
    case 882u: goto L_08AEBCD0;
    case 883u: goto L_08AEBCD8;
    case 884u: goto L_08AEBCE0;
    case 885u: goto L_08AEBCE8;
    case 886u: goto L_08AEBCEC;
    case 887u: goto L_08AEBD04;
    case 888u: goto L_08AEBD24;
    case 889u: goto L_08AEBD2C;
    case 890u: goto L_08AEBD38;
    case 891u: goto L_08AEBD48;
    case 892u: goto L_08AEBD54;
    case 893u: goto L_08AEBD6C;
    case 894u: goto L_08AEBD70;
    case 895u: goto L_08AEBD7C;
    case 896u: goto L_08AEBD88;
    case 897u: goto L_08AEBD90;
    case 898u: goto L_08AEBD98;
    case 899u: goto L_08AEBD9C;
    case 900u: goto L_08AEBDAC;
    case 901u: goto L_08AEBDD4;
    case 902u: goto L_08AEBDDC;
    case 903u: goto L_08AEBDE8;
    case 904u: goto L_08AEBDF4;
    case 905u: goto L_08AEBE00;
    case 906u: goto L_08AEBE0C;
    case 907u: goto L_08AEBE28;
    case 908u: goto L_08AEBE34;
    case 909u: goto L_08AEBE38;
    case 910u: goto L_08AEBE4C;
    case 911u: goto L_08AEBE64;
    case 912u: goto L_08AEBE70;
    case 913u: goto L_08AEBE74;
    case 914u: goto L_08AEBE88;
    case 915u: goto L_08AEBEA0;
    case 916u: goto L_08AEBEBC;
    case 917u: goto L_08AEBEC8;
    case 918u: goto L_08AEBED4;
    case 919u: goto L_08AEBEE0;
    case 920u: goto L_08AEBEF4;
    case 921u: goto L_08AEBF04;
    case 922u: goto L_08AEBF20;
    case 923u: goto L_08AEBF2C;
    case 924u: goto L_08AEBF3C;
    case 925u: goto L_08AEBF4C;
    case 926u: goto L_08AEBF58;
    case 927u: goto L_08AEBF68;
    case 928u: goto L_08AEBF74;
    case 929u: goto L_08AEBFA8;
    case 930u: goto L_08AEBFAC;
    case 931u: goto L_08AEBFC0;
    case 932u: goto L_08AEBFD0;
    case 933u: goto L_08AEBFD8;
    case 934u: goto L_08AEBFE0;
    case 935u: goto L_08AEBFE8;
    case 936u: goto L_08AEBFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AE8004:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7827));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1364), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE801Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x08864AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AE801Cu) goto L_08AE801C;
    return;
L_08AE801C:
    ctx.gpr[31] = (0x08AE8024u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 466u, 0x08AE6E74u>(ctx, &aot_mem) && ctx.pc == 0x08AE8024u) goto L_08AE8024;
    return;
L_08AE8024:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE8040;
      }
      goto L_08AE8034;
    }
L_08AE8034:
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08AE8040u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 152u, 0x08864AE4u>(ctx, &aot_mem) && ctx.pc == 0x08AE8040u) goto L_08AE8040;
    return;
L_08AE8040:
    ctx.gpr[30] = (2227u << 16u);
    ctx.gpr[16] = (0u | 120u);
    ctx.gpr[17] = (0u | 480u);
    ctx.gpr[18] = (0u | 2400u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-6344));
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[21] = (2229u << 16u);
    goto L_08AE805C;
L_08AE805C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8078;
      }
      goto L_08AE806C;
    }
L_08AE806C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AE8078;
L_08AE8078:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AE808C;
      }
      goto L_08AE8084;
    }
L_08AE8084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE80D8;
      }
      goto L_08AE808C;
    }
L_08AE808C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE80B4;
      }
      goto L_08AE80AC;
    }
L_08AE80AC:
    ctx.gpr[31] = (0x08AE80B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x08AE80B4u) goto L_08AE80B4;
    return;
L_08AE80B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE80D0;
      }
      goto L_08AE80C4;
    }
L_08AE80C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AE80D0;
L_08AE80D0:
    ctx.gpr[31] = (0x08AE80D8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 233u, 0x08A7D434u>(ctx, &aot_mem) && ctx.pc == 0x08AE80D8u) goto L_08AE80D8;
    return;
L_08AE80D8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 130 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08AE805C;
      }
      goto L_08AE80EC;
    }
L_08AE80EC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11232)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-24968), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11236)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-24964), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26128)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17188)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5604), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1360)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24992), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24988), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-24996), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24972), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5612), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24984), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-24980), 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6584), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1452)));
    ctx.gpr[5] = (0u | 0u);
    goto L_08AE8194;
L_08AE8194:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AE8194;
      }
      goto L_08AE81A8;
    }
L_08AE81A8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08AE81B0;
L_08AE81B0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE81B0;
      }
      goto L_08AE81C4;
    }
L_08AE81C4:
    ctx.gpr[31] = (0x08AE81CCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 116u, 0x08A88850u>(ctx, &aot_mem) && ctx.pc == 0x08AE81CCu) goto L_08AE81CC;
    return;
L_08AE81CC:
    ctx.gpr[31] = (0x08AE81D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AE81D4u) goto L_08AE81D4;
    return;
L_08AE81D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE8208u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 394u, 0x08ACD8C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8208u) goto L_08AE8208;
    return;
L_08AE8208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2940)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AE822Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AE822Cu) goto L_08AE822C;
    return;
L_08AE822C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08AE8244u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 261u, 0x089D9164u>(ctx, &aot_mem) && ctx.pc == 0x08AE8244u) goto L_08AE8244;
    return;
L_08AE8244:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(9432));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE8260u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6340));
    goto L_08AEB698;
L_08AE8260:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7760)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AE8278u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 2u, 0x088B8080u>(ctx, &aot_mem) && ctx.pc == 0x08AE8278u) goto L_08AE8278;
    return;
L_08AE8278:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE844C;
      }
      goto L_08AE8280;
    }
L_08AE8280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] << 11u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE82A4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08AE82A4u) goto L_08AE82A4;
    return;
L_08AE82A4:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AE82BCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6396));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 514u, 0x08872EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE82BCu) goto L_08AE82BC;
    return;
L_08AE82BC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08AE82CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 542u, 0x08873064u>(ctx, &aot_mem) && ctx.pc == 0x08AE82CCu) goto L_08AE82CC;
    return;
L_08AE82CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE82DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 551u, 0x088730F4u>(ctx, &aot_mem) && ctx.pc == 0x08AE82DCu) goto L_08AE82DC;
    return;
L_08AE82DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE82E8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 531u, 0x08872FE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE82E8u) goto L_08AE82E8;
    return;
L_08AE82E8:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1348), ctx.gpr[16]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1344), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), ctx.gpr[5]);
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7920));
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9520));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1340), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1336), ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6332));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6328));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1448), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1444), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6320));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6312));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1440), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1436), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6304));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6292));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1432), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1428), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6284));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6276));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1424), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1420), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6268));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1416), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1356), ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6252));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6244));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1408), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6228));
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1404), ctx.gpr[4]);
    ctx.gpr[4] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1400), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11832));
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1396), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1392), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6216));
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15608));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1388), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1384), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6204));
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12344));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1368), ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1376), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6192));
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14744));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1328), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1352), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1372), ctx.gpr[6]);
    ctx.gpr[21] = (2278u << 16u);
    ctx.gpr[30] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1156));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1456), ctx.gpr[16]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(7864));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-6232));
      if (branch_taken) {
          goto L_08AE845C;
      }
      goto L_08AE844C;
    }
L_08AE844C:
    ctx.gpr[31] = (0x08AE8454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 628u, 0x08AE7C38u>(ctx, &aot_mem) && ctx.pc == 0x08AE8454u) goto L_08AE8454;
    return;
L_08AE8454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8FE8;
      }
      goto L_08AE845C;
    }
L_08AE845C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1348)));
    goto L_08AE8460;
L_08AE8460:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AE846Cu);
    ctx.gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 486u, 0x08AE6F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE846Cu) goto L_08AE846C;
    return;
L_08AE846C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1348), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE8DCC;
      }
      goto L_08AE8474;
    }
L_08AE8474:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1448)));
      if (branch_taken) {
          goto L_08AE84A8;
      }
      goto L_08AE8484;
    }
L_08AE8484:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE849C;
      }
      goto L_08AE8494;
    }
L_08AE8494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE84BC;
      }
      goto L_08AE849C;
    }
L_08AE849C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8484;
      }
      goto L_08AE84A8;
    }
L_08AE84A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE84BC;
      }
      goto L_08AE84B4;
    }
L_08AE84B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE84BC;
      }
      goto L_08AE84BC;
    }
L_08AE84BC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE84D0;
      }
      goto L_08AE84C4;
    }
L_08AE84C4:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE8DC4;
      }
      goto L_08AE84D0;
    }
L_08AE84D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[6] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8DC4;
      }
      goto L_08AE84E0;
    }
L_08AE84E0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-6128)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE84F8:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1444)));
      if (branch_taken) {
          goto L_08AE852C;
      }
      goto L_08AE8508;
    }
L_08AE8508:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8520;
      }
      goto L_08AE8518;
    }
L_08AE8518:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8540;
      }
      goto L_08AE8520;
    }
L_08AE8520:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8508;
      }
      goto L_08AE852C;
    }
L_08AE852C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8540;
      }
      goto L_08AE8538;
    }
L_08AE8538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8540;
      }
      goto L_08AE8540;
    }
L_08AE8540:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8550;
      }
      goto L_08AE8548;
    }
L_08AE8548:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), ctx.gpr[4]);
    goto L_08AE8550;
L_08AE8550:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_08AE8588;
      }
      goto L_08AE8564;
    }
L_08AE8564:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE857C;
      }
      goto L_08AE8574;
    }
L_08AE8574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE859C;
      }
      goto L_08AE857C;
    }
L_08AE857C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8564;
      }
      goto L_08AE8588;
    }
L_08AE8588:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE859C;
      }
      goto L_08AE8594;
    }
L_08AE8594:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE859C;
      }
      goto L_08AE859C;
    }
L_08AE859C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE85A8;
      }
      goto L_08AE85A4;
    }
L_08AE85A4:
    ctx.gpr[8] = (0u | 2u);
    goto L_08AE85A8;
L_08AE85A8:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1436)));
      if (branch_taken) {
          goto L_08AE85DC;
      }
      goto L_08AE85B8;
    }
L_08AE85B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE85D0;
      }
      goto L_08AE85C8;
    }
L_08AE85C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE85F0;
      }
      goto L_08AE85D0;
    }
L_08AE85D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE85B8;
      }
      goto L_08AE85DC;
    }
L_08AE85DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE85F0;
      }
      goto L_08AE85E8;
    }
L_08AE85E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE85F0;
      }
      goto L_08AE85F0;
    }
L_08AE85F0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE85FC;
      }
      goto L_08AE85F8;
    }
L_08AE85F8:
    ctx.gpr[8] = (0u | 3u);
    goto L_08AE85FC;
L_08AE85FC:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1432)));
      if (branch_taken) {
          goto L_08AE8630;
      }
      goto L_08AE860C;
    }
L_08AE860C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8624;
      }
      goto L_08AE861C;
    }
L_08AE861C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8644;
      }
      goto L_08AE8624;
    }
L_08AE8624:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE860C;
      }
      goto L_08AE8630;
    }
L_08AE8630:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8644;
      }
      goto L_08AE863C;
    }
L_08AE863C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8644;
      }
      goto L_08AE8644;
    }
L_08AE8644:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8650;
      }
      goto L_08AE864C;
    }
L_08AE864C:
    ctx.gpr[8] = (0u | 4u);
    goto L_08AE8650;
L_08AE8650:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1428)));
      if (branch_taken) {
          goto L_08AE8684;
      }
      goto L_08AE8660;
    }
L_08AE8660:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8678;
      }
      goto L_08AE8670;
    }
L_08AE8670:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8698;
      }
      goto L_08AE8678;
    }
L_08AE8678:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8660;
      }
      goto L_08AE8684;
    }
L_08AE8684:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8698;
      }
      goto L_08AE8690;
    }
L_08AE8690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8698;
      }
      goto L_08AE8698;
    }
L_08AE8698:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE86A4;
      }
      goto L_08AE86A0;
    }
L_08AE86A0:
    ctx.gpr[8] = (0u | 5u);
    goto L_08AE86A4;
L_08AE86A4:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1424)));
      if (branch_taken) {
          goto L_08AE86D8;
      }
      goto L_08AE86B4;
    }
L_08AE86B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE86CC;
      }
      goto L_08AE86C4;
    }
L_08AE86C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE86EC;
      }
      goto L_08AE86CC;
    }
L_08AE86CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE86B4;
      }
      goto L_08AE86D8;
    }
L_08AE86D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE86EC;
      }
      goto L_08AE86E4;
    }
L_08AE86E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE86EC;
      }
      goto L_08AE86EC;
    }
L_08AE86EC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE86F8;
      }
      goto L_08AE86F4;
    }
L_08AE86F4:
    ctx.gpr[8] = (0u | 6u);
    goto L_08AE86F8;
L_08AE86F8:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1420)));
      if (branch_taken) {
          goto L_08AE872C;
      }
      goto L_08AE8708;
    }
L_08AE8708:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8720;
      }
      goto L_08AE8718;
    }
L_08AE8718:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8740;
      }
      goto L_08AE8720;
    }
L_08AE8720:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8708;
      }
      goto L_08AE872C;
    }
L_08AE872C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8740;
      }
      goto L_08AE8738;
    }
L_08AE8738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8740;
      }
      goto L_08AE8740;
    }
L_08AE8740:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AE8750;
      }
      goto L_08AE8748;
    }
L_08AE8748:
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), ctx.gpr[4]);
    goto L_08AE8750;
L_08AE8750:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1416)));
      if (branch_taken) {
          goto L_08AE8784;
      }
      goto L_08AE8760;
    }
L_08AE8760:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8778;
      }
      goto L_08AE8770;
    }
L_08AE8770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8798;
      }
      goto L_08AE8778;
    }
L_08AE8778:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8760;
      }
      goto L_08AE8784;
    }
L_08AE8784:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8798;
      }
      goto L_08AE8790;
    }
L_08AE8790:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8798;
      }
      goto L_08AE8798;
    }
L_08AE8798:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE87A8;
      }
      goto L_08AE87A0;
    }
L_08AE87A0:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), ctx.gpr[4]);
    goto L_08AE87A8;
L_08AE87A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8DC4;
      }
      goto L_08AE87B0;
    }
L_08AE87B0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1344)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8800;
      }
      goto L_08AE87BC;
    }
L_08AE87BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1356)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1080));
    ctx.gpr[31] = (0x08AE87CCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AEB718;
L_08AE87CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE87E0;
      }
      goto L_08AE87D8;
    }
L_08AE87D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8800;
      }
      goto L_08AE87E0;
    }
L_08AE87E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE87FCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 276u, 0x08A7D738u>(ctx, &aot_mem) && ctx.pc == 0x08AE87FCu) goto L_08AE87FC;
    return;
L_08AE87FC:
    ctx.gpr[6] = (0u | 1u);
    goto L_08AE8800;
L_08AE8800:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1344), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08AE8DC4;
      }
      goto L_08AE8808;
    }
L_08AE8808:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AE8814;
L_08AE8814:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
        goto L_08AE882C;
    }
    goto L_08AE8824;
L_08AE8824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE8850;
      }
      goto L_08AE882C;
    }
L_08AE882C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE883C;
      }
      goto L_08AE8834;
    }
L_08AE8834:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE8850;
      }
      goto L_08AE883C;
    }
L_08AE883C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE8814;
      }
      goto L_08AE884C;
    }
L_08AE884C:
    ctx.gpr[6] = (0u | 0u);
    goto L_08AE8850;
L_08AE8850:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1360)));
      if (branch_taken) {
          goto L_08AE88C8;
      }
      goto L_08AE8858;
    }
L_08AE8858:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(63));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1084));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[31] = (0x08AE8870u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(1092));
    goto L_08AEB718;
L_08AE8870:
    ctx.gpr[31] = (0x08AE8878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8878u) goto L_08AE8878;
    return;
L_08AE8878:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE88A4;
      }
      goto L_08AE8888;
    }
L_08AE8888:
    ctx.gpr[31] = (0x08AE8890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8890u) goto L_08AE8890;
    return;
L_08AE8890:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE88C8;
      }
      goto L_08AE88A4;
    }
L_08AE88A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
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
    goto L_08AE88C8;
L_08AE88C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8DC4;
      }
      goto L_08AE88D0;
    }
L_08AE88D0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AE88DCu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 872u, 0x08AEF1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE88DCu) goto L_08AE88DC;
    return;
L_08AE88DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1356)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[31] = (0x08AE88ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AEB718;
L_08AE88EC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE88F8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 872u, 0x08AEF1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE88F8u) goto L_08AE88F8;
    return;
L_08AE88F8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1124));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE8908u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE8908u) goto L_08AE8908;
    return;
L_08AE8908:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8914u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 872u, 0x08AEF1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8914u) goto L_08AE8914;
    return;
L_08AE8914:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE8920u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 502u, 0x08AEDD38u>(ctx, &aot_mem) && ctx.pc == 0x08AE8920u) goto L_08AE8920;
    return;
L_08AE8920:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE89E0;
      }
      goto L_08AE8928;
    }
L_08AE8928:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1156), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE8938u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE8938u) goto L_08AE8938;
    return;
L_08AE8938:
    ctx.gpr[31] = (0x08AE8940u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 502u, 0x08AEDD38u>(ctx, &aot_mem) && ctx.pc == 0x08AE8940u) goto L_08AE8940;
    return;
L_08AE8940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24996)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE8958u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1124));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE8958u) goto L_08AE8958;
    return;
L_08AE8958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24996)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE8970u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE8970u) goto L_08AE8970;
    return;
L_08AE8970:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE899C;
      }
      goto L_08AE8978;
    }
L_08AE8978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24996)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE89BC;
      }
      goto L_08AE899C;
    }
L_08AE899C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24996)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AE89BC;
L_08AE89BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24996)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-24996), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE89D4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 872u, 0x08AEF1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE89D4u) goto L_08AE89D4;
    return;
L_08AE89D4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8928;
      }
      goto L_08AE89E0;
    }
L_08AE89E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8DC4;
      }
      goto L_08AE89E8;
    }
L_08AE89E8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1196));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1404)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1188));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1192));
    ctx.gpr[31] = (0x08AE8A04u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    goto L_08AEB718;
L_08AE8A04:
    ctx.gpr[16] = (0u | 0u);
    goto L_08AE8A08;
L_08AE8A08:
    ctx.gpr[31] = (0x08AE8A10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08AE8A10u) goto L_08AE8A10;
    return;
L_08AE8A10:
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8A58;
      }
      goto L_08AE8A1C;
    }
L_08AE8A1C:
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1196))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 97 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8A4C;
      }
      goto L_08AE8A30;
    }
L_08AE8A30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1196))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 123 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8A4C;
      }
      goto L_08AE8A40;
    }
L_08AE8A40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1196))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1196), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AE8A4C;
L_08AE8A4C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_08AE8A08;
      }
      goto L_08AE8A58;
    }
L_08AE8A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1400)));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24992)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[31] = (0x08AE8A74u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE8A74u) goto L_08AE8A74;
    return;
L_08AE8A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24992)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1188)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24992), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE8DC4;
      }
      goto L_08AE8AA8;
    }
L_08AE8AA8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AE8AB4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 872u, 0x08AEF1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8AB4u) goto L_08AE8AB4;
    return;
L_08AE8AB4:
    ctx.gpr[31] = (0x08AE8ABCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 67u, 0x0882477Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8ABCu) goto L_08AE8ABC;
    return;
L_08AE8ABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8DC4;
      }
      goto L_08AE8AC4;
    }
L_08AE8AC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1388)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1204));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1208));
    ctx.gpr[31] = (0x08AE8ADCu);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(1212));
    goto L_08AEB718;
L_08AE8ADC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5612)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1208)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5612), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE8DC4;
      }
      goto L_08AE8B1C;
    }
L_08AE8B1C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1252));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(1256));
    ctx.gpr[31] = (0x08AE8B3Cu);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    goto L_08AEB718;
L_08AE8B3C:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24984)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1368)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1252)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1256)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1376)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08AE8B84u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE8B84u) goto L_08AE8B84;
    return;
L_08AE8B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24984)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-24984), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE8DC4;
      }
      goto L_08AE8B94;
    }
L_08AE8B94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1468), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1464), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1260));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1460), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8BB4u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08AE8BB4u) goto L_08AE8BB4;
    return;
L_08AE8BB4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1292));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8BC8u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08AE8BC8u) goto L_08AE8BC8;
    return;
L_08AE8BC8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AE8BD8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 872u, 0x08AEF1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8BD8u) goto L_08AE8BD8;
    return;
L_08AE8BD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE8BE8u);
    ctx.gpr[6] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08AE8BE8u) goto L_08AE8BE8;
    return;
L_08AE8BE8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8BF4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 872u, 0x08AEF1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8BF4u) goto L_08AE8BF4;
    return;
L_08AE8BF4:
    ctx.gpr[31] = (0x08AE8BFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 226u, 0x08AECB54u>(ctx, &aot_mem) && ctx.pc == 0x08AE8BFCu) goto L_08AE8BFC;
    return;
L_08AE8BFC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8C0Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 872u, 0x08AEF1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8C0Cu) goto L_08AE8C0C;
    return;
L_08AE8C0C:
    ctx.gpr[31] = (0x08AE8C14u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 226u, 0x08AECB54u>(ctx, &aot_mem) && ctx.pc == 0x08AE8C14u) goto L_08AE8C14;
    return;
L_08AE8C14:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8C24u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 872u, 0x08AEF1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8C24u) goto L_08AE8C24;
    return;
L_08AE8C24:
    ctx.gpr[31] = (0x08AE8C2Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 226u, 0x08AECB54u>(ctx, &aot_mem) && ctx.pc == 0x08AE8C2Cu) goto L_08AE8C2C;
    return;
L_08AE8C2C:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8C3Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 872u, 0x08AEF1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8C3Cu) goto L_08AE8C3C;
    return;
L_08AE8C3C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE8C4Cu);
    ctx.gpr[6] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08AE8C4Cu) goto L_08AE8C4C;
    return;
L_08AE8C4C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8C58u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 872u, 0x08AEF1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8C58u) goto L_08AE8C58;
    return;
L_08AE8C58:
    ctx.gpr[31] = (0x08AE8C60u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08AE8C60u) goto L_08AE8C60;
    return;
L_08AE8C60:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE8C6Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08AE8C6Cu) goto L_08AE8C6C;
    return;
L_08AE8C6C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8C7Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 872u, 0x08AEF1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8C7Cu) goto L_08AE8C7C;
    return;
L_08AE8C7C:
    ctx.gpr[31] = (0x08AE8C84u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08AE8C84u) goto L_08AE8C84;
    return;
L_08AE8C84:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE8C90u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08AE8C90u) goto L_08AE8C90;
    return;
L_08AE8C90:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8CA0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 872u, 0x08AEF1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8CA0u) goto L_08AE8CA0;
    return;
L_08AE8CA0:
    ctx.gpr[31] = (0x08AE8CA8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08AE8CA8u) goto L_08AE8CA8;
    return;
L_08AE8CA8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE8CB4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08AE8CB4u) goto L_08AE8CB4;
    return;
L_08AE8CB4:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8CC4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 872u, 0x08AEF1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8CC4u) goto L_08AE8CC4;
    return;
L_08AE8CC4:
    ctx.gpr[31] = (0x08AE8CCCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08AE8CCCu) goto L_08AE8CCC;
    return;
L_08AE8CCC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE8CD8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08AE8CD8u) goto L_08AE8CD8;
    return;
L_08AE8CD8:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8CE8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 872u, 0x08AEF1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8CE8u) goto L_08AE8CE8;
    return;
L_08AE8CE8:
    ctx.gpr[31] = (0x08AE8CF0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08AE8CF0u) goto L_08AE8CF0;
    return;
L_08AE8CF0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE8CFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08AE8CFCu) goto L_08AE8CFC;
    return;
L_08AE8CFC:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE8D0Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 872u, 0x08AEF1A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8D0Cu) goto L_08AE8D0C;
    return;
L_08AE8D0C:
    ctx.gpr[31] = (0x08AE8D14u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 224u, 0x08AECB38u>(ctx, &aot_mem) && ctx.pc == 0x08AE8D14u) goto L_08AE8D14;
    return;
L_08AE8D14:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE8D20u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08AE8D20u) goto L_08AE8D20;
    return;
L_08AE8D20:
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24980)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), ctx.gpr[30]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1372)));
    ctx.gpr[31] = (0x08AE8D68u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE8D68u) goto L_08AE8D68;
    return;
L_08AE8D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24980)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AE8DACu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1260));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE8DACu) goto L_08AE8DAC;
    return;
L_08AE8DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24980)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-24980), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1460)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1464)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1468)));
    goto L_08AE8DC4;
L_08AE8DC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1348)));
      if (branch_taken) {
          goto L_08AE8460;
      }
      goto L_08AE8DCC;
    }
L_08AE8DCC:
    ctx.gpr[31] = (0x08AE8DD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8DD4u) goto L_08AE8DD4;
    return;
L_08AE8DD4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(944)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8E70;
      }
      goto L_08AE8DEC;
    }
L_08AE8DEC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22152));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20552));
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[30] = (0u | 2u);
    goto L_08AE8E14;
L_08AE8E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24996)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[31] = (0x08AE8E28u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE8E28u) goto L_08AE8E28;
    return;
L_08AE8E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24996)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[31] = (0x08AE8E3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE8E3Cu) goto L_08AE8E3C;
    return;
L_08AE8E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24996)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-24996), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(944)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AE8E14;
      }
      goto L_08AE8E70;
    }
L_08AE8E70:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(944), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 2u);
      if (branch_taken) {
          goto L_08AE8E9C;
      }
      goto L_08AE8E80;
    }
L_08AE8E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24996)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1340)));
        goto L_08AE8EAC;
    }
    goto L_08AE8E94;
L_08AE8E94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8FD4;
      }
      goto L_08AE8E9C;
    }
L_08AE8E9C:
    ctx.gpr[31] = (0x08AE8EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 628u, 0x08AE7C38u>(ctx, &aot_mem) && ctx.pc == 0x08AE8EA4u) goto L_08AE8EA4;
    return;
L_08AE8EA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8FE8;
      }
      goto L_08AE8EAC;
    }
L_08AE8EAC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1324));
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-6188));
    goto L_08AE8EC4;
L_08AE8EC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE8ED0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 379u, 0x08AED520u>(ctx, &aot_mem) && ctx.pc == 0x08AE8ED0u) goto L_08AE8ED0;
    return;
L_08AE8ED0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8EE4;
      }
      goto L_08AE8ED8;
    }
L_08AE8ED8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE8FBC;
      }
      goto L_08AE8EE4;
    }
L_08AE8EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08AE8FA4;
      }
      goto L_08AE8EF0;
    }
L_08AE8EF0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE8EFCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28BB8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8EFCu) goto L_08AE8EFC;
    return;
L_08AE8EFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8F1C;
      }
      goto L_08AE8F04;
    }
L_08AE8F04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1324)));
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[31] = (0x08AE8F14u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AE8F14u) goto L_08AE8F14;
    return;
L_08AE8F14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8F9C;
      }
      goto L_08AE8F1C;
    }
L_08AE8F1C:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(120));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE8F30u);
    ctx.gpr[6] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 660u, 0x089C6C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8F30u) goto L_08AE8F30;
    return;
L_08AE8F30:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(120));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8F9C;
      }
      goto L_08AE8F68;
    }
L_08AE8F68:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08AE8F6C;
L_08AE8F6C:
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(120));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08AE8F6C;
    }
    goto L_08AE8F9C;
L_08AE8F9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8FBC;
      }
      goto L_08AE8FA4;
    }
L_08AE8FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE8FBC;
      }
      goto L_08AE8FB4;
    }
L_08AE8FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AE8FBC;
L_08AE8FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24996)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AE8EC4;
      }
      goto L_08AE8FD4;
    }
L_08AE8FD4:
    ctx.gpr[31] = (0x08AE8FDCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08AE8FDCu) goto L_08AE8FDC;
    return;
L_08AE8FDC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(940), ctx.gpr[4]);
    goto L_08AE8FE8;
L_08AE8FE8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1472)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1476)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1480)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1484)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1488)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1492)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1500)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1508)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1512)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1516)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1520)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1524)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1532)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE9030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE90D0;
      }
      goto L_08AE906C;
    }
L_08AE906C:
    ctx.gpr[31] = (0x08AE9074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 755u, 0x0891B674u>(ctx, &aot_mem) && ctx.pc == 0x08AE9074u) goto L_08AE9074;
    return;
L_08AE9074:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5608)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5604)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24964)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[22] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[30] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE90D8;
      }
      goto L_08AE90B8;
    }
L_08AE90B8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24968)));
    ctx.gpr[31] = (0x08AE90C8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 276u, 0x08A7D738u>(ctx, &aot_mem) && ctx.pc == 0x08AE90C8u) goto L_08AE90C8;
    return;
L_08AE90C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-24984)));
      if (branch_taken) {
          goto L_08AE90E4;
      }
      goto L_08AE90D0;
    }
L_08AE90D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9544;
      }
      goto L_08AE90D8;
    }
L_08AE90D8:
    ctx.gpr[31] = (0x08AE90E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 280u, 0x08A7D76Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE90E0u) goto L_08AE90E0;
    return;
L_08AE90E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-24984)));
    goto L_08AE90E4;
L_08AE90E4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2278u << 16u);
      if (branch_taken) {
          goto L_08AE9148;
      }
      goto L_08AE90F4;
    }
L_08AE90F4:
    ctx.gpr[20] = (65528u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14544));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_08AE9100;
L_08AE9100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9134;
      }
      goto L_08AE910C;
    }
L_08AE910C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9120;
      }
      goto L_08AE9114;
    }
L_08AE9114:
    ctx.gpr[31] = (0x08AE911Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08AE911Cu) goto L_08AE911C;
    return;
L_08AE911C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08AE9120;
L_08AE9120:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_08AE9134;
L_08AE9134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-24984)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE9100;
      }
      goto L_08AE9148;
    }
L_08AE9148:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-24984), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AE9158u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24980), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 271u, 0x088798E8u>(ctx, &aot_mem) && ctx.pc == 0x08AE9158u) goto L_08AE9158;
    return;
L_08AE9158:
    ctx.gpr[31] = (0x08AE9160u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 116u, 0x08A88850u>(ctx, &aot_mem) && ctx.pc == 0x08AE9160u) goto L_08AE9160;
    return;
L_08AE9160:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(936), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(937), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24976)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(938), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-24976), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE921C;
      }
      goto L_08AE9188;
    }
L_08AE9188:
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-18696));
    goto L_08AE9190;
L_08AE9190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24976)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08AE91A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08AE91A4u) goto L_08AE91A4;
    return;
L_08AE91A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24976)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AE91CCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE91CCu) goto L_08AE91CC;
    return;
L_08AE91CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24976)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE920C;
      }
      goto L_08AE91E4;
    }
L_08AE91E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08AE9200u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE9200u) goto L_08AE9200;
    return;
L_08AE9200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24976)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_08AE920C;
L_08AE920C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-24976), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE9190;
      }
      goto L_08AE921C;
    }
L_08AE921C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-24976), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(934)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9234;
      }
      goto L_08AE922C;
    }
L_08AE922C:
    ctx.gpr[31] = (0x08AE9234u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 418u, 0x08A8A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9234u) goto L_08AE9234;
    return;
L_08AE9234:
    ctx.gpr[4] = (2278u << 16u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(934), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AE9244u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7840));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 483u, 0x0883A25Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9244u) goto L_08AE9244;
    return;
L_08AE9244:
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-18952), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24972), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25211)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9288;
      }
      goto L_08AE9264;
    }
L_08AE9264:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE9278u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 248u, 0x088EDC30u>(ctx, &aot_mem) && ctx.pc == 0x08AE9278u) goto L_08AE9278;
    return;
L_08AE9278:
    ctx.gpr[31] = (0x08AE9280u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 278u, 0x088EDF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9280u) goto L_08AE9280;
    return;
L_08AE9280:
    ctx.gpr[31] = (0x08AE9288u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 127u, 0x088ED074u>(ctx, &aot_mem) && ctx.pc == 0x08AE9288u) goto L_08AE9288;
    return;
L_08AE9288:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(940), 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE9298u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(935), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AE9298u) goto L_08AE9298;
    return;
L_08AE9298:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE92D8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AE92D8u) goto L_08AE92D8;
    return;
L_08AE92D8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE92F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 261u, 0x089D9164u>(ctx, &aot_mem) && ctx.pc == 0x08AE92F4u) goto L_08AE92F4;
    return;
L_08AE92F4:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-5624));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6352));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE9384;
      }
      goto L_08AE9310;
    }
L_08AE9310:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08AE931C;
L_08AE931C:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 2u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9340;
      }
      goto L_08AE9330;
    }
L_08AE9330:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
      if (branch_taken) {
          goto L_08AE9340;
      }
      goto L_08AE9340;
    }
L_08AE9340:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 2u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9364;
      }
      goto L_08AE9354;
    }
L_08AE9354:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
      if (branch_taken) {
          goto L_08AE9364;
      }
      goto L_08AE9364;
    }
L_08AE9364:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE9374;
      }
      goto L_08AE936C;
    }
L_08AE936C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE9394;
      }
      goto L_08AE9374;
    }
L_08AE9374:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE931C;
      }
      goto L_08AE9384;
    }
L_08AE9384:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE9394;
      }
      goto L_08AE938C;
    }
L_08AE938C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE9394;
      }
      goto L_08AE9394;
    }
L_08AE9394:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE93B8;
      }
      goto L_08AE939C;
    }
L_08AE939C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x08AE93ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 156u, 0x08864B28u>(ctx, &aot_mem) && ctx.pc == 0x08AE93ACu) goto L_08AE93AC;
    return;
L_08AE93AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE93B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x08864AC0u>(ctx, &aot_mem) && ctx.pc == 0x08AE93B8u) goto L_08AE93B8;
    return;
L_08AE93B8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7788), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7756), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AE93D0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AE93D0u) goto L_08AE93D0;
    return;
L_08AE93D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE93DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 632u, 0x08A96B44u>(ctx, &aot_mem) && ctx.pc == 0x08AE93DCu) goto L_08AE93DC;
    return;
L_08AE93DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-25212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE94E4;
      }
      goto L_08AE93E8;
    }
L_08AE93E8:
    ctx.gpr[31] = (0x08AE93F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 875u, 0x089C78ECu>(ctx, &aot_mem) && ctx.pc == 0x08AE93F0u) goto L_08AE93F0;
    return;
L_08AE93F0:
    ctx.gpr[31] = (0x08AE93F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 36u, 0x089C82B4u>(ctx, &aot_mem) && ctx.pc == 0x08AE93F8u) goto L_08AE93F8;
    return;
L_08AE93F8:
    ctx.gpr[31] = (0x08AE9400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 2u, 0x089C8010u>(ctx, &aot_mem) && ctx.pc == 0x08AE9400u) goto L_08AE9400;
    return;
L_08AE9400:
    ctx.gpr[31] = (0x08AE9408u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(-25212), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AE9408u) goto L_08AE9408;
    return;
L_08AE9408:
    ctx.gpr[23] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6588)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE94E0;
      }
      goto L_08AE9420;
    }
L_08AE9420:
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6668));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-6628));
    ctx.gpr[22] = (2229u << 16u);
    goto L_08AE9438;
L_08AE9438:
    ctx.gpr[31] = (0x08AE9440u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9440u) goto L_08AE9440;
    return;
L_08AE9440:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE9468u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AE9468u) goto L_08AE9468;
    return;
L_08AE9468:
    ctx.gpr[31] = (0x08AE9470u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08AE9470u) goto L_08AE9470;
    return;
L_08AE9470:
    ctx.gpr[31] = (0x08AE9478u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9478u) goto L_08AE9478;
    return;
L_08AE9478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AE94A0;
      }
      goto L_08AE9484;
    }
L_08AE9484:
    ctx.gpr[31] = (0x08AE948Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE948Cu) goto L_08AE948C;
    return;
L_08AE948C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08AE9498u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AE9498u) goto L_08AE9498;
    return;
L_08AE9498:
    ctx.gpr[31] = (0x08AE94A0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08AE94A0u) goto L_08AE94A0;
    return;
L_08AE94A0:
    ctx.gpr[4] = (ctx.gpr[18] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE94B4;
      }
      goto L_08AE94AC;
    }
L_08AE94AC:
    ctx.gpr[31] = (0x08AE94B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE94B4u) goto L_08AE94B4;
    return;
L_08AE94B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AE94C8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08AE94C8u) goto L_08AE94C8;
    return;
L_08AE94C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6588)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE9438;
      }
      goto L_08AE94E0;
    }
L_08AE94E0:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-6588), 0u);
    goto L_08AE94E4;
L_08AE94E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24996)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2278u << 16u);
      if (branch_taken) {
          goto L_08AE9520;
      }
      goto L_08AE94FC;
    }
L_08AE94FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(11120));
    ctx.gpr[18] = (2230u << 16u);
    goto L_08AE9504;
L_08AE9504:
    ctx.gpr[31] = (0x08AE950Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 624u, 0x089C6A08u>(ctx, &aot_mem) && ctx.pc == 0x08AE950Cu) goto L_08AE950C;
    return;
L_08AE950C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-24996)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE9504;
      }
      goto L_08AE9520;
    }
L_08AE9520:
    ctx.gpr[31] = (0x08AE9528u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 624u, 0x089C6A08u>(ctx, &aot_mem) && ctx.pc == 0x08AE9528u) goto L_08AE9528;
    return;
L_08AE9528:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AE9534u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9534u) goto L_08AE9534;
    return;
L_08AE9534:
    ctx.gpr[31] = (0x08AE953Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 95u, 0x089CC6ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE953Cu) goto L_08AE953C;
    return;
L_08AE953C:
    ctx.gpr[31] = (0x08AE9544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 757u, 0x0891B698u>(ctx, &aot_mem) && ctx.pc == 0x08AE9544u) goto L_08AE9544;
    return;
L_08AE9544:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE9574:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(940)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE9614;
      }
      goto L_08AE95B4;
    }
L_08AE95B4:
    ctx.gpr[17] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AE9600;
      }
      goto L_08AE95C0;
    }
L_08AE95C0:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25000)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE9640;
      }
      goto L_08AE95D4;
    }
L_08AE95D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AE9730;
      }
      goto L_08AE95DC;
    }
L_08AE95DC:
    ctx.gpr[31] = (0x08AE95E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 550u, 0x08AE74A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE95E4u) goto L_08AE95E4;
    return;
L_08AE95E4:
    ctx.gpr[31] = (0x08AE95ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 593u, 0x08AE78D8u>(ctx, &aot_mem) && ctx.pc == 0x08AE95ECu) goto L_08AE95EC;
    return;
L_08AE95EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25000)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-25000), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(935)));
      if (branch_taken) {
          goto L_08AE9734;
      }
      goto L_08AE9600;
    }
L_08AE9600:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE960Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6156));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 465u, 0x08AE6E48u>(ctx, &aot_mem) && ctx.pc == 0x08AE960Cu) goto L_08AE960C;
    return;
L_08AE960C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9AA4;
      }
      goto L_08AE9614;
    }
L_08AE9614:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE9620u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6180));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 465u, 0x08AE6E48u>(ctx, &aot_mem) && ctx.pc == 0x08AE9620u) goto L_08AE9620;
    return;
L_08AE9620:
    ctx.gpr[31] = (0x08AE9628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 755u, 0x0891B674u>(ctx, &aot_mem) && ctx.pc == 0x08AE9628u) goto L_08AE9628;
    return;
L_08AE9628:
    ctx.gpr[31] = (0x08AE9630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 606u, 0x08AE7A90u>(ctx, &aot_mem) && ctx.pc == 0x08AE9630u) goto L_08AE9630;
    return;
L_08AE9630:
    ctx.gpr[31] = (0x08AE9638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 757u, 0x0891B698u>(ctx, &aot_mem) && ctx.pc == 0x08AE9638u) goto L_08AE9638;
    return;
L_08AE9638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9AA4;
      }
      goto L_08AE9640;
    }
L_08AE9640:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9660;
      }
      goto L_08AE964C;
    }
L_08AE964C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9670;
      }
      goto L_08AE9658;
    }
L_08AE9658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9730;
      }
      goto L_08AE9660;
    }
L_08AE9660:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-25000), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(935)));
      if (branch_taken) {
          goto L_08AE9734;
      }
      goto L_08AE9670;
    }
L_08AE9670:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-25000), 0u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5624));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6352));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE9704;
      }
      goto L_08AE9690;
    }
L_08AE9690:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08AE969C;
L_08AE969C:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 2u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE96C0;
      }
      goto L_08AE96B0;
    }
L_08AE96B0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
      if (branch_taken) {
          goto L_08AE96C0;
      }
      goto L_08AE96C0;
    }
L_08AE96C0:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] & 2u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE96E4;
      }
      goto L_08AE96D4;
    }
L_08AE96D4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
      if (branch_taken) {
          goto L_08AE96E4;
      }
      goto L_08AE96E4;
    }
L_08AE96E4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE96F4;
      }
      goto L_08AE96EC;
    }
L_08AE96EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE9714;
      }
      goto L_08AE96F4;
    }
L_08AE96F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE969C;
      }
      goto L_08AE9704;
    }
L_08AE9704:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE9714;
      }
      goto L_08AE970C;
    }
L_08AE970C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE9714;
      }
      goto L_08AE9714;
    }
L_08AE9714:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9728;
      }
      goto L_08AE971C;
    }
L_08AE971C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AE9728u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 154u, 0x08864B08u>(ctx, &aot_mem) && ctx.pc == 0x08AE9728u) goto L_08AE9728;
    return;
L_08AE9728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(935)));
      if (branch_taken) {
          goto L_08AE9734;
      }
      goto L_08AE9730;
    }
L_08AE9730:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(935)));
    goto L_08AE9734;
L_08AE9734:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE9AA4;
      }
      goto L_08AE973C;
    }
L_08AE973C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7840)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5616)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08AE9760u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 577u, 0x08AE7788u>(ctx, &aot_mem) && ctx.pc == 0x08AE9760u) goto L_08AE9760;
    return;
L_08AE9760:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24988)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24992)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE982C;
      }
      goto L_08AE9780;
    }
L_08AE9780:
    ctx.gpr[6] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11832));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE982C;
      }
      goto L_08AE97A0;
    }
L_08AE97A0:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
      if (branch_taken) {
          goto L_08AE97E0;
      }
      goto L_08AE97B0;
    }
L_08AE97B0:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AE97BCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE97BCu) goto L_08AE97BC;
    return;
L_08AE97BC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE97D4;
      }
      goto L_08AE97C8;
    }
L_08AE97C8:
    ctx.gpr[31] = (0x08AE97D0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE97D0u) goto L_08AE97D0;
    return;
L_08AE97D0:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AE97D4;
L_08AE97D4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24988)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    goto L_08AE97E0;
L_08AE97E0:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11320));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE97F4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE97F4u) goto L_08AE97F4;
    return;
L_08AE97F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24988)));
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12088));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AE9820u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 256u, 0x08879648u>(ctx, &aot_mem) && ctx.pc == 0x08AE9820u) goto L_08AE9820;
    return;
L_08AE9820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24988)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-24988), ctx.gpr[4]);
    goto L_08AE982C;
L_08AE982C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-24976)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2233u << 16u);
      if (branch_taken) {
          goto L_08AE987C;
      }
      goto L_08AE9840;
    }
L_08AE9840:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-18696));
    goto L_08AE9844;
L_08AE9844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 120 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 130 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE9868;
      }
      goto L_08AE9858;
    }
L_08AE9858:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9868;
      }
      goto L_08AE9860;
    }
L_08AE9860:
    ctx.gpr[31] = (0x08AE9868u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 508u, 0x08AE70DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE9868u) goto L_08AE9868;
    return;
L_08AE9868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-24976)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE9844;
      }
      goto L_08AE987C;
    }
L_08AE987C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25211)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9AA4;
      }
      goto L_08AE988C;
    }
L_08AE988C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5624));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6352));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE991C;
      }
      goto L_08AE98A8;
    }
L_08AE98A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AE98B4;
L_08AE98B4:
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[9] & 2u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE98D8;
      }
      goto L_08AE98C8;
    }
L_08AE98C8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
      if (branch_taken) {
          goto L_08AE98D8;
      }
      goto L_08AE98D8;
    }
L_08AE98D8:
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[9] & 2u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE98FC;
      }
      goto L_08AE98EC;
    }
L_08AE98EC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
      if (branch_taken) {
          goto L_08AE98FC;
      }
      goto L_08AE98FC;
    }
L_08AE98FC:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE990C;
      }
      goto L_08AE9904;
    }
L_08AE9904:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE992C;
      }
      goto L_08AE990C;
    }
L_08AE990C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE98B4;
      }
      goto L_08AE991C;
    }
L_08AE991C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE992C;
      }
      goto L_08AE9924;
    }
L_08AE9924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE992C;
      }
      goto L_08AE992C;
    }
L_08AE992C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AE9AA4;
      }
      goto L_08AE9934;
    }
L_08AE9934:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE9AA4;
      }
      goto L_08AE9968;
    }
L_08AE9968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(940)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AE9AA4;
      }
      goto L_08AE9974;
    }
L_08AE9974:
    ctx.gpr[31] = (0x08AE997Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 158u, 0x088ED1F8u>(ctx, &aot_mem) && ctx.pc == 0x08AE997Cu) goto L_08AE997C;
    return;
L_08AE997C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1000));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE99B8;
      }
      goto L_08AE998C;
    }
L_08AE998C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6584)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE99B8;
      }
      goto L_08AE999C;
    }
L_08AE999C:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6584), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08AE99B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 397u, 0x088EE884u>(ctx, &aot_mem) && ctx.pc == 0x08AE99B8u) goto L_08AE99B8;
    return;
L_08AE99B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-24956)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE9A5C;
      }
      goto L_08AE99C4;
    }
L_08AE99C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24960)));
      if (branch_taken) {
          goto L_08AE9A0C;
      }
      goto L_08AE99F4;
    }
L_08AE99F4:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE9A2C;
      }
      goto L_08AE9A0C;
    }
L_08AE9A0C:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    goto L_08AE9A2C;
L_08AE9A2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24960), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE9AA4;
      }
      goto L_08AE9A34;
    }
L_08AE9A34:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(512), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE9A50u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(939), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 569u, 0x08AE76D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE9A50u) goto L_08AE9A50;
    return;
L_08AE9A50:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-24956), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24960), 0u);
      if (branch_taken) {
          goto L_08AE9AA4;
      }
      goto L_08AE9A5C;
    }
L_08AE9A5C:
    ctx.gpr[31] = (0x08AE9A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 69u, 0x088247D8u>(ctx, &aot_mem) && ctx.pc == 0x08AE9A64u) goto L_08AE9A64;
    return;
L_08AE9A64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9AA4;
      }
      goto L_08AE9A6C;
    }
L_08AE9A6C:
    ctx.gpr[31] = (0x08AE9A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 605u, 0x08AE7A88u>(ctx, &aot_mem) && ctx.pc == 0x08AE9A74u) goto L_08AE9A74;
    return;
L_08AE9A74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9AA4;
      }
      goto L_08AE9A7C;
    }
L_08AE9A7C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-24956), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1000u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-24960), ctx.gpr[4]);
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08AE9AA4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 397u, 0x088EE884u>(ctx, &aot_mem) && ctx.pc == 0x08AE9AA4u) goto L_08AE9AA4;
    return;
L_08AE9AA4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE9AD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25244)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25248)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25220)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-25240), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-25232), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-25236), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2230u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[3] = (2230u << 16u);
    ctx.gpr[13] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-25228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[12] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[13] + static_cast<std::uint32_t>(7840));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE9B78u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-25216), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 414u, 0x08839C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9B78u) goto L_08AE9B78;
    return;
L_08AE9B78:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AE9B84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24952));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x08AE9B84u) goto L_08AE9B84;
    return;
L_08AE9B84:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE9B90:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5600), 0u);
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5596), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE9BA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5600)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 96 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AE9D84;
      }
      goto L_08AE9C54;
    }
L_08AE9C54:
    ctx.gpr[7] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (2278u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16208));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AE9C94;
      }
      goto L_08AE9C8C;
    }
L_08AE9C8C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08AE9C98;
      }
      goto L_08AE9C94;
    }
L_08AE9C94:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AE9C98;
L_08AE9C98:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_08AE9CB0;
      }
      goto L_08AE9CA8;
    }
L_08AE9CA8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AE9CB4;
      }
      goto L_08AE9CB0;
    }
L_08AE9CB0:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AE9CB4;
L_08AE9CB4:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_08AE9CCC;
      }
      goto L_08AE9CC4;
    }
L_08AE9CC4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08AE9CCC;
      }
      goto L_08AE9CCC;
    }
L_08AE9CCC:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08AE9CE4;
      }
      goto L_08AE9CDC;
    }
L_08AE9CDC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AE9CE4;
      }
      goto L_08AE9CE4;
    }
L_08AE9CE4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5600)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.gpr[8] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[8] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5600)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[8] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5600)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5600)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5600), ctx.gpr[4]);
    goto L_08AE9D84;
L_08AE9D84:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE9D8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24932)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24936)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] | 14571u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24908)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-24928), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[11] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24920), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-24924), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[10] = (15744u << 16u);
    ctx.gpr[3] = (2230u << 16u);
    ctx.gpr[7] = (2278u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[12] = (2230u << 16u);
    ctx.gpr[14] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(16208));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24916), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[13] = (2230u << 16u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[6] = (0u | 56u);
    ctx.gpr[7] = (ctx.gpr[14] + static_cast<std::uint32_t>(-19004));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-24912), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE9E40u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-24904), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9E40u) goto L_08AE9E40;
    return;
L_08AE9E40:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE9E4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (518u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[31] = (0x08AE9E70u);
    ctx.gpr[16] = (ctx.gpr[5] + 0u);
    ctx.pc = 0x08B0BC14u;
    return;
L_08AE9E70:
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[31] = (0x08AE9E7Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 771u);
    ctx.pc = 0x08B0BC34u;
    return;
L_08AE9E7C:
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[3] + static_cast<std::uint32_t>(-6024));
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[2] = (2223u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[12] = (0u << 16u);
    ctx.gpr[6] = (ctx.gpr[3] + static_cast<std::uint32_t>(-28480));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-24824));
    ctx.gpr[9] = (0u + 0u);
    ctx.gpr[10] = (ctx.gpr[11] + static_cast<std::uint32_t>(-28476));
    ctx.gpr[13] = (ctx.gpr[12] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (4u << 16u);
      if (branch_taken) {
          goto L_08AE9EB8;
      }
      goto L_08AE9EB0;
    }
L_08AE9EB0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28480)));
    ctx.gpr[7] = (ctx.gpr[8] << 10u);
    goto L_08AE9EB8;
L_08AE9EB8:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[8] = (32768u << 16u);
      if (branch_taken) {
          goto L_08AE9EC8;
      }
      goto L_08AE9EC4;
    }
L_08AE9EC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-28476)));
    goto L_08AE9EC8;
L_08AE9EC8:
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[10] = (32768u << 16u);
      if (branch_taken) {
          goto L_08AE9ED8;
      }
      goto L_08AE9ED0;
    }
L_08AE9ED0:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[11] | ctx.gpr[10]);
    goto L_08AE9ED8;
L_08AE9ED8:
    ctx.gpr[31] = (0x08AE9EE0u);
    // nop
    ctx.pc = 0x08B0BB64u;
    return;
L_08AE9EE0:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[5] = (ctx.gpr[17] + 0u);
    ctx.gpr[31] = (0x08AE9EF0u);
    ctx.gpr[6] = (ctx.gpr[16] + 0u);
    ctx.pc = 0x08B0BB1Cu;
    return;
L_08AE9EF0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE9F08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(996), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(992), ctx.gpr[20]);
    ctx.gpr[20] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(984), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(976), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(980), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AE9F78;
      }
      goto L_08AE9F40;
    }
L_08AE9F40:
    ctx.gpr[17] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08AE9F48;
L_08AE9F48:
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AE9F54u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08AE9F54u) goto L_08AE9F54;
    return;
L_08AE9F54:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[16] - ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 20 ? 1u : 0u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE9F78;
      }
      goto L_08AE9F70;
    }
L_08AE9F70:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
        goto L_08AE9F48;
    }
    goto L_08AE9F78;
L_08AE9F78:
    ctx.gpr[7] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (0u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[29]);
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08AEA048;
      }
      goto L_08AE9F90;
    }
L_08AE9F90:
    ctx.gpr[31] = (0x08AE9F98u);
    ctx.gpr[4] = (ctx.gpr[21] + 0u);
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE9F98u) goto L_08AE9F98;
    return;
L_08AE9F98:
    ctx.gpr[8] = (2223u << 16u);
    ctx.gpr[31] = (0x08AE9FA4u);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25012));
    ctx.pc = 0x08B0BC64u;
    return;
L_08AE9FA4:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[31] = (0x08AE9FB0u);
    ctx.gpr[5] = (ctx.gpr[21] + 0u);
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE9FB0u) goto L_08AE9FB0;
    return;
L_08AE9FB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AEA018;
      }
      goto L_08AE9FB8;
    }
L_08AE9FB8:
    aot_mem.aot_store32(ctx.gpr[26] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[31] = (0x08AE9FC8u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(21456));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 216u, 0x08AECA94u>(ctx, &aot_mem) && ctx.pc == 0x08AE9FC8u) goto L_08AE9FC8;
    return;
L_08AE9FC8:
    ctx.gpr[31] = (0x08AE9FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 244u, 0x08AF53C8u>(ctx, &aot_mem) && ctx.pc == 0x08AE9FD0u) goto L_08AE9FD0;
    return;
L_08AE9FD0:
    ctx.gpr[3] = (0u << 16u);
    ctx.gpr[21] = (ctx.gpr[3] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[6] = (0u << 16u);
      if (branch_taken) {
          goto L_08AE9FEC;
      }
      goto L_08AE9FE0;
    }
L_08AE9FE0:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA000;
      }
      goto L_08AE9FEC;
    }
L_08AE9FEC:
    ctx.gpr[4] = (ctx.gpr[20] + 0u);
    goto L_08AE9FF0;
L_08AE9FF0:
    ctx.gpr[31] = (0x08AE9FF8u);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 179u, 0x089C0CECu>(ctx, &aot_mem) && ctx.pc == 0x08AE9FF8u) goto L_08AE9FF8;
    return;
L_08AE9FF8:
    ctx.gpr[31] = (0x08AEA000u);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 228u, 0x08AECB74u>(ctx, &aot_mem) && ctx.pc == 0x08AEA000u) goto L_08AEA000;
    return;
L_08AEA000:
    ctx.gpr[31] = (0x08AEA008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 216u, 0x08AECA94u>(ctx, &aot_mem) && ctx.pc == 0x08AEA008u) goto L_08AEA008;
    return;
L_08AEA008:
    ctx.gpr[31] = (0x08AEA010u);
    // nop
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEA010u) goto L_08AEA010;
    return;
L_08AEA010:
    ctx.gpr[4] = (ctx.gpr[20] + 0u);
    goto L_08AE9FF0;
L_08AEA018:
    ctx.gpr[31] = (0x08AEA020u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0BBD4u;
    return;
L_08AEA020:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(996)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(980)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(976)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA048:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(616));
    ctx.gpr[10] = (ctx.gpr[21] + static_cast<std::uint32_t>(708));
    ctx.gpr[9] = (ctx.gpr[21] + static_cast<std::uint32_t>(800));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[2] = (ctx.gpr[21] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), 0u);
    goto L_08AEA070;
L_08AEA070:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEA070;
      }
      goto L_08AEA080;
    }
L_08AEA080:
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[11] = (ctx.gpr[12] + static_cast<std::uint32_t>(-6012));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[21] + static_cast<std::uint32_t>(124));
    ctx.gpr[5] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(88), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(92), 0u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    goto L_08AEA0C4;
L_08AEA0C4:
    ctx.gpr[14] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (ctx.gpr[5] < static_cast<std::uint32_t>(36) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    aot_mem.aot_store8(ctx.gpr[14] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AEA0C4;
      }
      goto L_08AEA0D8;
    }
L_08AEA0D8:
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(13070));
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(-21555));
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(11));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(4660));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-6547));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-8468));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(5));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(168), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(172), ctx.gpr[9]);
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(276));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[25]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(178), static_cast<std::uint16_t>(ctx.gpr[24]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(188), static_cast<std::uint16_t>(ctx.gpr[15]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(180), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(182), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(184), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(186), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(160), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(192), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(196), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(200), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(204), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(208), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(212), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(252), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(260), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(264), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(268), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(272), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(276), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(280), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(284), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(288), 0u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(248), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(328), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(332), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(336), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(340), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(468), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(600), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(604), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(608), 0u);
    ctx.gpr[31] = (0x08AEA1A4u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(612), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08AEA1A4u) goto L_08AEA1A4;
    return;
L_08AEA1A4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(892), 0u);
    goto L_08AE9FB8;
L_08AEA1AC:
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[3] + static_cast<std::uint32_t>(-5956));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08AEA1CC;
      }
      goto L_08AEA1C0;
    }
L_08AEA1C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-5956)));
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08AEA1CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEA1CCu) goto L_08AEA1CC;
    return;
L_08AEA1CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA1DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AEA2FC;
      }
      goto L_08AEA200;
    }
L_08AEA200:
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AEA2E4;
      }
      goto L_08AEA20C;
    }
L_08AEA20C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AEA2D4;
      }
      goto L_08AEA214;
    }
L_08AEA214:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08AEA274;
      }
      goto L_08AEA21C;
    }
L_08AEA21C:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEA240;
      }
      goto L_08AEA228;
    }
L_08AEA228:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AEA2C4;
      }
      goto L_08AEA234;
    }
L_08AEA234:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[8];
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AEA240;
      }
      goto L_08AEA23C;
    }
L_08AEA23C:
    ctx.gpr[17] = (ctx.gpr[16] + 0u);
    goto L_08AEA240;
L_08AEA240:
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AEA2B4;
      }
      goto L_08AEA24C;
    }
L_08AEA24C:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AEA29C;
      }
      goto L_08AEA254;
    }
L_08AEA254:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08AEA28C;
      }
      goto L_08AEA25C;
    }
L_08AEA25C:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08AEA260;
L_08AEA260:
    ctx.gpr[6] = (ctx.gpr[18] + 0u);
    goto L_08AEA264;
L_08AEA264:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[31] = (0x08AEA274u);
    ctx.gpr[8] = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0BD2Cu;
    return;
L_08AEA274:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA28C:
    ctx.gpr[31] = (0x08AEA294u);
    // nop
    ctx.pc = 0x08B0BC4Cu;
    return;
L_08AEA294:
    ctx.gpr[6] = (ctx.gpr[18] + 0u);
    goto L_08AEA264;
L_08AEA29C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
        goto L_08AEA260;
    }
    goto L_08AEA2A4;
L_08AEA2A4:
    ctx.gpr[31] = (0x08AEA2ACu);
    // nop
    ctx.pc = 0x08B0BC3Cu;
    return;
L_08AEA2AC:
    ctx.gpr[6] = (ctx.gpr[18] + 0u);
    goto L_08AEA264;
L_08AEA2B4:
    ctx.gpr[31] = (0x08AEA2BCu);
    // nop
    ctx.pc = 0x08B0BC44u;
    return;
L_08AEA2BC:
    ctx.gpr[6] = (ctx.gpr[18] + 0u);
    goto L_08AEA264;
L_08AEA2C4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_08AEA240;
      }
      goto L_08AEA2CC;
    }
L_08AEA2CC:
    ctx.gpr[17] = (ctx.gpr[16] + 0u);
    goto L_08AEA240;
L_08AEA2D4:
    ctx.gpr[31] = (0x08AEA2DCu);
    // nop
    ctx.pc = 0x08B0BC4Cu;
    return;
L_08AEA2DC:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    goto L_08AEA214;
L_08AEA2E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA214;
      }
      goto L_08AEA2EC;
    }
L_08AEA2EC:
    ctx.gpr[31] = (0x08AEA2F4u);
    // nop
    ctx.pc = 0x08B0BC3Cu;
    return;
L_08AEA2F4:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    goto L_08AEA214;
L_08AEA2FC:
    ctx.gpr[31] = (0x08AEA304u);
    // nop
    ctx.pc = 0x08B0BC44u;
    return;
L_08AEA304:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    goto L_08AEA214;
L_08AEA30C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (0u << 16u);
    ctx.gpr[3] = (ctx.gpr[4] + static_cast<std::uint32_t>(0));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AEA3A8;
      }
      goto L_08AEA32C;
    }
L_08AEA32C:
    ctx.gpr[31] = (0x08AEA334u);
    // nop
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEA334u) goto L_08AEA334;
    return;
L_08AEA334:
    ctx.gpr[31] = (0x08AEA33Cu);
    ctx.gpr[16] = (ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 900u, 0x08AEF2ECu>(ctx, &aot_mem) && ctx.pc == 0x08AEA33Cu) goto L_08AEA33C;
    return;
L_08AEA33C:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6008));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.gpr[4] = (ctx.gpr[3] + static_cast<std::uint32_t>(-6000));
      if (branch_taken) {
          goto L_08AEA360;
      }
      goto L_08AEA350;
    }
L_08AEA350:
    ctx.gpr[31] = (0x08AEA358u);
    // nop
    ctx.pc = 0x08B0BC04u;
    return;
L_08AEA358:
    ctx.gpr[31] = (0x08AEA360u);
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0BBD4u;
    return;
L_08AEA360:
    ctx.gpr[31] = (0x08AEA368u);
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    goto L_08AEA840;
L_08AEA368:
    ctx.gpr[31] = (0x08AEA370u);
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEA370u) goto L_08AEA370;
    return;
L_08AEA370:
    ctx.gpr[31] = (0x08AEA378u);
    ctx.gpr[16] = (ctx.gpr[2] + 0u);
    ctx.pc = 0x08B0BC6Cu;
    return;
L_08AEA378:
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[7] = (ctx.gpr[29] + 0u);
    ctx.gpr[8] = (0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AEA3A8;
      }
      goto L_08AEA390;
    }
L_08AEA390:
    ctx.gpr[31] = (0x08AEA398u);
    // nop
    ctx.pc = 0x08B0BC84u;
    return;
L_08AEA398:
    ctx.gpr[31] = (0x08AEA3A0u);
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.pc = 0x08B0BC54u;
    return;
L_08AEA3A0:
    ctx.gpr[31] = (0x08AEA3A8u);
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0BBD4u;
    return;
L_08AEA3A8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[31] = (0x08AEA3B8u);
    ctx.gpr[6] = (0u + 0u);
    ctx.pc = 0x08B0BC5Cu;
    return;
L_08AEA3B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA3CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6576)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AEA45C;
      }
      goto L_08AEA3F0;
    }
L_08AEA3F0:
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[3] + static_cast<std::uint32_t>(-28484));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (1u << 16u);
      if (branch_taken) {
          goto L_08AEA410;
      }
      goto L_08AEA400;
    }
L_08AEA400:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28484)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (ctx.gpr[2] << 10u);
      if (branch_taken) {
          goto L_08AEA4B4;
      }
      goto L_08AEA40C;
    }
L_08AEA40C:
    ctx.gpr[17] = (1u << 16u);
    goto L_08AEA410;
L_08AEA410:
    ctx.gpr[2] = (2227u << 16u);
    goto L_08AEA414;
L_08AEA414:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-5952));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(3));
    ctx.gpr[7] = (ctx.gpr[17] + 0u);
    ctx.gpr[31] = (0x08AEA42Cu);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(4096));
    ctx.pc = 0x08B0BC0Cu;
    return;
L_08AEA42C:
    ctx.gpr[3] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-6568), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEA45C;
      }
      goto L_08AEA43C;
    }
L_08AEA43C:
    ctx.gpr[31] = (0x08AEA444u);
    // nop
    ctx.pc = 0x08B0BC1Cu;
    return;
L_08AEA444:
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6572), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6580), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6576), ctx.gpr[2]);
    goto L_08AEA45C;
L_08AEA45C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6576)));
    goto L_08AEA460;
L_08AEA460:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AEA49C;
    }
    goto L_08AEA468;
L_08AEA468:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6580)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AEA49C;
      }
      goto L_08AEA480;
    }
L_08AEA480:
    ctx.gpr[11] = (2232u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-6572)));
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AEA4A0;
      }
      goto L_08AEA494;
    }
L_08AEA494:
    ctx.gpr[2] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6580), ctx.gpr[4]);
    goto L_08AEA49C;
L_08AEA49C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AEA4A0;
L_08AEA4A0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA4B4:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6576)));
        goto L_08AEA460;
    }
    goto L_08AEA4BC;
L_08AEA4BC:
    ctx.gpr[2] = (2227u << 16u);
    goto L_08AEA414;
L_08AEA4C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08AEA558;
      }
      goto L_08AEA4E4;
    }
L_08AEA4E4:
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AEA540;
      }
      goto L_08AEA4F0;
    }
L_08AEA4F0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AEA530;
      }
      goto L_08AEA4F8;
    }
L_08AEA4F8:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08AEA4FC;
L_08AEA4FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08AEA518;
      }
      goto L_08AEA504;
    }
L_08AEA504:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AEA514u);
    ctx.gpr[6] = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0BCB4u;
    return;
L_08AEA514:
    ctx.gpr[3] = (ctx.gpr[2] + 0u);
    goto L_08AEA518;
L_08AEA518:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA530:
    ctx.gpr[31] = (0x08AEA538u);
    // nop
    ctx.pc = 0x08B0BC4Cu;
    return;
L_08AEA538:
    // nop
    goto L_08AEA4FC;
L_08AEA540:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
        goto L_08AEA4FC;
    }
    goto L_08AEA548;
L_08AEA548:
    ctx.gpr[31] = (0x08AEA550u);
    // nop
    ctx.pc = 0x08B0BC3Cu;
    return;
L_08AEA550:
    // nop
    goto L_08AEA4FC;
L_08AEA558:
    ctx.gpr[31] = (0x08AEA560u);
    // nop
    ctx.pc = 0x08B0BC44u;
    return;
L_08AEA560:
    // nop
    goto L_08AEA4FC;
L_08AEA568:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08AEA5FC;
      }
      goto L_08AEA588;
    }
L_08AEA588:
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AEA5E4;
      }
      goto L_08AEA594;
    }
L_08AEA594:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AEA5D4;
      }
      goto L_08AEA59C;
    }
L_08AEA59C:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08AEA5A0;
L_08AEA5A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08AEA5BC;
      }
      goto L_08AEA5A8;
    }
L_08AEA5A8:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AEA5B8u);
    ctx.gpr[6] = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0BCA4u;
    return;
L_08AEA5B8:
    ctx.gpr[3] = (ctx.gpr[2] + 0u);
    goto L_08AEA5BC;
L_08AEA5BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA5D4:
    ctx.gpr[31] = (0x08AEA5DCu);
    // nop
    ctx.pc = 0x08B0BC4Cu;
    return;
L_08AEA5DC:
    // nop
    goto L_08AEA5A0;
L_08AEA5E4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
        goto L_08AEA5A0;
    }
    goto L_08AEA5EC;
L_08AEA5EC:
    ctx.gpr[31] = (0x08AEA5F4u);
    // nop
    ctx.pc = 0x08B0BC3Cu;
    return;
L_08AEA5F4:
    // nop
    goto L_08AEA5A0;
L_08AEA5FC:
    ctx.gpr[31] = (0x08AEA604u);
    // nop
    ctx.pc = 0x08B0BC44u;
    return;
L_08AEA604:
    // nop
    goto L_08AEA5A0;
L_08AEA60C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08AEA680;
      }
      goto L_08AEA61C;
    }
L_08AEA61C:
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AEA668;
      }
      goto L_08AEA628;
    }
L_08AEA628:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AEA658;
      }
      goto L_08AEA630;
    }
L_08AEA630:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08AEA634;
L_08AEA634:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08AEA648;
      }
      goto L_08AEA63C;
    }
L_08AEA63C:
    ctx.gpr[31] = (0x08AEA644u);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.pc = 0x08B0BCCCu;
    return;
L_08AEA644:
    ctx.gpr[3] = (ctx.gpr[2] + 0u);
    goto L_08AEA648;
L_08AEA648:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA658:
    ctx.gpr[31] = (0x08AEA660u);
    // nop
    ctx.pc = 0x08B0BC4Cu;
    return;
L_08AEA660:
    // nop
    goto L_08AEA634;
L_08AEA668:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
        goto L_08AEA634;
    }
    goto L_08AEA670;
L_08AEA670:
    ctx.gpr[31] = (0x08AEA678u);
    // nop
    ctx.pc = 0x08B0BC3Cu;
    return;
L_08AEA678:
    // nop
    goto L_08AEA634;
L_08AEA680:
    ctx.gpr[31] = (0x08AEA688u);
    // nop
    ctx.pc = 0x08B0BC44u;
    return;
L_08AEA688:
    // nop
    goto L_08AEA634;
L_08AEA690:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(8192));
    ctx.gpr[2] = (0u + 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA6A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6568)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[4] = (ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08AEA6CC;
      }
      goto L_08AEA6BC;
    }
L_08AEA6BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA6CC:
    ctx.gpr[31] = (0x08AEA6D4u);
    // nop
    ctx.pc = 0x08B0BC2Cu;
    return;
L_08AEA6D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6568), 0u);
    goto L_08AEA6BC;
L_08AEA6DC:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23884)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA6E8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[29]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[29]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[31]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA74C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[29] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[21] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[23] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.fpr[25] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[27] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.fpr[29] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[31] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08AEA7B0;
      }
      goto L_08AEA7AC;
    }
L_08AEA7AC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    goto L_08AEA7B0;
L_08AEA7B0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA7B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEA7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 518u, 0x08AF67ECu>(ctx, &aot_mem) && ctx.pc == 0x08AEA7C8u) goto L_08AEA7C8;
    return;
L_08AEA7C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AEA7E4;
      }
      goto L_08AEA7D0;
    }
L_08AEA7D0:
    ctx.gpr[5] = (ctx.gpr[3] + 0u);
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[7] = (0u | 61505u);
    ctx.gpr[31] = (0x08AEA7E4u);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x08AEA7E4u) goto L_08AEA7E4;
    return;
L_08AEA7E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA7F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AEA820;
      }
      goto L_08AEA814;
    }
L_08AEA814:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEA820u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AEA7F4;
L_08AEA820:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEA82Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2718u>(ctx, &aot_mem) && ctx.pc == 0x08AEA82Cu) goto L_08AEA82C;
    return;
L_08AEA82C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA840:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23884)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEA934;
      }
      goto L_08AEA868;
    }
L_08AEA868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEA8C0;
      }
      goto L_08AEA874;
    }
L_08AEA874:
    ctx.gpr[18] = (0u | 0u);
    goto L_08AEA878;
L_08AEA878:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08AEA8A8;
    }
    goto L_08AEA888;
L_08AEA888:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AEA88C;
L_08AEA88C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AEA898u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2718u>(ctx, &aot_mem) && ctx.pc == 0x08AEA898u) goto L_08AEA898;
    return;
L_08AEA898:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AEA88C;
      }
      goto L_08AEA8A0;
    }
L_08AEA8A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AEA8A8;
L_08AEA8A8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AEA878;
      }
      goto L_08AEA8B4;
    }
L_08AEA8B4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AEA8C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2718u>(ctx, &aot_mem) && ctx.pc == 0x08AEA8C0u) goto L_08AEA8C0;
    return;
L_08AEA8C0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(332));
      if (branch_taken) {
          goto L_08AEA8F4;
      }
      goto L_08AEA8CC;
    }
L_08AEA8CC:
    if (ctx.gpr[18] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
        goto L_08AEA8F8;
    }
    goto L_08AEA8D4;
L_08AEA8D4:
    if (ctx.gpr[18] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
        goto L_08AEA8F8;
    }
    goto L_08AEA8DC;
L_08AEA8DC:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AEA8E0;
L_08AEA8E0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AEA8ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2718u>(ctx, &aot_mem) && ctx.pc == 0x08AEA8ECu) goto L_08AEA8EC;
    return;
L_08AEA8EC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AEA8E0;
      }
      goto L_08AEA8F4;
    }
L_08AEA8F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    goto L_08AEA8F8;
L_08AEA8F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEA908;
      }
      goto L_08AEA900;
    }
L_08AEA900:
    ctx.gpr[31] = (0x08AEA908u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2718u>(ctx, &aot_mem) && ctx.pc == 0x08AEA908u) goto L_08AEA908;
    return;
L_08AEA908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA934;
      }
      goto L_08AEA914;
    }
L_08AEA914:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AEA920u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEA920u) goto L_08AEA920;
    return;
L_08AEA920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEA934;
      }
      goto L_08AEA92C;
    }
L_08AEA92C:
    ctx.gpr[31] = (0x08AEA934u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AEA7F4;
L_08AEA934:
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
L_08AEA950:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEA980;
      }
      goto L_08AEA96C;
    }
L_08AEA96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2230u << 16u);
        goto L_08AEA9AC;
    }
    goto L_08AEA978;
L_08AEA978:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08AEA9B8;
      }
      goto L_08AEA980;
    }
L_08AEA980:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23884)));
    ctx.gpr[31] = (0x08AEA994u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22192));
    goto L_08AEB318;
L_08AEA994:
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
L_08AEA9AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23884)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08AEA9B8;
L_08AEA9B8:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08AEA9CC;
    }
    goto L_08AEA9C0;
L_08AEA9C0:
    ctx.gpr[31] = (0x08AEA9C8u);
    // nop
    goto L_08AEAC44;
L_08AEA9C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08AEA9CC;
L_08AEA9CC:
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEAA34;
      }
      goto L_08AEA9D8;
    }
L_08AEA9D8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEAA34;
      }
      goto L_08AEA9E4;
    }
L_08AEA9E4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08AEAA04;
    }
    goto L_08AEAA04;
L_08AEAA04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEAA34;
      }
      goto L_08AEAA0C;
    }
L_08AEAA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AEAA20u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEAA20u) goto L_08AEAA20;
    return;
L_08AEAA20:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEAA50;
      }
      goto L_08AEAA2C;
    }
L_08AEAA2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEAA0C;
      }
      goto L_08AEAA34;
    }
L_08AEAA34:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEAA50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
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
L_08AEAA78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AEAB08;
      }
      goto L_08AEAAAC;
    }
L_08AEAAAC:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AEAAB8;
L_08AEAAB8:
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AEAB38;
    }
    goto L_08AEAAC4;
L_08AEAAC4:
    ctx.gpr[31] = (0x08AEAACCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AEB4C4;
L_08AEAACC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AEAB30;
    }
    goto L_08AEAAD4;
L_08AEAAD4:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AEAB08;
      }
      goto L_08AEAADC;
    }
L_08AEAADC:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEAB08:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEAB30:
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AEAB38;
L_08AEAB38:
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
        goto L_08AEAB44;
    }
    goto L_08AEAB44;
L_08AEAB44:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x08AEAB54u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 366u, 0x08AED45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEAB54u) goto L_08AEAB54;
    return;
L_08AEAB54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEAB98;
      }
      goto L_08AEAB60;
    }
L_08AEAB60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AEAB84u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AEAB84u) goto L_08AEAB84;
    return;
L_08AEAB84:
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AEAADC;
      }
      goto L_08AEAB90;
    }
L_08AEAB90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEAAB8;
      }
      goto L_08AEAB98;
    }
L_08AEAB98:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AEABBCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AEABBCu) goto L_08AEABBC;
    return;
L_08AEABBC:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEABEC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18520));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18432));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18284));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (2223u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18192));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEAC44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21312));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(484));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEAC7Cu);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08AEABEC;
L_08AEAC7C:
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(572));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AEAC90u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08AEABEC;
L_08AEAC90:
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(660));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AEACA4u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08AEABEC;
L_08AEACA4:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(472), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(480), ctx.gpr[9]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEACC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEACD4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22192));
    goto L_08AEB318;
L_08AEACD4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEACE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[6] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEAD14u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1048u, 0x08AEFD3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEAD14u) goto L_08AEAD14;
    return;
L_08AEAD14:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEAD20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEAD38u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08AEAD38u) goto L_08AEAD38;
    return;
L_08AEAD38:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AEAD5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AEAF00;
L_08AEAD5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEAD6C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEADA0;
      }
      goto L_08AEAD80;
    }
L_08AEAD80:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEAD80;
      }
      goto L_08AEADA0;
    }
L_08AEADA0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEADA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AEADF8;
      }
      goto L_08AEADE4;
    }
L_08AEADE4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AEAE24;
      }
      goto L_08AEADF0;
    }
L_08AEADF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEAE2C;
      }
      goto L_08AEADF8;
    }
L_08AEADF8:
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
L_08AEAE24:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AEAE2C;
L_08AEAE2C:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AEAE84;
      }
      goto L_08AEAE40;
    }
L_08AEAE40:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AEAE4Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08AEAD6C;
L_08AEAE4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[19]);
    ctx.gpr[31] = (0x08AEAE68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AEB4C4;
L_08AEAE68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[22]);
      if (branch_taken) {
          goto L_08AEAED0;
      }
      goto L_08AEAE70;
    }
L_08AEAE70:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AEAE40;
      }
      goto L_08AEAE80;
    }
L_08AEAE80:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08AEAE84;
L_08AEAE84:
    ctx.gpr[31] = (0x08AEAE8Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08AEAD6C;
L_08AEAE8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AEAED0:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (ctx.lo);
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
L_08AEAF00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AEB2B0;
      }
      goto L_08AEAF38;
    }
L_08AEAF38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEAF54;
      }
      goto L_08AEAF48;
    }
L_08AEAF48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AEAF68;
    }
    goto L_08AEAF54;
L_08AEAF54:
    ctx.gpr[31] = (0x08AEAF5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 194u, 0x08AEC988u>(ctx, &aot_mem) && ctx.pc == 0x08AEAF5Cu) goto L_08AEAF5C;
    return;
L_08AEAF5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEAF80;
      }
      goto L_08AEAF64;
    }
L_08AEAF64:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AEAF68;
L_08AEAF68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEAFB0;
      }
      goto L_08AEAF78;
    }
L_08AEAF78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_08AEB018;
      }
      goto L_08AEAF80;
    }
L_08AEAF80:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_08AEAFB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AEAFCC;
      }
      goto L_08AEAFBC;
    }
L_08AEAFBC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AEAFBC;
      }
      goto L_08AEAFCC;
    }
L_08AEAFCC:
    ctx.gpr[5] = (0u | 1024u);
    ctx.gpr[7] = (ctx.gpr[18] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
        goto L_08AEAFDC;
    }
    goto L_08AEAFDC;
L_08AEAFDC:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AEAFECu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEAFECu) goto L_08AEAFEC;
    return;
L_08AEAFEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08AEB2E0;
    }
    goto L_08AEAFF8;
L_08AEAFF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEAFB0;
      }
      goto L_08AEB010;
    }
L_08AEB010:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB2B0;
      }
      goto L_08AEB018;
    }
L_08AEB018:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEB15C;
      }
      goto L_08AEB020;
    }
L_08AEB020:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AEB040;
      }
      goto L_08AEB030;
    }
L_08AEB030:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AEB030;
      }
      goto L_08AEB040;
    }
L_08AEB040:
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AEB088;
      }
      goto L_08AEB04C;
    }
L_08AEB04C:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
        goto L_08AEB058;
    }
    goto L_08AEB058;
L_08AEB058:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AEB068u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AEB068u) goto L_08AEB068;
    return;
L_08AEB068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AEB13C;
      }
      goto L_08AEB088;
    }
L_08AEB088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AEB0D8;
      }
      goto L_08AEB098;
    }
L_08AEB098:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AEB0D8;
      }
      goto L_08AEB0A0;
    }
L_08AEB0A0:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AEB0ACu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AEB0ACu) goto L_08AEB0AC;
    return;
L_08AEB0AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08AEB0C0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AEA950;
L_08AEB0C0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08AEB140;
    }
    goto L_08AEB0C8;
L_08AEB0C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08AEB0CC;
L_08AEB0CC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
      if (branch_taken) {
          goto L_08AEB2E8;
      }
      goto L_08AEB0D8;
    }
L_08AEB0D8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
        goto L_08AEB114;
    }
    goto L_08AEB0E8;
L_08AEB0E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AEB0FCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEB0FCu) goto L_08AEB0FC;
    return;
L_08AEB0FC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[20]) <= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08AEB0CC;
    }
    goto L_08AEB108;
L_08AEB108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AEB140;
      }
      goto L_08AEB110;
    }
L_08AEB110:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    goto L_08AEB114;
L_08AEB114:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AEB124u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AEB124u) goto L_08AEB124;
    return;
L_08AEB124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AEB13C;
L_08AEB13C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08AEB140;
L_08AEB140:
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEB020;
      }
      goto L_08AEB154;
    }
L_08AEB154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB2B0;
      }
      goto L_08AEB15C;
    }
L_08AEB15C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB178;
      }
      goto L_08AEB164;
    }
L_08AEB164:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AEB164;
      }
      goto L_08AEB178;
    }
L_08AEB178:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AEB1A8;
      }
      goto L_08AEB180;
    }
L_08AEB180:
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x08AEB18Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 366u, 0x08AED45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB18Cu) goto L_08AEB18C;
    return;
L_08AEB18C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEB1A0;
      }
      goto L_08AEB198;
    }
L_08AEB198:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AEB1A4;
      }
      goto L_08AEB1A0;
    }
L_08AEB1A0:
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AEB1A4;
L_08AEB1A4:
    ctx.gpr[22] = (0u | 1u);
    goto L_08AEB1A8;
L_08AEB1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[23] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
        goto L_08AEB1C8;
    }
    goto L_08AEB1C8;
L_08AEB1C8:
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AEB218;
      }
      goto L_08AEB1D4;
    }
L_08AEB1D4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AEB218;
      }
      goto L_08AEB1E0;
    }
L_08AEB1E0:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AEB1ECu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AEB1ECu) goto L_08AEB1EC;
    return;
L_08AEB1EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[31] = (0x08AEB200u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AEA950;
L_08AEB200:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AEB280;
      }
      goto L_08AEB208;
    }
L_08AEB208:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08AEB20C;
L_08AEB20C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
      if (branch_taken) {
          goto L_08AEB2E8;
      }
      goto L_08AEB218;
    }
L_08AEB218:
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
        goto L_08AEB254;
    }
    goto L_08AEB228;
L_08AEB228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AEB23Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEB23Cu) goto L_08AEB23C;
    return;
L_08AEB23C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[21]) <= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08AEB20C;
    }
    goto L_08AEB248;
L_08AEB248:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AEB280;
      }
      goto L_08AEB250;
    }
L_08AEB250:
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    goto L_08AEB254;
L_08AEB254:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AEB264u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AEB264u) goto L_08AEB264;
    return;
L_08AEB264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[21]);
    goto L_08AEB280;
L_08AEB280:
    if (ctx.gpr[23] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08AEB29C;
    }
    goto L_08AEB288;
L_08AEB288:
    ctx.gpr[31] = (0x08AEB290u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AEA950;
L_08AEB290:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEB208;
      }
      goto L_08AEB298;
    }
L_08AEB298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08AEB29C;
L_08AEB29C:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[21]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEB15C;
      }
      goto L_08AEB2B0;
    }
L_08AEB2B0:
    ctx.gpr[2] = (0u | 0u);
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
L_08AEB2E0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    goto L_08AEB2E8;
L_08AEB2E8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
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
L_08AEB318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(472));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AEB384;
      }
      goto L_08AEB344;
    }
L_08AEB344:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08AEB348;
L_08AEB348:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AEB378;
      }
      goto L_08AEB354;
    }
L_08AEB354:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
        goto L_08AEB370;
    }
    goto L_08AEB360;
L_08AEB360:
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x08AEB368u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEB368u) goto L_08AEB368;
    return;
L_08AEB368:
    ctx.gpr[20] = (ctx.gpr[20] | ctx.gpr[2]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08AEB370;
L_08AEB370:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08AEB354;
      }
      goto L_08AEB378;
    }
L_08AEB378:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08AEB348;
    }
    goto L_08AEB384;
L_08AEB384:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08AEB3A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(67));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08AEB3E8;
      }
      goto L_08AEB3D4;
    }
L_08AEB3D4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
      if (branch_taken) {
          goto L_08AEB420;
      }
      goto L_08AEB3E0;
    }
L_08AEB3E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08AEB40C;
      }
      goto L_08AEB3E8;
    }
L_08AEB3E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB40C:
    ctx.gpr[31] = (0x08AEB414u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 970u, 0x08AF3FDCu>(ctx, &aot_mem) && ctx.pc == 0x08AEB414u) goto L_08AEB414;
    return;
L_08AEB414:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08AEB430;
      }
      goto L_08AEB41C;
    }
L_08AEB41C:
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    goto L_08AEB420;
L_08AEB420:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
      if (branch_taken) {
          goto L_08AEB480;
      }
      goto L_08AEB430;
    }
L_08AEB430:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 32768u);
    ctx.gpr[5] = (ctx.gpr[5] & 61440u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
        goto L_08AEB474;
    }
    goto L_08AEB444;
L_08AEB444:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (2223u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-18284));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
        goto L_08AEB474;
    }
    goto L_08AEB458;
L_08AEB458:
    ctx.gpr[4] = (ctx.gpr[4] | 1024u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1024u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 2u);
      if (branch_taken) {
          goto L_08AEB480;
      }
      goto L_08AEB474;
    }
L_08AEB474:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    goto L_08AEB480;
L_08AEB480:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB4A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEB4B8u);
    // nop
    goto L_08AEA950;
L_08AEB4B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB4C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08AEB4F0;
    }
    goto L_08AEB4E0;
L_08AEB4E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23884)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08AEB4F0;
L_08AEB4F0:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08AEB504;
    }
    goto L_08AEB4F8;
L_08AEB4F8:
    ctx.gpr[31] = (0x08AEB500u);
    // nop
    goto L_08AEAC44;
L_08AEB500:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08AEB504;
L_08AEB504:
    ctx.gpr[5] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08AEB524;
      }
      goto L_08AEB510;
    }
L_08AEB510:
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08AEB538;
      }
      goto L_08AEB51C;
    }
L_08AEB51C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08AEB5AC;
      }
      goto L_08AEB524;
    }
L_08AEB524:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB538:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08AEB554;
      }
      goto L_08AEB540;
    }
L_08AEB540:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB568;
      }
      goto L_08AEB548;
    }
L_08AEB548:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AEB5C0;
      }
      goto L_08AEB554;
    }
L_08AEB554:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB568:
    ctx.gpr[31] = (0x08AEB570u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AEA950;
L_08AEB570:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB598;
      }
      goto L_08AEB578;
    }
L_08AEB578:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08AEB548;
      }
      goto L_08AEB598;
    }
L_08AEB598:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB5AC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_08AEB5C4;
    }
    goto L_08AEB5B4;
L_08AEB5B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEB5D4;
      }
      goto L_08AEB5C0;
    }
L_08AEB5C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08AEB5C4;
L_08AEB5C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB5F0;
      }
      goto L_08AEB5CC;
    }
L_08AEB5CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08AEB5FC;
      }
      goto L_08AEB5D4;
    }
L_08AEB5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB5F0:
    ctx.gpr[31] = (0x08AEB5F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AEB3A8;
L_08AEB5F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08AEB5FC;
L_08AEB5FC:
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2223u << 16u);
      if (branch_taken) {
          goto L_08AEB614;
      }
      goto L_08AEB608;
    }
L_08AEB608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08AEB614u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19288));
    goto L_08AEB318;
L_08AEB614:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AEB630u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEB630u) goto L_08AEB630;
    return;
L_08AEB630:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AEB684;
      }
      goto L_08AEB650;
    }
L_08AEB650:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08AEB664;
      }
      goto L_08AEB658;
    }
L_08AEB658:
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AEB670;
      }
      goto L_08AEB664;
    }
L_08AEB664:
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AEB670;
L_08AEB670:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB684:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB698:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[11]);
    ctx.gpr[6] = (0u | 520u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23884)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEB6FCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1048u, 0x08AEFD3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB6FCu) goto L_08AEB6FC;
    return;
L_08AEB6FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB710:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB718:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[11]);
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEB754u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08AEB754u) goto L_08AEB754;
    return;
L_08AEB754:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18672));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23884)));
    ctx.gpr[5] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08AEB798u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AEBBF4;
L_08AEB798:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB7A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEB7CCu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 10u, 0x08AF4090u>(ctx, &aot_mem) && ctx.pc == 0x08AEB7CCu) goto L_08AEB7CC;
    return;
L_08AEB7CC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08AEB7E4;
    }
    goto L_08AEB7D4;
L_08AEB7D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEB7F0;
      }
      goto L_08AEB7E4;
    }
L_08AEB7E4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AEB7F0;
L_08AEB7F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB800:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] & 256u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AEB854;
      }
      goto L_08AEB834;
    }
L_08AEB834:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AEB84Cu);
    ctx.gpr[7] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 5u, 0x08AF4034u>(ctx, &aot_mem) && ctx.pc == 0x08AEB84Cu) goto L_08AEB84C;
    return;
L_08AEB84C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AEB854;
L_08AEB854:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AEB87Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 20u, 0x08AF4140u>(ctx, &aot_mem) && ctx.pc == 0x08AEB87Cu) goto L_08AEB87C;
    return;
L_08AEB87C:
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
L_08AEB894:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEB8B8u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 5u, 0x08AF4034u>(ctx, &aot_mem) && ctx.pc == 0x08AEB8B8u) goto L_08AEB8B8;
    return;
L_08AEB8B8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08AEB8D4;
      }
      goto L_08AEB8C4;
    }
L_08AEB8C4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AEB8E0;
      }
      goto L_08AEB8D4;
    }
L_08AEB8D4:
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    goto L_08AEB8E0;
L_08AEB8E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB8F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AEB904u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 965u, 0x08AF3F88u>(ctx, &aot_mem) && ctx.pc == 0x08AEB904u) goto L_08AEB904;
    return;
L_08AEB904:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB910:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AEB9C0;
      }
      goto L_08AEB934;
    }
L_08AEB934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08AEB950;
    }
    goto L_08AEB940;
L_08AEB940:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23884)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08AEB950;
L_08AEB950:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08AEB964;
    }
    goto L_08AEB958;
L_08AEB958:
    ctx.gpr[31] = (0x08AEB960u);
    // nop
    goto L_08AEAC44;
L_08AEB960:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08AEB964;
L_08AEB964:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08AEB9E4;
      }
      goto L_08AEB980;
    }
L_08AEB980:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08AEB9C0;
      }
      goto L_08AEB988;
    }
L_08AEB988:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
      if (branch_taken) {
          goto L_08AEB9E0;
      }
      goto L_08AEB990;
    }
L_08AEB990:
    ctx.gpr[31] = (0x08AEB998u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AEA950;
L_08AEB998:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB9C0;
      }
      goto L_08AEB9A0;
    }
L_08AEB9A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08AEB9DC;
      }
      goto L_08AEB9C0;
    }
L_08AEB9C0:
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
L_08AEB9DC:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    goto L_08AEB9E0;
L_08AEB9E0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AEB9E4;
L_08AEB9E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEBA68;
      }
      goto L_08AEB9F4;
    }
L_08AEB9F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AEBA30;
      }
      goto L_08AEBA04;
    }
L_08AEBA04:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (0u | 68u);
    ctx.gpr[31] = (0x08AEBA14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5928));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 238u, 0x08AF5360u>(ctx, &aot_mem) && ctx.pc == 0x08AEBA14u) goto L_08AEBA14;
    return;
L_08AEBA14:
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
L_08AEBA30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
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
L_08AEBA68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AEBAB4;
      }
      goto L_08AEBA74;
    }
L_08AEBA74:
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
        goto L_08AEBAB8;
    }
    goto L_08AEBA80;
L_08AEBA80:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-1)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AEBAB4;
      }
      goto L_08AEBA8C;
    }
L_08AEBA8C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AEBAB4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_08AEBAB8;
L_08AEBAB8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(66));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AEBAFC:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (0u | 94u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AEBB24;
      }
      goto L_08AEBB10;
    }
L_08AEBB10:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AEBB28;
      }
      goto L_08AEBB24;
    }
L_08AEBB24:
    ctx.gpr[8] = (0u | 0u);
    goto L_08AEBB28;
L_08AEBB28:
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[3] + ctx.gpr[4]);
    goto L_08AEBB30;
L_08AEBB30:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[3] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEBB30;
      }
      goto L_08AEBB44;
    }
L_08AEBB44:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AEBB64;
      }
      goto L_08AEBB4C;
    }
L_08AEBB4C:
    ctx.gpr[8] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[7] = (0u | 93u);
    ctx.gpr[6] = (0u | 45u);
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEBB6C;
      }
      goto L_08AEBB64;
    }
L_08AEBB64:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEBB6C:
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08AEBB74;
L_08AEBB74:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AEBBEC;
      }
      goto L_08AEBB7C;
    }
L_08AEBB7C:
    if (ctx.gpr[10] == ctx.gpr[6]) {
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
        goto L_08AEBBA0;
    }
    goto L_08AEBB84;
L_08AEBB84:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08AEBB98;
      }
      goto L_08AEBB8C;
    }
L_08AEBB8C:
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AEBB6C;
      }
      goto L_08AEBB98;
    }
L_08AEBB98:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEBBA0:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[7];
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEBBB4;
      }
      goto L_08AEBBA8;
    }
L_08AEBBA8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
        goto L_08AEBBC0;
    }
    goto L_08AEBBB4;
L_08AEBBB4:
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(45));
      if (branch_taken) {
          goto L_08AEBB6C;
      }
      goto L_08AEBBC0;
    }
L_08AEBBC0:
    ctx.gpr[11] = (ctx.gpr[9] | 0u);
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[11]);
    goto L_08AEBBCC;
L_08AEBBCC:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08AEBBCC;
      }
      goto L_08AEBBE4;
    }
L_08AEBBE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AEBB74;
      }
      goto L_08AEBBEC;
    }
L_08AEBBEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEBBF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-720));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23880));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[4]);
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11588));
    ctx.gpr[5] = (2223u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11216));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24896));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[6]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23884)));
    ctx.gpr[20] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[22]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-22744)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), ctx.gpr[31]);
    goto L_08AEBC88;
L_08AEBC88:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(644));
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AEBC9Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 242u, 0x08AECC34u>(ctx, &aot_mem) && ctx.pc == 0x08AEBC9Cu) goto L_08AEBC9C;
    return;
L_08AEBC9C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[20]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 116u, 0x08AEC58Cu>(ctx, &aot_mem); return;
      }
      goto L_08AEBCAC;
    }
L_08AEBCAC:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 37u);
      if (branch_taken) {
          goto L_08AEBD24;
      }
      goto L_08AEBCB8;
    }
L_08AEBCB8:
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 37u);
      if (branch_taken) {
          goto L_08AEBD24;
      }
      goto L_08AEBCCC;
    }
L_08AEBCCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08AEBCD0;
L_08AEBCD0:
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AEBCEC;
    }
    goto L_08AEBCD8;
L_08AEBCD8:
    ctx.gpr[31] = (0x08AEBCE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AEB4C4;
L_08AEBCE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 116u, 0x08AEC58Cu>(ctx, &aot_mem); return;
      }
      goto L_08AEBCE8;
    }
L_08AEBCE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AEBCEC;
L_08AEBCEC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (2230u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 188u, 0x08AEC8E8u>(ctx, &aot_mem); return;
    }
    goto L_08AEBD04;
L_08AEBD04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AEBCD0;
      }
      goto L_08AEBD24;
    }
L_08AEBD24:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AEBD70;
      }
      goto L_08AEBD2C;
    }
L_08AEBD2C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08AEBD38;
L_08AEBD38:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AEBFA8;
      }
      goto L_08AEBD48;
    }
L_08AEBD48:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 121 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
        goto L_08AEBFAC;
    }
    goto L_08AEBD54;
L_08AEBD54:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-5856)));
    jump_target = ctx.gpr[1];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEBD6C:
    ctx.gpr[16] = (0u | 0u);
    goto L_08AEBD70;
L_08AEBD70:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[23] - ctx.gpr[20]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 187u, 0x08AEC8E4u>(ctx, &aot_mem); return;
      }
      goto L_08AEBD7C;
    }
L_08AEBD7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AEBD9C;
    }
    goto L_08AEBD88;
L_08AEBD88:
    ctx.gpr[31] = (0x08AEBD90u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AEB4C4;
L_08AEBD90:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
        (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 190u, 0x08AEC8FCu>(ctx, &aot_mem); return;
    }
    goto L_08AEBD98;
L_08AEBD98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AEBD9C;
L_08AEBD9C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 116u, 0x08AEC58Cu>(ctx, &aot_mem); return;
      }
      goto L_08AEBDAC;
    }
L_08AEBDAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEBD7C;
      }
      goto L_08AEBDD4;
    }
L_08AEBDD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 188u, 0x08AEC8E8u>(ctx, &aot_mem); return;
      }
      goto L_08AEBDDC;
    }
L_08AEBDDC:
    ctx.gpr[16] = (ctx.gpr[16] | 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEBD38;
      }
      goto L_08AEBDE8;
    }
L_08AEBDE8:
    ctx.gpr[16] = (ctx.gpr[16] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEBD38;
      }
      goto L_08AEBDF4;
    }
L_08AEBDF4:
    ctx.gpr[16] = (ctx.gpr[16] | 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEBD38;
      }
      goto L_08AEBE00;
    }
L_08AEBE00:
    ctx.gpr[16] = (ctx.gpr[16] | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEBD38;
      }
      goto L_08AEBE0C;
    }
L_08AEBE0C:
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEBD38;
      }
      goto L_08AEBE28;
    }
L_08AEBE28:
    ctx.gpr[16] = (ctx.gpr[16] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEBE38;
      }
      goto L_08AEBE34;
    }
L_08AEBE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08AEBE38;
L_08AEBE38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AEBFD0;
      }
      goto L_08AEBE4C;
    }
L_08AEBE4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AEBFD0;
      }
      goto L_08AEBE64;
    }
L_08AEBE64:
    ctx.gpr[16] = (ctx.gpr[16] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEBE74;
      }
      goto L_08AEBE70;
    }
L_08AEBE70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08AEBE74;
L_08AEBE74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AEBFD0;
      }
      goto L_08AEBE88;
    }
L_08AEBE88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[17] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[21] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEBFD0;
      }
      goto L_08AEBEA0;
    }
L_08AEBEA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[16] = (ctx.gpr[16] | 256u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEBFD0;
      }
      goto L_08AEBEBC;
    }
L_08AEBEBC:
    ctx.gpr[17] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEBFD0;
      }
      goto L_08AEBEC8;
    }
L_08AEBEC8:
    ctx.gpr[17] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEBFD0;
      }
      goto L_08AEBED4;
    }
L_08AEBED4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08AEBEE0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08AEBAFC;
L_08AEBEE0:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[16] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEBFD0;
      }
      goto L_08AEBEF4;
    }
L_08AEBEF4:
    ctx.gpr[16] = (ctx.gpr[16] | 32u);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEBFD0;
      }
      goto L_08AEBF04;
    }
L_08AEBF04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[16] = (ctx.gpr[16] | 272u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AEBFD0;
      }
      goto L_08AEBF20;
    }
L_08AEBF20:
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 188u, 0x08AEC8E8u>(ctx, &aot_mem); return;
      }
      goto L_08AEBF2C;
    }
L_08AEBF2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[5] = (ctx.gpr[16] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AEBF4C;
      }
      goto L_08AEBF3C;
    }
L_08AEBF3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[22]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 187u, 0x08AEC8E4u>(ctx, &aot_mem); return;
      }
      goto L_08AEBF4C;
    }
L_08AEBF4C:
    ctx.gpr[5] = (ctx.gpr[16] & 1u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
        goto L_08AEBF68;
    }
    goto L_08AEBF58;
L_08AEBF58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 187u, 0x08AEC8E4u>(ctx, &aot_mem); return;
      }
      goto L_08AEBF68;
    }
L_08AEBF68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 187u, 0x08AEC8E4u>(ctx, &aot_mem); return;
      }
      goto L_08AEBF74;
    }
L_08AEBF74:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEBFA8:
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    goto L_08AEBFAC;
L_08AEBFAC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] | 1u);
        goto L_08AEBFC0;
    }
    goto L_08AEBFC0;
L_08AEBFC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
    goto L_08AEBFD0;
L_08AEBFD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-449));
      if (branch_taken) {
          goto L_08AEBFE8;
      }
      goto L_08AEBFD8;
    }
L_08AEBFD8:
    ctx.gpr[31] = (0x08AEBFE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AEB4C4;
L_08AEBFE0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
        (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 190u, 0x08AEC8FCu>(ctx, &aot_mem); return;
    }
    goto L_08AEBFE8;
L_08AEBFE8:
    ctx.gpr[4] = (ctx.gpr[16] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 9u, 0x08AEC060u>(ctx, &aot_mem); return;
      }
      goto L_08AEBFF4;
    }
L_08AEBFF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.pc = 0x08AEC000u; return;
}

void recomp_unit_0185(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0185_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_185(Runtime &runtime) {
    runtime.register_generated_unit(185u, 0x08AE8000u, 16384u, &recomp_unit_0185, &recomp_unit_0185_entry);
    runtime.register_function(0x08AE8004u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE801Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8024u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8034u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8040u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE805Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE806Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8078u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8084u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE808Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8194u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8208u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE822Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8244u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8260u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8278u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8280u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE844Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8454u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE845Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8460u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE846Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8474u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8484u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8494u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE849Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8508u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8518u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8520u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE852Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8538u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8540u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8548u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8550u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8564u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8574u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE857Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8588u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8594u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE859Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE860Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE861Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8624u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8630u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE863Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8644u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE864Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8650u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8660u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8670u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8678u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8684u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8690u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8698u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8708u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8718u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8720u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE872Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8738u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8740u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8748u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8750u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8760u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8770u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8778u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8784u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8790u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8798u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8800u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8808u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8814u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8824u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE882Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8834u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE883Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE884Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8850u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8858u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8870u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8878u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8888u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8890u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8908u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8914u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8920u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8928u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8938u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8940u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8958u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8970u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8978u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE899Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A08u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A10u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A40u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AA8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8ABCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8ADCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C60u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CA0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CA8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8ED0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8ED8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FBCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FDCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9030u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE906Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9074u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9100u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE910Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9114u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE911Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9120u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9134u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9148u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9158u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9160u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9188u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9190u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9200u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE920Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE921Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE922Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9234u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9244u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9264u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9278u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9280u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9288u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9298u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9310u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE931Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9330u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9340u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9354u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9364u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE936Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9374u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9384u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE938Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9394u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE939Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9400u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9408u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9420u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9438u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9440u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9468u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9470u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9478u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9484u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE948Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9498u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9504u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE950Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9520u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9528u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9534u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE953Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9544u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9574u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9600u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE960Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9614u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9620u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9628u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9630u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9638u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9640u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE964Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9658u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9660u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9670u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9690u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE969Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9704u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE970Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9714u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE971Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9728u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9730u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9734u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE973Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9760u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9780u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9820u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE982Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9840u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9844u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9858u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9860u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9868u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE987Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE988Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9904u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE990Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE991Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9924u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE992Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9934u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9968u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9974u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE997Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE998Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE999Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A5Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9AA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9AD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B78u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9BA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9CA8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9CB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9CB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9CC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9CCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9CDCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9CE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E40u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9ED0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9ED8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EE0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F08u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F40u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F78u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FE0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FF8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA000u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA008u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA010u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA018u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA020u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA048u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA070u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA080u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA1A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA1ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA1C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA1CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA1DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA200u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA20Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA214u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA21Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA228u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA234u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA23Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA240u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA24Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA254u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA25Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA260u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA264u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA274u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA28Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA294u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA29Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA304u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA30Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA32Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA334u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA33Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA350u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA358u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA360u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA368u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA370u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA378u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA390u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA398u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA400u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA40Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA410u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA414u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA42Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA43Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA444u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA45Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA460u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA468u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA480u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA494u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA49Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA504u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA514u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA518u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA530u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA538u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA540u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA548u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA550u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA558u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA560u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA568u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA588u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA594u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA59Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA604u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA60Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA61Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA628u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA630u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA634u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA63Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA644u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA648u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA658u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA660u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA668u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA670u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA678u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA680u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA688u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA690u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA74Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA814u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA820u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA82Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA840u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA868u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA874u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA878u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA888u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA88Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA898u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA900u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA908u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA914u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA920u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA92Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA934u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA950u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA96Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA978u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA980u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA994u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA78u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAACCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAADCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB08u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB60u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEABBCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEABECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEACA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEACC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEACD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEACE0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD5Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADA0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADA8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADF8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE40u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAED0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF5Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF78u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAFB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAFBCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAFCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAFDCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAFECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAFF8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB010u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB018u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB020u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB030u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB040u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB04Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB058u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB068u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB088u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB098u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB108u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB110u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB114u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB124u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB13Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB140u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB154u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB15Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB164u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB178u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB180u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB18Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB198u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB200u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB208u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB20Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB218u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB228u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB23Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB248u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB250u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB254u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB264u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB280u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB288u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB290u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB298u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB29Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB318u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB344u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB348u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB354u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB360u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB368u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB370u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB378u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB384u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB40Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB414u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB41Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB420u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB430u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB444u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB458u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB474u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB480u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB500u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB504u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB510u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB51Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB524u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB538u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB540u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB548u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB554u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB568u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB570u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB578u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB598u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB608u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB614u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB630u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB650u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB658u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB664u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB670u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB684u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB698u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB710u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB718u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB754u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB798u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB800u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB834u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB84Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB854u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB87Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB894u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB904u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB910u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB934u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB940u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB950u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB958u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB960u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB964u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB980u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB988u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB990u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB998u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB10u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBA0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBA8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC88u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCE0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD88u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDDCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE88u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEA0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEBCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBED4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEE0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFA8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFE0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFF4u, &recomp_unit_0185, "recomp_unit_0185");
}
} // namespace psprecomp
