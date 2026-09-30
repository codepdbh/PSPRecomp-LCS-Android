#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0076[4074] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0,
    0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 13,
    14, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 18, 19, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 25,
    0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0,
    0, 37, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0, 0,
    45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 52, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61,
    0, 62, 0, 63, 0, 0, 64, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 78, 79, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 84, 85, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 90,
    0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 98, 99, 0, 0, 100, 0, 101, 0, 0, 102, 0,
    0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 0,
    0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0, 120, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 126,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0,
    135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 138, 0, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0,
    0, 145, 0, 146, 0, 147, 0, 0, 148, 0, 149, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158,
    0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 162, 0, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 167, 168, 0, 0, 169, 0, 0, 170,
    0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 173, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0,
    0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 208, 0, 0, 0, 209, 0, 0, 0, 0, 210, 211, 0, 0, 0, 212, 0, 0, 0, 0, 213, 214,
    0, 0, 0, 215, 0, 0, 0, 0, 216, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219, 220, 0, 0, 0, 221, 0, 0, 0, 0, 222, 223, 0, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 243, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 260, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275,
    0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 0,
    0, 285, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0,
    294, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 303, 0,
    304, 0, 305, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 316, 0, 317, 0, 318, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 322, 323,
    0, 324, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 332, 0, 0,
    333, 0, 0, 334, 0, 0, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 340, 341, 0, 0, 0, 342, 0, 0, 343, 0,
    0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 0, 347, 0, 348, 0, 0, 349, 0, 0, 350, 0, 351, 0, 352, 0, 353, 0, 0, 0, 0, 0, 354,
    0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0, 359, 0, 360, 0, 361, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 363, 0, 364, 0, 365, 0, 0, 366, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0,
    0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0,
    376, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 381, 0, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0, 0, 387, 0, 388, 0,
    389, 0, 0, 390, 0, 0, 391, 0, 392, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 397, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0,
    401, 0, 0, 402, 0, 0, 403, 0, 404, 0, 0, 405, 0, 406, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0,
    410, 0, 411, 0, 0, 0, 0, 0, 412, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 417, 0, 0, 0, 418, 0, 419, 0, 420, 0, 421, 0, 0, 422, 0, 423, 0,
    424, 0, 425, 0, 0, 426, 0, 427, 0, 0, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0,
    435, 0, 0, 436, 0, 437, 0, 438, 0, 0, 439, 0, 0, 0, 440, 0, 441, 0, 442, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 446, 0, 447,
    0, 448, 0, 0, 449, 0, 450, 0, 451, 0, 452, 0, 453, 0, 454, 0, 0, 455, 0, 456, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 463, 0, 464, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 0, 471, 0, 0, 0, 472, 0, 473, 0, 474,
    0, 475, 0, 0, 476, 0, 477, 0, 478, 0, 479, 0, 0, 480, 0, 481, 0, 0, 0, 482, 0, 483, 0, 484, 0, 485, 0, 0, 0, 486, 0, 0,
    487, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 0, 491, 0, 492, 0, 493, 0, 0, 494, 0, 0, 0, 495, 0, 496, 0, 497, 0, 498, 0, 0,
    499, 0, 0, 0, 500, 0, 501, 0, 502, 0, 503, 0, 0, 504, 0, 505, 0, 506, 0, 507, 0, 508, 0, 509, 0, 0, 510, 0, 511, 0, 512, 0,
    513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 517,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 520, 0, 0, 521, 0, 522, 0, 0, 523, 0, 0, 524, 0, 525, 0,
    0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0,
    0, 534, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 538, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0,
    0, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0,
    547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 551, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0,
    555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 560, 561,
    0, 562, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 566, 567, 568, 0, 569, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0,
    0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 574, 575, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 579, 580, 0, 581, 0, 0,
    0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 584, 585, 0, 586, 0, 0, 0, 587, 0, 0, 0, 588, 0, 589, 590, 591, 0, 592, 0, 0, 0, 0,
    0, 593, 0, 0, 0, 594, 595, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0,
    0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 604, 0, 605,
    0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 608, 0, 609, 0, 0, 610, 0, 611, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 614, 0,
    0, 0, 615, 616, 0, 0, 617, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0,
    625, 0, 626, 627, 0, 0, 0, 628, 0, 0, 0, 0, 629, 0, 0, 630, 0, 0, 0, 631, 0, 0, 632, 0, 0, 633, 0, 634, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 637, 0, 638, 0, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 641, 0, 642, 0,
    0, 643, 0, 644, 0, 0, 0, 0, 645, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 648, 649, 0, 0, 650, 0, 651, 0, 0, 0, 0, 652, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 656,
    0, 657, 0, 0, 0, 658, 659, 0, 0, 660, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0,
    0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0,
    0, 673, 0, 0, 674, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 0, 0, 0,
    0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0,
    0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 690, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    692, 0, 0, 0, 693, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0,
    698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0,
    0, 0, 704, 0, 0, 0, 705, 0, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 710, 0,
    0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0,
    716, 0, 0, 0, 717, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 722, 0, 0, 0, 0,
    0, 723, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727,
    0, 0, 0, 0, 0, 728, 0, 0, 0, 729, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 733, 0,
    0, 734, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 738, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0,
    0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 0, 745, 0, 0, 746, 0,
    0, 0, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 756, 0, 0,
    0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 0,
    760, 0, 0, 761, 0, 0, 762, 0, 0, 763, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 765, 0, 0, 766, 0, 0, 767, 0, 0, 768, 0, 0, 769, 0, 0, 770, 0, 0, 771, 0, 0, 772, 0, 0, 0, 0, 773,
    0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 777, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    779, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 782, 0, 0, 0, 783, 0, 784, 0, 785, 0, 786, 0, 0,
    0, 0, 787, 0, 0, 788, 0, 789, 0, 790, 0, 0, 0, 791, 0, 0, 792, 0, 793, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 796, 0, 797, 798, 799, 0, 0, 0, 800, 801, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0,
    803, 804, 805, 0, 0, 0, 806, 807, 0, 0, 0, 808, 0, 0, 0, 809, 0, 0, 0, 810, 0, 0, 0, 811, 812, 813, 0, 0, 0, 814, 815, 0,
    0, 0, 816, 817, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 819, 820, 821, 0, 0, 0, 822, 823, 0, 0, 0, 0, 0, 824, 0, 0, 0,
    0, 0, 825, 826, 827, 0, 0, 0, 828, 829, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 831, 832, 833, 0, 0, 0, 834, 835, 0, 0, 0,
    836, 837, 0, 0, 0, 838, 839, 0, 0, 0, 0, 0, 840, 841, 0, 0, 0, 842, 843, 0, 844, 0, 0, 0, 0, 845, 0, 846, 847, 0, 0, 0,
    0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 849, 0, 0, 850, 0, 0, 851, 0, 0, 852, 0, 0, 853, 0, 0, 854, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 857, 0, 0, 858, 0, 0, 859, 0, 0, 860, 0, 0, 861, 0, 0, 862, 0, 0, 863, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 864, 0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 868, 0, 0, 869,
};
void recomp_unit_0076_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08934000u;
        entry_id = (entry_delta < 16296u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0076[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08934000;
    case 2u: goto L_08934050;
    case 3u: goto L_08934068;
    case 4u: goto L_08934078;
    case 5u: goto L_08934088;
    case 6u: goto L_0893409C;
    case 7u: goto L_089340AC;
    case 8u: goto L_089340CC;
    case 9u: goto L_089340D0;
    case 10u: goto L_089340DC;
    case 11u: goto L_089340EC;
    case 12u: goto L_089340F8;
    case 13u: goto L_089340FC;
    case 14u: goto L_08934100;
    case 15u: goto L_08934108;
    case 16u: goto L_08934110;
    case 17u: goto L_08934120;
    case 18u: goto L_0893412C;
    case 19u: goto L_08934130;
    case 20u: goto L_08934134;
    case 21u: goto L_0893413C;
    case 22u: goto L_0893415C;
    case 23u: goto L_08934168;
    case 24u: goto L_08934174;
    case 25u: goto L_0893417C;
    case 26u: goto L_08934184;
    case 27u: goto L_0893418C;
    case 28u: goto L_08934194;
    case 29u: goto L_089341AC;
    case 30u: goto L_089341B8;
    case 31u: goto L_089341C0;
    case 32u: goto L_089341D8;
    case 33u: goto L_08934200;
    case 34u: goto L_08934238;
    case 35u: goto L_08934250;
    case 36u: goto L_08934264;
    case 37u: goto L_08934284;
    case 38u: goto L_0893428C;
    case 39u: goto L_08934294;
    case 40u: goto L_0893429C;
    case 41u: goto L_089342B0;
    case 42u: goto L_089342E0;
    case 43u: goto L_089342E8;
    case 44u: goto L_089342F4;
    case 45u: goto L_08934300;
    case 46u: goto L_08934314;
    case 47u: goto L_08934338;
    case 48u: goto L_08934344;
    case 49u: goto L_08934354;
    case 50u: goto L_0893435C;
    case 51u: goto L_0893438C;
    case 52u: goto L_08934390;
    case 53u: goto L_089343A8;
    case 54u: goto L_089343B4;
    case 55u: goto L_089343BC;
    case 56u: goto L_089343C4;
    case 57u: goto L_089343CC;
    case 58u: goto L_089343D4;
    case 59u: goto L_089343E0;
    case 60u: goto L_089343F4;
    case 61u: goto L_089343FC;
    case 62u: goto L_08934404;
    case 63u: goto L_0893440C;
    case 64u: goto L_08934418;
    case 65u: goto L_0893441C;
    case 66u: goto L_08934424;
    case 67u: goto L_0893442C;
    case 68u: goto L_08934450;
    case 69u: goto L_0893445C;
    case 70u: goto L_08934470;
    case 71u: goto L_0893447C;
    case 72u: goto L_0893449C;
    case 73u: goto L_089344A4;
    case 74u: goto L_089344B0;
    case 75u: goto L_089344BC;
    case 76u: goto L_089344CC;
    case 77u: goto L_089344DC;
    case 78u: goto L_089344E4;
    case 79u: goto L_089344E8;
    case 80u: goto L_089344F4;
    case 81u: goto L_0893451C;
    case 82u: goto L_08934528;
    case 83u: goto L_08934538;
    case 84u: goto L_08934540;
    case 85u: goto L_08934544;
    case 86u: goto L_08934550;
    case 87u: goto L_08934558;
    case 88u: goto L_08934564;
    case 89u: goto L_08934574;
    case 90u: goto L_0893457C;
    case 91u: goto L_08934584;
    case 92u: goto L_08934594;
    case 93u: goto L_089345A0;
    case 94u: goto L_089345A8;
    case 95u: goto L_089345B4;
    case 96u: goto L_089345C4;
    case 97u: goto L_089345CC;
    case 98u: goto L_089345D4;
    case 99u: goto L_089345D8;
    case 100u: goto L_089345E4;
    case 101u: goto L_089345EC;
    case 102u: goto L_089345F8;
    case 103u: goto L_08934608;
    case 104u: goto L_08934610;
    case 105u: goto L_08934620;
    case 106u: goto L_0893462C;
    case 107u: goto L_08934634;
    case 108u: goto L_0893463C;
    case 109u: goto L_08934658;
    case 110u: goto L_08934668;
    case 111u: goto L_08934670;
    case 112u: goto L_0893468C;
    case 113u: goto L_089346A8;
    case 114u: goto L_089346B4;
    case 115u: goto L_089346BC;
    case 116u: goto L_089346C4;
    case 117u: goto L_089346D0;
    case 118u: goto L_089346DC;
    case 119u: goto L_089346E4;
    case 120u: goto L_089346F0;
    case 121u: goto L_08934700;
    case 122u: goto L_08934734;
    case 123u: goto L_08934750;
    case 124u: goto L_08934760;
    case 125u: goto L_08934774;
    case 126u: goto L_0893477C;
    case 127u: goto L_089347B8;
    case 128u: goto L_089347C4;
    case 129u: goto L_08934828;
    case 130u: goto L_0893483C;
    case 131u: goto L_08934844;
    case 132u: goto L_08934850;
    case 133u: goto L_08934868;
    case 134u: goto L_08934874;
    case 135u: goto L_08934880;
    case 136u: goto L_0893488C;
    case 137u: goto L_089348A8;
    case 138u: goto L_089348AC;
    case 139u: goto L_089348BC;
    case 140u: goto L_089348C4;
    case 141u: goto L_089348D4;
    case 142u: goto L_089348DC;
    case 143u: goto L_089348EC;
    case 144u: goto L_089348F4;
    case 145u: goto L_08934904;
    case 146u: goto L_0893490C;
    case 147u: goto L_08934914;
    case 148u: goto L_08934920;
    case 149u: goto L_08934928;
    case 150u: goto L_0893492C;
    case 151u: goto L_08934938;
    case 152u: goto L_08934944;
    case 153u: goto L_08934954;
    case 154u: goto L_0893495C;
    case 155u: goto L_08934964;
    case 156u: goto L_0893496C;
    case 157u: goto L_08934974;
    case 158u: goto L_0893497C;
    case 159u: goto L_08934984;
    case 160u: goto L_0893498C;
    case 161u: goto L_089349AC;
    case 162u: goto L_089349B0;
    case 163u: goto L_089349BC;
    case 164u: goto L_089349C4;
    case 165u: goto L_089349CC;
    case 166u: goto L_089349D8;
    case 167u: goto L_089349E0;
    case 168u: goto L_089349E4;
    case 169u: goto L_089349F0;
    case 170u: goto L_089349FC;
    case 171u: goto L_08934A04;
    case 172u: goto L_08934A40;
    case 173u: goto L_08934A84;
    case 174u: goto L_08934A8C;
    case 175u: goto L_08934A94;
    case 176u: goto L_08934A9C;
    case 177u: goto L_08934AB8;
    case 178u: goto L_08934AD0;
    case 179u: goto L_08934AD8;
    case 180u: goto L_08934AE0;
    case 181u: goto L_08934B10;
    case 182u: goto L_08934B20;
    case 183u: goto L_08934B90;
    case 184u: goto L_08934BA4;
    case 185u: goto L_08934BB0;
    case 186u: goto L_08934BCC;
    case 187u: goto L_08934BE8;
    case 188u: goto L_08934C10;
    case 189u: goto L_08934C1C;
    case 190u: goto L_08934C2C;
    case 191u: goto L_08934C38;
    case 192u: goto L_08934C44;
    case 193u: goto L_08934C50;
    case 194u: goto L_08934C5C;
    case 195u: goto L_08934C68;
    case 196u: goto L_08934CC8;
    case 197u: goto L_08934CD4;
    case 198u: goto L_08934CF8;
    case 199u: goto L_08934D34;
    case 200u: goto L_08934D44;
    case 201u: goto L_08934D60;
    case 202u: goto L_08934DB0;
    case 203u: goto L_08934DC4;
    case 204u: goto L_08934DE0;
    case 205u: goto L_08934DF4;
    case 206u: goto L_08934E14;
    case 207u: goto L_08934E28;
    case 208u: goto L_08934E2C;
    case 209u: goto L_08934E3C;
    case 210u: goto L_08934E50;
    case 211u: goto L_08934E54;
    case 212u: goto L_08934E64;
    case 213u: goto L_08934E78;
    case 214u: goto L_08934E7C;
    case 215u: goto L_08934E8C;
    case 216u: goto L_08934EA0;
    case 217u: goto L_08934EA4;
    case 218u: goto L_08934EB4;
    case 219u: goto L_08934EC8;
    case 220u: goto L_08934ECC;
    case 221u: goto L_08934EDC;
    case 222u: goto L_08934EF0;
    case 223u: goto L_08934EF4;
    case 224u: goto L_08934F0C;
    case 225u: goto L_08934F20;
    case 226u: goto L_08934F38;
    case 227u: goto L_08934F44;
    case 228u: goto L_08934F50;
    case 229u: goto L_08934F60;
    case 230u: goto L_08934F6C;
    case 231u: goto L_08934F74;
    case 232u: goto L_08934FB4;
    case 233u: goto L_08935000;
    case 234u: goto L_08935008;
    case 235u: goto L_08935010;
    case 236u: goto L_08935018;
    case 237u: goto L_08935034;
    case 238u: goto L_08935058;
    case 239u: goto L_0893509C;
    case 240u: goto L_089350BC;
    case 241u: goto L_08935130;
    case 242u: goto L_08935138;
    case 243u: goto L_08935140;
    case 244u: goto L_08935148;
    case 245u: goto L_08935158;
    case 246u: goto L_08935174;
    case 247u: goto L_08935180;
    case 248u: goto L_0893519C;
    case 249u: goto L_089351A4;
    case 250u: goto L_089351B4;
    case 251u: goto L_089351C8;
    case 252u: goto L_089351E4;
    case 253u: goto L_089351FC;
    case 254u: goto L_08935200;
    case 255u: goto L_089352C4;
    case 256u: goto L_089352DC;
    case 257u: goto L_089352F0;
    case 258u: goto L_08935308;
    case 259u: goto L_08935310;
    case 260u: goto L_08935328;
    case 261u: goto L_0893532C;
    case 262u: goto L_08935354;
    case 263u: goto L_08935384;
    case 264u: goto L_089353A4;
    case 265u: goto L_089353AC;
    case 266u: goto L_089353B4;
    case 267u: goto L_089353C4;
    case 268u: goto L_08935448;
    case 269u: goto L_08935458;
    case 270u: goto L_0893548C;
    case 271u: goto L_089354B0;
    case 272u: goto L_08935504;
    case 273u: goto L_08935510;
    case 274u: goto L_08935548;
    case 275u: goto L_0893557C;
    case 276u: goto L_0893558C;
    case 277u: goto L_0893559C;
    case 278u: goto L_089355A8;
    case 279u: goto L_089355B4;
    case 280u: goto L_089355C0;
    case 281u: goto L_089355CC;
    case 282u: goto L_089355D8;
    case 283u: goto L_089355E4;
    case 284u: goto L_089355F0;
    case 285u: goto L_08935604;
    case 286u: goto L_0893561C;
    case 287u: goto L_08935624;
    case 288u: goto L_0893563C;
    case 289u: goto L_08935644;
    case 290u: goto L_08935650;
    case 291u: goto L_0893565C;
    case 292u: goto L_08935668;
    case 293u: goto L_08935674;
    case 294u: goto L_08935680;
    case 295u: goto L_0893568C;
    case 296u: goto L_08935698;
    case 297u: goto L_089356E0;
    case 298u: goto L_08935774;
    case 299u: goto L_089357A0;
    case 300u: goto L_089357BC;
    case 301u: goto L_089357D8;
    case 302u: goto L_089357E0;
    case 303u: goto L_089357F8;
    case 304u: goto L_08935800;
    case 305u: goto L_08935808;
    case 306u: goto L_0893580C;
    case 307u: goto L_0893581C;
    case 308u: goto L_08935838;
    case 309u: goto L_08935844;
    case 310u: goto L_0893585C;
    case 311u: goto L_08935868;
    case 312u: goto L_08935874;
    case 313u: goto L_08935880;
    case 314u: goto L_0893589C;
    case 315u: goto L_089358A4;
    case 316u: goto L_089358B4;
    case 317u: goto L_089358BC;
    case 318u: goto L_089358C4;
    case 319u: goto L_089358CC;
    case 320u: goto L_089358D8;
    case 321u: goto L_089358F0;
    case 322u: goto L_089358F8;
    case 323u: goto L_089358FC;
    case 324u: goto L_08935904;
    case 325u: goto L_0893590C;
    case 326u: goto L_0893591C;
    case 327u: goto L_08935928;
    case 328u: goto L_08935930;
    case 329u: goto L_08935944;
    case 330u: goto L_08935960;
    case 331u: goto L_0893596C;
    case 332u: goto L_08935974;
    case 333u: goto L_08935980;
    case 334u: goto L_0893598C;
    case 335u: goto L_0893599C;
    case 336u: goto L_089359A4;
    case 337u: goto L_089359B4;
    case 338u: goto L_089359C0;
    case 339u: goto L_089359D0;
    case 340u: goto L_089359D8;
    case 341u: goto L_089359DC;
    case 342u: goto L_089359EC;
    case 343u: goto L_089359F8;
    case 344u: goto L_08935A04;
    case 345u: goto L_08935A14;
    case 346u: goto L_08935A20;
    case 347u: goto L_08935A2C;
    case 348u: goto L_08935A34;
    case 349u: goto L_08935A40;
    case 350u: goto L_08935A4C;
    case 351u: goto L_08935A54;
    case 352u: goto L_08935A5C;
    case 353u: goto L_08935A64;
    case 354u: goto L_08935A7C;
    case 355u: goto L_08935A94;
    case 356u: goto L_08935AB4;
    case 357u: goto L_08935AC4;
    case 358u: goto L_08935AD0;
    case 359u: goto L_08935AD8;
    case 360u: goto L_08935AE0;
    case 361u: goto L_08935AE8;
    case 362u: goto L_08935B00;
    case 363u: goto L_08935B18;
    case 364u: goto L_08935B20;
    case 365u: goto L_08935B28;
    case 366u: goto L_08935B34;
    case 367u: goto L_08935B40;
    case 368u: goto L_08935B50;
    case 369u: goto L_08935B78;
    case 370u: goto L_08935B84;
    case 371u: goto L_08935BA4;
    case 372u: goto L_08935BB0;
    case 373u: goto L_08935BD0;
    case 374u: goto L_08935BDC;
    case 375u: goto L_08935BF4;
    case 376u: goto L_08935C00;
    case 377u: goto L_08935C0C;
    case 378u: goto L_08935C18;
    case 379u: goto L_08935C24;
    case 380u: goto L_08935C30;
    case 381u: goto L_08935C38;
    case 382u: goto L_08935C44;
    case 383u: goto L_08935C4C;
    case 384u: goto L_08935C54;
    case 385u: goto L_08935C5C;
    case 386u: goto L_08935C64;
    case 387u: goto L_08935C70;
    case 388u: goto L_08935C78;
    case 389u: goto L_08935C80;
    case 390u: goto L_08935C8C;
    case 391u: goto L_08935C98;
    case 392u: goto L_08935CA0;
    case 393u: goto L_08935CA8;
    case 394u: goto L_08935CB4;
    case 395u: goto L_08935CC0;
    case 396u: goto L_08935CCC;
    case 397u: goto L_08935CD4;
    case 398u: goto L_08935CE0;
    case 399u: goto L_08935CEC;
    case 400u: goto L_08935CF8;
    case 401u: goto L_08935D00;
    case 402u: goto L_08935D0C;
    case 403u: goto L_08935D18;
    case 404u: goto L_08935D20;
    case 405u: goto L_08935D2C;
    case 406u: goto L_08935D34;
    case 407u: goto L_08935D38;
    case 408u: goto L_08935D4C;
    case 409u: goto L_08935D78;
    case 410u: goto L_08935D80;
    case 411u: goto L_08935D88;
    case 412u: goto L_08935DA0;
    case 413u: goto L_08935DA4;
    case 414u: goto L_08935DB0;
    case 415u: goto L_08935E28;
    case 416u: goto L_08935E30;
    case 417u: goto L_08935E3C;
    case 418u: goto L_08935E4C;
    case 419u: goto L_08935E54;
    case 420u: goto L_08935E5C;
    case 421u: goto L_08935E64;
    case 422u: goto L_08935E70;
    case 423u: goto L_08935E78;
    case 424u: goto L_08935E80;
    case 425u: goto L_08935E88;
    case 426u: goto L_08935E94;
    case 427u: goto L_08935E9C;
    case 428u: goto L_08935EAC;
    case 429u: goto L_08935EB8;
    case 430u: goto L_08935EC0;
    case 431u: goto L_08935ED0;
    case 432u: goto L_08935EDC;
    case 433u: goto L_08935EE8;
    case 434u: goto L_08935EF4;
    case 435u: goto L_08935F00;
    case 436u: goto L_08935F0C;
    case 437u: goto L_08935F14;
    case 438u: goto L_08935F1C;
    case 439u: goto L_08935F28;
    case 440u: goto L_08935F38;
    case 441u: goto L_08935F40;
    case 442u: goto L_08935F48;
    case 443u: goto L_08935F50;
    case 444u: goto L_08935F5C;
    case 445u: goto L_08935F6C;
    case 446u: goto L_08935F74;
    case 447u: goto L_08935F7C;
    case 448u: goto L_08935F84;
    case 449u: goto L_08935F90;
    case 450u: goto L_08935F98;
    case 451u: goto L_08935FA0;
    case 452u: goto L_08935FA8;
    case 453u: goto L_08935FB0;
    case 454u: goto L_08935FB8;
    case 455u: goto L_08935FC4;
    case 456u: goto L_08935FCC;
    case 457u: goto L_08935FD4;
    case 458u: goto L_08935FDC;
    case 459u: goto L_0893600C;
    case 460u: goto L_08936038;
    case 461u: goto L_08936044;
    case 462u: goto L_08936058;
    case 463u: goto L_0893608C;
    case 464u: goto L_08936094;
    case 465u: goto L_089360A0;
    case 466u: goto L_089360AC;
    case 467u: goto L_089360B4;
    case 468u: goto L_089360D0;
    case 469u: goto L_08936148;
    case 470u: goto L_08936150;
    case 471u: goto L_0893615C;
    case 472u: goto L_0893616C;
    case 473u: goto L_08936174;
    case 474u: goto L_0893617C;
    case 475u: goto L_08936184;
    case 476u: goto L_08936190;
    case 477u: goto L_08936198;
    case 478u: goto L_089361A0;
    case 479u: goto L_089361A8;
    case 480u: goto L_089361B4;
    case 481u: goto L_089361BC;
    case 482u: goto L_089361CC;
    case 483u: goto L_089361D4;
    case 484u: goto L_089361DC;
    case 485u: goto L_089361E4;
    case 486u: goto L_089361F4;
    case 487u: goto L_08936200;
    case 488u: goto L_0893620C;
    case 489u: goto L_08936218;
    case 490u: goto L_08936224;
    case 491u: goto L_08936230;
    case 492u: goto L_08936238;
    case 493u: goto L_08936240;
    case 494u: goto L_0893624C;
    case 495u: goto L_0893625C;
    case 496u: goto L_08936264;
    case 497u: goto L_0893626C;
    case 498u: goto L_08936274;
    case 499u: goto L_08936280;
    case 500u: goto L_08936290;
    case 501u: goto L_08936298;
    case 502u: goto L_089362A0;
    case 503u: goto L_089362A8;
    case 504u: goto L_089362B4;
    case 505u: goto L_089362BC;
    case 506u: goto L_089362C4;
    case 507u: goto L_089362CC;
    case 508u: goto L_089362D4;
    case 509u: goto L_089362DC;
    case 510u: goto L_089362E8;
    case 511u: goto L_089362F0;
    case 512u: goto L_089362F8;
    case 513u: goto L_08936300;
    case 514u: goto L_08936330;
    case 515u: goto L_0893635C;
    case 516u: goto L_08936368;
    case 517u: goto L_0893637C;
    case 518u: goto L_089363B0;
    case 519u: goto L_089363B8;
    case 520u: goto L_089363C4;
    case 521u: goto L_089363D0;
    case 522u: goto L_089363D8;
    case 523u: goto L_089363E4;
    case 524u: goto L_089363F0;
    case 525u: goto L_089363F8;
    case 526u: goto L_08936414;
    case 527u: goto L_08936430;
    case 528u: goto L_089364A8;
    case 529u: goto L_08936500;
    case 530u: goto L_08936534;
    case 531u: goto L_0893654C;
    case 532u: goto L_0893655C;
    case 533u: goto L_08936574;
    case 534u: goto L_08936584;
    case 535u: goto L_0893659C;
    case 536u: goto L_089365AC;
    case 537u: goto L_089365C4;
    case 538u: goto L_089365C8;
    case 539u: goto L_089365E4;
    case 540u: goto L_089365EC;
    case 541u: goto L_0893660C;
    case 542u: goto L_08936618;
    case 543u: goto L_08936624;
    case 544u: goto L_08936634;
    case 545u: goto L_08936650;
    case 546u: goto L_0893665C;
    case 547u: goto L_08936680;
    case 548u: goto L_0893668C;
    case 549u: goto L_089366B8;
    case 550u: goto L_089366C0;
    case 551u: goto L_089366C4;
    case 552u: goto L_089366CC;
    case 553u: goto L_089366E4;
    case 554u: goto L_089366F4;
    case 555u: goto L_08936700;
    case 556u: goto L_08936714;
    case 557u: goto L_08936744;
    case 558u: goto L_0893675C;
    case 559u: goto L_08936774;
    case 560u: goto L_08936778;
    case 561u: goto L_0893677C;
    case 562u: goto L_08936784;
    case 563u: goto L_08936794;
    case 564u: goto L_089367A4;
    case 565u: goto L_089367B4;
    case 566u: goto L_089367C4;
    case 567u: goto L_089367C8;
    case 568u: goto L_089367CC;
    case 569u: goto L_089367D4;
    case 570u: goto L_089367E4;
    case 571u: goto L_089367F4;
    case 572u: goto L_0893680C;
    case 573u: goto L_08936824;
    case 574u: goto L_08936828;
    case 575u: goto L_0893682C;
    case 576u: goto L_08936834;
    case 577u: goto L_0893684C;
    case 578u: goto L_08936864;
    case 579u: goto L_08936868;
    case 580u: goto L_0893686C;
    case 581u: goto L_08936874;
    case 582u: goto L_0893688C;
    case 583u: goto L_089368A4;
    case 584u: goto L_089368A8;
    case 585u: goto L_089368AC;
    case 586u: goto L_089368B4;
    case 587u: goto L_089368C4;
    case 588u: goto L_089368D4;
    case 589u: goto L_089368DC;
    case 590u: goto L_089368E0;
    case 591u: goto L_089368E4;
    case 592u: goto L_089368EC;
    case 593u: goto L_08936904;
    case 594u: goto L_08936914;
    case 595u: goto L_08936918;
    case 596u: goto L_08936938;
    case 597u: goto L_08936964;
    case 598u: goto L_08936988;
    case 599u: goto L_08936994;
    case 600u: goto L_089369A0;
    case 601u: goto L_089369A8;
    case 602u: goto L_089369D8;
    case 603u: goto L_089369E8;
    case 604u: goto L_089369F4;
    case 605u: goto L_089369FC;
    case 606u: goto L_08936A10;
    case 607u: goto L_08936A20;
    case 608u: goto L_08936A2C;
    case 609u: goto L_08936A34;
    case 610u: goto L_08936A40;
    case 611u: goto L_08936A48;
    case 612u: goto L_08936A5C;
    case 613u: goto L_08936A64;
    case 614u: goto L_08936A78;
    case 615u: goto L_08936A88;
    case 616u: goto L_08936A8C;
    case 617u: goto L_08936A98;
    case 618u: goto L_08936AA0;
    case 619u: goto L_08936AB4;
    case 620u: goto L_08936AE0;
    case 621u: goto L_08936B1C;
    case 622u: goto L_08936B3C;
    case 623u: goto L_08936B50;
    case 624u: goto L_08936B60;
    case 625u: goto L_08936B80;
    case 626u: goto L_08936B88;
    case 627u: goto L_08936B8C;
    case 628u: goto L_08936B9C;
    case 629u: goto L_08936BB0;
    case 630u: goto L_08936BBC;
    case 631u: goto L_08936BCC;
    case 632u: goto L_08936BD8;
    case 633u: goto L_08936BE4;
    case 634u: goto L_08936BEC;
    case 635u: goto L_08936C1C;
    case 636u: goto L_08936C2C;
    case 637u: goto L_08936C38;
    case 638u: goto L_08936C40;
    case 639u: goto L_08936C54;
    case 640u: goto L_08936C64;
    case 641u: goto L_08936C70;
    case 642u: goto L_08936C78;
    case 643u: goto L_08936C84;
    case 644u: goto L_08936C8C;
    case 645u: goto L_08936CA0;
    case 646u: goto L_08936CA8;
    case 647u: goto L_08936CBC;
    case 648u: goto L_08936CCC;
    case 649u: goto L_08936CD0;
    case 650u: goto L_08936CDC;
    case 651u: goto L_08936CE4;
    case 652u: goto L_08936CF8;
    case 653u: goto L_08936D24;
    case 654u: goto L_08936D44;
    case 655u: goto L_08936D70;
    case 656u: goto L_08936D7C;
    case 657u: goto L_08936D84;
    case 658u: goto L_08936D94;
    case 659u: goto L_08936D98;
    case 660u: goto L_08936DA4;
    case 661u: goto L_08936DB4;
    case 662u: goto L_08936DBC;
    case 663u: goto L_08936DD4;
    case 664u: goto L_08936DEC;
    case 665u: goto L_08936DF4;
    case 666u: goto L_08936E08;
    case 667u: goto L_08936E1C;
    case 668u: goto L_08936E28;
    case 669u: goto L_08936E34;
    case 670u: goto L_08936E3C;
    case 671u: goto L_08936E54;
    case 672u: goto L_08936E74;
    case 673u: goto L_08936E84;
    case 674u: goto L_08936E90;
    case 675u: goto L_08936EA4;
    case 676u: goto L_08936EB8;
    case 677u: goto L_08936ED0;
    case 678u: goto L_08936EE0;
    case 679u: goto L_08936EEC;
    case 680u: goto L_08936F04;
    case 681u: goto L_08936F3C;
    case 682u: goto L_08936F4C;
    case 683u: goto L_08936F58;
    case 684u: goto L_08936F74;
    case 685u: goto L_0893704C;
    case 686u: goto L_0893706C;
    case 687u: goto L_0893708C;
    case 688u: goto L_089370A4;
    case 689u: goto L_089370B4;
    case 690u: goto L_089370C0;
    case 691u: goto L_089370D8;
    case 692u: goto L_08937100;
    case 693u: goto L_08937110;
    case 694u: goto L_0893711C;
    case 695u: goto L_0893714C;
    case 696u: goto L_08937164;
    case 697u: goto L_08937174;
    case 698u: goto L_08937180;
    case 699u: goto L_08937198;
    case 700u: goto L_089371B8;
    case 701u: goto L_089371C8;
    case 702u: goto L_089371D4;
    case 703u: goto L_089371F0;
    case 704u: goto L_08937208;
    case 705u: goto L_08937218;
    case 706u: goto L_08937224;
    case 707u: goto L_0893723C;
    case 708u: goto L_0893725C;
    case 709u: goto L_0893726C;
    case 710u: goto L_08937278;
    case 711u: goto L_08937294;
    case 712u: goto L_089372AC;
    case 713u: goto L_089372BC;
    case 714u: goto L_089372C8;
    case 715u: goto L_089372E0;
    case 716u: goto L_08937300;
    case 717u: goto L_08937310;
    case 718u: goto L_0893731C;
    case 719u: goto L_08937338;
    case 720u: goto L_08937350;
    case 721u: goto L_08937360;
    case 722u: goto L_0893736C;
    case 723u: goto L_08937384;
    case 724u: goto L_089373A4;
    case 725u: goto L_089373B4;
    case 726u: goto L_089373C0;
    case 727u: goto L_089373FC;
    case 728u: goto L_08937414;
    case 729u: goto L_08937424;
    case 730u: goto L_08937430;
    case 731u: goto L_08937448;
    case 732u: goto L_08937468;
    case 733u: goto L_08937478;
    case 734u: goto L_08937484;
    case 735u: goto L_089374A0;
    case 736u: goto L_089374B8;
    case 737u: goto L_089374C8;
    case 738u: goto L_089374D4;
    case 739u: goto L_089374EC;
    case 740u: goto L_0893750C;
    case 741u: goto L_0893751C;
    case 742u: goto L_08937528;
    case 743u: goto L_08937544;
    case 744u: goto L_0893755C;
    case 745u: goto L_0893756C;
    case 746u: goto L_08937578;
    case 747u: goto L_08937590;
    case 748u: goto L_089375A4;
    case 749u: goto L_089375B0;
    case 750u: goto L_08937604;
    case 751u: goto L_08937618;
    case 752u: goto L_0893762C;
    case 753u: goto L_08937634;
    case 754u: goto L_08937648;
    case 755u: goto L_08937660;
    case 756u: goto L_08937674;
    case 757u: goto L_0893768C;
    case 758u: goto L_089376E8;
    case 759u: goto L_089376F4;
    case 760u: goto L_08937700;
    case 761u: goto L_0893770C;
    case 762u: goto L_08937718;
    case 763u: goto L_08937724;
    case 764u: goto L_08937730;
    case 765u: goto L_08937794;
    case 766u: goto L_089377A0;
    case 767u: goto L_089377AC;
    case 768u: goto L_089377B8;
    case 769u: goto L_089377C4;
    case 770u: goto L_089377D0;
    case 771u: goto L_089377DC;
    case 772u: goto L_089377E8;
    case 773u: goto L_089377FC;
    case 774u: goto L_08937808;
    case 775u: goto L_0893781C;
    case 776u: goto L_08937828;
    case 777u: goto L_08937890;
    case 778u: goto L_0893789C;
    case 779u: goto L_08937900;
    case 780u: goto L_0893791C;
    case 781u: goto L_08937944;
    case 782u: goto L_0893794C;
    case 783u: goto L_0893795C;
    case 784u: goto L_08937964;
    case 785u: goto L_0893796C;
    case 786u: goto L_08937974;
    case 787u: goto L_08937988;
    case 788u: goto L_08937994;
    case 789u: goto L_0893799C;
    case 790u: goto L_089379A4;
    case 791u: goto L_089379B4;
    case 792u: goto L_089379C0;
    case 793u: goto L_089379C8;
    case 794u: goto L_089379D8;
    case 795u: goto L_08937A1C;
    case 796u: goto L_08937A2C;
    case 797u: goto L_08937A34;
    case 798u: goto L_08937A38;
    case 799u: goto L_08937A3C;
    case 800u: goto L_08937A4C;
    case 801u: goto L_08937A50;
    case 802u: goto L_08937A68;
    case 803u: goto L_08937A80;
    case 804u: goto L_08937A84;
    case 805u: goto L_08937A88;
    case 806u: goto L_08937A98;
    case 807u: goto L_08937A9C;
    case 808u: goto L_08937AAC;
    case 809u: goto L_08937ABC;
    case 810u: goto L_08937ACC;
    case 811u: goto L_08937ADC;
    case 812u: goto L_08937AE0;
    case 813u: goto L_08937AE4;
    case 814u: goto L_08937AF4;
    case 815u: goto L_08937AF8;
    case 816u: goto L_08937B08;
    case 817u: goto L_08937B0C;
    case 818u: goto L_08937B24;
    case 819u: goto L_08937B3C;
    case 820u: goto L_08937B40;
    case 821u: goto L_08937B44;
    case 822u: goto L_08937B54;
    case 823u: goto L_08937B58;
    case 824u: goto L_08937B70;
    case 825u: goto L_08937B88;
    case 826u: goto L_08937B8C;
    case 827u: goto L_08937B90;
    case 828u: goto L_08937BA0;
    case 829u: goto L_08937BA4;
    case 830u: goto L_08937BBC;
    case 831u: goto L_08937BD4;
    case 832u: goto L_08937BD8;
    case 833u: goto L_08937BDC;
    case 834u: goto L_08937BEC;
    case 835u: goto L_08937BF0;
    case 836u: goto L_08937C00;
    case 837u: goto L_08937C04;
    case 838u: goto L_08937C14;
    case 839u: goto L_08937C18;
    case 840u: goto L_08937C30;
    case 841u: goto L_08937C34;
    case 842u: goto L_08937C44;
    case 843u: goto L_08937C48;
    case 844u: goto L_08937C50;
    case 845u: goto L_08937C64;
    case 846u: goto L_08937C6C;
    case 847u: goto L_08937C70;
    case 848u: goto L_08937C94;
    case 849u: goto L_08937D18;
    case 850u: goto L_08937D24;
    case 851u: goto L_08937D30;
    case 852u: goto L_08937D3C;
    case 853u: goto L_08937D48;
    case 854u: goto L_08937D54;
    case 855u: goto L_08937D60;
    case 856u: goto L_08937E1C;
    case 857u: goto L_08937E28;
    case 858u: goto L_08937E34;
    case 859u: goto L_08937E40;
    case 860u: goto L_08937E4C;
    case 861u: goto L_08937E58;
    case 862u: goto L_08937E64;
    case 863u: goto L_08937E70;
    case 864u: goto L_08937E98;
    case 865u: goto L_08937EA4;
    case 866u: goto L_08937ECC;
    case 867u: goto L_08937ED8;
    case 868u: goto L_08937F98;
    case 869u: goto L_08937FA4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08934000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[23] = (0u | 4u);
    ctx.gpr[19] = (0u | 2u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089340D0;
      }
      goto L_08934050;
    }
L_08934050:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7034))))));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(-7036), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934078;
      }
      goto L_08934068;
    }
L_08934068:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(-7034), static_cast<std::uint16_t>(ctx.gpr[23]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7034))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(-7036), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089340D0;
      }
      goto L_08934078;
    }
L_08934078:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6904))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089340CC;
      }
      goto L_08934088;
    }
L_08934088:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6940)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 63u);
        goto L_089340AC;
    }
    goto L_0893409C;
L_0893409C:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 63u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_089340AC;
      }
      goto L_089340AC;
    }
L_089340AC:
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-30748));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6940), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(-7034), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089340D0;
      }
      goto L_089340CC;
    }
L_089340CC:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(-7034), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089340D0;
L_089340D0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089340DCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x089340DCu) goto L_089340DC;
    return;
L_089340DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089340FC;
      }
      goto L_089340EC;
    }
L_089340EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(98))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08934100;
      }
      goto L_089340F8;
    }
L_089340F8:
    ctx.gpr[5] = (0u | 1u);
    goto L_089340FC;
L_089340FC:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08934100;
L_08934100:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893415C;
      }
      goto L_08934108;
    }
L_08934108:
    ctx.gpr[31] = (0x08934110u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08934110u) goto L_08934110;
    return;
L_08934110:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08934130;
      }
      goto L_08934120;
    }
L_08934120:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08934134;
      }
      goto L_0893412C;
    }
L_0893412C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08934130;
L_08934130:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08934134;
L_08934134:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893415C;
      }
      goto L_0893413C;
    }
L_0893413C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7034))))));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(-7034), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7034))))));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(-7036), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0893415C;
L_0893415C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7034))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089342E8;
      }
      goto L_08934168;
    }
L_08934168:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(-7036))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089342E8;
      }
      goto L_08934174;
    }
L_08934174:
    ctx.gpr[31] = (0x0893417Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 421u, 0x08ACA8D4u>(ctx, &aot_mem) && ctx.pc == 0x0893417Cu) goto L_0893417C;
    return;
L_0893417C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089342E8;
      }
      goto L_08934184;
    }
L_08934184:
    ctx.gpr[31] = (0x0893418Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 425u, 0x08ACA8FCu>(ctx, &aot_mem) && ctx.pc == 0x0893418Cu) goto L_0893418C;
    return;
L_0893418C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089342E8;
      }
      goto L_08934194;
    }
L_08934194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11240)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089342E8;
      }
      goto L_089341AC;
    }
L_089341AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-6664)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934294;
      }
      goto L_089341B8;
    }
L_089341B8:
    ctx.gpr[31] = (0x089341C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089341C0u) goto L_089341C0;
    return;
L_089341C0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
      if (branch_taken) {
          goto L_08934238;
      }
      goto L_089341D8;
    }
L_089341D8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6664), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6660)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (0u | 20u);
        goto L_08934200;
    }
    goto L_08934200;
L_08934200:
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6656), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-6652), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6856), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089342F4;
      }
      goto L_08934238;
    }
L_08934238:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6648)));
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(51) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089342F4;
      }
      goto L_08934250;
    }
L_08934250:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[30]);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-6856)));
    ctx.gpr[31] = (0x08934264u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08934264u) goto L_08934264;
    return;
L_08934264:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6856), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6856)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_0893428C;
      }
      goto L_08934284;
    }
L_08934284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6648), ctx.gpr[4]);
    goto L_0893428C;
L_0893428C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089342F4;
      }
      goto L_08934294;
    }
L_08934294:
    ctx.gpr[31] = (0x0893429Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0893429Cu) goto L_0893429C;
    return;
L_0893429C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089342E0;
      }
      goto L_089342B0;
    }
L_089342B0:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6664), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6856), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6660), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6648), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089342F4;
      }
      goto L_089342E0;
    }
L_089342E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6856), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089342F4;
      }
      goto L_089342E8;
    }
L_089342E8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6856), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6664), static_cast<std::uint8_t>(0u));
    goto L_089342F4;
L_089342F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6652)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08934390;
      }
      goto L_08934300;
    }
L_08934300:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934390;
      }
      goto L_08934314;
    }
L_08934314:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6656)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7827));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30616)));
      if (branch_taken) {
          goto L_08934344;
      }
      goto L_08934338;
    }
L_08934338:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08934344;
L_08934344:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08934354u);
    ctx.gpr[6] = (0u | 183u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08934354u) goto L_08934354;
    return;
L_08934354:
    ctx.gpr[31] = (0x0893435Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0893435Cu) goto L_0893435C;
    return;
L_0893435C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6656)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x0893438Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 645u, 0x08A96C48u>(ctx, &aot_mem) && ctx.pc == 0x0893438Cu) goto L_0893438C;
    return;
L_0893438C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-6652), 0u);
    goto L_08934390;
L_08934390:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7036))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7034))))));
    ctx.gpr[16] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_089343BC;
      }
      goto L_089343A8;
    }
L_089343A8:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089343BC;
      }
      goto L_089343B4;
    }
L_089343B4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089343F4;
      }
      goto L_089343BC;
    }
L_089343BC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_089343D4;
      }
      goto L_089343C4;
    }
L_089343C4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089343D4;
      }
      goto L_089343CC;
    }
L_089343CC:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089343E0;
      }
      goto L_089343D4;
    }
L_089343D4:
    ctx.gpr[8] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-7816), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_0893441C;
      }
      goto L_089343E0;
    }
L_089343E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6900)));
    ctx.gpr[8] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-7816), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893441C;
      }
      goto L_089343F4;
    }
L_089343F4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    ctx.gpr[8] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893440C;
      }
      goto L_089343FC;
    }
L_089343FC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893440C;
      }
      goto L_08934404;
    }
L_08934404:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08934418;
      }
      goto L_0893440C;
    }
L_0893440C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6900)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-7816), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893441C;
      }
      goto L_08934418;
    }
L_08934418:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-7816), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_0893441C;
L_0893441C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_0893442C;
      }
      goto L_08934424;
    }
L_08934424:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089344E4;
      }
      goto L_0893442C;
    }
L_0893442C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[7] = (16128u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] >> 14u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0893445C;
      }
      goto L_08934450;
    }
L_08934450:
    ctx.gpr[7] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_0893445C;
L_0893445C:
    ctx.gpr[7] = (16040u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 62915u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_089344CC;
      }
      goto L_08934470;
    }
L_08934470:
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089344CC;
      }
      goto L_0893447C;
    }
L_0893447C:
    ctx.gpr[7] = (16076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6900)));
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089344A4;
      }
      goto L_0893449C;
    }
L_0893449C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089344CC;
      }
      goto L_089344A4;
    }
L_089344A4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089344BC;
      }
      goto L_089344B0;
    }
L_089344B0:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_089344BC;
L_089344BC:
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_089344CC;
L_089344CC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089344E8;
      }
      goto L_089344DC;
    }
L_089344DC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089344E8;
      }
      goto L_089344E4;
    }
L_089344E4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089344E8;
L_089344E8:
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[22];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7808), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08934540;
      }
      goto L_089344F4;
    }
L_089344F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6900)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934528;
      }
      goto L_0893451C;
    }
L_0893451C:
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08934528;
L_08934528:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934544;
      }
      goto L_08934538;
    }
L_08934538:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08934544;
      }
      goto L_08934540;
    }
L_08934540:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08934544;
L_08934544:
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6976), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08934558;
      }
      goto L_08934550;
    }
L_08934550:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08934564;
      }
      goto L_08934558;
    }
L_08934558:
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7672), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08934574;
      }
      goto L_08934564;
    }
L_08934564:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6900)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08934574;
L_08934574:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934594;
      }
      goto L_0893457C;
    }
L_0893457C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08934594;
      }
      goto L_08934584;
    }
L_08934584:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7672)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6900)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08934594;
L_08934594:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089345B4;
      }
      goto L_089345A0;
    }
L_089345A0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089345B4;
      }
      goto L_089345A8;
    }
L_089345A8:
    ctx.gpr[7] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7804), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_089345C4;
      }
      goto L_089345B4;
    }
L_089345B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6900)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7804), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089345C4;
L_089345C4:
    if (ctx.gpr[6] == ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7804)));
        goto L_089345D8;
    }
    goto L_089345CC;
L_089345CC:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089345E4;
      }
      goto L_089345D4;
    }
L_089345D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7804)));
    goto L_089345D8;
L_089345D8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6900)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7804), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089345E4;
L_089345E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089345F8;
      }
      goto L_089345EC;
    }
L_089345EC:
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7668), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08934608;
      }
      goto L_089345F8;
    }
L_089345F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6900)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7668), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08934608;
L_08934608:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08934620;
      }
      goto L_08934610;
    }
L_08934610:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7668)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6900)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7668), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08934620;
L_08934620:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089346B4;
      }
      goto L_0893462C;
    }
L_0893462C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893463C;
      }
      goto L_08934634;
    }
L_08934634:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089346B4;
      }
      goto L_0893463C;
    }
L_0893463C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6900)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089346A8;
      }
      goto L_08934658;
    }
L_08934658:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
      if (branch_taken) {
          goto L_089346A8;
      }
      goto L_08934668;
    }
L_08934668:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089346A8;
      }
      goto L_08934670;
    }
L_08934670:
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0893468C;
    }
    goto L_0893468C;
L_0893468C:
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089346BC;
      }
      goto L_089346A8;
    }
L_089346A8:
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6672), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_089346BC;
      }
      goto L_089346B4;
    }
L_089346B4:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6672), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089346BC;
L_089346BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089346D0;
      }
      goto L_089346C4;
    }
L_089346C4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6668), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_089346DC;
      }
      goto L_089346D0;
    }
L_089346D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6900)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6668), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089346DC;
L_089346DC:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089346F0;
      }
      goto L_089346E4;
    }
L_089346E4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6900)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6668), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089346F0;
L_089346F0:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_089347C4;
      }
      goto L_08934700;
    }
L_08934700:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16608u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08934734;
    }
    goto L_08934734;
L_08934734:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6668), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08934750;
    }
    goto L_08934750;
L_08934750:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08934760;
    }
    goto L_08934760;
L_08934760:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6668), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1676)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089347B8;
      }
      goto L_08934774;
    }
L_08934774:
    ctx.gpr[31] = (0x0893477Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0893477Cu) goto L_0893477C;
    return;
L_0893477C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15333u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24642u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6668)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7034))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-7036))))));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6668), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089347B8;
L_089347B8:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[5] = (2228u << 16u);
    goto L_089347C4;
L_089347C4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30776));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6900)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.fpr[15] = ctx.fpr[24] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (2230u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (2230u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[16] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7816)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7808)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6976)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7804)));
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[16]));
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7768)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7688), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (!ctx.fpu_condition()) {
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_08934828;
    }
    goto L_08934828;
L_08934828:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6800), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934844;
      }
      goto L_0893483C;
    }
L_0893483C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7088), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089348AC;
      }
      goto L_08934844;
    }
L_08934844:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934868;
      }
      goto L_08934850;
    }
L_08934850:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-7767)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7088), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089348AC;
      }
      goto L_08934868;
    }
L_08934868:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934880;
      }
      goto L_08934874;
    }
L_08934874:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7088), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_089348AC;
      }
      goto L_08934880;
    }
L_08934880:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089348A8;
      }
      goto L_0893488C;
    }
L_0893488C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-7767)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[20];
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[16];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7088), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089348AC;
      }
      goto L_089348A8;
    }
L_089348A8:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7088), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_089348AC;
L_089348AC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089348C4;
      }
      goto L_089348BC;
    }
L_089348BC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089348C4;
      }
      goto L_089348C4;
    }
L_089348C4:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7088), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089348DC;
      }
      goto L_089348D4;
    }
L_089348D4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089348DC;
      }
      goto L_089348DC;
    }
L_089348DC:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7088), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_089348F4;
      }
      goto L_089348EC;
    }
L_089348EC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_089348F4;
      }
      goto L_089348F4;
    }
L_089348F4:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7088), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893490C;
      }
      goto L_08934904;
    }
L_08934904:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893490C;
      }
      goto L_0893490C;
    }
L_0893490C:
    ctx.gpr[31] = (0x08934914u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7088), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 601u, 0x08933374u>(ctx, &aot_mem) && ctx.pc == 0x08934914u) goto L_08934914;
    return;
L_08934914:
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7034))))));
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893492C;
      }
      goto L_08934920;
    }
L_08934920:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089349CC;
      }
      goto L_08934928;
    }
L_08934928:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0893492C;
L_0893492C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089349CC;
      }
      goto L_08934938;
    }
L_08934938:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(935)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089349CC;
      }
      goto L_08934944;
    }
L_08934944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089349CC;
      }
      goto L_08934954;
    }
L_08934954:
    ctx.gpr[31] = (0x0893495Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893495Cu) goto L_0893495C;
    return;
L_0893495C:
    ctx.gpr[31] = (0x08934964u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 165u, 0x089A0B28u>(ctx, &aot_mem) && ctx.pc == 0x08934964u) goto L_08934964;
    return;
L_08934964:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7768)));
        goto L_089349B0;
    }
    goto L_0893496C;
L_0893496C:
    ctx.gpr[31] = (0x08934974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08934974u) goto L_08934974;
    return;
L_08934974:
    ctx.gpr[31] = (0x0893497Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 165u, 0x089A0B28u>(ctx, &aot_mem) && ctx.pc == 0x0893497Cu) goto L_0893497C;
    return;
L_0893497C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089349CC;
      }
      goto L_08934984;
    }
L_08934984:
    ctx.gpr[31] = (0x0893498Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893498Cu) goto L_0893498C;
    return;
L_0893498C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16624u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089349CC;
      }
      goto L_089349AC;
    }
L_089349AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7768)));
    goto L_089349B0;
L_089349B0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 18 ? 1u : 0u);
      if (branch_taken) {
          goto L_089349CC;
      }
      goto L_089349BC;
    }
L_089349BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089349CC;
      }
      goto L_089349C4;
    }
L_089349C4:
    ctx.gpr[31] = (0x089349CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 649u, 0x0893386Cu>(ctx, &aot_mem) && ctx.pc == 0x089349CCu) goto L_089349CC;
    return;
L_089349CC:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-7034))))));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089349E4;
      }
      goto L_089349D8;
    }
L_089349D8:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08934A04;
      }
      goto L_089349E0;
    }
L_089349E0:
    ctx.gpr[4] = (2230u << 16u);
    goto L_089349E4;
L_089349E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08934A04;
      }
      goto L_089349F0;
    }
L_089349F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(935)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934A04;
      }
      goto L_089349FC;
    }
L_089349FC:
    ctx.gpr[31] = (0x08934A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 650u, 0x08933874u>(ctx, &aot_mem) && ctx.pc == 0x08934A04u) goto L_08934A04;
    return;
L_08934A04:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934A40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[31]);
    ctx.gpr[31] = (0x08934A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 421u, 0x08ACA8D4u>(ctx, &aot_mem) && ctx.pc == 0x08934A84u) goto L_08934A84;
    return;
L_08934A84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08934AD8;
      }
      goto L_08934A8C;
    }
L_08934A8C:
    ctx.gpr[31] = (0x08934A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 425u, 0x08ACA8FCu>(ctx, &aot_mem) && ctx.pc == 0x08934A94u) goto L_08934A94;
    return;
L_08934A94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08934AD8;
      }
      goto L_08934A9C;
    }
L_08934A9C:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11240)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934AD8;
      }
      goto L_08934AB8;
    }
L_08934AB8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6976)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17352u << 16u);
      if (branch_taken) {
          goto L_08934AE0;
      }
      goto L_08934AD0;
    }
L_08934AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934F74;
      }
      goto L_08934AD8;
    }
L_08934AD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934F74;
      }
      goto L_08934AE0;
    }
L_08934AE0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[16] = (0u | 400u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(13216));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 400 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08934B10;
    }
    goto L_08934B10;
L_08934B10:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08934B20u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 269u, 0x08A7D68Cu>(ctx, &aot_mem) && ctx.pc == 0x08934B20u) goto L_08934B20;
    return;
L_08934B20:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = ctx.fpr[18] + ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-30620)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08934C10;
      }
      goto L_08934B90;
    }
L_08934B90:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(-30620), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[20] = (2231u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-24448));
    goto L_08934BA4;
L_08934BA4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08934BB0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08934BB0u) goto L_08934BB0;
    return;
L_08934BB0:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x08934BCCu);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08934BCCu) goto L_08934BCC;
    return;
L_08934BCC:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[26];
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.gpr[31] = (0x08934BE8u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08934BE8u) goto L_08934BE8;
    return;
L_08934BE8:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 400 ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08934BA4;
      }
      goto L_08934C10;
    }
L_08934C10:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08934C1Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08934C1Cu) goto L_08934C1C;
    return;
L_08934C1C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6624)));
    ctx.gpr[31] = (0x08934C2Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08934C2Cu) goto L_08934C2C;
    return;
L_08934C2C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08934C38u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08934C38u) goto L_08934C38;
    return;
L_08934C38:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08934C44u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08934C44u) goto L_08934C44;
    return;
L_08934C44:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08934C50u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08934C50u) goto L_08934C50;
    return;
L_08934C50:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08934C5Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08934C5Cu) goto L_08934C5C;
    return;
L_08934C5C:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08934C68u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08934C68u) goto L_08934C68;
    return;
L_08934C68:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (57088u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(170));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (57473u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32640));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (57856u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08934CC8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 481u, 0x08A05DFCu>(ctx, &aot_mem) && ctx.pc == 0x08934CC8u) goto L_08934CC8;
    return;
L_08934CC8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08934CD4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 518u, 0x08A0692Cu>(ctx, &aot_mem) && ctx.pc == 0x08934CD4u) goto L_08934CD4;
    return;
L_08934CD4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08934F38;
      }
      goto L_08934CF8;
    }
L_08934CF8:
    ctx.gpr[19] = (2231u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-24448));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2228u << 16u);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-30608));
    goto L_08934D34;
L_08934D34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[31] = (0x08934D44u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08934D44u) goto L_08934D44;
    return;
L_08934D44:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08934D60u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08934D60u) goto L_08934D60;
    return;
L_08934D60:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[22] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = ctx.fpr[17] + ctx.fpr[18];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08934DC4;
      }
      goto L_08934DB0;
    }
L_08934DB0:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
        goto L_08934DC4;
    }
    goto L_08934DC4;
L_08934DC4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934DF4;
      }
      goto L_08934DE0;
    }
L_08934DE0:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
        goto L_08934DF4;
    }
    goto L_08934DF4;
L_08934DF4:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[14]));
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
      if (branch_taken) {
          goto L_08934E2C;
      }
      goto L_08934E14;
    }
L_08934E14:
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934E14;
      }
      goto L_08934E28;
    }
L_08934E28:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_08934E2C;
L_08934E2C:
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934E54;
      }
      goto L_08934E3C;
    }
L_08934E3C:
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934E3C;
      }
      goto L_08934E50;
    }
L_08934E50:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_08934E54;
L_08934E54:
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934E7C;
      }
      goto L_08934E64;
    }
L_08934E64:
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934E64;
      }
      goto L_08934E78;
    }
L_08934E78:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    goto L_08934E7C;
L_08934E7C:
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934EA4;
      }
      goto L_08934E8C;
    }
L_08934E8C:
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934E8C;
      }
      goto L_08934EA0;
    }
L_08934EA0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    goto L_08934EA4;
L_08934EA4:
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934ECC;
      }
      goto L_08934EB4;
    }
L_08934EB4:
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934EB4;
      }
      goto L_08934EC8;
    }
L_08934EC8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_08934ECC;
L_08934ECC:
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934EF4;
      }
      goto L_08934EDC;
    }
L_08934EDC:
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08934EDC;
      }
      goto L_08934EF0;
    }
L_08934EF0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_08934EF4;
L_08934EF4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08934F0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 93u, 0x08868A80u>(ctx, &aot_mem) && ctx.pc == 0x08934F0Cu) goto L_08934F0C;
    return;
L_08934F0C:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08934F20u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 95u, 0x08868AF8u>(ctx, &aot_mem) && ctx.pc == 0x08934F20u) goto L_08934F20;
    return;
L_08934F20:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08934D34;
      }
      goto L_08934F38;
    }
L_08934F38:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08934F44u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08934F44u) goto L_08934F44;
    return;
L_08934F44:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08934F50u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08934F50u) goto L_08934F50;
    return;
L_08934F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934F74;
      }
      goto L_08934F60;
    }
L_08934F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934F74;
      }
      goto L_08934F6C;
    }
L_08934F6C:
    ctx.gpr[31] = (0x08934F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08934F74u) goto L_08934F74;
    return;
L_08934F74:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934FB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 421u, 0x08ACA8D4u>(ctx, &aot_mem) && ctx.pc == 0x08935000u) goto L_08935000;
    return;
L_08935000:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935140;
      }
      goto L_08935008;
    }
L_08935008:
    ctx.gpr[31] = (0x08935010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 425u, 0x08ACA8FCu>(ctx, &aot_mem) && ctx.pc == 0x08935010u) goto L_08935010;
    return;
L_08935010:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_08935140;
      }
      goto L_08935018;
    }
L_08935018:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22912)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11240)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08935140;
      }
      goto L_08935034;
    }
L_08935034:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7808)));
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6888)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08935138;
      }
      goto L_08935058;
    }
L_08935058:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22912)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11228)));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15488u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[20] = (2232u << 16u);
      if (branch_taken) {
          goto L_08935130;
      }
      goto L_0893509C;
    }
L_0893509C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (16352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08935130;
      }
      goto L_089350BC;
    }
L_089350BC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7736), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7732), 0u);
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[30]));
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31088));
      if (branch_taken) {
          goto L_08935148;
      }
      goto L_08935130;
    }
L_08935130:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935698;
      }
      goto L_08935138;
    }
L_08935138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935698;
      }
      goto L_08935140;
    }
L_08935140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935698;
      }
      goto L_08935148;
    }
L_08935148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (16512u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089353AC;
      }
      goto L_08935158;
    }
L_08935158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08935180;
      }
      goto L_08935174;
    }
L_08935174:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[13];
    goto L_08935180;
L_08935180:
    ctx.gpr[4] = (14976u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089351A4;
      }
      goto L_0893519C;
    }
L_0893519C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          goto L_0893557C;
      }
      goto L_089351A4;
    }
L_089351A4:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089351C8;
      }
      goto L_089351B4;
    }
L_089351B4:
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[28];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08935200;
      }
      goto L_089351C8;
    }
L_089351C8:
    ctx.gpr[4] = (16492u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089351FC;
      }
      goto L_089351E4;
    }
L_089351E4:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[28];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08935200;
      }
      goto L_089351FC;
    }
L_089351FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    goto L_08935200;
L_08935200:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089352C4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 666u, 0x08933AB4u>(ctx, &aot_mem) && ctx.pc == 0x089352C4u) goto L_089352C4;
    return;
L_089352C4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16448u << 16u);
      if (branch_taken) {
          goto L_089353A4;
      }
      goto L_089352DC;
    }
L_089352DC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089353A4;
      }
      goto L_089352F0;
    }
L_089352F0:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08935310;
      }
      goto L_08935308;
    }
L_08935308:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_0893532C;
      }
      goto L_08935310;
    }
L_08935310:
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_0893532C;
    }
    goto L_08935328;
L_08935328:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_0893532C;
L_0893532C:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08935354u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08935354u) goto L_08935354;
    return;
L_08935354:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (15523u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08935384u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08935384u) goto L_08935384;
    return;
L_08935384:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_089353A4;
L_089353A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893557C;
      }
      goto L_089353AC;
    }
L_089353AC:
    ctx.gpr[31] = (0x089353B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089353B4u) goto L_089353B4;
    return;
L_089353B4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3840u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893557C;
      }
      goto L_089353C4;
    }
L_089353C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16358u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (49472u << 16u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[14] = ctx.fpr[18] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(935)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089354B0;
      }
      goto L_08935448;
    }
L_08935448:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08935458u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x08935458u) goto L_08935458;
    return;
L_08935458:
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x0893548Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x0893548Cu) goto L_0893548C;
    return;
L_0893548C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_08935504;
      }
      goto L_089354B0;
    }
L_089354B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2416)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2420)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2424)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[19] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08935504;
L_08935504:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08935510u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08935510u) goto L_08935510;
    return;
L_08935510:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08935548u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08935548u) goto L_08935548;
    return;
L_08935548:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    goto L_0893557C;
L_0893557C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 35 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08935148;
      }
      goto L_0893558C;
    }
L_0893558C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893568C;
      }
      goto L_0893559C;
    }
L_0893559C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089355A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089355A8u) goto L_089355A8;
    return;
L_089355A8:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089355B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089355B4u) goto L_089355B4;
    return;
L_089355B4:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x089355C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089355C0u) goto L_089355C0;
    return;
L_089355C0:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[31] = (0x089355CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089355CCu) goto L_089355CC;
    return;
L_089355CC:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089355D8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089355D8u) goto L_089355D8;
    return;
L_089355D8:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x089355E4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089355E4u) goto L_089355E4;
    return;
L_089355E4:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089355F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089355F0u) goto L_089355F0;
    return;
L_089355F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6620)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08935604u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08935604u) goto L_08935604;
    return;
L_08935604:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x0893561Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20400));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868560u>(ctx, &aot_mem) && ctx.pc == 0x0893561Cu) goto L_0893561C;
    return;
L_0893561C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935644;
      }
      goto L_08935624;
    }
L_08935624:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7736)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x0893563Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28752));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886885Cu>(ctx, &aot_mem) && ctx.pc == 0x0893563Cu) goto L_0893563C;
    return;
L_0893563C:
    ctx.gpr[31] = (0x08935644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868844u>(ctx, &aot_mem) && ctx.pc == 0x08935644u) goto L_08935644;
    return;
L_08935644:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08935650u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08935650u) goto L_08935650;
    return;
L_08935650:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x0893565Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0893565Cu) goto L_0893565C;
    return;
L_0893565C:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08935668u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08935668u) goto L_08935668;
    return;
L_08935668:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08935674u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08935674u) goto L_08935674;
    return;
L_08935674:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08935680u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08935680u) goto L_08935680;
    return;
L_08935680:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0893568Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0893568Cu) goto L_0893568C;
    return;
L_0893568C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7736), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7732), 0u);
    goto L_08935698;
L_08935698:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089356E0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30812)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30816)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30788)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2228u << 16u);
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[3] = (2228u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-30808), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2228u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-30800), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-30804), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30796), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30792), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-30784), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935774:
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
L_089357A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08935800;
      }
      goto L_089357BC;
    }
L_089357BC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089357D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29680));
    ctx.pc = 0x08B0BAD4u;
    return;
L_089357D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-30404), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08935808;
      }
      goto L_089357E0;
    }
L_089357E0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30404)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29700));
    ctx.gpr[31] = (0x089357F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30394));
    goto L_08935774;
L_089357F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30404)));
      if (branch_taken) {
          goto L_0893580C;
      }
      goto L_08935800;
    }
L_08935800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893580C;
      }
      goto L_08935808;
    }
L_08935808:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893580C;
L_0893580C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893581C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30404)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935838u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB6Cu;
    return;
L_08935838:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935844:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893585Cu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BB54u;
    return;
L_0893585C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935868:
    ctx.gpr[4] = (2228u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-30396)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935874:
    ctx.gpr[4] = (2228u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-30395)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935880:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (9u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893590C;
      }
      goto L_0893589C;
    }
L_0893589C:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089358A4;
L_089358A4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089358B4u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = 0x08B0B8ACu;
    return;
L_089358B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089358CC;
      }
      goto L_089358BC;
    }
L_089358BC:
    ctx.gpr[31] = (0x089358C4u);
    ctx.gpr[4] = (0u | 50u);
    ctx.pc = 0x08B0BBF4u;
    return;
L_089358C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089358A4;
      }
      goto L_089358CC;
    }
L_089358CC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089358D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29724));
    goto L_08935774;
L_089358D8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-30396), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089358FC;
      }
      goto L_089358F0;
    }
L_089358F0:
    ctx.gpr[31] = (0x089358F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x089358F8u) goto L_089358F8;
    return;
L_089358F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20652)));
    goto L_089358FC;
L_089358FC:
    ctx.gpr[31] = (0x08935904u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 342u, 0x08A09678u>(ctx, &aot_mem) && ctx.pc == 0x08935904u) goto L_08935904;
    return;
L_08935904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935930;
      }
      goto L_0893590C;
    }
L_0893590C:
    ctx.gpr[4] = (6u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935930;
      }
      goto L_0893591C;
    }
L_0893591C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08935928u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29740));
    goto L_08935774;
L_08935928:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-30396), static_cast<std::uint8_t>(0u));
    goto L_08935930;
L_08935930:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935944:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08935974;
      }
      goto L_08935960;
    }
L_08935960:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0893596Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29752));
    goto L_08935774;
L_0893596C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089359EC;
      }
      goto L_08935974;
    }
L_08935974:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089359EC;
      }
      goto L_08935980;
    }
L_08935980:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0893598Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29764));
    goto L_08935774;
L_0893598C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-30396)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089359A4;
      }
      goto L_0893599C;
    }
L_0893599C:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-30395), static_cast<std::uint8_t>(0u));
    goto L_089359A4;
L_089359A4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089359EC;
      }
      goto L_089359B4;
    }
L_089359B4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x089359C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29776));
    goto L_08935774;
L_089359C0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
        goto L_089359DC;
    }
    goto L_089359D0;
L_089359D0:
    ctx.gpr[31] = (0x089359D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x089359D8u) goto L_089359D8;
    return;
L_089359D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_089359DC;
L_089359DC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089359EC;
L_089359EC:
    ctx.gpr[4] = (ctx.gpr[16] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935A14;
      }
      goto L_089359F8;
    }
L_089359F8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08935A04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29836));
    goto L_08935774;
L_08935A04:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2228u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-30395), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08935A7C;
      }
      goto L_08935A14;
    }
L_08935A14:
    ctx.gpr[4] = (ctx.gpr[16] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935A34;
      }
      goto L_08935A20;
    }
L_08935A20:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08935A2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29848));
    goto L_08935774;
L_08935A2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935A7C;
      }
      goto L_08935A34;
    }
L_08935A34:
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935A7C;
      }
      goto L_08935A40;
    }
L_08935A40:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08935A4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29864));
    goto L_08935774;
L_08935A4C:
    ctx.gpr[31] = (0x08935A54u);
    // nop
    ctx.pc = 0x08B0B7ACu;
    return;
L_08935A54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935A7C;
      }
      goto L_08935A5C;
    }
L_08935A5C:
    ctx.gpr[31] = (0x08935A64u);
    // nop
    ctx.pc = 0x08B0B7A4u;
    return;
L_08935A64:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29700));
    ctx.gpr[31] = (0x08935A7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30380));
    goto L_08935774;
L_08935A7C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935A94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(29884));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935AB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08935774;
L_08935AB4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(29888));
    ctx.gpr[31] = (0x08935AC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08935774;
L_08935AC4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08935AD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29912));
    goto L_08935774;
L_08935AD0:
    ctx.gpr[31] = (0x08935AD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08935774;
L_08935AD8:
    ctx.gpr[31] = (0x08935AE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08935774;
L_08935AE0:
    ctx.gpr[31] = (0x08935AE8u);
    // nop
    ctx.pc = 0x08B0BC8Cu;
    return;
L_08935AE8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935B00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935B18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30416)));
    ctx.pc = 0x08B0B7D4u;
    return;
L_08935B18:
    ctx.gpr[31] = (0x08935B20u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0B734u;
    return;
L_08935B20:
    ctx.gpr[31] = (0x08935B28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30416)));
    ctx.pc = 0x08B0BB14u;
    return;
L_08935B28:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935B34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30412)));
    ctx.pc = 0x08B0BB14u;
    return;
L_08935B34:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935B40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30408)));
    ctx.pc = 0x08B0BB14u;
    return;
L_08935B40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935B50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29936));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935B78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22656));
    ctx.pc = 0x08B0BAFCu;
    return;
L_08935B78:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08935D34;
      }
      goto L_08935B84;
    }
L_08935B84:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30412), ctx.gpr[16]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29952));
    ctx.gpr[31] = (0x08935BA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22852));
    ctx.pc = 0x08B0BAFCu;
    return;
L_08935BA4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08935D20;
      }
      goto L_08935BB0;
    }
L_08935BB0:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30416), ctx.gpr[16]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29964));
    ctx.gpr[31] = (0x08935BD0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23188));
    ctx.pc = 0x08B0BAFCu;
    return;
L_08935BD0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08935D00;
      }
      goto L_08935BDC;
    }
L_08935BDC:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30408), ctx.gpr[16]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30412)));
    ctx.gpr[31] = (0x08935BF4u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0B72Cu;
    return;
L_08935BF4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08935CD4;
      }
      goto L_08935C00;
    }
L_08935C00:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935C0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30416)));
    ctx.pc = 0x08B0B7CCu;
    return;
L_08935C0C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08935CA0;
      }
      goto L_08935C18;
    }
L_08935C18:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935C24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30408)));
    ctx.pc = 0x08B0BC94u;
    return;
L_08935C24:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08935C64;
      }
      goto L_08935C30;
    }
L_08935C30:
    ctx.gpr[31] = (0x08935C38u);
    // nop
    goto L_089357A0;
L_08935C38:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08935C54;
      }
      goto L_08935C44;
    }
L_08935C44:
    ctx.gpr[31] = (0x08935C4Cu);
    ctx.gpr[4] = (0u | 10000u);
    ctx.pc = 0x08B0BB8Cu;
    return;
L_08935C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935C44;
      }
      goto L_08935C54;
    }
L_08935C54:
    ctx.gpr[31] = (0x08935C5Cu);
    // nop
    goto L_08935B00;
L_08935C5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08935D38;
      }
      goto L_08935C64;
    }
L_08935C64:
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[31] = (0x08935C70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30416)));
    ctx.pc = 0x08B0B7D4u;
    return;
L_08935C70:
    ctx.gpr[31] = (0x08935C78u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0B734u;
    return;
L_08935C78:
    ctx.gpr[31] = (0x08935C80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30416)));
    ctx.pc = 0x08B0BB14u;
    return;
L_08935C80:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935C8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30412)));
    ctx.pc = 0x08B0BB14u;
    return;
L_08935C8C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935C98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30408)));
    ctx.pc = 0x08B0BB14u;
    return;
L_08935C98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08935D38;
      }
      goto L_08935CA0;
    }
L_08935CA0:
    ctx.gpr[31] = (0x08935CA8u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0B734u;
    return;
L_08935CA8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935CB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30416)));
    ctx.pc = 0x08B0BB14u;
    return;
L_08935CB4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935CC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30412)));
    ctx.pc = 0x08B0BB14u;
    return;
L_08935CC0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935CCCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30408)));
    ctx.pc = 0x08B0BB14u;
    return;
L_08935CCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08935D38;
      }
      goto L_08935CD4;
    }
L_08935CD4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935CE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30416)));
    ctx.pc = 0x08B0BB14u;
    return;
L_08935CE0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935CECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30412)));
    ctx.pc = 0x08B0BB14u;
    return;
L_08935CEC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935CF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30408)));
    ctx.pc = 0x08B0BB14u;
    return;
L_08935CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08935D38;
      }
      goto L_08935D00;
    }
L_08935D00:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935D0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30416)));
    ctx.pc = 0x08B0BB14u;
    return;
L_08935D0C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935D18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30412)));
    ctx.pc = 0x08B0BB14u;
    return;
L_08935D18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08935D38;
      }
      goto L_08935D20;
    }
L_08935D20:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08935D2Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30412)));
    ctx.pc = 0x08B0BB14u;
    return;
L_08935D2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08935D38;
      }
      goto L_08935D34;
    }
L_08935D34:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08935D38;
L_08935D38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935D4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 111u);
    ctx.gpr[7] = (0u | 4096u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29980));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935D78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23376));
    ctx.pc = 0x08B0BB64u;
    return;
L_08935D78:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08935D88;
      }
      goto L_08935D80;
    }
L_08935D80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935DA4;
      }
      goto L_08935D88;
    }
L_08935D88:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30400), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08935DA0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB1Cu;
    return;
L_08935DA0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08935DA4;
L_08935DA4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935DB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[30] = (32770u << 16u);
    ctx.gpr[23] = (32769u << 16u);
    ctx.gpr[22] = (2225u << 16u);
    ctx.gpr[21] = (2225u << 16u);
    ctx.gpr[20] = (32801u << 16u);
    ctx.gpr[19] = (32801u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(29992));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-30364));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-20479));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(91));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(30056));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(30016));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    goto L_08935E28;
L_08935E28:
    ctx.gpr[31] = (0x08935E30u);
    // nop
    ctx.pc = 0x08B0B7BCu;
    return;
L_08935E30:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935E80;
      }
      goto L_08935E3C;
    }
L_08935E3C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08935E4Cu);
    ctx.gpr[6] = (0u | 466u);
    goto L_08935774;
L_08935E4C:
    ctx.gpr[31] = (0x08935E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x08935E54u) goto L_08935E54;
    return;
L_08935E54:
    ctx.gpr[31] = (0x08935E5Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA94u;
    return;
L_08935E5C:
    ctx.gpr[31] = (0x08935E64u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B0B7C4u;
    return;
L_08935E64:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08935E78;
      }
      goto L_08935E70;
    }
L_08935E70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08935FDC;
      }
      goto L_08935E78;
    }
L_08935E78:
    ctx.gpr[31] = (0x08935E80u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA7Cu;
    return;
L_08935E80:
    ctx.gpr[31] = (0x08935E88u);
    // nop
    goto L_0893581C;
L_08935E88:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08935E9C;
      }
      goto L_08935E94;
    }
L_08935E94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935E70;
      }
      goto L_08935E9C;
    }
L_08935E9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08935EACu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08B0BCDCu;
    return;
L_08935EAC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08935EC0;
      }
      goto L_08935EB8;
    }
L_08935EB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935E70;
      }
      goto L_08935EC0;
    }
L_08935EC0:
    ctx.gpr[4] = (32769u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_08935F1C;
      }
      goto L_08935ED0;
    }
L_08935ED0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_08935F1C;
      }
      goto L_08935EDC;
    }
L_08935EDC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32770u << 16u);
      if (branch_taken) {
          goto L_08935F1C;
      }
      goto L_08935EE8;
    }
L_08935EE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20477));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_08935F1C;
      }
      goto L_08935EF4;
    }
L_08935EF4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32801u << 16u);
      if (branch_taken) {
          goto L_08935F1C;
      }
      goto L_08935F00;
    }
L_08935F00:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08935F1C;
      }
      goto L_08935F0C;
    }
L_08935F0C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08935F1C;
      }
      goto L_08935F14;
    }
L_08935F14:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08935F28;
      }
      goto L_08935F1C;
    }
L_08935F1C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08935F28u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08935774;
L_08935F28:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08935F38u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08935774;
L_08935F38:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08935F5C;
      }
      goto L_08935F40;
    }
L_08935F40:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08935F5C;
      }
      goto L_08935F48;
    }
L_08935F48:
    ctx.gpr[31] = (0x08935F50u);
    // nop
    ctx.pc = 0x08B0B7BCu;
    return;
L_08935F50:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935FA0;
      }
      goto L_08935F5C;
    }
L_08935F5C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08935F6Cu);
    ctx.gpr[6] = (0u | 515u);
    goto L_08935774;
L_08935F6C:
    ctx.gpr[31] = (0x08935F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x08935F74u) goto L_08935F74;
    return;
L_08935F74:
    ctx.gpr[31] = (0x08935F7Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA94u;
    return;
L_08935F7C:
    ctx.gpr[31] = (0x08935F84u);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08B0B7C4u;
    return;
L_08935F84:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08935F98;
      }
      goto L_08935F90;
    }
L_08935F90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935E70;
      }
      goto L_08935F98;
    }
L_08935F98:
    ctx.gpr[31] = (0x08935FA0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA7Cu;
    return;
L_08935FA0:
    ctx.gpr[31] = (0x08935FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x08935FA8u) goto L_08935FA8;
    return;
L_08935FA8:
    ctx.gpr[31] = (0x08935FB0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA94u;
    return;
L_08935FB0:
    ctx.gpr[31] = (0x08935FB8u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B0B7C4u;
    return;
L_08935FB8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08935FCC;
      }
      goto L_08935FC4;
    }
L_08935FC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935E70;
      }
      goto L_08935FCC;
    }
L_08935FCC:
    ctx.gpr[31] = (0x08935FD4u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA7Cu;
    return;
L_08935FD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935E28;
      }
      goto L_08935FDC;
    }
L_08935FDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893600C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08936038u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0893581C;
L_08936038:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089360A0;
      }
      goto L_08936044;
    }
L_08936044:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08936058u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BCBCu;
    return;
L_08936058:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30340)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30344)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] ^ ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089360AC;
      }
      goto L_0893608C;
    }
L_0893608C:
    ctx.gpr[31] = (0x08936094u);
    // nop
    goto L_08935844;
L_08936094:
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089360B4;
      }
      goto L_089360A0;
    }
L_089360A0:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089360B4;
      }
      goto L_089360AC;
    }
L_089360AC:
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_089360B4;
L_089360B4:
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
L_089360D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[30] = (32770u << 16u);
    ctx.gpr[23] = (32769u << 16u);
    ctx.gpr[22] = (2225u << 16u);
    ctx.gpr[21] = (2225u << 16u);
    ctx.gpr[20] = (32801u << 16u);
    ctx.gpr[19] = (32801u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(29992));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-30327));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-20479));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(91));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(30056));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(30016));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    goto L_08936148;
L_08936148:
    ctx.gpr[31] = (0x08936150u);
    // nop
    ctx.pc = 0x08B0B7BCu;
    return;
L_08936150:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089361A0;
      }
      goto L_0893615C;
    }
L_0893615C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0893616Cu);
    ctx.gpr[6] = (0u | 864u);
    goto L_08935774;
L_0893616C:
    ctx.gpr[31] = (0x08936174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x08936174u) goto L_08936174;
    return;
L_08936174:
    ctx.gpr[31] = (0x0893617Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA94u;
    return;
L_0893617C:
    ctx.gpr[31] = (0x08936184u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B0B7C4u;
    return;
L_08936184:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08936198;
      }
      goto L_08936190;
    }
L_08936190:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08936300;
      }
      goto L_08936198;
    }
L_08936198:
    ctx.gpr[31] = (0x089361A0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA7Cu;
    return;
L_089361A0:
    ctx.gpr[31] = (0x089361A8u);
    // nop
    goto L_0893581C;
L_089361A8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089361BC;
      }
      goto L_089361B4;
    }
L_089361B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936190;
      }
      goto L_089361BC;
    }
L_089361BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x089361CCu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08B0BCB4u;
    return;
L_089361CC:
    ctx.gpr[31] = (0x089361D4u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08935844;
L_089361D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089361E4;
      }
      goto L_089361DC;
    }
L_089361DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936190;
      }
      goto L_089361E4;
    }
L_089361E4:
    ctx.gpr[4] = (32769u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_08936240;
      }
      goto L_089361F4;
    }
L_089361F4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_08936240;
      }
      goto L_08936200;
    }
L_08936200:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32770u << 16u);
      if (branch_taken) {
          goto L_08936240;
      }
      goto L_0893620C;
    }
L_0893620C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20477));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_08936240;
      }
      goto L_08936218;
    }
L_08936218:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (32801u << 16u);
      if (branch_taken) {
          goto L_08936240;
      }
      goto L_08936224;
    }
L_08936224:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08936240;
      }
      goto L_08936230;
    }
L_08936230:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08936240;
      }
      goto L_08936238;
    }
L_08936238:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0893624C;
      }
      goto L_08936240;
    }
L_08936240:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0893624Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08935774;
L_0893624C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0893625Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08935774;
L_0893625C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08936280;
      }
      goto L_08936264;
    }
L_08936264:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08936280;
      }
      goto L_0893626C;
    }
L_0893626C:
    ctx.gpr[31] = (0x08936274u);
    // nop
    ctx.pc = 0x08B0B7BCu;
    return;
L_08936274:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089362C4;
      }
      goto L_08936280;
    }
L_08936280:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08936290u);
    ctx.gpr[6] = (0u | 913u);
    goto L_08935774;
L_08936290:
    ctx.gpr[31] = (0x08936298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x08936298u) goto L_08936298;
    return;
L_08936298:
    ctx.gpr[31] = (0x089362A0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA94u;
    return;
L_089362A0:
    ctx.gpr[31] = (0x089362A8u);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08B0B7C4u;
    return;
L_089362A8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089362BC;
      }
      goto L_089362B4;
    }
L_089362B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936190;
      }
      goto L_089362BC;
    }
L_089362BC:
    ctx.gpr[31] = (0x089362C4u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA7Cu;
    return;
L_089362C4:
    ctx.gpr[31] = (0x089362CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x089362CCu) goto L_089362CC;
    return;
L_089362CC:
    ctx.gpr[31] = (0x089362D4u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA94u;
    return;
L_089362D4:
    ctx.gpr[31] = (0x089362DCu);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B0B7C4u;
    return;
L_089362DC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089362F0;
      }
      goto L_089362E8;
    }
L_089362E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936190;
      }
      goto L_089362F0;
    }
L_089362F0:
    ctx.gpr[31] = (0x089362F8u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA7Cu;
    return;
L_089362F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936148;
      }
      goto L_08936300;
    }
L_08936300:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936330:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893635Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0893581C;
L_0893635C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089363E4;
      }
      goto L_08936368;
    }
L_08936368:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0893637Cu);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BD2Cu;
    return;
L_0893637C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30340)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30344)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] ^ ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089363D0;
      }
      goto L_089363B0;
    }
L_089363B0:
    ctx.gpr[31] = (0x089363B8u);
    // nop
    goto L_08935844;
L_089363B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089363F0;
      }
      goto L_089363C4;
    }
L_089363C4:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089363F8;
      }
      goto L_089363D0;
    }
L_089363D0:
    ctx.gpr[31] = (0x089363D8u);
    // nop
    goto L_08935844;
L_089363D8:
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089363F8;
      }
      goto L_089363E4;
    }
L_089363E4:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089363F8;
      }
      goto L_089363F0;
    }
L_089363F0:
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_089363F8;
L_089363F8:
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
L_08936414:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936430:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (16179u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (16204u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089364A8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089364A8u) goto L_089364A8;
    return;
L_089364A8:
    ctx.gpr[4] = (0u | 640u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936500:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_0893654C;
      }
      goto L_08936534;
    }
L_08936534:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
        goto L_089365C8;
    }
    goto L_0893654C;
L_0893654C:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08936574;
      }
      goto L_0893655C;
    }
L_0893655C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
        goto L_089365C8;
    }
    goto L_08936574;
L_08936574:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893659C;
      }
      goto L_08936584;
    }
L_08936584:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
        goto L_089365C8;
    }
    goto L_0893659C;
L_0893659C:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089365E4;
      }
      goto L_089365AC;
    }
L_089365AC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089365E4;
      }
      goto L_089365C4;
    }
L_089365C4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_089365C8;
L_089365C8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089365E4;
L_089365E4:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089365EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893660Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 19u, 0x089381FCu>(ctx, &aot_mem) && ctx.pc == 0x0893660Cu) goto L_0893660C;
    return;
L_0893660C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936624;
      }
      goto L_08936618;
    }
L_08936618:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089366C4;
      }
      goto L_08936624;
    }
L_08936624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08936634u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08936634u) goto L_08936634;
    return;
L_08936634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08936650u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08936650u) goto L_08936650;
    return;
L_08936650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x0893665Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x0893665Cu) goto L_0893665C;
    return;
L_0893665C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0893668C;
      }
      goto L_08936680;
    }
L_08936680:
    ctx.gpr[9] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0893668C;
L_0893668C:
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[11] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x089366B8u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 277u, 0x08A55314u>(ctx, &aot_mem) && ctx.pc == 0x089366B8u) goto L_089366B8;
    return;
L_089366B8:
    ctx.gpr[31] = (0x089366C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x089366C0u) goto L_089366C0;
    return;
L_089366C0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    goto L_089366C4;
L_089366C4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089366E4;
      }
      goto L_089366CC;
    }
L_089366CC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089366E4;
L_089366E4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08936700;
      }
      goto L_089366F4;
    }
L_089366F4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08936700u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08936700u) goto L_08936700;
    return;
L_08936700:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936714:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08936918;
      }
      goto L_08936744;
    }
L_08936744:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08936778;
      }
      goto L_0893675C;
    }
L_0893675C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0893677C;
      }
      goto L_08936774;
    }
L_08936774:
    ctx.gpr[4] = (0u | 1u);
    goto L_08936778;
L_08936778:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0893677C;
L_0893677C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936918;
      }
      goto L_08936784;
    }
L_08936784:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089367C8;
      }
      goto L_08936794;
    }
L_08936794:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_089367CC;
    }
    goto L_089367A4;
L_089367A4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(26)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_089367CC;
    }
    goto L_089367B4;
L_089367B4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(27)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089367CC;
      }
      goto L_089367C4;
    }
L_089367C4:
    ctx.gpr[4] = (0u | 1u);
    goto L_089367C8;
L_089367C8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089367CC;
L_089367CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936918;
      }
      goto L_089367D4;
    }
L_089367D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08936918;
      }
      goto L_089367E4;
    }
L_089367E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08936918;
      }
      goto L_089367F4;
    }
L_089367F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08936828;
      }
      goto L_0893680C;
    }
L_0893680C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0893682C;
      }
      goto L_08936824;
    }
L_08936824:
    ctx.gpr[4] = (0u | 1u);
    goto L_08936828;
L_08936828:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0893682C;
L_0893682C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936918;
      }
      goto L_08936834;
    }
L_08936834:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08936868;
      }
      goto L_0893684C;
    }
L_0893684C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0893686C;
      }
      goto L_08936864;
    }
L_08936864:
    ctx.gpr[4] = (0u | 1u);
    goto L_08936868;
L_08936868:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0893686C;
L_0893686C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936918;
      }
      goto L_08936874;
    }
L_08936874:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089368A8;
      }
      goto L_0893688C;
    }
L_0893688C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089368AC;
      }
      goto L_089368A4;
    }
L_089368A4:
    ctx.gpr[4] = (0u | 1u);
    goto L_089368A8;
L_089368A8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089368AC;
L_089368AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936918;
      }
      goto L_089368B4;
    }
L_089368B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089368E0;
      }
      goto L_089368C4;
    }
L_089368C4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089368D4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 371u, 0x08AED4A0u>(ctx, &aot_mem) && ctx.pc == 0x089368D4u) goto L_089368D4;
    return;
L_089368D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_089368E4;
      }
      goto L_089368DC;
    }
L_089368DC:
    ctx.gpr[19] = (0u | 1u);
    goto L_089368E0;
L_089368E0:
    ctx.gpr[4] = (ctx.gpr[19] & 255u);
    goto L_089368E4;
L_089368E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936918;
      }
      goto L_089368EC;
    }
L_089368EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08936918;
      }
      goto L_08936904;
    }
L_08936904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08936918;
      }
      goto L_08936914;
    }
L_08936914:
    ctx.gpr[18] = (0u | 1u);
    goto L_08936918;
L_08936918:
    ctx.gpr[2] = (ctx.gpr[18] & 255u);
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
L_08936938:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x08936964u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 659u, 0x08AC3DE4u>(ctx, &aot_mem) && ctx.pc == 0x08936964u) goto L_08936964;
    return;
L_08936964:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18316));
    ctx.gpr[18] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-30104));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089369A8;
      }
      goto L_08936988;
    }
L_08936988:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089369A0;
      }
      goto L_08936994;
    }
L_08936994:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089369A0;
L_089369A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08936AB4;
      }
      goto L_089369A8;
    }
L_089369A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-30104)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089369E8;
      }
      goto L_089369D8;
    }
L_089369D8:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089369F4;
      }
      goto L_089369E8;
    }
L_089369E8:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[20]);
    goto L_089369F4;
L_089369F4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08936A34;
      }
      goto L_089369FC;
    }
L_089369FC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08936A10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08936A10u) goto L_08936A10;
    return;
L_08936A10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08936A34;
      }
      goto L_08936A20;
    }
L_08936A20:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[31] = (0x08936A2Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08936A2Cu) goto L_08936A2C;
    return;
L_08936A2C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08936A34;
L_08936A34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-30104)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08936A48;
      }
      goto L_08936A40;
    }
L_08936A40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08936A64;
      }
      goto L_08936A48;
    }
L_08936A48:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08936A5Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08936A5Cu) goto L_08936A5C;
    return;
L_08936A5C:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08936A64;
L_08936A64:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08936A8C;
    }
    goto L_08936A78;
L_08936A78:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08936A78;
      }
      goto L_08936A88;
    }
L_08936A88:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08936A8C;
L_08936A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-30104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08936AA0;
      }
      goto L_08936A98;
    }
L_08936A98:
    ctx.gpr[31] = (0x08936AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08936AA0u) goto L_08936AA0;
    return;
L_08936AA0:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-30104), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08936AB4;
L_08936AB4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936AE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x08936B1Cu);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 659u, 0x08AC3DE4u>(ctx, &aot_mem) && ctx.pc == 0x08936B1Cu) goto L_08936B1C;
    return;
L_08936B1C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18316));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08936B3Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936B3Cu) goto L_08936B3C;
    return;
L_08936B3C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[31] = (0x08936B50u);
    ctx.gpr[4] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08936B50u) goto L_08936B50;
    return;
L_08936B50:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 72u);
    ctx.gpr[31] = (0x08936B60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08936B60u) goto L_08936B60;
    return;
L_08936B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (2276u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-30104));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08936B8C;
      }
      goto L_08936B80;
    }
L_08936B80:
    ctx.gpr[31] = (0x08936B88u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08936430;
L_08936B88:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08936B8C;
L_08936B8C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08936B9Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 131u, 0x08AC5034u>(ctx, &aot_mem) && ctx.pc == 0x08936B9Cu) goto L_08936B9C;
    return;
L_08936B9C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08936BB0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 57u, 0x089C0478u>(ctx, &aot_mem) && ctx.pc == 0x08936BB0u) goto L_08936BB0;
    return;
L_08936BB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08936BBCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 426u, 0x08A5A2CCu>(ctx, &aot_mem) && ctx.pc == 0x08936BBCu) goto L_08936BBC;
    return;
L_08936BBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08936BEC;
      }
      goto L_08936BCC;
    }
L_08936BCC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08936BE4;
      }
      goto L_08936BD8;
    }
L_08936BD8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08936BE4;
L_08936BE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08936CF8;
      }
      goto L_08936BEC;
    }
L_08936BEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-30104)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08936C2C;
      }
      goto L_08936C1C;
    }
L_08936C1C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08936C38;
      }
      goto L_08936C2C;
    }
L_08936C2C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_08936C38;
L_08936C38:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08936C78;
      }
      goto L_08936C40;
    }
L_08936C40:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08936C54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08936C54u) goto L_08936C54;
    return;
L_08936C54:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08936C78;
      }
      goto L_08936C64;
    }
L_08936C64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[31] = (0x08936C70u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08936C70u) goto L_08936C70;
    return;
L_08936C70:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08936C78;
L_08936C78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-30104)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08936C8C;
      }
      goto L_08936C84;
    }
L_08936C84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08936CA8;
      }
      goto L_08936C8C;
    }
L_08936C8C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08936CA0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08936CA0u) goto L_08936CA0;
    return;
L_08936CA0:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08936CA8;
L_08936CA8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08936CD0;
    }
    goto L_08936CBC;
L_08936CBC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08936CBC;
      }
      goto L_08936CCC;
    }
L_08936CCC:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08936CD0;
L_08936CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-30104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08936CE4;
      }
      goto L_08936CDC;
    }
L_08936CDC:
    ctx.gpr[31] = (0x08936CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08936CE4u) goto L_08936CE4;
    return;
L_08936CE4:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-30104), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08936CF8;
L_08936CF8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936D24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08936E3C;
      }
      goto L_08936D44;
    }
L_08936D44:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18316));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30104));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08936D70u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 397u, 0x08B01A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08936D70u) goto L_08936D70;
    return;
L_08936D70:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08936D84;
      }
      goto L_08936D7C;
    }
L_08936D7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08936DBC;
      }
      goto L_08936D84;
    }
L_08936D84:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08936DBC;
      }
      goto L_08936D94;
    }
L_08936D94:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08936D98;
L_08936D98:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08936DB4;
    }
    goto L_08936DA4;
L_08936DA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08936DB4;
L_08936DB4:
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08936D98;
    }
    goto L_08936DBC;
L_08936DBC:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30104));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08936DF4;
      }
      goto L_08936DD4;
    }
L_08936DD4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08936DECu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08936DECu) goto L_08936DEC;
    return;
L_08936DEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08936DF4;
      }
      goto L_08936DF4;
    }
L_08936DF4:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30104));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08936E28;
      }
      goto L_08936E08;
    }
L_08936E08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9180));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08936E1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 99u, 0x08AC4CB8u>(ctx, &aot_mem) && ctx.pc == 0x08936E1Cu) goto L_08936E1C;
    return;
L_08936E1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08936E28u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 668u, 0x08AC3F40u>(ctx, &aot_mem) && ctx.pc == 0x08936E28u) goto L_08936E28;
    return;
L_08936E28:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936E3C;
      }
      goto L_08936E34;
    }
L_08936E34:
    ctx.gpr[31] = (0x08936E3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08936E3Cu) goto L_08936E3C;
    return;
L_08936E3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936E54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08936E90;
      }
      goto L_08936E74;
    }
L_08936E74:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08936E84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08936E84u) goto L_08936E84;
    return;
L_08936E84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08936E90;
L_08936E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08936EA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08936EA4u) goto L_08936EA4;
    return;
L_08936EA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936EB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08936EEC;
      }
      goto L_08936ED0;
    }
L_08936ED0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08936EE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08936EE0u) goto L_08936EE0;
    return;
L_08936EE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08936EEC;
L_08936EEC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936F04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08936F58;
      }
      goto L_08936F3C;
    }
L_08936F3C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08936F4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08936F4Cu) goto L_08936F4C;
    return;
L_08936F4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08936F58;
L_08936F58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_0893704C;
      }
      goto L_08936F74;
    }
L_08936F74:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0893706C;
      }
      goto L_0893704C;
    }
L_0893704C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0893706C;
L_0893706C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893708C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089370C0;
      }
      goto L_089370A4;
    }
L_089370A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089370B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089370B4u) goto L_089370B4;
    return;
L_089370B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089370C0;
L_089370C0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(52));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089370D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893711C;
      }
      goto L_08937100;
    }
L_08937100:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08937110u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08937110u) goto L_08937110;
    return;
L_08937110:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893711C;
L_0893711C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893714C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08937180;
      }
      goto L_08937164;
    }
L_08937164:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08937174u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08937174u) goto L_08937174;
    return;
L_08937174:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937180;
L_08937180:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937198:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089371D4;
      }
      goto L_089371B8;
    }
L_089371B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089371C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089371C8u) goto L_089371C8;
    return;
L_089371C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089371D4;
L_089371D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089371F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08937224;
      }
      goto L_08937208;
    }
L_08937208:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08937218u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08937218u) goto L_08937218;
    return;
L_08937218:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937224;
L_08937224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893723C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08937278;
      }
      goto L_0893725C;
    }
L_0893725C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0893726Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0893726Cu) goto L_0893726C;
    return;
L_0893726C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937278;
L_08937278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937294:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089372C8;
      }
      goto L_089372AC;
    }
L_089372AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089372BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089372BCu) goto L_089372BC;
    return;
L_089372BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089372C8;
L_089372C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089372E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0893731C;
      }
      goto L_08937300;
    }
L_08937300:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08937310u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08937310u) goto L_08937310;
    return;
L_08937310:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893731C;
L_0893731C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937338:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0893736C;
      }
      goto L_08937350;
    }
L_08937350:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08937360u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08937360u) goto L_08937360;
    return;
L_08937360:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893736C;
L_0893736C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089373C0;
      }
      goto L_089373A4;
    }
L_089373A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089373B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089373B4u) goto L_089373B4;
    return;
L_089373B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089373C0;
L_089373C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089373FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08937430;
      }
      goto L_08937414;
    }
L_08937414:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08937424u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08937424u) goto L_08937424;
    return;
L_08937424:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937430;
L_08937430:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08937484;
      }
      goto L_08937468;
    }
L_08937468:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08937478u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08937478u) goto L_08937478;
    return;
L_08937478:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937484;
L_08937484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089374A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089374D4;
      }
      goto L_089374B8;
    }
L_089374B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089374C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089374C8u) goto L_089374C8;
    return;
L_089374C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089374D4;
L_089374D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089374EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08937528;
      }
      goto L_0893750C;
    }
L_0893750C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0893751Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0893751Cu) goto L_0893751C;
    return;
L_0893751C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937528;
L_08937528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08937578;
      }
      goto L_0893755C;
    }
L_0893755C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0893756Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0893756Cu) goto L_0893756C;
    return;
L_0893756C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937578;
L_08937578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937590:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089375A4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08936500;
L_089375A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089375B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
      if (branch_taken) {
          goto L_08937634;
      }
      goto L_08937604;
    }
L_08937604:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08937618u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08937618u) goto L_08937618;
    return;
L_08937618:
    ctx.gpr[7] = (0u | 65535u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893762Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08937C94;
L_0893762C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08937674;
      }
      goto L_08937634;
    }
L_08937634:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08937648u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08937648u) goto L_08937648;
    return;
L_08937648:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[31] = (0x08937660u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 114u, 0x08AC4E74u>(ctx, &aot_mem) && ctx.pc == 0x08937660u) goto L_08937660;
    return;
L_08937660:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08937674u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_089379D8;
L_08937674:
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
L_0893768C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (ctx.gpr[17] & 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089376F4;
      }
      goto L_089376E8;
    }
L_089376E8:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089376F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 102u, 0x08A5CE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089376F4u) goto L_089376F4;
    return;
L_089376F4:
    ctx.gpr[4] = (ctx.gpr[17] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893770C;
      }
      goto L_08937700;
    }
L_08937700:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0893770Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 101u, 0x08A5CDA4u>(ctx, &aot_mem) && ctx.pc == 0x0893770Cu) goto L_0893770C;
    return;
L_0893770C:
    ctx.gpr[4] = (ctx.gpr[17] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937724;
      }
      goto L_08937718;
    }
L_08937718:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08937724u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 107u, 0x08A5CF04u>(ctx, &aot_mem) && ctx.pc == 0x08937724u) goto L_08937724;
    return;
L_08937724:
    ctx.gpr[4] = (ctx.gpr[17] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937794;
      }
      goto L_08937730;
    }
L_08937730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08937794;
L_08937794:
    ctx.gpr[4] = (ctx.gpr[17] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089377AC;
      }
      goto L_089377A0;
    }
L_089377A0:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x089377ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 101u, 0x08A5CDA4u>(ctx, &aot_mem) && ctx.pc == 0x089377ACu) goto L_089377AC;
    return;
L_089377AC:
    ctx.gpr[4] = (ctx.gpr[17] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089377C4;
      }
      goto L_089377B8;
    }
L_089377B8:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x089377C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 101u, 0x08A5CDA4u>(ctx, &aot_mem) && ctx.pc == 0x089377C4u) goto L_089377C4;
    return;
L_089377C4:
    ctx.gpr[4] = (ctx.gpr[17] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089377DC;
      }
      goto L_089377D0;
    }
L_089377D0:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x089377DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 101u, 0x08A5CDA4u>(ctx, &aot_mem) && ctx.pc == 0x089377DCu) goto L_089377DC;
    return;
L_089377DC:
    ctx.gpr[4] = (ctx.gpr[17] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089377FC;
      }
      goto L_089377E8;
    }
L_089377E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089377FC;
L_089377FC:
    ctx.gpr[4] = (ctx.gpr[17] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893781C;
      }
      goto L_08937808;
    }
L_08937808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893781C;
L_0893781C:
    ctx.gpr[4] = (ctx.gpr[17] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937890;
      }
      goto L_08937828;
    }
L_08937828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08937890;
L_08937890:
    ctx.gpr[4] = (ctx.gpr[17] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937900;
      }
      goto L_0893789C;
    }
L_0893789C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_08937900;
L_08937900:
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
L_0893791C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08937944u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 642u, 0x088A7D80u>(ctx, &aot_mem) && ctx.pc == 0x08937944u) goto L_08937944;
    return;
L_08937944:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937964;
      }
      goto L_0893794C;
    }
L_0893794C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16657)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893796C;
      }
      goto L_0893795C;
    }
L_0893795C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937988;
      }
      goto L_08937964;
    }
L_08937964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089379C8;
      }
      goto L_0893796C;
    }
L_0893796C:
    ctx.gpr[31] = (0x08937974u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089374A0;
L_08937974:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893799C;
      }
      goto L_08937988;
    }
L_08937988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089379A4;
      }
      goto L_08937994;
    }
L_08937994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089379C0;
      }
      goto L_0893799C;
    }
L_0893799C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089379C8;
      }
      goto L_089379A4;
    }
L_089379A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089379B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089379B4u) goto L_089379B4;
    return;
L_089379B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089379C0;
L_089379C0:
    ctx.gpr[31] = (0x089379C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_089365EC;
L_089379C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089379D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08937A38;
      }
      goto L_08937A1C;
    }
L_08937A1C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08937A2Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 371u, 0x08AED4A0u>(ctx, &aot_mem) && ctx.pc == 0x08937A2Cu) goto L_08937A2C;
    return;
L_08937A2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08937A3C;
      }
      goto L_08937A34;
    }
L_08937A34:
    ctx.gpr[21] = (0u | 1u);
    goto L_08937A38;
L_08937A38:
    ctx.gpr[4] = (ctx.gpr[21] & 255u);
    goto L_08937A3C;
L_08937A3C:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937A50;
      }
      goto L_08937A4C;
    }
L_08937A4C:
    ctx.gpr[20] = (0u | 2u);
    goto L_08937A50;
L_08937A50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08937A84;
      }
      goto L_08937A68;
    }
L_08937A68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08937A88;
      }
      goto L_08937A80;
    }
L_08937A80:
    ctx.gpr[4] = (0u | 1u);
    goto L_08937A84;
L_08937A84:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08937A88;
L_08937A88:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937A9C;
      }
      goto L_08937A98;
    }
L_08937A98:
    ctx.gpr[20] = (ctx.gpr[20] | 8u);
    goto L_08937A9C;
L_08937A9C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08937AE0;
      }
      goto L_08937AAC;
    }
L_08937AAC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(25)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08937AE4;
    }
    goto L_08937ABC;
L_08937ABC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(26)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(26)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08937AE4;
    }
    goto L_08937ACC;
L_08937ACC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(27)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08937AE4;
      }
      goto L_08937ADC;
    }
L_08937ADC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08937AE0;
L_08937AE0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08937AE4;
L_08937AE4:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937AF8;
      }
      goto L_08937AF4;
    }
L_08937AF4:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    goto L_08937AF8;
L_08937AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08937B0C;
      }
      goto L_08937B08;
    }
L_08937B08:
    ctx.gpr[20] = (ctx.gpr[20] | 32u);
    goto L_08937B0C;
L_08937B0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08937B40;
      }
      goto L_08937B24;
    }
L_08937B24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08937B44;
      }
      goto L_08937B3C;
    }
L_08937B3C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08937B40;
L_08937B40:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08937B44;
L_08937B44:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937B58;
      }
      goto L_08937B54;
    }
L_08937B54:
    ctx.gpr[20] = (ctx.gpr[20] | 64u);
    goto L_08937B58;
L_08937B58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08937B8C;
      }
      goto L_08937B70;
    }
L_08937B70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08937B90;
      }
      goto L_08937B88;
    }
L_08937B88:
    ctx.gpr[4] = (0u | 1u);
    goto L_08937B8C;
L_08937B8C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08937B90;
L_08937B90:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937BA4;
      }
      goto L_08937BA0;
    }
L_08937BA0:
    ctx.gpr[20] = (ctx.gpr[20] | 128u);
    goto L_08937BA4;
L_08937BA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08937BD8;
      }
      goto L_08937BBC;
    }
L_08937BBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08937BDC;
      }
      goto L_08937BD4;
    }
L_08937BD4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08937BD8;
L_08937BD8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08937BDC;
L_08937BDC:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937BF0;
      }
      goto L_08937BEC;
    }
L_08937BEC:
    ctx.gpr[20] = (ctx.gpr[20] | 256u);
    goto L_08937BF0;
L_08937BF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08937C04;
      }
      goto L_08937C00;
    }
L_08937C00:
    ctx.gpr[20] = (ctx.gpr[20] | 512u);
    goto L_08937C04;
L_08937C04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08937C18;
      }
      goto L_08937C14;
    }
L_08937C14:
    ctx.gpr[20] = (ctx.gpr[20] | 4u);
    goto L_08937C18;
L_08937C18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08937C34;
      }
      goto L_08937C30;
    }
L_08937C30:
    ctx.gpr[20] = (ctx.gpr[20] | 1024u);
    goto L_08937C34;
L_08937C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08937C48;
      }
      goto L_08937C44;
    }
L_08937C44:
    ctx.gpr[20] = (ctx.gpr[20] | 2048u);
    goto L_08937C48;
L_08937C48:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937C6C;
      }
      goto L_08937C50;
    }
L_08937C50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08937C64u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_08937C94;
L_08937C64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08937C70;
      }
      goto L_08937C6C;
    }
L_08937C6C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08937C70;
L_08937C70:
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
L_08937C94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] & 2u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08937D24;
      }
      goto L_08937D18;
    }
L_08937D18:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08937D24u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 95u, 0x08A5CB34u>(ctx, &aot_mem) && ctx.pc == 0x08937D24u) goto L_08937D24;
    return;
L_08937D24:
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937D3C;
      }
      goto L_08937D30;
    }
L_08937D30:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08937D3Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 94u, 0x08A5C9B0u>(ctx, &aot_mem) && ctx.pc == 0x08937D3Cu) goto L_08937D3C;
    return;
L_08937D3C:
    ctx.gpr[4] = (ctx.gpr[16] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937D54;
      }
      goto L_08937D48;
    }
L_08937D48:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08937D54u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 98u, 0x08A5CBC0u>(ctx, &aot_mem) && ctx.pc == 0x08937D54u) goto L_08937D54;
    return;
L_08937D54:
    ctx.gpr[4] = (ctx.gpr[16] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937E1C;
      }
      goto L_08937D60;
    }
L_08937D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] >> 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937E1C;
L_08937E1C:
    ctx.gpr[4] = (ctx.gpr[16] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937E34;
      }
      goto L_08937E28;
    }
L_08937E28:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x08937E34u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 94u, 0x08A5C9B0u>(ctx, &aot_mem) && ctx.pc == 0x08937E34u) goto L_08937E34;
    return;
L_08937E34:
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937E4C;
      }
      goto L_08937E40;
    }
L_08937E40:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08937E4Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 94u, 0x08A5C9B0u>(ctx, &aot_mem) && ctx.pc == 0x08937E4Cu) goto L_08937E4C;
    return;
L_08937E4C:
    ctx.gpr[4] = (ctx.gpr[16] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937E64;
      }
      goto L_08937E58;
    }
L_08937E58:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08937E64u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 94u, 0x08A5C9B0u>(ctx, &aot_mem) && ctx.pc == 0x08937E64u) goto L_08937E64;
    return;
L_08937E64:
    ctx.gpr[4] = (ctx.gpr[16] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937E98;
      }
      goto L_08937E70;
    }
L_08937E70:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08937E98;
L_08937E98:
    ctx.gpr[4] = (ctx.gpr[16] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937ECC;
      }
      goto L_08937EA4;
    }
L_08937EA4:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08937ECC;
L_08937ECC:
    ctx.gpr[4] = (ctx.gpr[16] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937F98;
      }
      goto L_08937ED8;
    }
L_08937ED8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] >> 16u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937F98;
L_08937F98:
    ctx.gpr[4] = (ctx.gpr[16] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 2u, 0x08938060u>(ctx, &aot_mem); return;
      }
      goto L_08937FA4;
    }
L_08937FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] >> 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.pc = 0x08938000u; return;
}

void recomp_unit_0076(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0076_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_76(Runtime &runtime) {
    runtime.register_generated_unit(76u, 0x08934000u, 16384u, &recomp_unit_0076, &recomp_unit_0076_entry);
    runtime.register_function(0x08934000u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934050u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934068u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934078u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934088u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893409Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934100u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934108u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934110u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934120u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893412Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934130u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934134u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893413Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893415Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934168u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934174u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893417Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934184u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893418Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934194u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934200u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934238u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934250u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934264u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934284u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893428Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934294u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893429Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934300u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934314u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934338u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934344u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934354u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893435Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893438Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934390u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934404u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893440Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934418u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893441Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934424u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893442Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934450u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893445Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934470u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893447Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893449Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893451Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934528u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934538u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934540u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934544u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934550u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934558u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934564u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934574u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893457Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934584u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934594u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934608u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934610u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934620u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893462Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934634u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893463Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934658u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934668u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934670u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893468Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934700u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934734u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934750u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934760u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934774u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893477Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934828u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893483Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934844u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934850u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934868u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934874u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934880u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893488Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934904u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893490Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934914u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934920u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934928u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893492Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934938u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934944u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934954u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893495Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934964u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893496Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934974u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893497Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934984u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893498Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934ECCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934FB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935000u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935008u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935010u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935018u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935034u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935058u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893509Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089350BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935130u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935138u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935140u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935148u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935158u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935174u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935180u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893519Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935200u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935308u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935310u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935328u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893532Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935354u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935384u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089353C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935448u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935458u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893548Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089354B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935504u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935510u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935548u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893557Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893558Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893559Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935604u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893561Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935624u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893563Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935644u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935650u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893565Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935668u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935674u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935680u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893568Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935698u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935774u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935800u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935808u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893580Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893581Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935838u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935844u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893585Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935868u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935874u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935880u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893589Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935904u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893590Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893591Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935928u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935930u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935944u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935960u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893596Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935974u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935980u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893598Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893599Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935ED0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893600Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936038u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936044u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936058u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893608Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936094u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936148u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936150u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893615Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893616Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936174u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893617Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936184u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936190u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936198u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936200u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893620Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936218u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936224u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936230u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936238u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936240u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893624Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893625Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936264u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893626Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936274u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936280u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936290u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936298u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936300u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936330u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893635Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936368u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893637Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936414u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936430u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089364A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936500u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936534u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893654Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893655Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936574u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936584u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893659Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893660Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936618u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936624u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936634u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936650u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893665Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936680u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893668Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936700u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936714u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936744u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893675Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936774u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936778u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893677Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936784u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936794u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893680Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936824u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936828u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893682Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936834u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893684Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936864u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936868u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893686Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936874u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893688Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936904u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936914u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936918u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936938u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936964u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936988u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936994u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936ED0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893704Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893706Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893708Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937100u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937110u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893711Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893714Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937164u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937174u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937180u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937198u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937208u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937218u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937224u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893723Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893725Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893726Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937278u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937294u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937300u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937310u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893731Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937338u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937350u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937360u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893736Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937384u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937414u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937424u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937430u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937448u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937468u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937478u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937484u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893750Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893751Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937528u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937544u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893755Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893756Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937578u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937590u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937604u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937618u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893762Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937634u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937648u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937660u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937674u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893768Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937700u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893770Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937718u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937724u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937730u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937794u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937808u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893781Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937828u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937890u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893789Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937900u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893791Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937944u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893794Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893795Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937964u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893796Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937974u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937988u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937994u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893799Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937ABCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937ACCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937ADCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937ECCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937ED8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937FA4u, &recomp_unit_0076, "recomp_unit_0076");
}
} // namespace psprecomp
