#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0088[4065] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 12, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21,
    22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 29,
    0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 37, 38, 0, 0,
    0, 39, 0, 40, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 0,
    0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 53, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 63, 0,
    0, 0, 64, 0, 65, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0,
    0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0,
    78, 0, 0, 0, 79, 0, 80, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 87, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 104, 0, 0, 105, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109,
    0, 110, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 118, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0,
    0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 0, 131, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0,
    0, 145, 0, 146, 0, 0, 147, 0, 148, 149, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0,
    167, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 0, 173, 0, 174, 0, 0, 175, 176, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0,
    0, 185, 0, 0, 186, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0,
    193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0,
    201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0,
    0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0,
    218, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 227, 228, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 232, 0, 0,
    233, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 0, 239, 0, 0, 240, 0, 241, 0, 242, 0, 0, 243, 0, 0,
    244, 0, 245, 0, 246, 0, 247, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0, 0, 252, 0, 253, 0, 254, 0, 0, 255, 0, 0, 256, 0, 257, 0,
    258, 0, 0, 259, 0, 0, 260, 0, 261, 0, 262, 0, 263, 0, 0, 264, 0, 265, 0, 266, 0, 267, 0, 0, 268, 0, 269, 0, 270, 0, 0, 271,
    0, 0, 272, 0, 273, 0, 274, 0, 0, 275, 0, 0, 276, 0, 277, 0, 278, 0, 279, 0, 0, 280, 0, 281, 0, 282, 0, 283, 0, 0, 284, 0,
    285, 0, 286, 0, 0, 287, 0, 0, 288, 0, 289, 0, 290, 0, 0, 291, 0, 0, 292, 0, 293, 0, 294, 0, 295, 0, 0, 296, 0, 297, 0, 298,
    0, 299, 0, 0, 300, 0, 301, 0, 302, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 311, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0,
    316, 0, 317, 318, 0, 319, 0, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 323, 0, 324, 0, 0, 325, 0, 326, 327, 0, 0, 0, 0, 328, 0,
    329, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 335, 0, 336, 337, 0, 338, 0, 0, 0, 0, 0, 339, 0,
    0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0,
    0, 353, 0, 354, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0,
    0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0,
    374, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 378, 379, 0, 0, 0, 0, 0, 380, 0, 381, 382, 0, 0, 383, 0, 384, 385,
    0, 0, 0, 386, 0, 0, 387, 0, 388, 389, 0, 390, 0, 391, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 393, 0, 0, 394, 0, 395, 396, 0, 0, 0, 397, 0, 0, 398, 0, 399, 400, 0, 401, 0, 402, 403, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 406, 407, 0, 0, 0, 408, 0, 0, 409, 0, 410, 411, 0,
    412, 0, 413, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 417, 418,
    0, 0, 0, 419, 0, 0, 420, 0, 421, 422, 0, 423, 0, 424, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 427, 0, 428, 429, 0, 0, 0, 430, 0, 0, 431, 0, 432, 433, 0, 434, 0, 435, 436, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 439, 440, 0, 0, 0, 441, 0, 0, 442, 0, 443, 444,
    0, 445, 0, 446, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0,
    450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0,
    0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465,
    0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0,
    0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 480, 0,
    0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 483, 484, 0, 485, 486, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 491, 0, 492, 493, 0, 0, 494, 0, 495, 0, 496, 0, 497, 498, 0, 0, 499,
    0, 500, 501, 0, 502, 0, 503, 0, 0, 0, 504, 0, 505, 0, 0, 0, 506, 507, 0, 508, 0, 0, 0, 509, 0, 510, 0, 511, 0, 0, 0, 0,
    0, 0, 0, 512, 0, 0, 513, 0, 0, 514, 515, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 520, 0,
    0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 523, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0,
    0, 528, 0, 529, 0, 0, 0, 0, 530, 0, 0, 531, 0, 532, 0, 0, 533, 534, 0, 0, 0, 535, 536, 0, 537, 0, 538, 0, 539, 0, 540, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 543, 544, 0, 0, 0, 545, 0, 546, 0,
    0, 547, 548, 0, 0, 0, 549, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0,
    0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 558, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 561, 0, 562, 0, 563, 0, 564, 0, 565, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 569, 0, 570, 0,
    571, 0, 572, 0, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0,
    0, 0, 0, 0, 578, 0, 579, 0, 580, 0, 0, 0, 581, 0, 582, 583, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0,
    0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 595, 596,
    0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0,
    601, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 0, 607,
    0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 614, 0, 615, 0, 0, 0, 0, 616,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 619, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0,
    0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0, 0, 0,
    629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0,
    0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 0,
    0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648,
    0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0, 0, 0, 654, 0, 0,
    0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0,
    661, 0, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0,
    0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 673, 0, 0, 0,
    0, 674, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 0, 679, 0, 0, 0, 0, 680,
    0, 0, 0, 0, 681, 0, 682, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686,
    0, 687, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 690, 0, 691, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 696, 0, 697, 0, 698, 0, 699, 0, 700, 0, 701, 0, 702, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 706, 0, 0, 707, 0, 708, 0, 0, 709, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 711, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 717,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 725,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 727, 0, 728, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0,
    0, 731, 0, 0, 0, 0, 0, 732, 0, 733, 0, 734, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0,
    0, 739, 0, 0, 740, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    745, 0, 0, 0, 0, 0, 746, 0, 0, 0, 747, 0, 748, 0, 749, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 0, 752, 0, 753, 0, 754, 755,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 762,
    0, 0, 0, 763, 0, 0, 764, 0, 0, 765, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0, 769, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 773, 0,
    0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 778, 0, 0,
    0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 781, 0, 0, 782, 0, 0, 0, 783, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 786,
    0, 0, 787, 0, 0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 793, 0, 794, 0, 0, 795, 0, 0, 796, 0, 797, 0, 0, 798,
    0, 0, 799, 0, 800, 0, 0, 801, 0, 802, 0, 803, 0, 0, 804, 0, 0, 805, 0, 806, 0, 0, 807, 0, 0, 808, 0, 809, 0, 0, 810, 0,
    0, 811, 0, 812, 0, 0, 813, 0, 0, 814, 0, 0, 815, 816, 0, 817, 0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 820, 0, 821,
    0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 823, 0, 824, 825, 0, 0, 826, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0, 828, 0, 829, 0, 830, 0, 0,
    831,
};
void recomp_unit_0088_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08964004u;
        entry_id = (entry_delta < 16260u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0088[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08964004;
    case 2u: goto L_08964014;
    case 3u: goto L_08964024;
    case 4u: goto L_0896403C;
    case 5u: goto L_0896408C;
    case 6u: goto L_08964094;
    case 7u: goto L_0896409C;
    case 8u: goto L_089640B8;
    case 9u: goto L_089640C0;
    case 10u: goto L_089640D8;
    case 11u: goto L_089640E0;
    case 12u: goto L_089640E4;
    case 13u: goto L_089640FC;
    case 14u: goto L_08964118;
    case 15u: goto L_08964130;
    case 16u: goto L_08964138;
    case 17u: goto L_089641BC;
    case 18u: goto L_089641D8;
    case 19u: goto L_089641E0;
    case 20u: goto L_089641F8;
    case 21u: goto L_08964200;
    case 22u: goto L_08964204;
    case 23u: goto L_08964218;
    case 24u: goto L_08964238;
    case 25u: goto L_08964244;
    case 26u: goto L_08964250;
    case 27u: goto L_08964260;
    case 28u: goto L_0896426C;
    case 29u: goto L_08964280;
    case 30u: goto L_0896428C;
    case 31u: goto L_0896429C;
    case 32u: goto L_089642AC;
    case 33u: goto L_089642B8;
    case 34u: goto L_089642C8;
    case 35u: goto L_089642D8;
    case 36u: goto L_089642E4;
    case 37u: goto L_089642F4;
    case 38u: goto L_089642F8;
    case 39u: goto L_08964308;
    case 40u: goto L_08964310;
    case 41u: goto L_08964314;
    case 42u: goto L_0896432C;
    case 43u: goto L_08964350;
    case 44u: goto L_0896435C;
    case 45u: goto L_08964368;
    case 46u: goto L_08964378;
    case 47u: goto L_08964388;
    case 48u: goto L_08964398;
    case 49u: goto L_089643A8;
    case 50u: goto L_089643B4;
    case 51u: goto L_089643BC;
    case 52u: goto L_089643CC;
    case 53u: goto L_089643D4;
    case 54u: goto L_089643D8;
    case 55u: goto L_089643F0;
    case 56u: goto L_08964414;
    case 57u: goto L_08964420;
    case 58u: goto L_0896442C;
    case 59u: goto L_0896443C;
    case 60u: goto L_0896444C;
    case 61u: goto L_08964460;
    case 62u: goto L_08964474;
    case 63u: goto L_0896447C;
    case 64u: goto L_0896448C;
    case 65u: goto L_08964494;
    case 66u: goto L_08964498;
    case 67u: goto L_089644B0;
    case 68u: goto L_089644D4;
    case 69u: goto L_089644E0;
    case 70u: goto L_089644EC;
    case 71u: goto L_089644FC;
    case 72u: goto L_0896450C;
    case 73u: goto L_08964520;
    case 74u: goto L_08964534;
    case 75u: goto L_08964568;
    case 76u: goto L_08964574;
    case 77u: goto L_0896457C;
    case 78u: goto L_08964584;
    case 79u: goto L_08964594;
    case 80u: goto L_0896459C;
    case 81u: goto L_089645A0;
    case 82u: goto L_089645B8;
    case 83u: goto L_089645C8;
    case 84u: goto L_089645D4;
    case 85u: goto L_089645F8;
    case 86u: goto L_08964608;
    case 87u: goto L_08964620;
    case 88u: goto L_08964624;
    case 89u: goto L_08964638;
    case 90u: goto L_08964658;
    case 91u: goto L_08964678;
    case 92u: goto L_08964680;
    case 93u: goto L_089646C0;
    case 94u: goto L_089646D0;
    case 95u: goto L_089646F4;
    case 96u: goto L_08964704;
    case 97u: goto L_0896470C;
    case 98u: goto L_08964714;
    case 99u: goto L_0896471C;
    case 100u: goto L_08964724;
    case 101u: goto L_0896475C;
    case 102u: goto L_08964790;
    case 103u: goto L_089647A4;
    case 104u: goto L_089647AC;
    case 105u: goto L_089647B8;
    case 106u: goto L_089647BC;
    case 107u: goto L_089647D4;
    case 108u: goto L_089647F0;
    case 109u: goto L_08964800;
    case 110u: goto L_08964808;
    case 111u: goto L_08964810;
    case 112u: goto L_08964818;
    case 113u: goto L_08964820;
    case 114u: goto L_08964858;
    case 115u: goto L_08964894;
    case 116u: goto L_089648A8;
    case 117u: goto L_089648B0;
    case 118u: goto L_089648BC;
    case 119u: goto L_089648C0;
    case 120u: goto L_089648D4;
    case 121u: goto L_089648F8;
    case 122u: goto L_08964908;
    case 123u: goto L_08964910;
    case 124u: goto L_08964918;
    case 125u: goto L_08964920;
    case 126u: goto L_08964928;
    case 127u: goto L_08964960;
    case 128u: goto L_08964994;
    case 129u: goto L_089649A8;
    case 130u: goto L_089649B0;
    case 131u: goto L_089649BC;
    case 132u: goto L_089649C0;
    case 133u: goto L_089649D8;
    case 134u: goto L_089649F4;
    case 135u: goto L_08964A04;
    case 136u: goto L_08964A0C;
    case 137u: goto L_08964A14;
    case 138u: goto L_08964A1C;
    case 139u: goto L_08964A24;
    case 140u: goto L_08964A2C;
    case 141u: goto L_08964A34;
    case 142u: goto L_08964A58;
    case 143u: goto L_08964A64;
    case 144u: goto L_08964A78;
    case 145u: goto L_08964A88;
    case 146u: goto L_08964A90;
    case 147u: goto L_08964A9C;
    case 148u: goto L_08964AA4;
    case 149u: goto L_08964AA8;
    case 150u: goto L_08964ABC;
    case 151u: goto L_08964ACC;
    case 152u: goto L_08964AD8;
    case 153u: goto L_08964B30;
    case 154u: goto L_08964B44;
    case 155u: goto L_08964B4C;
    case 156u: goto L_08964B5C;
    case 157u: goto L_08964B6C;
    case 158u: goto L_08964B90;
    case 159u: goto L_08964B9C;
    case 160u: goto L_08964BA8;
    case 161u: goto L_08964BB0;
    case 162u: goto L_08964BBC;
    case 163u: goto L_08964BC4;
    case 164u: goto L_08964BD4;
    case 165u: goto L_08964BE8;
    case 166u: goto L_08964BFC;
    case 167u: goto L_08964C04;
    case 168u: goto L_08964C14;
    case 169u: goto L_08964C28;
    case 170u: goto L_08964C3C;
    case 171u: goto L_08964C48;
    case 172u: goto L_08964C50;
    case 173u: goto L_08964C5C;
    case 174u: goto L_08964C64;
    case 175u: goto L_08964C70;
    case 176u: goto L_08964C74;
    case 177u: goto L_08964C8C;
    case 178u: goto L_08964CB0;
    case 179u: goto L_08964CBC;
    case 180u: goto L_08964CC8;
    case 181u: goto L_08964CD0;
    case 182u: goto L_08964CE0;
    case 183u: goto L_08964CE8;
    case 184u: goto L_08964CF8;
    case 185u: goto L_08964D08;
    case 186u: goto L_08964D14;
    case 187u: goto L_08964D18;
    case 188u: goto L_08964D30;
    case 189u: goto L_08964D54;
    case 190u: goto L_08964D60;
    case 191u: goto L_08964D70;
    case 192u: goto L_08964D78;
    case 193u: goto L_08964D84;
    case 194u: goto L_08964D94;
    case 195u: goto L_08964DA4;
    case 196u: goto L_08964DB8;
    case 197u: goto L_08964DD4;
    case 198u: goto L_08964DE4;
    case 199u: goto L_08964DF0;
    case 200u: goto L_08964DFC;
    case 201u: goto L_08964E04;
    case 202u: goto L_08964E14;
    case 203u: goto L_08964E30;
    case 204u: goto L_08964E40;
    case 205u: goto L_08964E48;
    case 206u: goto L_08964E54;
    case 207u: goto L_08964E78;
    case 208u: goto L_08964E90;
    case 209u: goto L_08964EAC;
    case 210u: goto L_08964EBC;
    case 211u: goto L_08964EC4;
    case 212u: goto L_08964ED0;
    case 213u: goto L_08964F00;
    case 214u: goto L_08964F2C;
    case 215u: goto L_08964F44;
    case 216u: goto L_08964F64;
    case 217u: goto L_08964F74;
    case 218u: goto L_08964F84;
    case 219u: goto L_08964F8C;
    case 220u: goto L_08964F98;
    case 221u: goto L_08964FBC;
    case 222u: goto L_08964FDC;
    case 223u: goto L_08964FF8;
    case 224u: goto L_08965010;
    case 225u: goto L_0896501C;
    case 226u: goto L_08965040;
    case 227u: goto L_08965048;
    case 228u: goto L_0896504C;
    case 229u: goto L_0896505C;
    case 230u: goto L_08965068;
    case 231u: goto L_08965070;
    case 232u: goto L_08965078;
    case 233u: goto L_08965084;
    case 234u: goto L_08965088;
    case 235u: goto L_08965098;
    case 236u: goto L_089650B4;
    case 237u: goto L_089650BC;
    case 238u: goto L_089650C4;
    case 239u: goto L_089650D0;
    case 240u: goto L_089650DC;
    case 241u: goto L_089650E4;
    case 242u: goto L_089650EC;
    case 243u: goto L_089650F8;
    case 244u: goto L_08965104;
    case 245u: goto L_0896510C;
    case 246u: goto L_08965114;
    case 247u: goto L_0896511C;
    case 248u: goto L_08965128;
    case 249u: goto L_08965130;
    case 250u: goto L_08965138;
    case 251u: goto L_08965140;
    case 252u: goto L_0896514C;
    case 253u: goto L_08965154;
    case 254u: goto L_0896515C;
    case 255u: goto L_08965168;
    case 256u: goto L_08965174;
    case 257u: goto L_0896517C;
    case 258u: goto L_08965184;
    case 259u: goto L_08965190;
    case 260u: goto L_0896519C;
    case 261u: goto L_089651A4;
    case 262u: goto L_089651AC;
    case 263u: goto L_089651B4;
    case 264u: goto L_089651C0;
    case 265u: goto L_089651C8;
    case 266u: goto L_089651D0;
    case 267u: goto L_089651D8;
    case 268u: goto L_089651E4;
    case 269u: goto L_089651EC;
    case 270u: goto L_089651F4;
    case 271u: goto L_08965200;
    case 272u: goto L_0896520C;
    case 273u: goto L_08965214;
    case 274u: goto L_0896521C;
    case 275u: goto L_08965228;
    case 276u: goto L_08965234;
    case 277u: goto L_0896523C;
    case 278u: goto L_08965244;
    case 279u: goto L_0896524C;
    case 280u: goto L_08965258;
    case 281u: goto L_08965260;
    case 282u: goto L_08965268;
    case 283u: goto L_08965270;
    case 284u: goto L_0896527C;
    case 285u: goto L_08965284;
    case 286u: goto L_0896528C;
    case 287u: goto L_08965298;
    case 288u: goto L_089652A4;
    case 289u: goto L_089652AC;
    case 290u: goto L_089652B4;
    case 291u: goto L_089652C0;
    case 292u: goto L_089652CC;
    case 293u: goto L_089652D4;
    case 294u: goto L_089652DC;
    case 295u: goto L_089652E4;
    case 296u: goto L_089652F0;
    case 297u: goto L_089652F8;
    case 298u: goto L_08965300;
    case 299u: goto L_08965308;
    case 300u: goto L_08965314;
    case 301u: goto L_0896531C;
    case 302u: goto L_08965324;
    case 303u: goto L_08965330;
    case 304u: goto L_08965340;
    case 305u: goto L_089653D4;
    case 306u: goto L_089653E4;
    case 307u: goto L_0896540C;
    case 308u: goto L_08965418;
    case 309u: goto L_08965438;
    case 310u: goto L_0896544C;
    case 311u: goto L_08965488;
    case 312u: goto L_08965494;
    case 313u: goto L_089654A8;
    case 314u: goto L_089654D8;
    case 315u: goto L_089654EC;
    case 316u: goto L_08965504;
    case 317u: goto L_0896550C;
    case 318u: goto L_08965510;
    case 319u: goto L_08965518;
    case 320u: goto L_08965528;
    case 321u: goto L_08965534;
    case 322u: goto L_08965540;
    case 323u: goto L_08965548;
    case 324u: goto L_08965550;
    case 325u: goto L_0896555C;
    case 326u: goto L_08965564;
    case 327u: goto L_08965568;
    case 328u: goto L_0896557C;
    case 329u: goto L_08965584;
    case 330u: goto L_08965598;
    case 331u: goto L_089655A4;
    case 332u: goto L_089655B8;
    case 333u: goto L_089655C0;
    case 334u: goto L_089655C8;
    case 335u: goto L_089655D0;
    case 336u: goto L_089655D8;
    case 337u: goto L_089655DC;
    case 338u: goto L_089655E4;
    case 339u: goto L_089655FC;
    case 340u: goto L_08965608;
    case 341u: goto L_08965620;
    case 342u: goto L_08965650;
    case 343u: goto L_08965658;
    case 344u: goto L_08965688;
    case 345u: goto L_08965690;
    case 346u: goto L_089656C0;
    case 347u: goto L_089656C8;
    case 348u: goto L_089656F8;
    case 349u: goto L_08965704;
    case 350u: goto L_08965740;
    case 351u: goto L_08965750;
    case 352u: goto L_08965778;
    case 353u: goto L_08965788;
    case 354u: goto L_08965790;
    case 355u: goto L_08965798;
    case 356u: goto L_089657A8;
    case 357u: goto L_089657BC;
    case 358u: goto L_089657C8;
    case 359u: goto L_089657D0;
    case 360u: goto L_089657F4;
    case 361u: goto L_08965808;
    case 362u: goto L_08965814;
    case 363u: goto L_08965838;
    case 364u: goto L_0896584C;
    case 365u: goto L_08965858;
    case 366u: goto L_0896586C;
    case 367u: goto L_08965878;
    case 368u: goto L_08965890;
    case 369u: goto L_089658A8;
    case 370u: goto L_089658B4;
    case 371u: goto L_089658D0;
    case 372u: goto L_089658D8;
    case 373u: goto L_089658EC;
    case 374u: goto L_08965904;
    case 375u: goto L_0896590C;
    case 376u: goto L_0896591C;
    case 377u: goto L_08965938;
    case 378u: goto L_08965940;
    case 379u: goto L_08965944;
    case 380u: goto L_0896595C;
    case 381u: goto L_08965964;
    case 382u: goto L_08965968;
    case 383u: goto L_08965974;
    case 384u: goto L_0896597C;
    case 385u: goto L_08965980;
    case 386u: goto L_08965990;
    case 387u: goto L_0896599C;
    case 388u: goto L_089659A4;
    case 389u: goto L_089659A8;
    case 390u: goto L_089659B0;
    case 391u: goto L_089659B8;
    case 392u: goto L_089659BC;
    case 393u: goto L_08965A10;
    case 394u: goto L_08965A1C;
    case 395u: goto L_08965A24;
    case 396u: goto L_08965A28;
    case 397u: goto L_08965A38;
    case 398u: goto L_08965A44;
    case 399u: goto L_08965A4C;
    case 400u: goto L_08965A50;
    case 401u: goto L_08965A58;
    case 402u: goto L_08965A60;
    case 403u: goto L_08965A64;
    case 404u: goto L_08965ABC;
    case 405u: goto L_08965AC8;
    case 406u: goto L_08965AD0;
    case 407u: goto L_08965AD4;
    case 408u: goto L_08965AE4;
    case 409u: goto L_08965AF0;
    case 410u: goto L_08965AF8;
    case 411u: goto L_08965AFC;
    case 412u: goto L_08965B04;
    case 413u: goto L_08965B0C;
    case 414u: goto L_08965B10;
    case 415u: goto L_08965B68;
    case 416u: goto L_08965B74;
    case 417u: goto L_08965B7C;
    case 418u: goto L_08965B80;
    case 419u: goto L_08965B90;
    case 420u: goto L_08965B9C;
    case 421u: goto L_08965BA4;
    case 422u: goto L_08965BA8;
    case 423u: goto L_08965BB0;
    case 424u: goto L_08965BB8;
    case 425u: goto L_08965BBC;
    case 426u: goto L_08965C14;
    case 427u: goto L_08965C20;
    case 428u: goto L_08965C28;
    case 429u: goto L_08965C2C;
    case 430u: goto L_08965C3C;
    case 431u: goto L_08965C48;
    case 432u: goto L_08965C50;
    case 433u: goto L_08965C54;
    case 434u: goto L_08965C5C;
    case 435u: goto L_08965C64;
    case 436u: goto L_08965C68;
    case 437u: goto L_08965CC0;
    case 438u: goto L_08965CCC;
    case 439u: goto L_08965CD4;
    case 440u: goto L_08965CD8;
    case 441u: goto L_08965CE8;
    case 442u: goto L_08965CF4;
    case 443u: goto L_08965CFC;
    case 444u: goto L_08965D00;
    case 445u: goto L_08965D08;
    case 446u: goto L_08965D10;
    case 447u: goto L_08965D14;
    case 448u: goto L_08965D6C;
    case 449u: goto L_08965D78;
    case 450u: goto L_08965D84;
    case 451u: goto L_08965DB0;
    case 452u: goto L_08965DB8;
    case 453u: goto L_08965DC4;
    case 454u: goto L_08965DD4;
    case 455u: goto L_08965E00;
    case 456u: goto L_08965E30;
    case 457u: goto L_08965EC4;
    case 458u: goto L_08965ED8;
    case 459u: goto L_08965EF8;
    case 460u: goto L_08965F14;
    case 461u: goto L_08965F38;
    case 462u: goto L_08965F44;
    case 463u: goto L_08965F50;
    case 464u: goto L_08965F58;
    case 465u: goto L_08965F80;
    case 466u: goto L_08965F9C;
    case 467u: goto L_08965FB4;
    case 468u: goto L_08965FC0;
    case 469u: goto L_08965FC8;
    case 470u: goto L_08965FDC;
    case 471u: goto L_0896606C;
    case 472u: goto L_08966078;
    case 473u: goto L_08966094;
    case 474u: goto L_089660A4;
    case 475u: goto L_0896611C;
    case 476u: goto L_08966140;
    case 477u: goto L_0896614C;
    case 478u: goto L_08966160;
    case 479u: goto L_08966174;
    case 480u: goto L_0896617C;
    case 481u: goto L_08966194;
    case 482u: goto L_089661A8;
    case 483u: goto L_089661B8;
    case 484u: goto L_089661BC;
    case 485u: goto L_089661C4;
    case 486u: goto L_089661C8;
    case 487u: goto L_089661D8;
    case 488u: goto L_089661E8;
    case 489u: goto L_08966224;
    case 490u: goto L_0896622C;
    case 491u: goto L_08966240;
    case 492u: goto L_08966248;
    case 493u: goto L_0896624C;
    case 494u: goto L_08966258;
    case 495u: goto L_08966260;
    case 496u: goto L_08966268;
    case 497u: goto L_08966270;
    case 498u: goto L_08966274;
    case 499u: goto L_08966280;
    case 500u: goto L_08966288;
    case 501u: goto L_0896628C;
    case 502u: goto L_08966294;
    case 503u: goto L_0896629C;
    case 504u: goto L_089662AC;
    case 505u: goto L_089662B4;
    case 506u: goto L_089662C4;
    case 507u: goto L_089662C8;
    case 508u: goto L_089662D0;
    case 509u: goto L_089662E0;
    case 510u: goto L_089662E8;
    case 511u: goto L_089662F0;
    case 512u: goto L_08966310;
    case 513u: goto L_0896631C;
    case 514u: goto L_08966328;
    case 515u: goto L_0896632C;
    case 516u: goto L_0896633C;
    case 517u: goto L_08966344;
    case 518u: goto L_0896636C;
    case 519u: goto L_08966374;
    case 520u: goto L_0896637C;
    case 521u: goto L_0896639C;
    case 522u: goto L_089663D0;
    case 523u: goto L_089663D4;
    case 524u: goto L_089663F8;
    case 525u: goto L_08966430;
    case 526u: goto L_08966448;
    case 527u: goto L_08966470;
    case 528u: goto L_08966488;
    case 529u: goto L_08966490;
    case 530u: goto L_089664A4;
    case 531u: goto L_089664B0;
    case 532u: goto L_089664B8;
    case 533u: goto L_089664C4;
    case 534u: goto L_089664C8;
    case 535u: goto L_089664D8;
    case 536u: goto L_089664DC;
    case 537u: goto L_089664E4;
    case 538u: goto L_089664EC;
    case 539u: goto L_089664F4;
    case 540u: goto L_089664FC;
    case 541u: goto L_08966528;
    case 542u: goto L_08966554;
    case 543u: goto L_08966560;
    case 544u: goto L_08966564;
    case 545u: goto L_08966574;
    case 546u: goto L_0896657C;
    case 547u: goto L_08966588;
    case 548u: goto L_0896658C;
    case 549u: goto L_0896659C;
    case 550u: goto L_089665A4;
    case 551u: goto L_089665AC;
    case 552u: goto L_089665CC;
    case 553u: goto L_089665F4;
    case 554u: goto L_0896660C;
    case 555u: goto L_08966614;
    case 556u: goto L_08966624;
    case 557u: goto L_08966644;
    case 558u: goto L_08966650;
    case 559u: goto L_08966658;
    case 560u: goto L_08966660;
    case 561u: goto L_08966690;
    case 562u: goto L_08966698;
    case 563u: goto L_089666A0;
    case 564u: goto L_089666A8;
    case 565u: goto L_089666B0;
    case 566u: goto L_089666B8;
    case 567u: goto L_089666D4;
    case 568u: goto L_089666E0;
    case 569u: goto L_089666F4;
    case 570u: goto L_089666FC;
    case 571u: goto L_08966704;
    case 572u: goto L_0896670C;
    case 573u: goto L_08966720;
    case 574u: goto L_0896672C;
    case 575u: goto L_08966744;
    case 576u: goto L_08966760;
    case 577u: goto L_0896677C;
    case 578u: goto L_08966794;
    case 579u: goto L_0896679C;
    case 580u: goto L_089667A4;
    case 581u: goto L_089667B4;
    case 582u: goto L_089667BC;
    case 583u: goto L_089667C0;
    case 584u: goto L_089667C8;
    case 585u: goto L_08966848;
    case 586u: goto L_08966890;
    case 587u: goto L_089668B4;
    case 588u: goto L_089668C4;
    case 589u: goto L_089668D4;
    case 590u: goto L_089668F4;
    case 591u: goto L_08966918;
    case 592u: goto L_0896693C;
    case 593u: goto L_0896694C;
    case 594u: goto L_0896695C;
    case 595u: goto L_0896697C;
    case 596u: goto L_08966980;
    case 597u: goto L_08966998;
    case 598u: goto L_089669C4;
    case 599u: goto L_089669D4;
    case 600u: goto L_089669E4;
    case 601u: goto L_08966A04;
    case 602u: goto L_08966A08;
    case 603u: goto L_08966A20;
    case 604u: goto L_08966A4C;
    case 605u: goto L_08966A5C;
    case 606u: goto L_08966A6C;
    case 607u: goto L_08966A80;
    case 608u: goto L_08966A88;
    case 609u: goto L_08966AD4;
    case 610u: goto L_08966AE4;
    case 611u: goto L_08966B10;
    case 612u: goto L_08966B4C;
    case 613u: goto L_08966B54;
    case 614u: goto L_08966B64;
    case 615u: goto L_08966B6C;
    case 616u: goto L_08966B80;
    case 617u: goto L_08966BAC;
    case 618u: goto L_08966BBC;
    case 619u: goto L_08966BC8;
    case 620u: goto L_08966BD0;
    case 621u: goto L_08966BE4;
    case 622u: goto L_08966BF8;
    case 623u: goto L_08966C0C;
    case 624u: goto L_08966C20;
    case 625u: goto L_08966C34;
    case 626u: goto L_08966C48;
    case 627u: goto L_08966C5C;
    case 628u: goto L_08966C70;
    case 629u: goto L_08966C84;
    case 630u: goto L_08966C98;
    case 631u: goto L_08966CAC;
    case 632u: goto L_08966CC0;
    case 633u: goto L_08966CD4;
    case 634u: goto L_08966CE8;
    case 635u: goto L_08966CFC;
    case 636u: goto L_08966D10;
    case 637u: goto L_08966D24;
    case 638u: goto L_08966D38;
    case 639u: goto L_08966D4C;
    case 640u: goto L_08966D60;
    case 641u: goto L_08966D74;
    case 642u: goto L_08966D88;
    case 643u: goto L_08966D9C;
    case 644u: goto L_08966DB0;
    case 645u: goto L_08966DC4;
    case 646u: goto L_08966DD8;
    case 647u: goto L_08966DEC;
    case 648u: goto L_08966E00;
    case 649u: goto L_08966E14;
    case 650u: goto L_08966E28;
    case 651u: goto L_08966E3C;
    case 652u: goto L_08966E50;
    case 653u: goto L_08966E64;
    case 654u: goto L_08966E78;
    case 655u: goto L_08966E8C;
    case 656u: goto L_08966EA0;
    case 657u: goto L_08966EB4;
    case 658u: goto L_08966EC8;
    case 659u: goto L_08966EDC;
    case 660u: goto L_08966EF0;
    case 661u: goto L_08966F04;
    case 662u: goto L_08966F18;
    case 663u: goto L_08966F2C;
    case 664u: goto L_08966F40;
    case 665u: goto L_08966F54;
    case 666u: goto L_08966F68;
    case 667u: goto L_08966F7C;
    case 668u: goto L_08966F90;
    case 669u: goto L_08966FA4;
    case 670u: goto L_08966FB8;
    case 671u: goto L_08966FCC;
    case 672u: goto L_08966FE0;
    case 673u: goto L_08966FF4;
    case 674u: goto L_08967008;
    case 675u: goto L_0896701C;
    case 676u: goto L_08967030;
    case 677u: goto L_08967044;
    case 678u: goto L_08967058;
    case 679u: goto L_0896706C;
    case 680u: goto L_08967080;
    case 681u: goto L_08967094;
    case 682u: goto L_0896709C;
    case 683u: goto L_089670A8;
    case 684u: goto L_089670D4;
    case 685u: goto L_089670EC;
    case 686u: goto L_08967100;
    case 687u: goto L_08967108;
    case 688u: goto L_08967114;
    case 689u: goto L_08967144;
    case 690u: goto L_0896714C;
    case 691u: goto L_08967154;
    case 692u: goto L_0896715C;
    case 693u: goto L_0896719C;
    case 694u: goto L_089671A8;
    case 695u: goto L_089671B0;
    case 696u: goto L_089671C8;
    case 697u: goto L_089671D0;
    case 698u: goto L_089671D8;
    case 699u: goto L_089671E0;
    case 700u: goto L_089671E8;
    case 701u: goto L_089671F0;
    case 702u: goto L_089671F8;
    case 703u: goto L_08967228;
    case 704u: goto L_08967238;
    case 705u: goto L_08967254;
    case 706u: goto L_08967288;
    case 707u: goto L_08967294;
    case 708u: goto L_0896729C;
    case 709u: goto L_089672A8;
    case 710u: goto L_089672B0;
    case 711u: goto L_0896730C;
    case 712u: goto L_08967314;
    case 713u: goto L_0896731C;
    case 714u: goto L_08967338;
    case 715u: goto L_08967360;
    case 716u: goto L_08967374;
    case 717u: goto L_08967380;
    case 718u: goto L_089673BC;
    case 719u: goto L_089673E4;
    case 720u: goto L_08967418;
    case 721u: goto L_08967440;
    case 722u: goto L_08967480;
    case 723u: goto L_089674CC;
    case 724u: goto L_089674E0;
    case 725u: goto L_08967500;
    case 726u: goto L_0896752C;
    case 727u: goto L_0896754C;
    case 728u: goto L_08967554;
    case 729u: goto L_0896755C;
    case 730u: goto L_08967570;
    case 731u: goto L_08967588;
    case 732u: goto L_089675A0;
    case 733u: goto L_089675A8;
    case 734u: goto L_089675B0;
    case 735u: goto L_089675B8;
    case 736u: goto L_08967638;
    case 737u: goto L_08967640;
    case 738u: goto L_08967678;
    case 739u: goto L_08967688;
    case 740u: goto L_08967694;
    case 741u: goto L_0896769C;
    case 742u: goto L_089676B0;
    case 743u: goto L_089676E0;
    case 744u: goto L_08967738;
    case 745u: goto L_08967784;
    case 746u: goto L_0896779C;
    case 747u: goto L_089677AC;
    case 748u: goto L_089677B4;
    case 749u: goto L_089677BC;
    case 750u: goto L_089677C4;
    case 751u: goto L_089677DC;
    case 752u: goto L_089677EC;
    case 753u: goto L_089677F4;
    case 754u: goto L_089677FC;
    case 755u: goto L_08967800;
    case 756u: goto L_08967840;
    case 757u: goto L_08967860;
    case 758u: goto L_0896789C;
    case 759u: goto L_089678C4;
    case 760u: goto L_089678D0;
    case 761u: goto L_089678F4;
    case 762u: goto L_08967900;
    case 763u: goto L_08967910;
    case 764u: goto L_0896791C;
    case 765u: goto L_08967928;
    case 766u: goto L_0896792C;
    case 767u: goto L_089679AC;
    case 768u: goto L_089679B4;
    case 769u: goto L_089679BC;
    case 770u: goto L_089679D0;
    case 771u: goto L_089679E8;
    case 772u: goto L_089679F0;
    case 773u: goto L_089679FC;
    case 774u: goto L_08967A10;
    case 775u: goto L_08967A30;
    case 776u: goto L_08967A48;
    case 777u: goto L_08967A6C;
    case 778u: goto L_08967A78;
    case 779u: goto L_08967A98;
    case 780u: goto L_08967B20;
    case 781u: goto L_08967B88;
    case 782u: goto L_08967B94;
    case 783u: goto L_08967BA4;
    case 784u: goto L_08967BB4;
    case 785u: goto L_08967BE0;
    case 786u: goto L_08967C00;
    case 787u: goto L_08967C0C;
    case 788u: goto L_08967C1C;
    case 789u: goto L_08967C2C;
    case 790u: goto L_08967CA8;
    case 791u: goto L_08967D20;
    case 792u: goto L_08967D34;
    case 793u: goto L_08967D4C;
    case 794u: goto L_08967D54;
    case 795u: goto L_08967D60;
    case 796u: goto L_08967D6C;
    case 797u: goto L_08967D74;
    case 798u: goto L_08967D80;
    case 799u: goto L_08967D8C;
    case 800u: goto L_08967D94;
    case 801u: goto L_08967DA0;
    case 802u: goto L_08967DA8;
    case 803u: goto L_08967DB0;
    case 804u: goto L_08967DBC;
    case 805u: goto L_08967DC8;
    case 806u: goto L_08967DD0;
    case 807u: goto L_08967DDC;
    case 808u: goto L_08967DE8;
    case 809u: goto L_08967DF0;
    case 810u: goto L_08967DFC;
    case 811u: goto L_08967E08;
    case 812u: goto L_08967E10;
    case 813u: goto L_08967E1C;
    case 814u: goto L_08967E28;
    case 815u: goto L_08967E34;
    case 816u: goto L_08967E38;
    case 817u: goto L_08967E40;
    case 818u: goto L_08967E4C;
    case 819u: goto L_08967E70;
    case 820u: goto L_08967E78;
    case 821u: goto L_08967E80;
    case 822u: goto L_08967E8C;
    case 823u: goto L_08967F20;
    case 824u: goto L_08967F28;
    case 825u: goto L_08967F2C;
    case 826u: goto L_08967F38;
    case 827u: goto L_08967F44;
    case 828u: goto L_08967F68;
    case 829u: goto L_08967F70;
    case 830u: goto L_08967F78;
    case 831u: goto L_08967F84;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08964004:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(50));
    ctx.gpr[31] = (0x08964014u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08964014u) goto L_08964014;
    return;
L_08964014:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(50)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08964024;
L_08964024:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08964094;
      }
      goto L_0896403C;
    }
L_0896403C:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6930)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (2232u << 16u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[1] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(43), ctx.gpr[1]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(46), ctx.gpr[1]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896409C;
      }
      goto L_0896408C;
    }
L_0896408C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089640C0;
      }
      goto L_08964094;
    }
L_08964094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089640E4;
      }
      goto L_0896409C;
    }
L_0896409C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[31] = (0x089640B8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 547u, 0x08ABF9E4u>(ctx, &aot_mem) && ctx.pc == 0x089640B8u) goto L_089640B8;
    return;
L_089640B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089640D8;
      }
      goto L_089640C0;
    }
L_089640C0:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[6]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089640D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x089640D8u) goto L_089640D8;
    return;
L_089640D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089640E4;
      }
      goto L_089640E0;
    }
L_089640E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_089640E4;
L_089640E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089640FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964118u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08964118u) goto L_08964118;
    return;
L_08964118:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08964130u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08964130u) goto L_08964130;
    return;
L_08964130:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964200;
      }
      goto L_08964138;
    }
L_08964138:
    ctx.gpr[4] = (0u | 23u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6929)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(59));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(51), ctx.gpr[7]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(54), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(55), ctx.gpr[7]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(58), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]);
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089641E0;
      }
      goto L_089641BC;
    }
L_089641BC:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(51), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(54), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(72))))));
    ctx.gpr[31] = (0x089641D8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 575u, 0x08ABFB60u>(ctx, &aot_mem) && ctx.pc == 0x089641D8u) goto L_089641D8;
    return;
L_089641D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089641F8;
      }
      goto L_089641E0;
    }
L_089641E0:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(51), ctx.gpr[6]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(54), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089641F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x089641F8u) goto L_089641F8;
    return;
L_089641F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08964204;
      }
      goto L_08964200;
    }
L_08964200:
    ctx.gpr[2] = (0u | 0u);
    goto L_08964204;
L_08964204:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964218:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964238u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08964238u) goto L_08964238;
    return;
L_08964238:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964310;
      }
      goto L_08964244;
    }
L_08964244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896426C;
      }
      goto L_08964250;
    }
L_08964250:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08964260u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08964260u) goto L_08964260;
    return;
L_08964260:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896426C;
L_0896426C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(205))))));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089642F8;
      }
      goto L_08964280;
    }
L_08964280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_089642AC;
    }
    goto L_0896428C;
L_0896428C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x0896429Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0896429Cu) goto L_0896429C;
    return;
L_0896429C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_089642AC;
L_089642AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(206))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089642F8;
      }
      goto L_089642B8;
    }
L_089642B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_089642E4;
      }
      goto L_089642C8;
    }
L_089642C8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[31] = (0x089642D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089642D8u) goto L_089642D8;
    return;
L_089642D8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089642E4;
L_089642E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089642F4u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(206))))));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 46u, 0x088A8288u>(ctx, &aot_mem) && ctx.pc == 0x089642F4u) goto L_089642F4;
    return;
L_089642F4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_089642F8;
L_089642F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964308u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08964308u) goto L_08964308;
    return;
L_08964308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08964314;
      }
      goto L_08964310;
    }
L_08964310:
    ctx.gpr[2] = (0u | 0u);
    goto L_08964314;
L_08964314:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896432C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964350u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08964350u) goto L_08964350;
    return;
L_08964350:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089643D4;
      }
      goto L_0896435C;
    }
L_0896435C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08964388;
    }
    goto L_08964368;
L_08964368:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08964378u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08964378u) goto L_08964378;
    return;
L_08964378:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08964388;
L_08964388:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(205))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089643BC;
      }
      goto L_08964398;
    }
L_08964398:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x089643A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 663u, 0x088A7EC8u>(ctx, &aot_mem) && ctx.pc == 0x089643A8u) goto L_089643A8;
    return;
L_089643A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089643B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x089643B4u) goto L_089643B4;
    return;
L_089643B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089643CC;
      }
      goto L_089643BC;
    }
L_089643BC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089643CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29516));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x089643CCu) goto L_089643CC;
    return;
L_089643CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089643D8;
      }
      goto L_089643D4;
    }
L_089643D4:
    ctx.gpr[2] = (0u | 0u);
    goto L_089643D8;
L_089643D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089643F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964414u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08964414u) goto L_08964414;
    return;
L_08964414:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964494;
      }
      goto L_08964420;
    }
L_08964420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0896444C;
    }
    goto L_0896442C;
L_0896442C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0896443Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0896443Cu) goto L_0896443C;
    return;
L_0896443C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0896444C;
L_0896444C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896447C;
      }
      goto L_08964460;
    }
L_08964460:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08964474u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08964474u) goto L_08964474;
    return;
L_08964474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896448C;
      }
      goto L_0896447C;
    }
L_0896447C:
    ctx.gpr[5] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896448Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0896448Cu) goto L_0896448C;
    return;
L_0896448C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08964498;
      }
      goto L_08964494;
    }
L_08964494:
    ctx.gpr[2] = (0u | 0u);
    goto L_08964498;
L_08964498:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089644B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089644D4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x089644D4u) goto L_089644D4;
    return;
L_089644D4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896459C;
      }
      goto L_089644E0;
    }
L_089644E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0896450C;
    }
    goto L_089644EC;
L_089644EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089644FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089644FCu) goto L_089644FC;
    return;
L_089644FC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0896450C;
L_0896450C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964584;
      }
      goto L_08964520;
    }
L_08964520:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[31] = (0x08964534u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 113u, 0x088A85F0u>(ctx, &aot_mem) && ctx.pc == 0x08964534u) goto L_08964534;
    return;
L_08964534:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08964574;
      }
      goto L_08964568;
    }
L_08964568:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08964574;
L_08964574:
    ctx.gpr[31] = (0x0896457Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0896457Cu) goto L_0896457C;
    return;
L_0896457C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964594;
      }
      goto L_08964584;
    }
L_08964584:
    ctx.gpr[5] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964594u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08964594u) goto L_08964594;
    return;
L_08964594:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089645A0;
      }
      goto L_0896459C;
    }
L_0896459C:
    ctx.gpr[2] = (0u | 0u);
    goto L_089645A0;
L_089645A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089645B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089645C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x089645C8u) goto L_089645C8;
    return;
L_089645C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_089646C0;
      }
      goto L_089645D4;
    }
L_089645D4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (2230u << 16u);
      if (branch_taken) {
          goto L_08964680;
      }
      goto L_089645F8;
    }
L_089645F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964624;
      }
      goto L_08964608;
    }
L_08964608:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08964620u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 227u, 0x088892A4u>(ctx, &aot_mem) && ctx.pc == 0x08964620u) goto L_08964620;
    return;
L_08964620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08964624;
L_08964624:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08964678;
      }
      goto L_08964638;
    }
L_08964638:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(508)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08964658u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 227u, 0x088892A4u>(ctx, &aot_mem) && ctx.pc == 0x08964658u) goto L_08964658;
    return;
L_08964658:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08964638;
      }
      goto L_08964678;
    }
L_08964678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089646C0;
      }
      goto L_08964680;
    }
L_08964680:
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6963)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(19), ctx.gpr[6]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(22), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(19), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(22), ctx.gpr[6]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(23), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(26), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089646C0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x089646C0u) goto L_089646C0;
    return;
L_089646C0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089646D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x089646F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x089646F4u) goto L_089646F4;
    return;
L_089646F4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964704u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08964704u) goto L_08964704;
    return;
L_08964704:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0896471C;
      }
      goto L_0896470C;
    }
L_0896470C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08964724;
      }
      goto L_08964714;
    }
L_08964714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089647B8;
      }
      goto L_0896471C;
    }
L_0896471C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089647BC;
      }
      goto L_08964724;
    }
L_08964724:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6962)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0896475Cu);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x0896475Cu) goto L_0896475C;
    return;
L_0896475C:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
      if (branch_taken) {
          goto L_089647AC;
      }
      goto L_08964790;
    }
L_08964790:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089647A4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 789u, 0x088AB7F4u>(ctx, &aot_mem) && ctx.pc == 0x089647A4u) goto L_089647A4;
    return;
L_089647A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089647B8;
      }
      goto L_089647AC;
    }
L_089647AC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089647B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x089647B8u) goto L_089647B8;
    return;
L_089647B8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089647BC;
L_089647BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089647D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x089647F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x089647F0u) goto L_089647F0;
    return;
L_089647F0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964800u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x08964800u) goto L_08964800;
    return;
L_08964800:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964818;
      }
      goto L_08964808;
    }
L_08964808:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08964820;
      }
      goto L_08964810;
    }
L_08964810:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089648BC;
      }
      goto L_08964818;
    }
L_08964818:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089648C0;
      }
      goto L_08964820;
    }
L_08964820:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6961)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[6]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08964858u);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08964858u) goto L_08964858;
    return;
L_08964858:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(43), ctx.gpr[6]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(46), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
      if (branch_taken) {
          goto L_089648B0;
      }
      goto L_08964894;
    }
L_08964894:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089648A8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 800u, 0x088AB894u>(ctx, &aot_mem) && ctx.pc == 0x089648A8u) goto L_089648A8;
    return;
L_089648A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089648BC;
      }
      goto L_089648B0;
    }
L_089648B0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089648BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x089648BCu) goto L_089648BC;
    return;
L_089648BC:
    ctx.gpr[2] = (0u | 0u);
    goto L_089648C0;
L_089648C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089648D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x089648F8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x089648F8u) goto L_089648F8;
    return;
L_089648F8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964908u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08964908u) goto L_08964908;
    return;
L_08964908:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08964920;
      }
      goto L_08964910;
    }
L_08964910:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08964928;
      }
      goto L_08964918;
    }
L_08964918:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089649BC;
      }
      goto L_08964920;
    }
L_08964920:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089649C0;
      }
      goto L_08964928;
    }
L_08964928:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6959)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[6]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08964960u);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08964960u) goto L_08964960;
    return;
L_08964960:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
      if (branch_taken) {
          goto L_089649B0;
      }
      goto L_08964994;
    }
L_08964994:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089649A8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 838u, 0x088ABAD0u>(ctx, &aot_mem) && ctx.pc == 0x089649A8u) goto L_089649A8;
    return;
L_089649A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089649BC;
      }
      goto L_089649B0;
    }
L_089649B0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089649BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x089649BCu) goto L_089649BC;
    return;
L_089649BC:
    ctx.gpr[2] = (0u | 0u);
    goto L_089649C0;
L_089649C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089649D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089649F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x089649F4u) goto L_089649F4;
    return;
L_089649F4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964A04u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x08964A04u) goto L_08964A04;
    return;
L_08964A04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08964A2C;
      }
      goto L_08964A0C;
    }
L_08964A0C:
    ctx.gpr[31] = (0x08964A14u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x08964A14u) goto L_08964A14;
    return;
L_08964A14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964A2C;
      }
      goto L_08964A1C;
    }
L_08964A1C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08964A34;
      }
      goto L_08964A24;
    }
L_08964A24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964AA4;
      }
      goto L_08964A2C;
    }
L_08964A2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08964AA8;
      }
      goto L_08964A34;
    }
L_08964A34:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964AA4;
      }
      goto L_08964A58;
    }
L_08964A58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964A64u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08964A64u) goto L_08964A64;
    return;
L_08964A64:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08964A78u);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08964A78u) goto L_08964A78;
    return;
L_08964A78:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08964A90;
      }
      goto L_08964A88;
    }
L_08964A88:
    ctx.gpr[5] = (ctx.gpr[16] & 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08964A90;
L_08964A90:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964AA4;
      }
      goto L_08964A9C;
    }
L_08964A9C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08964AA4;
L_08964AA4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08964AA8;
L_08964AA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964ABC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964ACCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08964ACCu) goto L_08964ACC;
    return;
L_08964ACC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08964B5C;
      }
      goto L_08964AD8;
    }
L_08964AD8:
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-6960)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[5]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
      if (branch_taken) {
          goto L_08964B4C;
      }
      goto L_08964B30;
    }
L_08964B30:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[31] = (0x08964B44u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 809u, 0x088AB920u>(ctx, &aot_mem) && ctx.pc == 0x08964B44u) goto L_08964B44;
    return;
L_08964B44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964B5C;
      }
      goto L_08964B4C;
    }
L_08964B4C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08964B5Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08964B5Cu) goto L_08964B5C;
    return;
L_08964B5C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964B6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964B90u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08964B90u) goto L_08964B90;
    return;
L_08964B90:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964BB0;
      }
      goto L_08964B9C;
    }
L_08964B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964BC4;
      }
      goto L_08964BA8;
    }
L_08964BA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(194)));
      if (branch_taken) {
          goto L_08964BE8;
      }
      goto L_08964BB0;
    }
L_08964BB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964BBCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08964BBCu) goto L_08964BBC;
    return;
L_08964BBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08964C74;
      }
      goto L_08964BC4;
    }
L_08964BC4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08964BD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08964BD4u) goto L_08964BD4;
    return;
L_08964BD4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(194)));
    goto L_08964BE8;
L_08964BE8:
    ctx.gpr[5] = (ctx.gpr[5] ^ 5u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964C64;
      }
      goto L_08964BFC;
    }
L_08964BFC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
        goto L_08964C28;
    }
    goto L_08964C04;
L_08964C04:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x08964C14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08964C14u) goto L_08964C14;
    return;
L_08964C14:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    goto L_08964C28;
L_08964C28:
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964C50;
      }
      goto L_08964C3C;
    }
L_08964C3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964C48u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08964C48u) goto L_08964C48;
    return;
L_08964C48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964C5C;
      }
      goto L_08964C50;
    }
L_08964C50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964C5Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08964C5Cu) goto L_08964C5C;
    return;
L_08964C5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08964C74;
      }
      goto L_08964C64;
    }
L_08964C64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964C70u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08964C70u) goto L_08964C70;
    return;
L_08964C70:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08964C74;
L_08964C74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964C8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964CB0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08964CB0u) goto L_08964CB0;
    return;
L_08964CB0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964CD0;
      }
      goto L_08964CBC;
    }
L_08964CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964CE8;
      }
      goto L_08964CC8;
    }
L_08964CC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08964D08;
      }
      goto L_08964CD0;
    }
L_08964CD0:
    ctx.gpr[5] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964CE0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08964CE0u) goto L_08964CE0;
    return;
L_08964CE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08964D18;
      }
      goto L_08964CE8;
    }
L_08964CE8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08964CF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08964CF8u) goto L_08964CF8;
    return;
L_08964CF8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08964D08;
L_08964D08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964D14u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(460)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08964D14u) goto L_08964D14;
    return;
L_08964D14:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08964D18;
L_08964D18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964D30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964D54u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08964D54u) goto L_08964D54;
    return;
L_08964D54:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964D78;
      }
      goto L_08964D60;
    }
L_08964D60:
    ctx.gpr[5] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08964D70u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08964D70u) goto L_08964D70;
    return;
L_08964D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964DB8;
      }
      goto L_08964D78;
    }
L_08964D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08964DA4;
    }
    goto L_08964D84;
L_08964D84:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08964D94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08964D94u) goto L_08964D94;
    return;
L_08964D94:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08964DA4;
L_08964DA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(464))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08964DB8u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08964DB8u) goto L_08964DB8;
    return;
L_08964DB8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964DD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964DE4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08964DE4u) goto L_08964DE4;
    return;
L_08964DE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964E04;
      }
      goto L_08964DF0;
    }
L_08964DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964E04;
      }
      goto L_08964DFC;
    }
L_08964DFC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(670), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08964E04;
L_08964E04:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964E14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964E30u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08964E30u) goto L_08964E30;
    return;
L_08964E30:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08964E40u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08964E40u) goto L_08964E40;
    return;
L_08964E40:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08964E78;
      }
      goto L_08964E48;
    }
L_08964E48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964E78;
      }
      goto L_08964E54;
    }
L_08964E54:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08964E78;
L_08964E78:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964E90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964EACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08964EACu) goto L_08964EAC;
    return;
L_08964EAC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08964EBCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08964EBCu) goto L_08964EBC;
    return;
L_08964EBC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964F2C;
      }
      goto L_08964EC4;
    }
L_08964EC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964F2C;
      }
      goto L_08964ED0;
    }
L_08964ED0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08964F2C;
      }
      goto L_08964F00;
    }
L_08964F00:
    ctx.gpr[4] = (16236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08964F2C;
L_08964F2C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964F44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964F64u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08964F64u) goto L_08964F64;
    return;
L_08964F64:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08964F74u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08964F74u) goto L_08964F74;
    return;
L_08964F74:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08964F84u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08964F84u) goto L_08964F84;
    return;
L_08964F84:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08964FDC;
      }
      goto L_08964F8C;
    }
L_08964F8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964FDC;
      }
      goto L_08964F98;
    }
L_08964F98:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08964FDC;
      }
      goto L_08964FBC;
    }
L_08964FBC:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08964FDC;
L_08964FDC:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964FF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08965010u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08965010u) goto L_08965010;
    return;
L_08965010:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2232u << 16u);
      if (branch_taken) {
          goto L_08965078;
      }
      goto L_0896501C;
    }
L_0896501C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965048;
      }
      goto L_08965040;
    }
L_08965040:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_0896504C;
      }
      goto L_08965048;
    }
L_08965048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    goto L_0896504C;
L_0896504C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08965068;
      }
      goto L_0896505C;
    }
L_0896505C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08965068;
L_08965068:
    ctx.gpr[31] = (0x08965070u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08965070u) goto L_08965070;
    return;
L_08965070:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08965088;
      }
      goto L_08965078;
    }
L_08965078:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08965084u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08965084u) goto L_08965084;
    return;
L_08965084:
    ctx.gpr[2] = (0u | 1u);
    goto L_08965088;
L_08965088:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965098:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (16256u << 16u);
      if (branch_taken) {
          goto L_089650C4;
      }
      goto L_089650B4;
    }
L_089650B4:
    ctx.gpr[31] = (0x089650BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089650BCu) goto L_089650BC;
    return;
L_089650BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (16256u << 16u);
    goto L_089650C4;
L_089650C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089650D0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089650D0u) goto L_089650D0;
    return;
L_089650D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089650EC;
      }
      goto L_089650DC;
    }
L_089650DC:
    ctx.gpr[31] = (0x089650E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089650E4u) goto L_089650E4;
    return;
L_089650E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2226u << 16u);
    goto L_089650EC;
L_089650EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089650F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29504));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x089650F8u) goto L_089650F8;
    return;
L_089650F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08965114;
    }
    goto L_08965104;
L_08965104:
    ctx.gpr[31] = (0x0896510Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x0896510Cu) goto L_0896510C;
    return;
L_0896510C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08965114;
L_08965114:
    ctx.gpr[31] = (0x0896511Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x0896511Cu) goto L_0896511C;
    return;
L_0896511C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08965138;
    }
    goto L_08965128;
L_08965128:
    ctx.gpr[31] = (0x08965130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08965130u) goto L_08965130;
    return;
L_08965130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08965138;
L_08965138:
    ctx.gpr[31] = (0x08965140u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08965140u) goto L_08965140;
    return;
L_08965140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (16384u << 16u);
      if (branch_taken) {
          goto L_0896515C;
      }
      goto L_0896514C;
    }
L_0896514C:
    ctx.gpr[31] = (0x08965154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08965154u) goto L_08965154;
    return;
L_08965154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (16384u << 16u);
    goto L_0896515C;
L_0896515C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08965168u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08965168u) goto L_08965168;
    return;
L_08965168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_08965184;
      }
      goto L_08965174;
    }
L_08965174:
    ctx.gpr[31] = (0x0896517Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x0896517Cu) goto L_0896517C;
    return;
L_0896517C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2226u << 16u);
    goto L_08965184;
L_08965184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08965190u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29484));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08965190u) goto L_08965190;
    return;
L_08965190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089651AC;
    }
    goto L_0896519C;
L_0896519C:
    ctx.gpr[31] = (0x089651A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089651A4u) goto L_089651A4;
    return;
L_089651A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089651AC;
L_089651AC:
    ctx.gpr[31] = (0x089651B4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x089651B4u) goto L_089651B4;
    return;
L_089651B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089651D0;
    }
    goto L_089651C0;
L_089651C0:
    ctx.gpr[31] = (0x089651C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089651C8u) goto L_089651C8;
    return;
L_089651C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089651D0;
L_089651D0:
    ctx.gpr[31] = (0x089651D8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x089651D8u) goto L_089651D8;
    return;
L_089651D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (16608u << 16u);
      if (branch_taken) {
          goto L_089651F4;
      }
      goto L_089651E4;
    }
L_089651E4:
    ctx.gpr[31] = (0x089651ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089651ECu) goto L_089651EC;
    return;
L_089651EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (16608u << 16u);
    goto L_089651F4;
L_089651F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08965200u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08965200u) goto L_08965200;
    return;
L_08965200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_0896521C;
      }
      goto L_0896520C;
    }
L_0896520C:
    ctx.gpr[31] = (0x08965214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08965214u) goto L_08965214;
    return;
L_08965214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2226u << 16u);
    goto L_0896521C;
L_0896521C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08965228u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29468));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08965228u) goto L_08965228;
    return;
L_08965228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08965244;
    }
    goto L_08965234;
L_08965234:
    ctx.gpr[31] = (0x0896523Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x0896523Cu) goto L_0896523C;
    return;
L_0896523C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08965244;
L_08965244:
    ctx.gpr[31] = (0x0896524Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x0896524Cu) goto L_0896524C;
    return;
L_0896524C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08965268;
    }
    goto L_08965258;
L_08965258:
    ctx.gpr[31] = (0x08965260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08965260u) goto L_08965260;
    return;
L_08965260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08965268;
L_08965268:
    ctx.gpr[31] = (0x08965270u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08965270u) goto L_08965270;
    return;
L_08965270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (16640u << 16u);
      if (branch_taken) {
          goto L_0896528C;
      }
      goto L_0896527C;
    }
L_0896527C:
    ctx.gpr[31] = (0x08965284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08965284u) goto L_08965284;
    return;
L_08965284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (16640u << 16u);
    goto L_0896528C;
L_0896528C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08965298u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08965298u) goto L_08965298;
    return;
L_08965298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089652B4;
      }
      goto L_089652A4;
    }
L_089652A4:
    ctx.gpr[31] = (0x089652ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089652ACu) goto L_089652AC;
    return;
L_089652AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2226u << 16u);
    goto L_089652B4;
L_089652B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089652C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29444));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x089652C0u) goto L_089652C0;
    return;
L_089652C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089652DC;
    }
    goto L_089652CC;
L_089652CC:
    ctx.gpr[31] = (0x089652D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089652D4u) goto L_089652D4;
    return;
L_089652D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089652DC;
L_089652DC:
    ctx.gpr[31] = (0x089652E4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x089652E4u) goto L_089652E4;
    return;
L_089652E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08965300;
    }
    goto L_089652F0;
L_089652F0:
    ctx.gpr[31] = (0x089652F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089652F8u) goto L_089652F8;
    return;
L_089652F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08965300;
L_08965300:
    ctx.gpr[31] = (0x08965308u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08965308u) goto L_08965308;
    return;
L_08965308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_08965324;
      }
      goto L_08965314;
    }
L_08965314:
    ctx.gpr[31] = (0x0896531Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x0896531Cu) goto L_0896531C;
    return;
L_0896531C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2228u << 16u);
    goto L_08965324;
L_08965324:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08965330u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29076));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 787u, 0x0883BFF4u>(ctx, &aot_mem) && ctx.pc == 0x08965330u) goto L_08965330;
    return;
L_08965330:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965340:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29108)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29112)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29084)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2228u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29096), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29092), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29088), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-29080), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089653D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089653E4u);
    // nop
    goto L_089654A8;
L_089653E4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6500), 0u);
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6492), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6488)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08965488;
      }
      goto L_0896540C;
    }
L_0896540C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6480)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965488;
      }
      goto L_08965418;
    }
L_08965418:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6476), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6484)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
        goto L_0896544C;
    }
    goto L_08965438;
L_08965438:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    goto L_0896544C;
L_0896544C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (50085u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (50022u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[6] = (50223u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (50195u << 16u);
    ctx.gpr[31] = (0x08965488u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 695u, 0x089776C4u>(ctx, &aot_mem) && ctx.pc == 0x08965488u) goto L_08965488;
    return;
L_08965488:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965494:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6500)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 3u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089654A8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15036)));
    ctx.gpr[11] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-6488), 0u);
    ctx.gpr[10] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-6484), 0u);
    ctx.gpr[9] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-6480), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0896557C;
      }
      goto L_089654D8;
    }
L_089654D8:
    ctx.gpr[6] = (ctx.gpr[7] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30860)));
    goto L_089654EC;
L_089654EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
        goto L_0896550C;
    }
    goto L_08965504;
L_08965504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08965510;
      }
      goto L_0896550C;
    }
L_0896550C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_08965510;
L_08965510:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965568;
      }
      goto L_08965518;
    }
L_08965518:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08965540;
      }
      goto L_08965528;
    }
L_08965528:
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_08965540;
      }
      goto L_08965534;
    }
L_08965534:
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(266)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_08965568;
      }
      goto L_08965540;
    }
L_08965540:
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08965550;
      }
      goto L_08965548;
    }
L_08965548:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-6488), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08965568;
      }
      goto L_08965550;
    }
L_08965550:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(266)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08965564;
      }
      goto L_0896555C;
    }
L_0896555C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-6484), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08965568;
      }
      goto L_08965564;
    }
L_08965564:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-6480), ctx.gpr[5]);
    goto L_08965568;
L_08965568:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_089654EC;
      }
      goto L_0896557C;
    }
L_0896557C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965584:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(266)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089655A4;
      }
      goto L_08965598;
    }
L_08965598:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089655C0;
      }
      goto L_089655A4;
    }
L_089655A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6500)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089655D0;
      }
      goto L_089655B8;
    }
L_089655B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_089655C8;
      }
      goto L_089655C0;
    }
L_089655C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089655DC;
      }
      goto L_089655C8;
    }
L_089655C8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089655D8;
      }
      goto L_089655D0;
    }
L_089655D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089655DC;
      }
      goto L_089655D8;
    }
L_089655D8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089655DC;
L_089655DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089655E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6500), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089656F8;
      }
      goto L_089655FC;
    }
L_089655FC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089656F8;
      }
      goto L_08965608;
    }
L_08965608:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29408)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965620:
    ctx.gpr[6] = (50085u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (50022u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[6] = (50223u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (50195u << 16u);
    ctx.gpr[31] = (0x08965650u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 695u, 0x089776C4u>(ctx, &aot_mem) && ctx.pc == 0x08965650u) goto L_08965650;
    return;
L_08965650:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089656F8;
      }
      goto L_08965658;
    }
L_08965658:
    ctx.gpr[6] = (50085u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (50022u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[6] = (50223u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (50195u << 16u);
    ctx.gpr[31] = (0x08965688u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 695u, 0x089776C4u>(ctx, &aot_mem) && ctx.pc == 0x08965688u) goto L_08965688;
    return;
L_08965688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089656F8;
      }
      goto L_08965690;
    }
L_08965690:
    ctx.gpr[6] = (50085u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (50022u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[6] = (50223u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (50195u << 16u);
    ctx.gpr[31] = (0x089656C0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 695u, 0x089776C4u>(ctx, &aot_mem) && ctx.pc == 0x089656C0u) goto L_089656C0;
    return;
L_089656C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089656F8;
      }
      goto L_089656C8;
    }
L_089656C8:
    ctx.gpr[6] = (50085u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (50022u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[6] = (50223u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (50195u << 16u);
    ctx.gpr[31] = (0x089656F8u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 695u, 0x089776C4u>(ctx, &aot_mem) && ctx.pc == 0x089656F8u) goto L_089656F8;
    return;
L_089656F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965704:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6488)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965790;
      }
      goto L_08965740;
    }
L_08965740:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6480)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965788;
      }
      goto L_08965750;
    }
L_08965750:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6500)));
    ctx.gpr[19] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-6496), ctx.gpr[5]);
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[21] = (0u | 4u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[22] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (2230u << 16u);
      if (branch_taken) {
          goto L_08965798;
      }
      goto L_08965778;
    }
L_08965778:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6504), 0u);
    ctx.gpr[4] = (16840u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089658D8;
      }
      goto L_08965788;
    }
L_08965788:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965E00;
      }
      goto L_08965790;
    }
L_08965790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965E00;
      }
      goto L_08965798;
    }
L_08965798:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6500)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089657BC;
      }
      goto L_089657A8;
    }
L_089657A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20001));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6504), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089658D8;
      }
      goto L_089657BC;
    }
L_089657BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6504)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089657D0;
      }
      goto L_089657C8;
    }
L_089657C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6504), ctx.gpr[6]);
    goto L_089657D0;
L_089657D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6504)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(20000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965838;
      }
      goto L_089657F4;
    }
L_089657F4:
    ctx.gpr[5] = (0u | 2u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6500), ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08965814;
      }
      goto L_08965808;
    }
L_08965808:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08965814;
L_08965814:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18076u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[13] / ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
      if (branch_taken) {
          goto L_089658D8;
      }
      goto L_08965838;
    }
L_08965838:
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14464));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965858;
      }
      goto L_0896584C;
    }
L_0896584C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6500), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089658D8;
      }
      goto L_08965858;
    }
L_08965858:
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24464));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965878;
      }
      goto L_0896586C;
    }
L_0896586C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6500), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089658D8;
      }
      goto L_08965878;
    }
L_08965878:
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21072));
    ctx.gpr[7] = (16840u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_089658D0;
      }
      goto L_08965890;
    }
L_08965890:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (0u | 5u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6500), ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089658B4;
      }
      goto L_089658A8;
    }
L_089658A8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089658B4;
L_089658B4:
    ctx.gpr[4] = (18076u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089658D8;
      }
      goto L_089658D0;
    }
L_089658D0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6500), ctx.gpr[4]);
    goto L_089658D8;
L_089658D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-6492)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08965968;
      }
      goto L_089658EC;
    }
L_089658EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6476)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6488)));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08965904u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6488)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08965904u) goto L_08965904;
    return;
L_08965904:
    ctx.gpr[31] = (0x0896590Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6488)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x0896590Cu) goto L_0896590C;
    return;
L_0896590C:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6484)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08965944;
      }
      goto L_0896591C;
    }
L_0896591C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6472)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6484)));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08965938u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6484)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08965938u) goto L_08965938;
    return;
L_08965938:
    ctx.gpr[31] = (0x08965940u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6484)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08965940u) goto L_08965940;
    return;
L_08965940:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08965944;
L_08965944:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6468)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6480)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0896595Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6480)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0896595Cu) goto L_0896595C;
    return;
L_0896595C:
    ctx.gpr[31] = (0x08965964u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6480)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08965964u) goto L_08965964;
    return;
L_08965964:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-6492), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08965968;
L_08965968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_08965980;
    }
    goto L_08965974;
L_08965974:
    ctx.gpr[31] = (0x0896597Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x0896597Cu) goto L_0896597C;
    return;
L_0896597C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_08965980;
L_08965980:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965A10;
      }
      goto L_08965990;
    }
L_08965990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_089659A8;
    }
    goto L_0896599C;
L_0896599C:
    ctx.gpr[31] = (0x089659A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x089659A4u) goto L_089659A4;
    return;
L_089659A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_089659A8;
L_089659A8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_089659BC;
    }
    goto L_089659B0;
L_089659B0:
    ctx.gpr[31] = (0x089659B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x089659B8u) goto L_089659B8;
    return;
L_089659B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_089659BC;
L_089659BC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1025), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(944));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08965A10u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x08965A10u) goto L_08965A10;
    return;
L_08965A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_08965A28;
    }
    goto L_08965A1C;
L_08965A1C:
    ctx.gpr[31] = (0x08965A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08965A24u) goto L_08965A24;
    return;
L_08965A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_08965A28;
L_08965A28:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(400)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965ABC;
      }
      goto L_08965A38;
    }
L_08965A38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_08965A50;
    }
    goto L_08965A44;
L_08965A44:
    ctx.gpr[31] = (0x08965A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08965A4Cu) goto L_08965A4C;
    return;
L_08965A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_08965A50;
L_08965A50:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_08965A64;
    }
    goto L_08965A58;
L_08965A58:
    ctx.gpr[31] = (0x08965A60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08965A60u) goto L_08965A60;
    return;
L_08965A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_08965A64;
L_08965A64:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1233), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1152));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08965ABCu);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x08965ABCu) goto L_08965ABC;
    return;
L_08965ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_08965AD4;
    }
    goto L_08965AC8;
L_08965AC8:
    ctx.gpr[31] = (0x08965AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08965AD0u) goto L_08965AD0;
    return;
L_08965AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_08965AD4;
L_08965AD4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965B68;
      }
      goto L_08965AE4;
    }
L_08965AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_08965AFC;
    }
    goto L_08965AF0;
L_08965AF0:
    ctx.gpr[31] = (0x08965AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08965AF8u) goto L_08965AF8;
    return;
L_08965AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_08965AFC;
L_08965AFC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_08965B10;
    }
    goto L_08965B04;
L_08965B04:
    ctx.gpr[31] = (0x08965B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08965B0Cu) goto L_08965B0C;
    return;
L_08965B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_08965B10;
L_08965B10:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(416));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1441), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1360));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08965B68u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x08965B68u) goto L_08965B68;
    return;
L_08965B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_08965B80;
    }
    goto L_08965B74;
L_08965B74:
    ctx.gpr[31] = (0x08965B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08965B7Cu) goto L_08965B7C;
    return;
L_08965B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_08965B80;
L_08965B80:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965C14;
      }
      goto L_08965B90;
    }
L_08965B90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_08965BA8;
    }
    goto L_08965B9C;
L_08965B9C:
    ctx.gpr[31] = (0x08965BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08965BA4u) goto L_08965BA4;
    return;
L_08965BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_08965BA8;
L_08965BA8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_08965BBC;
    }
    goto L_08965BB0;
L_08965BB0:
    ctx.gpr[31] = (0x08965BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08965BB8u) goto L_08965BB8;
    return;
L_08965BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_08965BBC;
L_08965BBC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(624));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1649), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1568));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (0x08965C14u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x08965C14u) goto L_08965C14;
    return;
L_08965C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_08965C2C;
    }
    goto L_08965C20;
L_08965C20:
    ctx.gpr[31] = (0x08965C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08965C28u) goto L_08965C28;
    return;
L_08965C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_08965C2C;
L_08965C2C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965CC0;
      }
      goto L_08965C3C;
    }
L_08965C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_08965C54;
    }
    goto L_08965C48;
L_08965C48:
    ctx.gpr[31] = (0x08965C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08965C50u) goto L_08965C50;
    return;
L_08965C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_08965C54;
L_08965C54:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_08965C68;
    }
    goto L_08965C5C;
L_08965C5C:
    ctx.gpr[31] = (0x08965C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08965C64u) goto L_08965C64;
    return;
L_08965C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_08965C68;
L_08965C68:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1857), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1776));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08965CC0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x08965CC0u) goto L_08965CC0;
    return;
L_08965CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_08965CD8;
    }
    goto L_08965CCC;
L_08965CCC:
    ctx.gpr[31] = (0x08965CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08965CD4u) goto L_08965CD4;
    return;
L_08965CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_08965CD8;
L_08965CD8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1232)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965D6C;
      }
      goto L_08965CE8;
    }
L_08965CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_08965D00;
    }
    goto L_08965CF4;
L_08965CF4:
    ctx.gpr[31] = (0x08965CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08965CFCu) goto L_08965CFC;
    return;
L_08965CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_08965D00;
L_08965D00:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
        goto L_08965D14;
    }
    goto L_08965D08;
L_08965D08:
    ctx.gpr[31] = (0x08965D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08965D10u) goto L_08965D10;
    return;
L_08965D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    goto L_08965D14;
L_08965D14:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1040));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2065), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1984));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (0x08965D6Cu);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x08965D6Cu) goto L_08965D6C;
    return;
L_08965D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6500)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08965DB8;
      }
      goto L_08965D78;
    }
L_08965D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-6496)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[6] = (50085u << 16u);
      if (branch_taken) {
          goto L_08965DB8;
      }
      goto L_08965D84;
    }
L_08965D84:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (50022u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[6] = (50223u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (50195u << 16u);
    ctx.gpr[31] = (0x08965DB0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 695u, 0x089776C4u>(ctx, &aot_mem) && ctx.pc == 0x08965DB0u) goto L_08965DB0;
    return;
L_08965DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965E00;
      }
      goto L_08965DB8;
    }
L_08965DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6500)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08965E00;
      }
      goto L_08965DC4;
    }
L_08965DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-6496)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (50085u << 16u);
      if (branch_taken) {
          goto L_08965E00;
      }
      goto L_08965DD4;
    }
L_08965DD4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (50022u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[6] = (50223u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (50195u << 16u);
    ctx.gpr[31] = (0x08965E00u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 695u, 0x089776C4u>(ctx, &aot_mem) && ctx.pc == 0x08965E00u) goto L_08965E00;
    return;
L_08965E00:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965E30:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28836)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28840)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28812)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-28832), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2228u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-28824), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-28828), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28820), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28816), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-28808), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965EC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08965ED8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 112u, 0x0887885Cu>(ctx, &aot_mem) && ctx.pc == 0x08965ED8u) goto L_08965ED8;
    return;
L_08965ED8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17748));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965EF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08965F14u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 112u, 0x0887885Cu>(ctx, &aot_mem) && ctx.pc == 0x08965F14u) goto L_08965F14;
    return;
L_08965F14:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17748));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08965F38u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965F38u) goto L_08965F38;
    return;
L_08965F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965F50;
      }
      goto L_08965F44;
    }
L_08965F44:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08965F50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 665u, 0x08A2EF70u>(ctx, &aot_mem) && ctx.pc == 0x08965F50u) goto L_08965F50;
    return;
L_08965F50:
    ctx.gpr[31] = (0x08965F58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 687u, 0x08A2F094u>(ctx, &aot_mem) && ctx.pc == 0x08965F58u) goto L_08965F58;
    return;
L_08965F58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(90)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965F80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08965FC8;
      }
      goto L_08965F9C;
    }
L_08965F9C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17748));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08965FB4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 114u, 0x088788A4u>(ctx, &aot_mem) && ctx.pc == 0x08965FB4u) goto L_08965FB4;
    return;
L_08965FB4:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965FC8;
      }
      goto L_08965FC0;
    }
L_08965FC0:
    ctx.gpr[31] = (0x08965FC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 121u, 0x08878920u>(ctx, &aot_mem) && ctx.pc == 0x08965FC8u) goto L_08965FC8;
    return;
L_08965FC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965FDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28796)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 14571u);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28800)));
    ctx.gpr[7] = (2228u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-28792), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-28784), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-28788), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15984));
    ctx.gpr[6] = (2228u << 16u);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[11] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-28780), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896606Cu);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-28776), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08965EC4;
L_0896606C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08966078u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28772));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x08966078u) goto L_08966078;
    return;
L_08966078:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15888));
    ctx.gpr[31] = (0x08966094u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29376));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AEF4u>(ctx, &aot_mem) && ctx.pc == 0x08966094u) goto L_08966094;
    return;
L_08966094:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089660A4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28756)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28760)));
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[11] = (2228u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-28752), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-28744), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-28748), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-28740), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-28736), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896611C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28724));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08966140u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(11128));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08966140u) goto L_08966140;
    return;
L_08966140:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896614C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28592)));
    ctx.gpr[4] = (2228u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28588), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966160:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08966174u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 891u, 0x08AEF284u>(ctx, &aot_mem) && ctx.pc == 0x08966174u) goto L_08966174;
    return;
L_08966174:
    ctx.gpr[31] = (0x0896617Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x0896617Cu) goto L_0896617C;
    return;
L_0896617C:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089661A8;
      }
      goto L_08966194;
    }
L_08966194:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08966194;
      }
      goto L_089661A8;
    }
L_089661A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[6] = (0u | 92u);
      if (branch_taken) {
          goto L_089661D8;
      }
      goto L_089661B8;
    }
L_089661B8:
    ctx.gpr[5] = (0u | 47u);
    goto L_089661BC;
L_089661BC:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089661C8;
      }
      goto L_089661C4;
    }
L_089661C4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089661C8;
L_089661C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089661BC;
      }
      goto L_089661D8;
    }
L_089661D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089661E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[31]);
    ctx.gpr[31] = (0x08966224u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08966224u) goto L_08966224;
    return;
L_08966224:
    ctx.gpr[31] = (0x0896622Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08966160;
L_0896622C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08966240u);
    ctx.gpr[5] = (0u | 115u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 398u, 0x08AED634u>(ctx, &aot_mem) && ctx.pc == 0x08966240u) goto L_08966240;
    return;
L_08966240:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896624C;
      }
      goto L_08966248;
    }
L_08966248:
    ctx.gpr[19] = (0u | 1u);
    goto L_0896624C;
L_0896624C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08966258u);
    ctx.gpr[5] = (0u | 114u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 398u, 0x08AED634u>(ctx, &aot_mem) && ctx.pc == 0x08966258u) goto L_08966258;
    return;
L_08966258:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08966270;
      }
      goto L_08966260;
    }
L_08966260:
    ctx.gpr[31] = (0x08966268u);
    ctx.gpr[5] = (0u | 43u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 398u, 0x08AED634u>(ctx, &aot_mem) && ctx.pc == 0x08966268u) goto L_08966268;
    return;
L_08966268:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966274;
      }
      goto L_08966270;
    }
L_08966270:
    ctx.gpr[20] = (0u | 1u);
    goto L_08966274;
L_08966274:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08966280u);
    ctx.gpr[5] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 398u, 0x08AED634u>(ctx, &aot_mem) && ctx.pc == 0x08966280u) goto L_08966280;
    return;
L_08966280:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896628C;
      }
      goto L_08966288;
    }
L_08966288:
    ctx.gpr[20] = (ctx.gpr[20] | 1538u);
    goto L_0896628C;
L_0896628C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089662B4;
      }
      goto L_08966294;
    }
L_08966294:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089662B4;
      }
      goto L_0896629C;
    }
L_0896629C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089662ACu);
    ctx.gpr[6] = (0u | 511u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 140u, 0x08A58B50u>(ctx, &aot_mem) && ctx.pc == 0x089662ACu) goto L_089662AC;
    return;
L_089662AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089662C8;
      }
      goto L_089662B4;
    }
L_089662B4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089662C4u);
    ctx.gpr[6] = (0u | 511u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 134u, 0x08A58AD0u>(ctx, &aot_mem) && ctx.pc == 0x089662C4u) goto L_089662C4;
    return;
L_089662C4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089662C8;
L_089662C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089662E8;
      }
      goto L_089662D0;
    }
L_089662D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7788)));
    ctx.gpr[16] = (2231u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7784));
      if (branch_taken) {
          goto L_089662F0;
      }
      goto L_089662E0;
    }
L_089662E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966310;
      }
      goto L_089662E8;
    }
L_089662E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089663D4;
      }
      goto L_089662F0;
    }
L_089662F0:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7788), ctx.gpr[5]);
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08966310u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(11144));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08966310u) goto L_08966310;
    return;
L_08966310:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896631C;
L_0896631C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0896632C;
      }
      goto L_08966328;
    }
L_08966328:
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_0896632C;
L_0896632C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0896631C;
      }
      goto L_0896633C;
    }
L_0896633C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966374;
      }
      goto L_08966344;
    }
L_08966344:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (32768u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[19] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] << 31u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0896637C;
      }
      goto L_0896636C;
    }
L_0896636C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089663D0;
      }
      goto L_08966374;
    }
L_08966374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089663D4;
      }
      goto L_0896637C;
    }
L_0896637C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28564)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28568)));
    ctx.gpr[8] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0896639Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 514u, 0x08936330u>(ctx, &aot_mem) && ctx.pc == 0x0896639Cu) goto L_0896639C;
    return;
L_0896639C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089663D0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 514u, 0x08936330u>(ctx, &aot_mem) && ctx.pc == 0x089663D0u) goto L_089663D0;
    return;
L_089663D0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_089663D4;
L_089663D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089663F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08966488;
      }
      goto L_08966430;
    }
L_08966430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28564)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28568)));
    ctx.gpr[31] = (0x08966448u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 514u, 0x08936330u>(ctx, &aot_mem) && ctx.pc == 0x08966448u) goto L_08966448;
    return;
L_08966448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966488;
      }
      goto L_08966470;
    }
L_08966470:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (0u | 10u);
    ctx.gpr[23] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (32768u << 16u);
      if (branch_taken) {
          goto L_08966490;
      }
      goto L_08966488;
    }
L_08966488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089664FC;
      }
      goto L_08966490;
    }
L_08966490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089664B8;
      }
      goto L_089664A4;
    }
L_089664A4:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089664B0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 414u, 0x08935DB0u>(ctx, &aot_mem) && ctx.pc == 0x089664B0u) goto L_089664B0;
    return;
L_089664B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_089664C8;
      }
      goto L_089664B8;
    }
L_089664B8:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089664C4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 468u, 0x089360D0u>(ctx, &aot_mem) && ctx.pc == 0x089664C4u) goto L_089664C4;
    return;
L_089664C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    goto L_089664C8;
L_089664C8:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_089664DC;
      }
      goto L_089664D8;
    }
L_089664D8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089664DC;
L_089664DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089664F4;
      }
      goto L_089664E4;
    }
L_089664E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089664F4;
      }
      goto L_089664EC;
    }
L_089664EC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08966490;
      }
      goto L_089664F4;
    }
L_089664F4:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_089664FC;
L_089664FC:
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
L_08966528:
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
L_08966554:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08966564;
      }
      goto L_08966560;
    }
L_08966560:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08966564;
L_08966564:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896657C;
      }
      goto L_08966574;
    }
L_08966574:
    ctx.gpr[6] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_0896657C;
L_0896657C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0896658C;
      }
      goto L_08966588;
    }
L_08966588:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_0896658C;
L_0896658C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089665A4;
      }
      goto L_0896659C;
    }
L_0896659C:
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089665A4;
L_089665A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089665AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089665CCu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08966554;
L_089665CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2276u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27688));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966614;
      }
      goto L_089665F4;
    }
L_089665F4:
    ctx.gpr[5] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27944));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0896660Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 632u, 0x0892FCC8u>(ctx, &aot_mem) && ctx.pc == 0x0896660Cu) goto L_0896660C;
    return;
L_0896660C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08966614;
L_08966614:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966624:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089666A0;
      }
      goto L_08966644;
    }
L_08966644:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089666A0;
      }
      goto L_08966650;
    }
L_08966650:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08966698;
      }
      goto L_08966658;
    }
L_08966658:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966698;
      }
      goto L_08966660;
    }
L_08966660:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27688));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27944));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089666A8;
      }
      goto L_08966690;
    }
L_08966690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_089666B8;
      }
      goto L_08966698;
    }
L_08966698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896672C;
      }
      goto L_089666A0;
    }
L_089666A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896672C;
      }
      goto L_089666A8;
    }
L_089666A8:
    ctx.gpr[31] = (0x089666B0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 643u, 0x0892FD98u>(ctx, &aot_mem) && ctx.pc == 0x089666B0u) goto L_089666B0;
    return;
L_089666B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    goto L_089666B8;
L_089666B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_089666E0;
    }
    goto L_089666D4;
L_089666D4:
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089666F4;
      }
      goto L_089666E0;
    }
L_089666E0:
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089666F4;
L_089666F4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896672C;
      }
      goto L_089666FC;
    }
L_089666FC:
    ctx.gpr[31] = (0x08966704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 660u, 0x0892FEDCu>(ctx, &aot_mem) && ctx.pc == 0x08966704u) goto L_08966704;
    return;
L_08966704:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_0896672C;
      }
      goto L_0896670C;
    }
L_0896670C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08966720u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28848));
    goto L_08966528;
L_08966720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0896672Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 611u, 0x0892FB40u>(ctx, &aot_mem) && ctx.pc == 0x0896672Cu) goto L_0896672C;
    return;
L_0896672C:
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
L_08966744:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896679C;
      }
      goto L_08966760;
    }
L_08966760:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896679C;
      }
      goto L_0896677C;
    }
L_0896677C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089667B4;
      }
      goto L_08966794;
    }
L_08966794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089667A4;
      }
      goto L_0896679C;
    }
L_0896679C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089667C0;
      }
      goto L_089667A4;
    }
L_089667A4:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089667BC;
      }
      goto L_089667B4;
    }
L_089667B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089667C0;
      }
      goto L_089667BC;
    }
L_089667BC:
    ctx.gpr[2] = (0u | 1u);
    goto L_089667C0;
L_089667C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089667C8:
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[8] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[5] << 9u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(500));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966848:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[19] = ctx.fpr[13] - ctx.fpr[19];
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_089668F4;
      }
      goto L_08966890;
    }
L_08966890:
    ctx.fpr[12] = ctx.fpr[19] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    ctx.fpr[0] = ctx.fpr[17] - ctx.fpr[16];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089668F4;
      }
      goto L_089668B4;
    }
L_089668B4:
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089668F4;
      }
      goto L_089668C4;
    }
L_089668C4:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089668F4;
      }
      goto L_089668D4;
    }
L_089668D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 3u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_089668F4;
L_089668F4:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[19] = ctx.fpr[13] - ctx.fpr[16];
        goto L_08966980;
    }
    goto L_08966918;
L_08966918:
    ctx.fpr[12] = ctx.fpr[19] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    ctx.fpr[0] = ctx.fpr[17] - ctx.fpr[16];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896697C;
      }
      goto L_0896693C;
    }
L_0896693C:
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896697C;
      }
      goto L_0896694C;
    }
L_0896694C:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896697C;
      }
      goto L_0896695C;
    }
L_0896695C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_0896697C;
L_0896697C:
    ctx.fpr[19] = ctx.fpr[13] - ctx.fpr[16];
    goto L_08966980;
L_08966980:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[17];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[15];
        goto L_08966A08;
    }
    goto L_08966998;
L_08966998:
    ctx.fpr[12] = ctx.fpr[19] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[19];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[0] + ctx.fpr[19];
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966A04;
      }
      goto L_089669C4;
    }
L_089669C4:
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966A04;
      }
      goto L_089669D4;
    }
L_089669D4:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966A04;
      }
      goto L_089669E4;
    }
L_089669E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08966A04;
L_08966A04:
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[15];
    goto L_08966A08;
L_08966A08:
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[15];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966A80;
      }
      goto L_08966A20;
    }
L_08966A20:
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[16] / ctx.fpr[12];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[16];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[18] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966A80;
      }
      goto L_08966A4C;
    }
L_08966A4C:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966A80;
      }
      goto L_08966A5C;
    }
L_08966A5C:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08966A80;
      }
      goto L_08966A6C;
    }
L_08966A6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[2] = (0u | 2u);
    goto L_08966A80;
L_08966A80:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966A88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2277u << 16u);
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[18] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[21] = (0u | 255u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28236));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-27944));
    ctx.gpr[20] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    goto L_08966AD4;
L_08966AD4:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08966AE4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 61u, 0x08968418u>(ctx, &aot_mem) && ctx.pc == 0x08966AE4u) goto L_08966AE4;
    return;
L_08966AE4:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08966AD4;
      }
      goto L_08966B10;
    }
L_08966B10:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6204), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6563), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7728), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (17292u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[21] = (2276u << 16u);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-27688));
    goto L_08966B4C;
L_08966B4C:
    ctx.gpr[31] = (0x08966B54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x08966B54u) goto L_08966B54;
    return;
L_08966B54:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-27978)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966B6C;
      }
      goto L_08966B64;
    }
L_08966B64:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08966B6C;
L_08966B6C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08966B4C;
      }
      goto L_08966B80;
    }
L_08966B80:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-27978), static_cast<std::uint8_t>(ctx.gpr[17]));
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
L_08966BAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08966BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC30u>(ctx, &aot_mem) && ctx.pc == 0x08966BBCu) goto L_08966BBC;
    return;
L_08966BBC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08966BC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28808));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x08966BC8u) goto L_08966BC8;
    return;
L_08966BC8:
    ctx.gpr[31] = (0x08966BD0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 619u, 0x0892FBDCu>(ctx, &aot_mem) && ctx.pc == 0x08966BD0u) goto L_08966BD0;
    return;
L_08966BD0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6464));
    ctx.gpr[31] = (0x08966BE4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28804));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966BE4u) goto L_08966BE4;
    return;
L_08966BE4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6460));
    ctx.gpr[31] = (0x08966BF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28788));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966BF8u) goto L_08966BF8;
    return;
L_08966BF8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6456));
    ctx.gpr[31] = (0x08966C0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28780));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966C0Cu) goto L_08966C0C;
    return;
L_08966C0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6452));
    ctx.gpr[31] = (0x08966C20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28768));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966C20u) goto L_08966C20;
    return;
L_08966C20:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6448));
    ctx.gpr[31] = (0x08966C34u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28756));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966C34u) goto L_08966C34;
    return;
L_08966C34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6444));
    ctx.gpr[31] = (0x08966C48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28744));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966C48u) goto L_08966C48;
    return;
L_08966C48:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6440));
    ctx.gpr[31] = (0x08966C5Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28728));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966C5Cu) goto L_08966C5C;
    return;
L_08966C5C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6436));
    ctx.gpr[31] = (0x08966C70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28716));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966C70u) goto L_08966C70;
    return;
L_08966C70:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6432));
    ctx.gpr[31] = (0x08966C84u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28704));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966C84u) goto L_08966C84;
    return;
L_08966C84:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6428));
    ctx.gpr[31] = (0x08966C98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28688));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966C98u) goto L_08966C98;
    return;
L_08966C98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6424));
    ctx.gpr[31] = (0x08966CACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28676));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966CACu) goto L_08966CAC;
    return;
L_08966CAC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6420));
    ctx.gpr[31] = (0x08966CC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28668));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966CC0u) goto L_08966CC0;
    return;
L_08966CC0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6416));
    ctx.gpr[31] = (0x08966CD4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28656));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966CD4u) goto L_08966CD4;
    return;
L_08966CD4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6412));
    ctx.gpr[31] = (0x08966CE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28648));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966CE8u) goto L_08966CE8;
    return;
L_08966CE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6408));
    ctx.gpr[31] = (0x08966CFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28640));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966CFCu) goto L_08966CFC;
    return;
L_08966CFC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6404));
    ctx.gpr[31] = (0x08966D10u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28628));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966D10u) goto L_08966D10;
    return;
L_08966D10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6400));
    ctx.gpr[31] = (0x08966D24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28624));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966D24u) goto L_08966D24;
    return;
L_08966D24:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6396));
    ctx.gpr[31] = (0x08966D38u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28612));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966D38u) goto L_08966D38;
    return;
L_08966D38:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    ctx.gpr[31] = (0x08966D4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28600));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966D4Cu) goto L_08966D4C;
    return;
L_08966D4C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6388));
    ctx.gpr[31] = (0x08966D60u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28588));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966D60u) goto L_08966D60;
    return;
L_08966D60:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6384));
    ctx.gpr[31] = (0x08966D74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28576));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966D74u) goto L_08966D74;
    return;
L_08966D74:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6380));
    ctx.gpr[31] = (0x08966D88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28564));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966D88u) goto L_08966D88;
    return;
L_08966D88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6376));
    ctx.gpr[31] = (0x08966D9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28556));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966D9Cu) goto L_08966D9C;
    return;
L_08966D9C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6372));
    ctx.gpr[31] = (0x08966DB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28544));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966DB0u) goto L_08966DB0;
    return;
L_08966DB0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6368));
    ctx.gpr[31] = (0x08966DC4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28532));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966DC4u) goto L_08966DC4;
    return;
L_08966DC4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6364));
    ctx.gpr[31] = (0x08966DD8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28520));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966DD8u) goto L_08966DD8;
    return;
L_08966DD8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6360));
    ctx.gpr[31] = (0x08966DECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28512));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966DECu) goto L_08966DEC;
    return;
L_08966DEC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6356));
    ctx.gpr[31] = (0x08966E00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28504));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966E00u) goto L_08966E00;
    return;
L_08966E00:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6352));
    ctx.gpr[31] = (0x08966E14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28496));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966E14u) goto L_08966E14;
    return;
L_08966E14:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6348));
    ctx.gpr[31] = (0x08966E28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28488));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966E28u) goto L_08966E28;
    return;
L_08966E28:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6344));
    ctx.gpr[31] = (0x08966E3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28480));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966E3Cu) goto L_08966E3C;
    return;
L_08966E3C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6340));
    ctx.gpr[31] = (0x08966E50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28468));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966E50u) goto L_08966E50;
    return;
L_08966E50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6336));
    ctx.gpr[31] = (0x08966E64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28452));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966E64u) goto L_08966E64;
    return;
L_08966E64:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6332));
    ctx.gpr[31] = (0x08966E78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28436));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966E78u) goto L_08966E78;
    return;
L_08966E78:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6328));
    ctx.gpr[31] = (0x08966E8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28420));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966E8Cu) goto L_08966E8C;
    return;
L_08966E8C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6324));
    ctx.gpr[31] = (0x08966EA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28404));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966EA0u) goto L_08966EA0;
    return;
L_08966EA0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6320));
    ctx.gpr[31] = (0x08966EB4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28392));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966EB4u) goto L_08966EB4;
    return;
L_08966EB4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6316));
    ctx.gpr[31] = (0x08966EC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28380));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966EC8u) goto L_08966EC8;
    return;
L_08966EC8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6312));
    ctx.gpr[31] = (0x08966EDCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28368));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966EDCu) goto L_08966EDC;
    return;
L_08966EDC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6308));
    ctx.gpr[31] = (0x08966EF0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28352));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966EF0u) goto L_08966EF0;
    return;
L_08966EF0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6304));
    ctx.gpr[31] = (0x08966F04u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28336));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966F04u) goto L_08966F04;
    return;
L_08966F04:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6300));
    ctx.gpr[31] = (0x08966F18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28324));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966F18u) goto L_08966F18;
    return;
L_08966F18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6296));
    ctx.gpr[31] = (0x08966F2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28312));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966F2Cu) goto L_08966F2C;
    return;
L_08966F2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6292));
    ctx.gpr[31] = (0x08966F40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28296));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966F40u) goto L_08966F40;
    return;
L_08966F40:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6288));
    ctx.gpr[31] = (0x08966F54u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28284));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966F54u) goto L_08966F54;
    return;
L_08966F54:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6284));
    ctx.gpr[31] = (0x08966F68u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28268));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966F68u) goto L_08966F68;
    return;
L_08966F68:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6280));
    ctx.gpr[31] = (0x08966F7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28260));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966F7Cu) goto L_08966F7C;
    return;
L_08966F7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6276));
    ctx.gpr[31] = (0x08966F90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28244));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966F90u) goto L_08966F90;
    return;
L_08966F90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6272));
    ctx.gpr[31] = (0x08966FA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28232));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966FA4u) goto L_08966FA4;
    return;
L_08966FA4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6268));
    ctx.gpr[31] = (0x08966FB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28216));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966FB8u) goto L_08966FB8;
    return;
L_08966FB8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6264));
    ctx.gpr[31] = (0x08966FCCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28208));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966FCCu) goto L_08966FCC;
    return;
L_08966FCC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6260));
    ctx.gpr[31] = (0x08966FE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28200));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966FE0u) goto L_08966FE0;
    return;
L_08966FE0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6256));
    ctx.gpr[31] = (0x08966FF4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28184));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08966FF4u) goto L_08966FF4;
    return;
L_08966FF4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6252));
    ctx.gpr[31] = (0x08967008u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28168));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08967008u) goto L_08967008;
    return;
L_08967008:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6248));
    ctx.gpr[31] = (0x0896701Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28156));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x0896701Cu) goto L_0896701C;
    return;
L_0896701C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6244));
    ctx.gpr[31] = (0x08967030u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28144));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08967030u) goto L_08967030;
    return;
L_08967030:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6240));
    ctx.gpr[31] = (0x08967044u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28132));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08967044u) goto L_08967044;
    return;
L_08967044:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6236));
    ctx.gpr[31] = (0x08967058u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28120));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08967058u) goto L_08967058;
    return;
L_08967058:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6232));
    ctx.gpr[31] = (0x0896706Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28108));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x0896706Cu) goto L_0896706C;
    return;
L_0896706C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6228));
    ctx.gpr[31] = (0x08967080u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28096));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08967080u) goto L_08967080;
    return;
L_08967080:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6224));
    ctx.gpr[31] = (0x08967094u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28084));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 882u, 0x08AD3914u>(ctx, &aot_mem) && ctx.pc == 0x08967094u) goto L_08967094;
    return;
L_08967094:
    ctx.gpr[31] = (0x0896709Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 626u, 0x0892FC54u>(ctx, &aot_mem) && ctx.pc == 0x0896709Cu) goto L_0896709C;
    return;
L_0896709C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089670A8:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (0u | 65534u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089670EC;
      }
      goto L_089670D4;
    }
L_089670D4:
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[2] = (ctx.gpr[5] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | ctx.gpr[2]);
      if (branch_taken) {
          goto L_08967100;
      }
      goto L_089670EC;
    }
L_089670EC:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[2] = (ctx.gpr[5] << 16u);
    ctx.gpr[2] = (ctx.gpr[4] | ctx.gpr[2]);
    goto L_08967100;
L_08967100:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967108:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_0896714C;
      }
      goto L_08967114;
    }
L_08967114:
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] << 6u);
    ctx.gpr[8] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] >> 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08967154;
      }
      goto L_08967144;
    }
L_08967144:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08967154;
      }
      goto L_0896714C;
    }
L_0896714C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967154;
      }
      goto L_08967154;
    }
L_08967154:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896715C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6204), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089671D0;
      }
      goto L_0896719C;
    }
L_0896719C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7660)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089671D0;
      }
      goto L_089671A8;
    }
L_089671A8:
    ctx.gpr[31] = (0x089671B0u);
    // nop
    goto L_08967640;
L_089671B0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[18] = (0u | 96u);
    ctx.gpr[17] = (0u | 280u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_089671D8;
      }
      goto L_089671C8;
    }
L_089671C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089671E0;
      }
      goto L_089671D0;
    }
L_089671D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896731C;
      }
      goto L_089671D8;
    }
L_089671D8:
    ctx.gpr[18] = (0u | 150u);
    ctx.gpr[17] = (0u | 280u);
    goto L_089671E0;
L_089671E0:
    ctx.gpr[31] = (0x089671E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089671E8u) goto L_089671E8;
    return;
L_089671E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896729C;
      }
      goto L_089671F0;
    }
L_089671F0:
    ctx.gpr[31] = (0x089671F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x089671F8u) goto L_089671F8;
    return;
L_089671F8:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08967238;
      }
      goto L_08967228;
    }
L_08967228:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08967294;
      }
      goto L_08967238;
    }
L_08967238:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08967288;
      }
      goto L_08967254;
    }
L_08967254:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39321u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08967294;
      }
      goto L_08967288;
    }
L_08967288:
    ctx.gpr[4] = (17292u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08967294;
L_08967294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089672A8;
      }
      goto L_0896729C;
    }
L_0896729C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089672A8;
L_089672A8:
    ctx.gpr[31] = (0x089672B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 205u, 0x089D5974u>(ctx, &aot_mem) && ctx.pc == 0x089672B0u) goto L_089672B0;
    return;
L_089672B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7656), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7656));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0896730Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 584u, 0x08ADA6C0u>(ctx, &aot_mem) && ctx.pc == 0x0896730Cu) goto L_0896730C;
    return;
L_0896730C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0896731C;
      }
      goto L_08967314;
    }
L_08967314:
    ctx.gpr[31] = (0x0896731Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 195u, 0x08969254u>(ctx, &aot_mem) && ctx.pc == 0x0896731Cu) goto L_0896731C;
    return;
L_0896731C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967338:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08967360u);
    // nop
    goto L_08967640;
L_08967360:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08967380;
      }
      goto L_08967374;
    }
L_08967374:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24628)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-6204), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08967380;
L_08967380:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7656), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7656));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (2277u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-15872));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_089673BC;
L_089673BC:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089673E4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089673E4u) goto L_089673E4;
    return;
L_089673E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 75 ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-6204)));
      if (branch_taken) {
          goto L_089673BC;
      }
      goto L_08967418;
    }
L_08967418:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-27980), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08967440u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08967440u) goto L_08967440;
    return;
L_08967440:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6216));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-6204)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08967480u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08967480u) goto L_08967480;
    return;
L_08967480:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6212), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6212));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
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
L_089674CC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(320)));
    if (ctx.gpr[5] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08967500;
    }
    goto L_089674E0;
L_089674E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967554;
      }
      goto L_08967500;
    }
L_08967500:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (16256u << 16u);
      if (branch_taken) {
          goto L_0896754C;
      }
      goto L_0896752C;
    }
L_0896752C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[0];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0896754C;
L_0896754C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967554;
      }
      goto L_08967554;
    }
L_08967554:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896755C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089675B0;
      }
      goto L_08967570;
    }
L_08967570:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089675A8;
      }
      goto L_08967588;
    }
L_08967588:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_089675B8;
      }
      goto L_089675A0;
    }
L_089675A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 128u);
      if (branch_taken) {
          goto L_08967638;
      }
      goto L_089675A8;
    }
L_089675A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 255u);
      if (branch_taken) {
          goto L_08967638;
      }
      goto L_089675B0;
    }
L_089675B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 255u);
      if (branch_taken) {
          goto L_08967638;
      }
      goto L_089675B8;
    }
L_089675B8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[5] = (17279u << 16u);
    ctx.gpr[6] = (17152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08967638;
      }
      goto L_08967638;
    }
L_08967638:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967640:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2231u << 16u);
      if (branch_taken) {
          goto L_0896769C;
      }
      goto L_08967678;
    }
L_08967678:
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x08967688u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 139u, 0x088ED114u>(ctx, &aot_mem) && ctx.pc == 0x08967688u) goto L_08967688;
    return;
L_08967688:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[19] = (2231u << 16u);
      if (branch_taken) {
          goto L_089676B0;
      }
      goto L_08967694;
    }
L_08967694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089677C4;
      }
      goto L_0896769C;
    }
L_0896769C:
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7648), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7644), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08967840;
      }
      goto L_089676B0;
    }
L_089676B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08967738;
      }
      goto L_089676E0;
    }
L_089676E0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967784;
      }
      goto L_08967738;
    }
L_08967738:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(996)));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(848));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08967784;
L_08967784:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089677AC;
      }
      goto L_0896779C;
    }
L_0896779C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089677BC;
      }
      goto L_089677AC;
    }
L_089677AC:
    ctx.gpr[31] = (0x089677B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089677B4u) goto L_089677B4;
    return;
L_089677B4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089677BC;
      }
      goto L_089677BC;
    }
L_089677BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-7640), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08967800;
      }
      goto L_089677C4;
    }
L_089677C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089677EC;
      }
      goto L_089677DC;
    }
L_089677DC:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089677FC;
      }
      goto L_089677EC;
    }
L_089677EC:
    ctx.gpr[31] = (0x089677F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089677F4u) goto L_089677F4;
    return;
L_089677F4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089677FC;
      }
      goto L_089677FC;
    }
L_089677FC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-7640), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08967800;
L_08967800:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7648), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7644), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08967840;
L_08967840:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967860:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (2231u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7636)));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (2231u << 16u);
      if (branch_taken) {
          goto L_089678C4;
      }
      goto L_0896789C;
    }
L_0896789C:
    ctx.gpr[7] = (16924u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.gpr[8] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-27976)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7636), ctx.gpr[7]);
    ctx.gpr[6] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7628), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089678C4;
L_089678C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7632)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (50180u << 16u);
      if (branch_taken) {
          goto L_089678F4;
      }
      goto L_089678D0;
    }
L_089678D0:
    ctx.gpr[6] = (ctx.gpr[6] | 60948u);
    ctx.gpr[7] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27976)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7632), ctx.gpr[6]);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089678F4;
L_089678F4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (17264u << 16u);
      if (branch_taken) {
          goto L_0896792C;
      }
      goto L_08967900;
    }
L_08967900:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[6] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089679AC;
      }
      goto L_08967910;
    }
L_08967910:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089679AC;
      }
      goto L_0896791C;
    }
L_0896791C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089679AC;
      }
      goto L_08967928;
    }
L_08967928:
    ctx.gpr[5] = (17264u << 16u);
    goto L_0896792C;
L_0896792C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1140)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27972)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2231u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7628)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[6] = (2231u << 16u);
    ctx.gpr[7] = (17124u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1136)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27968)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7624)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08967A10;
      }
      goto L_089679AC;
    }
L_089679AC:
    ctx.gpr[31] = (0x089679B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08986FE4u>(ctx, &aot_mem) && ctx.pc == 0x089679B4u) goto L_089679B4;
    return;
L_089679B4:
    ctx.gpr[31] = (0x089679BCu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08986F84u>(ctx, &aot_mem) && ctx.pc == 0x089679BCu) goto L_089679BC;
    return;
L_089679BC:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x089679D0u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08986F84u>(ctx, &aot_mem) && ctx.pc == 0x089679D0u) goto L_089679D0;
    return;
L_089679D0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    ctx.gpr[31] = (0x089679E8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 508u, 0x08987008u>(ctx, &aot_mem) && ctx.pc == 0x089679E8u) goto L_089679E8;
    return;
L_089679E8:
    ctx.gpr[31] = (0x089679F0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 501u, 0x08986FB4u>(ctx, &aot_mem) && ctx.pc == 0x089679F0u) goto L_089679F0;
    return;
L_089679F0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x089679FCu);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 501u, 0x08986FB4u>(ctx, &aot_mem) && ctx.pc == 0x089679FCu) goto L_089679FC;
    return;
L_089679FC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08967A10;
L_08967A10:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967A30:
    ctx.gpr[9] = (2231u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-7620)));
    ctx.gpr[8] = (2231u << 16u);
    ctx.gpr[7] = (2231u << 16u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (2231u << 16u);
      if (branch_taken) {
          goto L_08967A6C;
      }
      goto L_08967A48;
    }
L_08967A48:
    ctx.gpr[10] = (16924u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[10] = (2228u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-27964)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[10] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-7620), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-7612), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08967A6C;
L_08967A6C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7616)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (50180u << 16u);
      if (branch_taken) {
          goto L_08967A98;
      }
      goto L_08967A78;
    }
L_08967A78:
    ctx.gpr[9] = (ctx.gpr[9] | 60948u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-27964)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[9] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7616), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08967A98;
L_08967A98:
    ctx.gpr[7] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4576));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1140)));
    ctx.gpr[9] = (17264u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1136)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-27960)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7612)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[8] = (17124u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1136)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-27956)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7608)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967B20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6208)));
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2231u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7656)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7656));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2231u << 16u);
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (2231u << 16u);
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7648)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7644)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08967B94;
      }
      goto L_08967B88;
    }
L_08967B88:
    ctx.gpr[5] = (14979u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08967B94;
L_08967B94:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_08967BB4;
    }
    goto L_08967BA4;
L_08967BA4:
    ctx.gpr[5] = (14979u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08967BB4;
L_08967BB4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967BE0:
    ctx.gpr[6] = (2231u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7648)));
    ctx.gpr[6] = (2231u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7644)));
      if (branch_taken) {
          goto L_08967C0C;
      }
      goto L_08967C00;
    }
L_08967C00:
    ctx.gpr[6] = (14979u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_08967C0C;
L_08967C0C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08967C2C;
    }
    goto L_08967C1C;
L_08967C1C:
    ctx.gpr[6] = (14979u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08967C2C;
L_08967C2C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2231u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7656));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6208)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7656)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967CA8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (17402u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17658u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 8u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (15107u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967D20:
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967E34;
      }
      goto L_08967D34;
    }
L_08967D34:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27624)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967D4C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967D60;
      }
      goto L_08967D54;
    }
L_08967D54:
    ctx.gpr[2] = (65352u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(19967));
      if (branch_taken) {
          goto L_08967E38;
      }
      goto L_08967D60;
    }
L_08967D60:
    ctx.gpr[2] = (32512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_08967E38;
      }
      goto L_08967D6C;
    }
L_08967D6C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967D80;
      }
      goto L_08967D74;
    }
L_08967D74:
    ctx.gpr[2] = (24480u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(27391));
      if (branch_taken) {
          goto L_08967E38;
      }
      goto L_08967D80;
    }
L_08967D80:
    ctx.gpr[2] = (127u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_08967E38;
      }
      goto L_08967D8C;
    }
L_08967D8C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967DA0;
      }
      goto L_08967D94;
    }
L_08967D94:
    ctx.gpr[2] = (18510u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08967E38;
      }
      goto L_08967DA0;
    }
L_08967DA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 32767u);
      if (branch_taken) {
          goto L_08967E38;
      }
      goto L_08967DA8;
    }
L_08967DA8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967DBC;
      }
      goto L_08967DB0;
    }
L_08967DB0:
    ctx.gpr[2] = (57826u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7681));
      if (branch_taken) {
          goto L_08967E38;
      }
      goto L_08967DBC;
    }
L_08967DBC:
    ctx.gpr[2] = (32639u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_08967E38;
      }
      goto L_08967DC8;
    }
L_08967DC8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967DDC;
      }
      goto L_08967DD0;
    }
L_08967DD0:
    ctx.gpr[2] = (65535u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_08967E38;
      }
      goto L_08967DDC;
    }
L_08967DDC:
    ctx.gpr[2] = (32639u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_08967E38;
      }
      goto L_08967DE8;
    }
L_08967DE8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967DFC;
      }
      goto L_08967DF0;
    }
L_08967DF0:
    ctx.gpr[2] = (65281u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08967E38;
      }
      goto L_08967DFC;
    }
L_08967DFC:
    ctx.gpr[2] = (32512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_08967E38;
      }
      goto L_08967E08;
    }
L_08967E08:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967E1C;
      }
      goto L_08967E10;
    }
L_08967E10:
    ctx.gpr[2] = (256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08967E38;
      }
      goto L_08967E1C;
    }
L_08967E1C:
    ctx.gpr[2] = (127u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_08967E38;
      }
      goto L_08967E28;
    }
L_08967E28:
    ctx.gpr[2] = (32512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_08967E38;
      }
      goto L_08967E34;
    }
L_08967E34:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_08967E38;
L_08967E38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967E40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08967E4C;
L_08967E4C:
    ctx.gpr[8] = (ctx.gpr[2] << 6u);
    ctx.gpr[9] = (ctx.gpr[2] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[2] < static_cast<std::uint32_t>(75) ? 1u : 0u);
      if (branch_taken) {
          goto L_08967E80;
      }
      goto L_08967E70;
    }
L_08967E70:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967E80;
      }
      goto L_08967E78;
    }
L_08967E78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08967E4C;
      }
      goto L_08967E80;
    }
L_08967E80:
    ctx.gpr[8] = (ctx.gpr[2] < static_cast<std::uint32_t>(75) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967F28;
      }
      goto L_08967E8C;
    }
L_08967E8C:
    ctx.gpr[8] = (ctx.gpr[2] << 6u);
    ctx.gpr[9] = (ctx.gpr[2] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x08967F20u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089670A8;
L_08967F20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967F2C;
      }
      goto L_08967F28;
    }
L_08967F28:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08967F2C;
L_08967F2C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967F38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08967F44;
L_08967F44:
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[6] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(75) ? 1u : 0u);
      if (branch_taken) {
          goto L_08967F78;
      }
      goto L_08967F68;
    }
L_08967F68:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967F78;
      }
      goto L_08967F70;
    }
L_08967F70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08967F44;
      }
      goto L_08967F78;
    }
L_08967F78:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(75) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 3u, 0x0896802Cu>(ctx, &aot_mem); return;
      }
      goto L_08967F84;
    }
L_08967F84:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[2] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.pc = 0x08968000u; return;
}

void recomp_unit_0088(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0088_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_88(Runtime &runtime) {
    runtime.register_generated_unit(88u, 0x08964000u, 16384u, &recomp_unit_0088, &recomp_unit_0088_entry);
    runtime.register_function(0x08964004u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964014u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964024u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896403Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896408Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964094u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896409Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089640B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089640C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089640D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089640E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089640E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089640FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964118u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964130u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964138u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089641BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089641D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089641E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089641F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964200u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964204u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964218u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964238u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964244u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964250u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964260u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896426Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964280u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896428Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896429Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964308u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964310u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964314u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896432Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964350u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896435Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964368u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964378u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964388u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964398u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964414u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964420u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896442Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896443Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896444Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964460u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964474u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896447Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896448Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964494u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964498u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896450Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964520u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964534u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964568u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964574u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896457Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964584u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964594u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896459Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964608u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964620u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964624u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964638u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964658u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964678u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964680u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964704u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896470Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964714u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896471Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964724u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896475Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964790u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964800u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964808u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964810u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964818u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964820u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964858u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964894u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089648A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089648B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089648BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089648C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089648D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089648F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964908u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964910u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964918u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964920u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964928u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964960u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964994u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089649A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089649B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089649BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089649C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089649D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089649F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A58u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964AA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964AA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964ABCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964ACCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964AD8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964BA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964BB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964BBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964BC4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964BD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964BE8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964BFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CD0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CE8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EC4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964ED0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964FBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964FDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964FF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965010u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896501Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965040u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965048u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896504Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896505Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965068u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965070u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965078u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965084u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965088u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965098u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965104u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896510Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965114u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896511Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965128u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965130u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965138u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965140u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896514Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965154u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896515Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965168u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965174u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896517Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965184u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965190u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896519Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965200u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896520Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965214u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896521Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965228u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965234u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896523Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965244u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896524Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965258u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965260u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965268u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965270u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896527Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965284u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896528Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965298u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965300u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965308u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965314u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896531Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965324u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965330u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965340u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896540Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965418u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965438u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896544Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965488u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965494u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965504u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896550Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965510u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965518u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965528u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965534u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965540u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965548u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965550u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896555Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965564u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965568u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896557Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965584u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965598u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965608u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965620u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965650u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965658u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965688u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965690u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965704u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965740u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965750u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965778u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965788u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965790u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965798u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965808u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965814u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965838u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896584Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965858u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896586Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965878u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965890u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965904u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896590Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896591Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965938u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965940u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965944u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896595Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965964u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965968u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965974u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896597Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965980u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965990u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896599Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A58u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965ABCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AD0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965BA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965BA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965BB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965BB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965BBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CC0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CCCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CD8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CE8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CF4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DC4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965EC4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965ED8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965EF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F58u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FB4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FC0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896606Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966078u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966094u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896611Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966140u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896614Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966160u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966174u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896617Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966194u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966224u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896622Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966240u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966248u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896624Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966258u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966260u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966268u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966270u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966274u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966280u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966288u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896628Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966294u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896629Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966310u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896631Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966328u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896632Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896633Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966344u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896636Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966374u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896637Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896639Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966430u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966448u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966470u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966488u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966490u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966528u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966554u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966560u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966564u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966574u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896657Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966588u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896658Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896659Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896660Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966614u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966624u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966644u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966650u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966658u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966660u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966690u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966698u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966704u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896670Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966720u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896672Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966744u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966760u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896677Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966794u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896679Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966848u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966890u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089668B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089668C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089668D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089668F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966918u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896693Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896694Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896695Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896697Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966980u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966998u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966BACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966BBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966BC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966BD0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966BE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966BF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966CACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966CC0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966CD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966CE8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966CFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966DB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966DC4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966DD8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966DECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966EA0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966EB4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966EC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966EDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966EF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FCCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FF4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967008u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896701Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967030u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967044u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967058u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896706Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967080u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967094u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896709Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089670A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089670D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089670ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967100u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967108u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967114u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967144u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896714Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967154u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896715Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896719Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967228u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967238u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967254u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967288u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967294u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896729Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896730Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967314u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896731Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967338u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967360u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967374u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967380u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967418u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967440u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967480u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967500u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896752Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896754Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967554u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896755Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967570u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967588u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967638u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967640u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967678u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967688u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967694u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896769Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967738u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967784u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896779Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967800u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967840u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967860u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896789Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089678C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089678D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089678F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967900u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967910u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896791Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967928u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896792Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BB4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DA0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DD0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DE8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F84u, &recomp_unit_0088, "recomp_unit_0088");
}
} // namespace psprecomp
