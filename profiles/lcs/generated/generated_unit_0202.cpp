#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0202[4092] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 5, 0, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9,
    0, 10, 0, 11, 0, 12, 0, 13, 14, 0, 15, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 18, 19, 0, 0, 0, 0, 0, 0, 20, 21,
    22, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 37, 0, 38, 0, 0,
    39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 57, 58, 59, 0, 60, 0, 61, 0, 62, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 70, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 81, 82, 0, 83, 0,
    84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 97, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0,
    0, 113, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0,
    122, 0, 0, 0, 123, 0, 0, 124, 0, 125, 126, 0, 127, 0, 128, 0, 0, 129, 0, 130, 131, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0,
    135, 0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 145,
    0, 0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 155, 156,
    0, 0, 157, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 161, 162, 0, 0, 0, 0, 163, 164, 165, 0, 0, 0, 166, 0, 167,
    0, 0, 168, 169, 0, 0, 170, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0,
    0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0,
    0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 189, 190, 0, 0, 191, 0, 0,
    192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0,
    200, 201, 0, 202, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 213, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 233, 0, 234, 0, 235, 0, 0, 236, 237, 0, 238, 0, 0,
    239, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 250, 0, 0,
    0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 255, 0, 0, 0, 256,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 272, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 277, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0,
    0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295,
    0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 300, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0,
    0, 305, 306, 0, 307, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0,
    0, 0, 313, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0,
    0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 327, 0, 0, 0,
    328, 0, 0, 0, 329, 0, 0, 0, 330, 331, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336,
    0, 0, 0, 0, 337, 0, 0, 338, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 346, 0,
    0, 0, 0, 347, 348, 0, 0, 0, 349, 0, 350, 0, 0, 351, 0, 352, 0, 353, 0, 354, 0, 0, 0, 355, 356, 0, 0, 357, 0, 0, 358, 0,
    0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 362, 0, 0, 363, 0, 0, 364, 365, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0,
    0, 368, 369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 373, 374, 375, 0, 0, 0, 0, 376, 377, 0, 0, 0, 378, 0, 379, 380, 0,
    381, 0, 382, 0, 383, 0, 0, 0, 0, 384, 385, 0, 0, 0, 386, 0, 0, 0, 0, 387, 388, 0, 0, 0, 389, 390, 391, 0, 392, 0, 393, 0,
    394, 0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 400, 0, 401, 0, 402, 0, 403, 404, 0, 405, 0, 406, 0, 407, 408, 409, 0, 410, 0, 411, 0,
    412, 0, 413, 0, 414, 0, 0, 415, 0, 416, 417, 0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0, 423, 424, 425, 0, 426, 0, 427, 428, 429, 0,
    430, 431, 432, 0, 433, 434, 435, 0, 436, 437, 438, 0, 439, 0, 440, 0, 441, 442, 443, 0, 444, 0, 445, 0, 0, 0, 446, 447, 0, 0, 448, 0,
    0, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 453, 0, 454, 0, 455, 0, 0, 456, 0, 457, 0, 458, 0, 459, 460, 461, 0, 462,
    463, 0, 464, 0, 465, 0, 466, 0, 467, 0, 468, 0, 469, 470, 471, 0, 472, 0, 473, 0, 474, 0, 475, 0, 476, 0, 477, 0, 478, 0, 479, 480,
    481, 0, 482, 0, 483, 0, 484, 485, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 493, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0,
    0, 0, 496, 0, 0, 497, 498, 499, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0,
    0, 0, 0, 0, 0, 0, 0, 504, 505, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0,
    508, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0,
    0, 0, 0, 513, 514, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 517, 0,
    0, 0, 0, 0, 0, 0, 0, 518, 519, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0,
    0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 524, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0,
    0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0,
    0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 534,
    0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0,
    0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 543,
    0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 551, 0, 552, 0, 553, 0, 554, 0, 555, 0, 556, 0, 557, 558, 559, 0, 560, 0, 561, 0, 562, 0,
    563, 0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 0, 570, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 0, 0, 0, 0, 0, 0,
    0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0,
    0, 581, 0, 0, 582, 583, 0, 584, 585, 0, 0, 0, 586, 0, 587, 588, 0, 589, 590, 0, 591, 0, 592, 0, 593, 0, 0, 594, 0, 595, 0, 596,
    0, 597, 0, 0, 598, 599, 0, 600, 0, 0, 601, 602, 0, 0, 603, 0, 0, 604, 0, 0, 605, 606, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0,
    0, 612, 613, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 616, 0, 0, 0, 617, 0, 618, 619, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0,
    625, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0,
    0, 0, 633, 0, 0, 634, 0, 635, 0, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 640, 0, 0,
    0, 0, 641, 0, 0, 0, 0, 642, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0,
    0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 650, 651, 0, 0, 652, 0, 0, 0, 653, 654, 0, 0, 0, 0, 0, 655, 656, 657, 0, 0, 0,
    0, 658, 0, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664,
    0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 667, 668, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 672, 0,
    673, 0, 0, 0, 674, 0, 675, 0, 0, 0, 676, 0, 0, 677, 0, 678, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 680, 0, 0, 0, 0, 681,
    0, 0, 0, 0, 0, 682, 0, 0, 0, 683, 684, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 688, 689, 0, 0, 690, 0,
    0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 0, 0, 0, 697, 0, 0, 698, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 700,
    0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0,
    0, 0, 0, 707, 708, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 711, 0, 712, 0, 0, 0, 713, 0, 0, 0, 0, 0,
    714, 0, 0, 715, 0, 0, 0, 716, 717, 0, 0, 0, 718, 0, 719, 0, 720, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 722, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 723, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0,
    728, 729, 0, 730, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0,
    0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 742, 0, 0,
    743, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 749, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0,
    751, 752, 0, 0, 0, 0, 753, 0, 0, 754, 0, 755, 0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 758, 0, 759, 0, 0, 760, 0, 0, 0, 761,
    0, 762, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0,
    766, 0, 0, 0, 767, 0, 0, 768, 0, 0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 771, 772, 773, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0,
    775, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 782,
    0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0,
    0, 787, 0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 0, 792, 0, 0, 793, 0, 0, 0, 794, 0, 0, 0, 0,
    0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 797, 0, 0, 798, 0, 0, 799, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 804, 0, 0, 805, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807,
};
void recomp_unit_0202_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B2C000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0202[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B2C000;
    case 2u: goto L_08B2C078;
    case 3u: goto L_08B2C0D4;
    case 4u: goto L_08B2C0D8;
    case 5u: goto L_08B2C0E0;
    case 6u: goto L_08B2C0EC;
    case 7u: goto L_08B2C124;
    case 8u: goto L_08B2C138;
    case 9u: goto L_08B2C17C;
    case 10u: goto L_08B2C184;
    case 11u: goto L_08B2C18C;
    case 12u: goto L_08B2C194;
    case 13u: goto L_08B2C19C;
    case 14u: goto L_08B2C1A0;
    case 15u: goto L_08B2C1A8;
    case 16u: goto L_08B2C1B4;
    case 17u: goto L_08B2C1BC;
    case 18u: goto L_08B2C1D8;
    case 19u: goto L_08B2C1DC;
    case 20u: goto L_08B2C1F8;
    case 21u: goto L_08B2C1FC;
    case 22u: goto L_08B2C200;
    case 23u: goto L_08B2C208;
    case 24u: goto L_08B2C210;
    case 25u: goto L_08B2C218;
    case 26u: goto L_08B2C234;
    case 27u: goto L_08B2C244;
    case 28u: goto L_08B2C254;
    case 29u: goto L_08B2C278;
    case 30u: goto L_08B2C28C;
    case 31u: goto L_08B2C294;
    case 32u: goto L_08B2C2A4;
    case 33u: goto L_08B2C2B0;
    case 34u: goto L_08B2C2BC;
    case 35u: goto L_08B2C2CC;
    case 36u: goto L_08B2C2E8;
    case 37u: goto L_08B2C2EC;
    case 38u: goto L_08B2C2F4;
    case 39u: goto L_08B2C300;
    case 40u: goto L_08B2C308;
    case 41u: goto L_08B2C310;
    case 42u: goto L_08B2C318;
    case 43u: goto L_08B2C320;
    case 44u: goto L_08B2C344;
    case 45u: goto L_08B2C34C;
    case 46u: goto L_08B2C368;
    case 47u: goto L_08B2C370;
    case 48u: goto L_08B2C390;
    case 49u: goto L_08B2C398;
    case 50u: goto L_08B2C3A4;
    case 51u: goto L_08B2C3B0;
    case 52u: goto L_08B2C3C8;
    case 53u: goto L_08B2C3D0;
    case 54u: goto L_08B2C3D8;
    case 55u: goto L_08B2C3E4;
    case 56u: goto L_08B2C3F0;
    case 57u: goto L_08B2C410;
    case 58u: goto L_08B2C414;
    case 59u: goto L_08B2C418;
    case 60u: goto L_08B2C420;
    case 61u: goto L_08B2C428;
    case 62u: goto L_08B2C430;
    case 63u: goto L_08B2C434;
    case 64u: goto L_08B2C43C;
    case 65u: goto L_08B2C444;
    case 66u: goto L_08B2C44C;
    case 67u: goto L_08B2C454;
    case 68u: goto L_08B2C45C;
    case 69u: goto L_08B2C464;
    case 70u: goto L_08B2C468;
    case 71u: goto L_08B2C478;
    case 72u: goto L_08B2C498;
    case 73u: goto L_08B2C4B0;
    case 74u: goto L_08B2C4C8;
    case 75u: goto L_08B2C4EC;
    case 76u: goto L_08B2C50C;
    case 77u: goto L_08B2C520;
    case 78u: goto L_08B2C534;
    case 79u: goto L_08B2C548;
    case 80u: goto L_08B2C554;
    case 81u: goto L_08B2C56C;
    case 82u: goto L_08B2C570;
    case 83u: goto L_08B2C578;
    case 84u: goto L_08B2C580;
    case 85u: goto L_08B2C5B0;
    case 86u: goto L_08B2C5CC;
    case 87u: goto L_08B2C5D4;
    case 88u: goto L_08B2C5E0;
    case 89u: goto L_08B2C5F8;
    case 90u: goto L_08B2C610;
    case 91u: goto L_08B2C61C;
    case 92u: goto L_08B2C708;
    case 93u: goto L_08B2C70C;
    case 94u: goto L_08B2C734;
    case 95u: goto L_08B2C76C;
    case 96u: goto L_08B2C780;
    case 97u: goto L_08B2C79C;
    case 98u: goto L_08B2C7A0;
    case 99u: goto L_08B2C870;
    case 100u: goto L_08B2C878;
    case 101u: goto L_08B2C898;
    case 102u: goto L_08B2C8A0;
    case 103u: goto L_08B2C8D0;
    case 104u: goto L_08B2C990;
    case 105u: goto L_08B2C99C;
    case 106u: goto L_08B2C9A4;
    case 107u: goto L_08B2C9B0;
    case 108u: goto L_08B2C9BC;
    case 109u: goto L_08B2C9D0;
    case 110u: goto L_08B2C9DC;
    case 111u: goto L_08B2C9EC;
    case 112u: goto L_08B2C9F8;
    case 113u: goto L_08B2CA04;
    case 114u: goto L_08B2CA08;
    case 115u: goto L_08B2CA18;
    case 116u: goto L_08B2CA28;
    case 117u: goto L_08B2CA38;
    case 118u: goto L_08B2CA44;
    case 119u: goto L_08B2CA50;
    case 120u: goto L_08B2CA60;
    case 121u: goto L_08B2CA70;
    case 122u: goto L_08B2CA80;
    case 123u: goto L_08B2CA90;
    case 124u: goto L_08B2CA9C;
    case 125u: goto L_08B2CAA4;
    case 126u: goto L_08B2CAA8;
    case 127u: goto L_08B2CAB0;
    case 128u: goto L_08B2CAB8;
    case 129u: goto L_08B2CAC4;
    case 130u: goto L_08B2CACC;
    case 131u: goto L_08B2CAD0;
    case 132u: goto L_08B2CAD4;
    case 133u: goto L_08B2CAE0;
    case 134u: goto L_08B2CAF4;
    case 135u: goto L_08B2CB00;
    case 136u: goto L_08B2CB08;
    case 137u: goto L_08B2CB14;
    case 138u: goto L_08B2CB1C;
    case 139u: goto L_08B2CB28;
    case 140u: goto L_08B2CB38;
    case 141u: goto L_08B2CB4C;
    case 142u: goto L_08B2CB5C;
    case 143u: goto L_08B2CB6C;
    case 144u: goto L_08B2CB74;
    case 145u: goto L_08B2CB7C;
    case 146u: goto L_08B2CB88;
    case 147u: goto L_08B2CB90;
    case 148u: goto L_08B2CB9C;
    case 149u: goto L_08B2CBB4;
    case 150u: goto L_08B2CBBC;
    case 151u: goto L_08B2CBC4;
    case 152u: goto L_08B2CBD4;
    case 153u: goto L_08B2CBDC;
    case 154u: goto L_08B2CBEC;
    case 155u: goto L_08B2CBF8;
    case 156u: goto L_08B2CBFC;
    case 157u: goto L_08B2CC08;
    case 158u: goto L_08B2CC10;
    case 159u: goto L_08B2CC20;
    case 160u: goto L_08B2CC2C;
    case 161u: goto L_08B2CC44;
    case 162u: goto L_08B2CC48;
    case 163u: goto L_08B2CC5C;
    case 164u: goto L_08B2CC60;
    case 165u: goto L_08B2CC64;
    case 166u: goto L_08B2CC74;
    case 167u: goto L_08B2CC7C;
    case 168u: goto L_08B2CC88;
    case 169u: goto L_08B2CC8C;
    case 170u: goto L_08B2CC98;
    case 171u: goto L_08B2CC9C;
    case 172u: goto L_08B2CCC8;
    case 173u: goto L_08B2CCDC;
    case 174u: goto L_08B2CCEC;
    case 175u: goto L_08B2CD04;
    case 176u: goto L_08B2CD2C;
    case 177u: goto L_08B2CD38;
    case 178u: goto L_08B2CD40;
    case 179u: goto L_08B2CD44;
    case 180u: goto L_08B2CD54;
    case 181u: goto L_08B2CD64;
    case 182u: goto L_08B2CD74;
    case 183u: goto L_08B2CD84;
    case 184u: goto L_08B2CD94;
    case 185u: goto L_08B2CDA4;
    case 186u: goto L_08B2CDB4;
    case 187u: goto L_08B2CDC4;
    case 188u: goto L_08B2CDD8;
    case 189u: goto L_08B2CDE4;
    case 190u: goto L_08B2CDE8;
    case 191u: goto L_08B2CDF4;
    case 192u: goto L_08B2CE00;
    case 193u: goto L_08B2CE18;
    case 194u: goto L_08B2CE2C;
    case 195u: goto L_08B2CE4C;
    case 196u: goto L_08B2CE54;
    case 197u: goto L_08B2CE5C;
    case 198u: goto L_08B2CE68;
    case 199u: goto L_08B2CE74;
    case 200u: goto L_08B2CE80;
    case 201u: goto L_08B2CE84;
    case 202u: goto L_08B2CE8C;
    case 203u: goto L_08B2CE90;
    case 204u: goto L_08B2CEAC;
    case 205u: goto L_08B2CEBC;
    case 206u: goto L_08B2CEE4;
    case 207u: goto L_08B2CF00;
    case 208u: goto L_08B2CF14;
    case 209u: goto L_08B2CF2C;
    case 210u: goto L_08B2CF40;
    case 211u: goto L_08B2CF58;
    case 212u: goto L_08B2CF6C;
    case 213u: goto L_08B2CF78;
    case 214u: goto L_08B2CF94;
    case 215u: goto L_08B2CFB8;
    case 216u: goto L_08B2CFBC;
    case 217u: goto L_08B2CFE0;
    case 218u: goto L_08B2D00C;
    case 219u: goto L_08B2D024;
    case 220u: goto L_08B2D06C;
    case 221u: goto L_08B2D094;
    case 222u: goto L_08B2D0A8;
    case 223u: goto L_08B2D0C0;
    case 224u: goto L_08B2D0C8;
    case 225u: goto L_08B2D0D8;
    case 226u: goto L_08B2D0E0;
    case 227u: goto L_08B2D0F0;
    case 228u: goto L_08B2D100;
    case 229u: goto L_08B2D11C;
    case 230u: goto L_08B2D12C;
    case 231u: goto L_08B2D138;
    case 232u: goto L_08B2D144;
    case 233u: goto L_08B2D14C;
    case 234u: goto L_08B2D154;
    case 235u: goto L_08B2D15C;
    case 236u: goto L_08B2D168;
    case 237u: goto L_08B2D16C;
    case 238u: goto L_08B2D174;
    case 239u: goto L_08B2D180;
    case 240u: goto L_08B2D18C;
    case 241u: goto L_08B2D198;
    case 242u: goto L_08B2D1A0;
    case 243u: goto L_08B2D1C4;
    case 244u: goto L_08B2D1E8;
    case 245u: goto L_08B2D21C;
    case 246u: goto L_08B2D23C;
    case 247u: goto L_08B2D240;
    case 248u: goto L_08B2D268;
    case 249u: goto L_08B2D270;
    case 250u: goto L_08B2D274;
    case 251u: goto L_08B2D294;
    case 252u: goto L_08B2D2C0;
    case 253u: goto L_08B2D2D4;
    case 254u: goto L_08B2D2E8;
    case 255u: goto L_08B2D2EC;
    case 256u: goto L_08B2D2FC;
    case 257u: goto L_08B2D310;
    case 258u: goto L_08B2D330;
    case 259u: goto L_08B2D390;
    case 260u: goto L_08B2D398;
    case 261u: goto L_08B2D3A0;
    case 262u: goto L_08B2D3A8;
    case 263u: goto L_08B2D3B0;
    case 264u: goto L_08B2D3B8;
    case 265u: goto L_08B2D3C8;
    case 266u: goto L_08B2D3D4;
    case 267u: goto L_08B2D3E0;
    case 268u: goto L_08B2D3EC;
    case 269u: goto L_08B2D3F8;
    case 270u: goto L_08B2D410;
    case 271u: goto L_08B2D424;
    case 272u: goto L_08B2D430;
    case 273u: goto L_08B2D438;
    case 274u: goto L_08B2D44C;
    case 275u: goto L_08B2D464;
    case 276u: goto L_08B2D474;
    case 277u: goto L_08B2D478;
    case 278u: goto L_08B2D4A0;
    case 279u: goto L_08B2D4B0;
    case 280u: goto L_08B2D4D4;
    case 281u: goto L_08B2D4F8;
    case 282u: goto L_08B2D51C;
    case 283u: goto L_08B2D524;
    case 284u: goto L_08B2D52C;
    case 285u: goto L_08B2D554;
    case 286u: goto L_08B2D568;
    case 287u: goto L_08B2D57C;
    case 288u: goto L_08B2D5AC;
    case 289u: goto L_08B2D5D8;
    case 290u: goto L_08B2D5F4;
    case 291u: goto L_08B2D60C;
    case 292u: goto L_08B2D630;
    case 293u: goto L_08B2D640;
    case 294u: goto L_08B2D658;
    case 295u: goto L_08B2D67C;
    case 296u: goto L_08B2D68C;
    case 297u: goto L_08B2D6A8;
    case 298u: goto L_08B2D6D0;
    case 299u: goto L_08B2D6F0;
    case 300u: goto L_08B2D6F4;
    case 301u: goto L_08B2D708;
    case 302u: goto L_08B2D728;
    case 303u: goto L_08B2D748;
    case 304u: goto L_08B2D764;
    case 305u: goto L_08B2D784;
    case 306u: goto L_08B2D788;
    case 307u: goto L_08B2D790;
    case 308u: goto L_08B2D7A8;
    case 309u: goto L_08B2D7B0;
    case 310u: goto L_08B2D7BC;
    case 311u: goto L_08B2D7E4;
    case 312u: goto L_08B2D7EC;
    case 313u: goto L_08B2D808;
    case 314u: goto L_08B2D80C;
    case 315u: goto L_08B2D838;
    case 316u: goto L_08B2D84C;
    case 317u: goto L_08B2D878;
    case 318u: goto L_08B2D89C;
    case 319u: goto L_08B2D8BC;
    case 320u: goto L_08B2D8D4;
    case 321u: goto L_08B2D8E8;
    case 322u: goto L_08B2D900;
    case 323u: goto L_08B2D920;
    case 324u: goto L_08B2D93C;
    case 325u: goto L_08B2D95C;
    case 326u: goto L_08B2D96C;
    case 327u: goto L_08B2D970;
    case 328u: goto L_08B2D980;
    case 329u: goto L_08B2D990;
    case 330u: goto L_08B2D9A0;
    case 331u: goto L_08B2D9A4;
    case 332u: goto L_08B2D9B0;
    case 333u: goto L_08B2D9B8;
    case 334u: goto L_08B2D9D4;
    case 335u: goto L_08B2D9DC;
    case 336u: goto L_08B2D9FC;
    case 337u: goto L_08B2DA10;
    case 338u: goto L_08B2DA1C;
    case 339u: goto L_08B2DA24;
    case 340u: goto L_08B2DA2C;
    case 341u: goto L_08B2DA58;
    case 342u: goto L_08B2DA80;
    case 343u: goto L_08B2DAA8;
    case 344u: goto L_08B2DAD8;
    case 345u: goto L_08B2DAE0;
    case 346u: goto L_08B2DAF8;
    case 347u: goto L_08B2DB0C;
    case 348u: goto L_08B2DB10;
    case 349u: goto L_08B2DB20;
    case 350u: goto L_08B2DB28;
    case 351u: goto L_08B2DB34;
    case 352u: goto L_08B2DB3C;
    case 353u: goto L_08B2DB44;
    case 354u: goto L_08B2DB4C;
    case 355u: goto L_08B2DB5C;
    case 356u: goto L_08B2DB60;
    case 357u: goto L_08B2DB6C;
    case 358u: goto L_08B2DB78;
    case 359u: goto L_08B2DB84;
    case 360u: goto L_08B2DB98;
    case 361u: goto L_08B2DBAC;
    case 362u: goto L_08B2DBB4;
    case 363u: goto L_08B2DBC0;
    case 364u: goto L_08B2DBCC;
    case 365u: goto L_08B2DBD0;
    case 366u: goto L_08B2DBD8;
    case 367u: goto L_08B2DBEC;
    case 368u: goto L_08B2DC04;
    case 369u: goto L_08B2DC08;
    case 370u: goto L_08B2DC18;
    case 371u: goto L_08B2DC24;
    case 372u: goto L_08B2DC30;
    case 373u: goto L_08B2DC3C;
    case 374u: goto L_08B2DC40;
    case 375u: goto L_08B2DC44;
    case 376u: goto L_08B2DC58;
    case 377u: goto L_08B2DC5C;
    case 378u: goto L_08B2DC6C;
    case 379u: goto L_08B2DC74;
    case 380u: goto L_08B2DC78;
    case 381u: goto L_08B2DC80;
    case 382u: goto L_08B2DC88;
    case 383u: goto L_08B2DC90;
    case 384u: goto L_08B2DCA4;
    case 385u: goto L_08B2DCA8;
    case 386u: goto L_08B2DCB8;
    case 387u: goto L_08B2DCCC;
    case 388u: goto L_08B2DCD0;
    case 389u: goto L_08B2DCE0;
    case 390u: goto L_08B2DCE4;
    case 391u: goto L_08B2DCE8;
    case 392u: goto L_08B2DCF0;
    case 393u: goto L_08B2DCF8;
    case 394u: goto L_08B2DD00;
    case 395u: goto L_08B2DD08;
    case 396u: goto L_08B2DD10;
    case 397u: goto L_08B2DD18;
    case 398u: goto L_08B2DD20;
    case 399u: goto L_08B2DD28;
    case 400u: goto L_08B2DD2C;
    case 401u: goto L_08B2DD34;
    case 402u: goto L_08B2DD3C;
    case 403u: goto L_08B2DD44;
    case 404u: goto L_08B2DD48;
    case 405u: goto L_08B2DD50;
    case 406u: goto L_08B2DD58;
    case 407u: goto L_08B2DD60;
    case 408u: goto L_08B2DD64;
    case 409u: goto L_08B2DD68;
    case 410u: goto L_08B2DD70;
    case 411u: goto L_08B2DD78;
    case 412u: goto L_08B2DD80;
    case 413u: goto L_08B2DD88;
    case 414u: goto L_08B2DD90;
    case 415u: goto L_08B2DD9C;
    case 416u: goto L_08B2DDA4;
    case 417u: goto L_08B2DDA8;
    case 418u: goto L_08B2DDB0;
    case 419u: goto L_08B2DDB8;
    case 420u: goto L_08B2DDC0;
    case 421u: goto L_08B2DDC8;
    case 422u: goto L_08B2DDD0;
    case 423u: goto L_08B2DDD8;
    case 424u: goto L_08B2DDDC;
    case 425u: goto L_08B2DDE0;
    case 426u: goto L_08B2DDE8;
    case 427u: goto L_08B2DDF0;
    case 428u: goto L_08B2DDF4;
    case 429u: goto L_08B2DDF8;
    case 430u: goto L_08B2DE00;
    case 431u: goto L_08B2DE04;
    case 432u: goto L_08B2DE08;
    case 433u: goto L_08B2DE10;
    case 434u: goto L_08B2DE14;
    case 435u: goto L_08B2DE18;
    case 436u: goto L_08B2DE20;
    case 437u: goto L_08B2DE24;
    case 438u: goto L_08B2DE28;
    case 439u: goto L_08B2DE30;
    case 440u: goto L_08B2DE38;
    case 441u: goto L_08B2DE40;
    case 442u: goto L_08B2DE44;
    case 443u: goto L_08B2DE48;
    case 444u: goto L_08B2DE50;
    case 445u: goto L_08B2DE58;
    case 446u: goto L_08B2DE68;
    case 447u: goto L_08B2DE6C;
    case 448u: goto L_08B2DE78;
    case 449u: goto L_08B2DE8C;
    case 450u: goto L_08B2DE98;
    case 451u: goto L_08B2DEA4;
    case 452u: goto L_08B2DEB0;
    case 453u: goto L_08B2DEB8;
    case 454u: goto L_08B2DEC0;
    case 455u: goto L_08B2DEC8;
    case 456u: goto L_08B2DED4;
    case 457u: goto L_08B2DEDC;
    case 458u: goto L_08B2DEE4;
    case 459u: goto L_08B2DEEC;
    case 460u: goto L_08B2DEF0;
    case 461u: goto L_08B2DEF4;
    case 462u: goto L_08B2DEFC;
    case 463u: goto L_08B2DF00;
    case 464u: goto L_08B2DF08;
    case 465u: goto L_08B2DF10;
    case 466u: goto L_08B2DF18;
    case 467u: goto L_08B2DF20;
    case 468u: goto L_08B2DF28;
    case 469u: goto L_08B2DF30;
    case 470u: goto L_08B2DF34;
    case 471u: goto L_08B2DF38;
    case 472u: goto L_08B2DF40;
    case 473u: goto L_08B2DF48;
    case 474u: goto L_08B2DF50;
    case 475u: goto L_08B2DF58;
    case 476u: goto L_08B2DF60;
    case 477u: goto L_08B2DF68;
    case 478u: goto L_08B2DF70;
    case 479u: goto L_08B2DF78;
    case 480u: goto L_08B2DF7C;
    case 481u: goto L_08B2DF80;
    case 482u: goto L_08B2DF88;
    case 483u: goto L_08B2DF90;
    case 484u: goto L_08B2DF98;
    case 485u: goto L_08B2DF9C;
    case 486u: goto L_08B2DFA0;
    case 487u: goto L_08B2DFA8;
    case 488u: goto L_08B2DFB0;
    case 489u: goto L_08B2DFB8;
    case 490u: goto L_08B2DFC0;
    case 491u: goto L_08B2DFC8;
    case 492u: goto L_08B2DFD0;
    case 493u: goto L_08B2DFD4;
    case 494u: goto L_08B2DFD8;
    case 495u: goto L_08B2DFF4;
    case 496u: goto L_08B2E008;
    case 497u: goto L_08B2E014;
    case 498u: goto L_08B2E018;
    case 499u: goto L_08B2E01C;
    case 500u: goto L_08B2E02C;
    case 501u: goto L_08B2E034;
    case 502u: goto L_08B2E054;
    case 503u: goto L_08B2E078;
    case 504u: goto L_08B2E09C;
    case 505u: goto L_08B2E0A0;
    case 506u: goto L_08B2E0C0;
    case 507u: goto L_08B2E0E0;
    case 508u: goto L_08B2E100;
    case 509u: goto L_08B2E124;
    case 510u: goto L_08B2E148;
    case 511u: goto L_08B2E150;
    case 512u: goto L_08B2E16C;
    case 513u: goto L_08B2E18C;
    case 514u: goto L_08B2E190;
    case 515u: goto L_08B2E1B4;
    case 516u: goto L_08B2E1D8;
    case 517u: goto L_08B2E1F8;
    case 518u: goto L_08B2E21C;
    case 519u: goto L_08B2E220;
    case 520u: goto L_08B2E240;
    case 521u: goto L_08B2E264;
    case 522u: goto L_08B2E288;
    case 523u: goto L_08B2E2A4;
    case 524u: goto L_08B2E2C4;
    case 525u: goto L_08B2E2C8;
    case 526u: goto L_08B2E2E8;
    case 527u: goto L_08B2E30C;
    case 528u: goto L_08B2E32C;
    case 529u: goto L_08B2E350;
    case 530u: goto L_08B2E374;
    case 531u: goto L_08B2E398;
    case 532u: goto L_08B2E3B8;
    case 533u: goto L_08B2E3D8;
    case 534u: goto L_08B2E3FC;
    case 535u: goto L_08B2E418;
    case 536u: goto L_08B2E434;
    case 537u: goto L_08B2E454;
    case 538u: goto L_08B2E470;
    case 539u: goto L_08B2E490;
    case 540u: goto L_08B2E49C;
    case 541u: goto L_08B2E4B4;
    case 542u: goto L_08B2E4D8;
    case 543u: goto L_08B2E4FC;
    case 544u: goto L_08B2E520;
    case 545u: goto L_08B2E53C;
    case 546u: goto L_08B2E550;
    case 547u: goto L_08B2E558;
    case 548u: goto L_08B2E564;
    case 549u: goto L_08B2E598;
    case 550u: goto L_08B2E5A0;
    case 551u: goto L_08B2E5A8;
    case 552u: goto L_08B2E5B0;
    case 553u: goto L_08B2E5B8;
    case 554u: goto L_08B2E5C0;
    case 555u: goto L_08B2E5C8;
    case 556u: goto L_08B2E5D0;
    case 557u: goto L_08B2E5D8;
    case 558u: goto L_08B2E5DC;
    case 559u: goto L_08B2E5E0;
    case 560u: goto L_08B2E5E8;
    case 561u: goto L_08B2E5F0;
    case 562u: goto L_08B2E5F8;
    case 563u: goto L_08B2E600;
    case 564u: goto L_08B2E608;
    case 565u: goto L_08B2E610;
    case 566u: goto L_08B2E618;
    case 567u: goto L_08B2E620;
    case 568u: goto L_08B2E628;
    case 569u: goto L_08B2E630;
    case 570u: goto L_08B2E638;
    case 571u: goto L_08B2E640;
    case 572u: goto L_08B2E648;
    case 573u: goto L_08B2E650;
    case 574u: goto L_08B2E658;
    case 575u: goto L_08B2E660;
    case 576u: goto L_08B2E684;
    case 577u: goto L_08B2E68C;
    case 578u: goto L_08B2E6A8;
    case 579u: goto L_08B2E6C8;
    case 580u: goto L_08B2E6EC;
    case 581u: goto L_08B2E704;
    case 582u: goto L_08B2E710;
    case 583u: goto L_08B2E714;
    case 584u: goto L_08B2E71C;
    case 585u: goto L_08B2E720;
    case 586u: goto L_08B2E730;
    case 587u: goto L_08B2E738;
    case 588u: goto L_08B2E73C;
    case 589u: goto L_08B2E744;
    case 590u: goto L_08B2E748;
    case 591u: goto L_08B2E750;
    case 592u: goto L_08B2E758;
    case 593u: goto L_08B2E760;
    case 594u: goto L_08B2E76C;
    case 595u: goto L_08B2E774;
    case 596u: goto L_08B2E77C;
    case 597u: goto L_08B2E784;
    case 598u: goto L_08B2E790;
    case 599u: goto L_08B2E794;
    case 600u: goto L_08B2E79C;
    case 601u: goto L_08B2E7A8;
    case 602u: goto L_08B2E7AC;
    case 603u: goto L_08B2E7B8;
    case 604u: goto L_08B2E7C4;
    case 605u: goto L_08B2E7D0;
    case 606u: goto L_08B2E7D4;
    case 607u: goto L_08B2E7DC;
    case 608u: goto L_08B2E7F4;
    case 609u: goto L_08B2E858;
    case 610u: goto L_08B2E868;
    case 611u: goto L_08B2E878;
    case 612u: goto L_08B2E884;
    case 613u: goto L_08B2E888;
    case 614u: goto L_08B2E890;
    case 615u: goto L_08B2E8BC;
    case 616u: goto L_08B2E8C0;
    case 617u: goto L_08B2E8D0;
    case 618u: goto L_08B2E8D8;
    case 619u: goto L_08B2E8DC;
    case 620u: goto L_08B2E94C;
    case 621u: goto L_08B2EA48;
    case 622u: goto L_08B2EAD4;
    case 623u: goto L_08B2EAF8;
    case 624u: goto L_08B2EB78;
    case 625u: goto L_08B2EB80;
    case 626u: goto L_08B2EB8C;
    case 627u: goto L_08B2EBA0;
    case 628u: goto L_08B2EBAC;
    case 629u: goto L_08B2EBB8;
    case 630u: goto L_08B2EBC4;
    case 631u: goto L_08B2EBE0;
    case 632u: goto L_08B2EBF0;
    case 633u: goto L_08B2EC08;
    case 634u: goto L_08B2EC14;
    case 635u: goto L_08B2EC1C;
    case 636u: goto L_08B2EC30;
    case 637u: goto L_08B2EC44;
    case 638u: goto L_08B2EC58;
    case 639u: goto L_08B2EC68;
    case 640u: goto L_08B2EC74;
    case 641u: goto L_08B2EC88;
    case 642u: goto L_08B2EC9C;
    case 643u: goto L_08B2ECB0;
    case 644u: goto L_08B2ECBC;
    case 645u: goto L_08B2ECD4;
    case 646u: goto L_08B2ECEC;
    case 647u: goto L_08B2ECF8;
    case 648u: goto L_08B2ED0C;
    case 649u: goto L_08B2ED1C;
    case 650u: goto L_08B2ED2C;
    case 651u: goto L_08B2ED30;
    case 652u: goto L_08B2ED3C;
    case 653u: goto L_08B2ED4C;
    case 654u: goto L_08B2ED50;
    case 655u: goto L_08B2ED68;
    case 656u: goto L_08B2ED6C;
    case 657u: goto L_08B2ED70;
    case 658u: goto L_08B2ED84;
    case 659u: goto L_08B2ED9C;
    case 660u: goto L_08B2EDAC;
    case 661u: goto L_08B2EDBC;
    case 662u: goto L_08B2EDD4;
    case 663u: goto L_08B2EDE4;
    case 664u: goto L_08B2EDFC;
    case 665u: goto L_08B2EE0C;
    case 666u: goto L_08B2EE18;
    case 667u: goto L_08B2EE28;
    case 668u: goto L_08B2EE2C;
    case 669u: goto L_08B2EE3C;
    case 670u: goto L_08B2EE58;
    case 671u: goto L_08B2EE6C;
    case 672u: goto L_08B2EE78;
    case 673u: goto L_08B2EE80;
    case 674u: goto L_08B2EE90;
    case 675u: goto L_08B2EE98;
    case 676u: goto L_08B2EEA8;
    case 677u: goto L_08B2EEB4;
    case 678u: goto L_08B2EEBC;
    case 679u: goto L_08B2EEDC;
    case 680u: goto L_08B2EEE8;
    case 681u: goto L_08B2EEFC;
    case 682u: goto L_08B2EF14;
    case 683u: goto L_08B2EF24;
    case 684u: goto L_08B2EF28;
    case 685u: goto L_08B2EF34;
    case 686u: goto L_08B2EF48;
    case 687u: goto L_08B2EF58;
    case 688u: goto L_08B2EF68;
    case 689u: goto L_08B2EF6C;
    case 690u: goto L_08B2EF78;
    case 691u: goto L_08B2EF84;
    case 692u: goto L_08B2EFA0;
    case 693u: goto L_08B2EFC8;
    case 694u: goto L_08B2EFE8;
    case 695u: goto L_08B2F01C;
    case 696u: goto L_08B2F028;
    case 697u: goto L_08B2F044;
    case 698u: goto L_08B2F050;
    case 699u: goto L_08B2F06C;
    case 700u: goto L_08B2F07C;
    case 701u: goto L_08B2F090;
    case 702u: goto L_08B2F0AC;
    case 703u: goto L_08B2F0C4;
    case 704u: goto L_08B2F0D4;
    case 705u: goto L_08B2F0E0;
    case 706u: goto L_08B2F0E8;
    case 707u: goto L_08B2F10C;
    case 708u: goto L_08B2F110;
    case 709u: goto L_08B2F120;
    case 710u: goto L_08B2F130;
    case 711u: goto L_08B2F150;
    case 712u: goto L_08B2F158;
    case 713u: goto L_08B2F168;
    case 714u: goto L_08B2F180;
    case 715u: goto L_08B2F18C;
    case 716u: goto L_08B2F19C;
    case 717u: goto L_08B2F1A0;
    case 718u: goto L_08B2F1B0;
    case 719u: goto L_08B2F1B8;
    case 720u: goto L_08B2F1C0;
    case 721u: goto L_08B2F1DC;
    case 722u: goto L_08B2F1F4;
    case 723u: goto L_08B2F298;
    case 724u: goto L_08B2F29C;
    case 725u: goto L_08B2F448;
    case 726u: goto L_08B2F460;
    case 727u: goto L_08B2F470;
    case 728u: goto L_08B2F480;
    case 729u: goto L_08B2F484;
    case 730u: goto L_08B2F48C;
    case 731u: goto L_08B2F4A0;
    case 732u: goto L_08B2F54C;
    case 733u: goto L_08B2F588;
    case 734u: goto L_08B2F5C8;
    case 735u: goto L_08B2F6B8;
    case 736u: goto L_08B2F6CC;
    case 737u: goto L_08B2F6D4;
    case 738u: goto L_08B2F6E8;
    case 739u: goto L_08B2F70C;
    case 740u: goto L_08B2F738;
    case 741u: goto L_08B2F870;
    case 742u: goto L_08B2F874;
    case 743u: goto L_08B2F880;
    case 744u: goto L_08B2F890;
    case 745u: goto L_08B2F8C0;
    case 746u: goto L_08B2F8D4;
    case 747u: goto L_08B2F90C;
    case 748u: goto L_08B2F940;
    case 749u: goto L_08B2F948;
    case 750u: goto L_08B2F968;
    case 751u: goto L_08B2F980;
    case 752u: goto L_08B2F984;
    case 753u: goto L_08B2F998;
    case 754u: goto L_08B2F9A4;
    case 755u: goto L_08B2F9AC;
    case 756u: goto L_08B2F9C0;
    case 757u: goto L_08B2F9C8;
    case 758u: goto L_08B2F9D8;
    case 759u: goto L_08B2F9E0;
    case 760u: goto L_08B2F9EC;
    case 761u: goto L_08B2F9FC;
    case 762u: goto L_08B2FA04;
    case 763u: goto L_08B2FA10;
    case 764u: goto L_08B2FA34;
    case 765u: goto L_08B2FA60;
    case 766u: goto L_08B2FA80;
    case 767u: goto L_08B2FA90;
    case 768u: goto L_08B2FA9C;
    case 769u: goto L_08B2FAB8;
    case 770u: goto L_08B2FAC0;
    case 771u: goto L_08B2FACC;
    case 772u: goto L_08B2FAD0;
    case 773u: goto L_08B2FAD4;
    case 774u: goto L_08B2FAEC;
    case 775u: goto L_08B2FB00;
    case 776u: goto L_08B2FB0C;
    case 777u: goto L_08B2FB2C;
    case 778u: goto L_08B2FB48;
    case 779u: goto L_08B2FBC0;
    case 780u: goto L_08B2FC34;
    case 781u: goto L_08B2FC60;
    case 782u: goto L_08B2FC7C;
    case 783u: goto L_08B2FC84;
    case 784u: goto L_08B2FCA0;
    case 785u: goto L_08B2FD50;
    case 786u: goto L_08B2FD78;
    case 787u: goto L_08B2FD84;
    case 788u: goto L_08B2FD90;
    case 789u: goto L_08B2FDA0;
    case 790u: goto L_08B2FDB0;
    case 791u: goto L_08B2FDC0;
    case 792u: goto L_08B2FDD0;
    case 793u: goto L_08B2FDDC;
    case 794u: goto L_08B2FDEC;
    case 795u: goto L_08B2FE08;
    case 796u: goto L_08B2FE40;
    case 797u: goto L_08B2FE50;
    case 798u: goto L_08B2FE5C;
    case 799u: goto L_08B2FE68;
    case 800u: goto L_08B2FE90;
    case 801u: goto L_08B2FEAC;
    case 802u: goto L_08B2FEFC;
    case 803u: goto L_08B2FF58;
    case 804u: goto L_08B2FF84;
    case 805u: goto L_08B2FF90;
    case 806u: goto L_08B2FFAC;
    case 807u: goto L_08B2FFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B2C000:
    rt.unsupported(0x08B2C004u, 0x08ABBE9Cu, "control flow in delay slot"); return;
L_08B2C078:
    rt.unsupported(0x08B2C07Cu, 0x08ABC430u, "control flow in delay slot"); return;
L_08B2C0D4:
    rt.unsupported(0x08B2C0D4u, 0x00000A79u, "special? not lowered yet"); return;
L_08B2C0D8:
    rt.unsupported(0x08B2C0DCu, 0x52205349u, "control flow in delay slot"); return;
L_08B2C0E0:
    rt.unsupported(0x08B2C0E0u, 0x49454345u, "cop2/vfpu not lowered yet"); return;
L_08B2C0EC:
    rt.unsupported(0x08B2C0ECu, 0x7373654Du, "unknown not lowered yet"); return;
L_08B2C124:
    rt.unsupported(0x08B2C124u, 0x6863616Du, "unknown not lowered yet"); return;
L_08B2C138:
    rt.unsupported(0x08B2C138u, 0x7373654Du, "unknown not lowered yet"); return;
L_08B2C17C:
    rt.unsupported(0x08B2C180u, 0x5241434Eu, "control flow in delay slot"); return;
L_08B2C184:
    rt.unsupported(0x08B2C188u, 0x00005349u, "control flow in delay slot"); return;
L_08B2C18C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2C190u, 0x49484556u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 27u, 0x08B3D6DCu>(ctx, &aot_mem); return;
    }
    goto L_08B2C194;
L_08B2C194:
    rt.unsupported(0x08B2C198u, 0x54414548u, "control flow in delay slot"); return;
L_08B2C19C:
    rt.unsupported(0x08B2C1A0u, 0x5F47534Du, "control flow in delay slot"); return;
L_08B2C1A0:
    rt.unsupported(0x08B2C1A4u, 0x5F544553u, "control flow in delay slot"); return;
L_08B2C1A8:
    rt.unsupported(0x08B2C1A8u, 0x49484556u, "cop2/vfpu not lowered yet"); return;
L_08B2C1B4:
    rt.unsupported(0x08B2C1B4u, 0x4E4F4954u, "unknown not lowered yet"); return;
L_08B2C1BC:
    rt.unsupported(0x08B2C1BCu, 0x49484556u, "cop2/vfpu not lowered yet"); return;
L_08B2C1D8:
    rt.unsupported(0x08B2C1D8u, 0x6E617254u, "vfpu3 not lowered yet"); return;
L_08B2C1DC:
    rt.unsupported(0x08B2C1DCu, 0x72656673u, "unknown not lowered yet"); return;
L_08B2C1F8:
    (void)(0u & 0u);
    goto L_08B2C1FC;
L_08B2C1FC:
    rt.unsupported(0x08B2C1FCu, 0x0064252Fu, "special? not lowered yet"); return;
L_08B2C200:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<115u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    ctx.gpr[14] = (0u | 0u);
    goto L_08B2C208;
L_08B2C208:
    ctx.gpr[26] = (ctx.gpr[9] + static_cast<std::uint32_t>(25637));
    rt.unsupported(0x08B2C20Cu, 0x00643230u, "special? not lowered yet"); return;
L_08B2C210:
    rt.unsupported(0x08B2C210u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B2C218:
    rt.unsupported(0x08B2C218u, 0x202E2E2Eu, "unknown not lowered yet"); return;
L_08B2C234:
    rt.unsupported(0x08B2C234u, 0x202E2E2Eu, "unknown not lowered yet"); return;
L_08B2C244:
    rt.unsupported(0x08B2C244u, 0x20746F6Eu, "unknown not lowered yet"); return;
L_08B2C254:
    rt.unsupported(0x08B2C254u, 0x202E2E2Eu, "unknown not lowered yet"); return;
L_08B2C278:
    rt.unsupported(0x08B2C278u, 0x202E2E2Eu, "unknown not lowered yet"); return;
L_08B2C28C:
    if (ctx.gpr[10] != ctx.gpr[17]) {
    rt.unsupported(0x08B2C290u, 0x20545345u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 28u, 0x08B3D7D8u>(ctx, &aot_mem); return;
    }
    goto L_08B2C294;
L_08B2C294:
    rt.unsupported(0x08B2C294u, 0x444E4148u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B2C298u, 0x2053454Cu, "unknown not lowered yet"); return;
L_08B2C2A4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<85u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    ctx.gpr[26] = (ctx.gpr[17] ^ 28001u);
    goto L_08B2C2B0;
L_08B2C2B0:
    rt.unsupported(0x08B2C2B0u, 0x74696157u, "unknown not lowered yet"); return;
L_08B2C2BC:
    rt.unsupported(0x08B2C2BCu, 0x20444D55u, "unknown not lowered yet"); return;
L_08B2C2CC:
    rt.unsupported(0x08B2C2CCu, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B2C2E8:
    // nop
    goto L_08B2C2EC;
L_08B2C2EC:
    if (ctx.gpr[27] == ctx.gpr[4]) {
    rt.unsupported(0x08B2C2F0u, 0x61657274u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 39u, 0x08B47844u>(ctx, &aot_mem); return;
    }
    goto L_08B2C2F4;
L_08B2C2F4:
    ctx.execute_vfpu_vscl_ct<109u, 69u, 118u, 1u>();
    ctx.execute_vfpu_vcmp_ct<116u, 70u, 1u, 14u>();
    ctx.gpr[12] = (0u + 0u);
    goto L_08B2C300;
L_08B2C300:
    if (ctx.gpr[27] == ctx.gpr[4]) {
    rt.unsupported(0x08B2C304u, 0x61657274u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 40u, 0x08B47858u>(ctx, &aot_mem); return;
    }
    goto L_08B2C308;
L_08B2C308:
    ctx.execute_vfpu_vminmax(109u, 83u, 101u, 1u, false);
    (void)(0u + 0u);
    goto L_08B2C310;
L_08B2C310:
    if (ctx.gpr[27] == ctx.gpr[4]) {
    rt.unsupported(0x08B2C314u, 0x61657274u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 41u, 0x08B47868u>(ctx, &aot_mem); return;
    }
    goto L_08B2C318;
L_08B2C318:
    rt.unsupported(0x08B2C318u, 0x7268546Du, "unknown not lowered yet"); return;
L_08B2C320:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<85u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    ctx.gpr[26] = (ctx.gpr[17] ^ 28001u);
    rt.unsupported(0x08B2C32Cu, 0x75716341u, "unknown not lowered yet"); return;
L_08B2C344:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<85u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    goto L_08B2C34C;
L_08B2C34C:
    ctx.gpr[26] = (ctx.gpr[17] ^ 28001u);
    ctx.execute_vfpu_vscl_ct<82u, 101u, 108u, 1u>();
    rt.unsupported(0x08B2C354u, 0x4C657361u, "unknown not lowered yet"); return;
L_08B2C368:
    rt.unsupported(0x08B2C368u, 0x202E2E2Eu, "unknown not lowered yet"); return;
L_08B2C370:
    rt.unsupported(0x08B2C370u, 0x636F7270u, "vfpu0 not lowered yet"); return;
L_08B2C390:
    if (ctx.gpr[25] != 0u) {
    rt.unsupported(0x08B2C394u, 0x49544941u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 481u, 0x08B36C3Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2C398;
L_08B2C398:
    rt.unsupported(0x08B2C398u, 0x203A474Eu, "unknown not lowered yet"); return;
L_08B2C3A4:
    rt.unsupported(0x08B2C3A4u, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B2C3B0:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B2C3B4u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B2C3B8u, 0x412F5249u, "unknown not lowered yet"); return;
L_08B2C3C8:
    if (ctx.gpr[18] == ctx.gpr[3]) {
    ctx.gpr[25] = (ctx.gpr[18] | 23105u);
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 3u, 0x08B380E0u>(ctx, &aot_mem); return;
    }
    goto L_08B2C3D0;
L_08B2C3D0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B2C3D4u, 0x00000033u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 587u, 0x08B37CB8u>(ctx, &aot_mem); return;
    }
    goto L_08B2C3D8;
L_08B2C3D8:
    rt.unsupported(0x08B2C3D8u, 0x43202A2Au, "unknown not lowered yet"); return;
L_08B2C3E4:
    rt.unsupported(0x08B2C3E4u, 0x7325203Au, "unknown not lowered yet"); return;
L_08B2C3F0:
    rt.unsupported(0x08B2C3F0u, 0x202E2E2Eu, "unknown not lowered yet"); return;
L_08B2C410:
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[3] : ctx.gpr[14]);
    goto L_08B2C414;
L_08B2C414:
    rt.unsupported(0x08B2C414u, 0x00627573u, "special? not lowered yet"); return;
L_08B2C418:
    ctx.execute_vfpu_vscl_ct<108u, 111u, 119u, 1u>();
    rt.unsupported(0x08B2C41Cu, 0x00000072u, "special? not lowered yet"); return;
L_08B2C420:
    ctx.execute_vfpu_vscl_ct<117u, 112u, 112u, 1u>();
    rt.unsupported(0x08B2C424u, 0x00000072u, "special? not lowered yet"); return;
L_08B2C428:
    rt.unsupported(0x08B2C428u, 0x72616863u, "unknown not lowered yet"); return;
L_08B2C430:
    rt.unsupported(0x08B2C430u, 0x00706572u, "special? not lowered yet"); return;
L_08B2C434:
    ctx.execute_vfpu_vscl_ct<98u, 121u, 116u, 1u>();
    // nop
    goto L_08B2C43C;
L_08B2C43C:
    ctx.execute_vfpu_vminmax(102u, 111u, 114u, 1u, false);
    ctx.gpr[14] = (0u + 0u);
    goto L_08B2C444;
L_08B2C444:
    rt.unsupported(0x08B2C444u, 0x706D7564u, "unknown not lowered yet"); return;
L_08B2C44C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<102u, 1u>(vfpu_d); }
    // nop
    goto L_08B2C454;
L_08B2C454:
    rt.unsupported(0x08B2C454u, 0x6E696667u, "vfpu3 not lowered yet"); return;
L_08B2C45C:
    rt.unsupported(0x08B2C45Cu, 0x62757367u, "vfpu0 not lowered yet"); return;
L_08B2C464:
    // nop
    goto L_08B2C468;
L_08B2C468:
    rt.unsupported(0x08B2C468u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2C478:
    rt.unsupported(0x08B2C478u, 0x62616E75u, "vfpu0 not lowered yet"); return;
L_08B2C498:
    rt.unsupported(0x08B2C498u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2C4B0:
    rt.unsupported(0x08B2C4B0u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2C4C8:
    ctx.execute_vfpu_vhdp(109u, 97u, 108u, 1u);
    ctx.execute_vfpu_vscl_ct<111u, 114u, 109u, 1u>();
    rt.unsupported(0x08B2C4D0u, 0x61702064u, "vfpu0 not lowered yet"); return;
L_08B2C4EC:
    ctx.execute_vfpu_vhdp(109u, 97u, 108u, 1u);
    ctx.execute_vfpu_vscl_ct<111u, 114u, 109u, 1u>();
    rt.unsupported(0x08B2C4F4u, 0x61702064u, "vfpu0 not lowered yet"); return;
L_08B2C50C:
    rt.unsupported(0x08B2C50Cu, 0x61626E75u, "vfpu0 not lowered yet"); return;
L_08B2C520:
    rt.unsupported(0x08B2C520u, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B2C534:
    rt.unsupported(0x08B2C534u, 0x69666E75u, "unknown not lowered yet"); return;
L_08B2C548:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[25]) < 9310 ? 1u : 0u);
    if (static_cast<std::int32_t>(ctx.gpr[25]) <= 0) {
    ctx.gpr[5] = (0u | 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 621u, 0x08B37E4Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2C554;
L_08B2C554:
    rt.unsupported(0x08B2C554u, 0x69727473u, "unknown not lowered yet"); return;
L_08B2C56C:
    rt.unsupported(0x08B2C56Cu, 0x00646574u, "special? not lowered yet"); return;
L_08B2C570:
    ctx.gpr[16] = (ctx.gpr[1] & 12380u);
    // nop
    goto L_08B2C578;
L_08B2C578:
    rt.unsupported(0x08B2C578u, 0x23202B2Du, "unknown not lowered yet"); return;
L_08B2C580:
    rt.unsupported(0x08B2C580u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2C5B0:
    rt.unsupported(0x08B2C5B0u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2C5CC:
    rt.unsupported(0x08B2C5CCu, 0x69727473u, "unknown not lowered yet"); return;
L_08B2C5D4:
    rt.unsupported(0x08B2C5D4u, 0x7373696Du, "unknown not lowered yet"); return;
L_08B2C5E0:
    ctx.execute_vfpu_vscl_ct<97u, 102u, 116u, 1u>();
    (void)(ctx.gpr[11] + static_cast<std::uint32_t>(8306));
    rt.unsupported(0x08B2C5E8u, 0x20276625u, "unknown not lowered yet"); return;
L_08B2C5F8:
    ctx.execute_vfpu_compare3(111u, 98u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<108u, 101u, 116u, 1u>();
    rt.unsupported(0x08B2C600u, 0x74706F20u, "unknown not lowered yet"); return;
L_08B2C610:
    rt.unsupported(0x08B2C610u, 0x726F6660u, "unknown not lowered yet"); return;
L_08B2C61C:
    rt.unsupported(0x08B2C61Cu, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2C708:
    rt.unsupported(0x08B2C70Cu, 0x08ACC934u, "control flow in delay slot"); return;
L_08B2C70C:
    rt.unsupported(0x08B2C710u, 0x08ACC934u, "control flow in delay slot"); return;
L_08B2C734:
    rt.unsupported(0x08B2C738u, 0x08ACC934u, "control flow in delay slot"); return;
L_08B2C76C:
    rt.unsupported(0x08B2C770u, 0x08ACCA2Cu, "control flow in delay slot"); return;
L_08B2C780:
    rt.unsupported(0x08B2C784u, 0x08ACCA2Cu, "control flow in delay slot"); return;
L_08B2C79C:
    rt.unsupported(0x08B2C7A0u, 0x08ACCCA4u, "control flow in delay slot"); return;
L_08B2C7A0:
    rt.unsupported(0x08B2C7A4u, 0x08ACCBE0u, "control flow in delay slot"); return;
L_08B2C870:
    if (ctx.gpr[3] == ctx.gpr[16]) {
    rt.unsupported(0x08B2C874u, 0x75737275u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 2u, 0x08B48580u>(ctx, &aot_mem); return;
    }
    goto L_08B2C878;
L_08B2C878:
    rt.unsupported(0x08B2C878u, 0x74207469u, "unknown not lowered yet"); return;
L_08B2C898:
    if (ctx.gpr[3] == ctx.gpr[16]) {
    rt.unsupported(0x08B2C89Cu, 0x75737275u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 3u, 0x08B485A8u>(ctx, &aot_mem); return;
    }
    goto L_08B2C8A0;
L_08B2C8A0:
    rt.unsupported(0x08B2C8A0u, 0x70207469u, "unknown not lowered yet"); return;
L_08B2C8D0:
    ctx.execute_vfpu_vscl_ct<85u, 110u, 100u, 1u>();
    ctx.execute_vfpu_vscl_ct<102u, 105u, 110u, 1u>();
    rt.unsupported(0x08B2C8D8u, 0x72632064u, "unknown not lowered yet"); return;
L_08B2C990:
    rt.unsupported(0x08B2C990u, 0x74736F48u, "unknown not lowered yet"); return;
L_08B2C99C:
    if (ctx.gpr[3] == ctx.gpr[7]) {
    rt.unsupported(0x08B2C9A0u, 0x746E6972u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 15u, 0x08B452B0u>(ctx, &aot_mem); return;
    }
    goto L_08B2C9A4;
L_08B2C9A4:
    rt.unsupported(0x08B2C9A4u, 0x4F6C6C41u, "unknown not lowered yet"); return;
L_08B2C9B0:
    rt.unsupported(0x08B2C9B0u, 0x76726553u, "unknown not lowered yet"); return;
L_08B2C9BC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<115u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<65u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<73u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2C9C0u, 0x43636F68u, "unknown not lowered yet"); return;
L_08B2C9D0:
    ctx.execute_vfpu_vscl_ct<73u, 115u, 83u, 1u>();
    rt.unsupported(0x08B2C9D4u, 0x72657672u, "unknown not lowered yet"); return;
L_08B2C9DC:
    rt.unsupported(0x08B2C9DCu, 0x67726154u, "vfpu1 not lowered yet"); return;
L_08B2C9EC:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08B2C9F4u, 0x00007055u, "special? not lowered yet"); return;
L_08B2C9F8:
    rt.unsupported(0x08B2C9F8u, 0x47746547u, "cop1? not lowered yet"); return;
L_08B2CA04:
    ctx.gpr[14] = (0u & 0u);
    goto L_08B2CA08;
L_08B2CA08:
    rt.unsupported(0x08B2CA08u, 0x61647055u, "vfpu0 not lowered yet"); return;
L_08B2CA18:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08B2CA20u, 0x756E694Du, "unknown not lowered yet"); return;
L_08B2CA28:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    ctx.execute_vfpu_compare3(83u, 101u, 99u, 1u, 6u);
    rt.unsupported(0x08B2CA34u, 0x0073646Eu, "special? not lowered yet"); return;
L_08B2CA38:
    rt.unsupported(0x08B2CA38u, 0x47746553u, "cop1? not lowered yet"); return;
L_08B2CA44:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<84u, 121u, 112u, 1u>();
    // nop
    goto L_08B2CA50;
L_08B2CA50:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B2CA54u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B2CA60:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B2CA64u, 0x726F6353u, "unknown not lowered yet"); return;
L_08B2CA70:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08B2CA78u, 0x696D694Cu, "unknown not lowered yet"); return;
L_08B2CA80:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B2CA84u, 0x70616C45u, "unknown not lowered yet"); return;
L_08B2CA90:
    ctx.execute_vfpu_vscl_ct<73u, 115u, 84u, 1u>();
    rt.unsupported(0x08B2CA94u, 0x61476D61u, "vfpu0 not lowered yet"); return;
L_08B2CA9C:
    if (ctx.gpr[3] == ctx.gpr[5]) {
    rt.unsupported(0x08B2CAA0u, 0x7265776Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 81u, 0x08B497F4u>(ctx, &aot_mem); return;
    }
    goto L_08B2CAA4;
L_08B2CAA4:
    rt.unsupported(0x08B2CAA4u, 0x00737075u, "special? not lowered yet"); return;
L_08B2CAA8:
    rt.unsupported(0x08B2CAACu, 0x50656361u, "control flow in delay slot"); return;
L_08B2CAB0:
    rt.unsupported(0x08B2CAB0u, 0x7265776Fu, "unknown not lowered yet"); return;
L_08B2CAB8:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    ctx.execute_vfpu_vscl_ct<82u, 101u, 118u, 1u>();
    rt.unsupported(0x08B2CAC0u, 0x00657372u, "special? not lowered yet"); return;
L_08B2CAC4:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    jump_target = 0u;
    ctx.gpr[12] = (0x08B2CAD0u);
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B2CAD0u) goto L_08B2CAD0;
    return;
L_08B2CACC:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    goto L_08B2CAD0;
L_08B2CAD0:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 5u));
    goto L_08B2CAD4;
L_08B2CAD4:
    rt.unsupported(0x08B2CAD4u, 0x6B6E6154u, "unknown not lowered yet"); return;
L_08B2CAE0:
    rt.unsupported(0x08B2CAE0u, 0x75466F4Eu, "unknown not lowered yet"); return;
L_08B2CAF4:
    ctx.execute_vfpu_vminmax(84u, 101u, 97u, 1u, false);
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B2CAFCu, 0x00007275u, "special? not lowered yet"); return;
L_08B2CB00:
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B2CB04u, 0x00007275u, "special? not lowered yet"); return;
L_08B2CB08:
    ctx.execute_vfpu_vminmax(84u, 101u, 97u, 1u, false);
    ctx.execute_vfpu_vscl_ct<78u, 97u, 109u, 1u>();
    // nop
    goto L_08B2CB14;
L_08B2CB14:
    rt.unsupported(0x08B2CB14u, 0x47646E45u, "cop1? not lowered yet"); return;
L_08B2CB1C:
    rt.unsupported(0x08B2CB1Cu, 0x72617453u, "unknown not lowered yet"); return;
L_08B2CB28:
    ctx.execute_vfpu_vscl_ct<68u, 101u, 102u, 1u>();
    rt.unsupported(0x08B2CB2Cu, 0x6E69646Eu, "vfpu3 not lowered yet"); return;
L_08B2CB38:
    rt.unsupported(0x08B2CB38u, 0x776F6853u, "unknown not lowered yet"); return;
L_08B2CB4C:
    rt.unsupported(0x08B2CB4Cu, 0x4D74654Eu, "unknown not lowered yet"); return;
L_08B2CB5C:
    rt.unsupported(0x08B2CB5Cu, 0x4D74654Eu, "unknown not lowered yet"); return;
L_08B2CB6C:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<97u, 99u, 107u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 21u, 0x08B460A8u>(ctx, &aot_mem); return;
    }
    goto L_08B2CB74;
L_08B2CB74:
    rt.unsupported(0x08B2CB74u, 0x736F4C74u, "unknown not lowered yet"); return;
L_08B2CB7C:
    rt.unsupported(0x08B2CB7Cu, 0x746C754Du, "unknown not lowered yet"); return;
L_08B2CB88:
    rt.unsupported(0x08B2CB88u, 0x74696157u, "unknown not lowered yet"); return;
L_08B2CB90:
    rt.unsupported(0x08B2CB90u, 0x74696157u, "unknown not lowered yet"); return;
L_08B2CB9C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<70u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2CBA0u, 0x756F7247u, "unknown not lowered yet"); return;
L_08B2CBB4:
    if (ctx.gpr[27] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<99u, 101u, 110u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 94u, 0x08B4A0C4u>(ctx, &aot_mem); return;
    }
    goto L_08B2CBBC;
L_08B2CBBC:
    rt.unsupported(0x08B2CBBCu, 0x79616C50u, "unknown not lowered yet"); return;
L_08B2CBC4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<82u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2CBC8u, 0x61507265u, "vfpu0 not lowered yet"); return;
L_08B2CBD4:
    rt.unsupported(0x08B2CBD4u, 0x7574536Eu, "unknown not lowered yet"); return;
L_08B2CBDC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<82u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2CBE0u, 0x61507265u, "vfpu0 not lowered yet"); return;
L_08B2CBEC:
    rt.unsupported(0x08B2CBECu, 0x7574536Eu, "unknown not lowered yet"); return;
L_08B2CBF8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<82u, 1u>(vfpu_d); }
    goto L_08B2CBFC;
L_08B2CBFC:
    rt.unsupported(0x08B2CBFCu, 0x75487265u, "unknown not lowered yet"); return;
L_08B2CC08:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<97u, 117u, 115u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 22u, 0x08B46158u>(ctx, &aot_mem); return;
    }
    goto L_08B2CC10;
L_08B2CC10:
    ctx.execute_vfpu_vscl_ct<83u, 99u, 114u, 1u>();
    ctx.execute_vfpu_vscl_ct<101u, 110u, 83u, 1u>();
    rt.unsupported(0x08B2CC18u, 0x7463656Cu, "unknown not lowered yet"); return;
L_08B2CC20:
    rt.unsupported(0x08B2CC20u, 0x776F6853u, "unknown not lowered yet"); return;
L_08B2CC2C:
    rt.unsupported(0x08B2CC2Cu, 0x45746547u, "cop1? not lowered yet"); return;
L_08B2CC44:
    rt.unsupported(0x08B2CC44u, 0x00007372u, "special? not lowered yet"); return;
L_08B2CC48:
    ctx.execute_vfpu_vminmax(84u, 101u, 97u, 1u, false);
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B2CC50u, 0x72657645u, "unknown not lowered yet"); return;
L_08B2CC5C:
    if (ctx.gpr[3] == ctx.gpr[19]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 9u, 0x08B45180u>(ctx, &aot_mem); return;
    }
    goto L_08B2CC64;
L_08B2CC60:
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
    goto L_08B2CC64;
L_08B2CC64:
    rt.unsupported(0x08B2CC64u, 0x746E4572u, "unknown not lowered yet"); return;
L_08B2CC74:
    if (ctx.gpr[27] == ctx.gpr[5]) {
    rt.unsupported(0x08B2CC78u, 0x72657075u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 89u, 0x08B499CCu>(ctx, &aot_mem); return;
    }
    goto L_08B2CC7C;
L_08B2CC7C:
    rt.unsupported(0x08B2CC7Cu, 0x6B617242u, "unknown not lowered yet"); return;
L_08B2CC88:
    // nop
    goto L_08B2CC8C;
L_08B2CC8C:
    rt.unsupported(0x08B2CC8Cu, 0x636E7953u, "vfpu0 not lowered yet"); return;
L_08B2CC98:
    // nop
    goto L_08B2CC9C;
L_08B2CC9C:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.execute_vfpu_vcmp_ct<32u, 80u, 1u, 10u>();
    rt.unsupported(0x08B2CCA4u, 0x72657961u, "unknown not lowered yet"); return;
L_08B2CCC8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B2CCCCu, 0x7543202Au, "unknown not lowered yet"); return;
L_08B2CCDC:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08B2CCE0u, 0x74754F20u, "unknown not lowered yet"); return;
L_08B2CCEC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<83u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2CCF0u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2CD04:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.execute_vfpu_vscl_ct<42u, 32u, 80u, 1u>();
    rt.unsupported(0x08B2CD0Cu, 0x20737265u, "unknown not lowered yet"); return;
L_08B2CD2C:
    rt.unsupported(0x08B2CD2Cu, 0x72656550u, "unknown not lowered yet"); return;
L_08B2CD38:
    ctx.execute_vfpu_compare3(95u, 95u, 109u, 1u, 6u);
    ctx.gpr[12] = (0u & 0u);
    goto L_08B2CD40;
L_08B2CD40:
    (void)(0u < 0u ? 1u : 0u);
    goto L_08B2CD44;
L_08B2CD44:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B2CD50u, 0x54454D41u, "control flow in delay slot"); return;
L_08B2CD54:
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[18]) < 21061 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[1] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    goto L_08B2CD64;
L_08B2CD64:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B2CD68u, 0x70795420u, "unknown not lowered yet"); return;
L_08B2CD74:
    rt.unsupported(0x08B2CD74u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B2CD84:
    rt.unsupported(0x08B2CD84u, 0x726F6353u, "unknown not lowered yet"); return;
L_08B2CD94:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    rt.unsupported(0x08B2CD98u, 0x696D694Cu, "unknown not lowered yet"); return;
L_08B2CDA4:
    ctx.execute_vfpu_vminmax(84u, 101u, 97u, 1u, false);
    ctx.execute_vfpu_vminmax(32u, 71u, 97u, 1u, false);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(14949));
    ctx.gpr[1] = (0u & 0u);
    goto L_08B2CDB4;
L_08B2CDB4:
    ctx.execute_vfpu_vscl_ct<80u, 111u, 119u, 1u>();
    rt.unsupported(0x08B2CDB8u, 0x20707572u, "unknown not lowered yet"); return;
L_08B2CDC4:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    ctx.execute_vfpu_vscl_ct<80u, 111u, 119u, 1u>();
    ctx.gpr[16] = (ctx.gpr[19] ^ 30066u);
    // nop
    (void)(ctx.pc = 0x09909424u, rt.invoke_chained_call(ctx, &aot_mem)); return;
L_08B2CDD8:
    ctx.execute_vfpu_vscl_ct<82u, 97u, 99u, 1u>();
    rt.unsupported(0x08B2CDDCu, 0x76655220u, "unknown not lowered yet"); return;
L_08B2CDE4:
    ctx.gpr[1] = (0u & 0u);
    goto L_08B2CDE8;
L_08B2CDE8:
    rt.unsupported(0x08B2CDE8u, 0x69626D41u, "unknown not lowered yet"); return;
L_08B2CDF4:
    rt.unsupported(0x08B2CDF4u, 0x6B6E6142u, "unknown not lowered yet"); return;
L_08B2CE00:
    rt.unsupported(0x08B2CE00u, 0x69626D41u, "unknown not lowered yet"); return;
L_08B2CE18:
    rt.unsupported(0x08B2CE18u, 0x70696B53u, "unknown not lowered yet"); return;
L_08B2CE2C:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[1] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    goto L_08B2CE4C;
L_08B2CE4C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2CE50u, 0x44414552u, "unsupported CFC1 control register"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 20u, 0x08B41B84u>(ctx, &aot_mem); return;
    }
    goto L_08B2CE54;
L_08B2CE54:
    rt.unsupported(0x08B2CE58u, 0x53545543u, "control flow in delay slot"); return;
L_08B2CE5C:
    rt.unsupported(0x08B2CE5Cu, 0x454E4543u, "cop1? not lowered yet"); return;
L_08B2CE68:
    rt.unsupported(0x08B2CE68u, 0x43534944u, "unknown not lowered yet"); return;
L_08B2CE74:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B2CE78u, 0x44525355u, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[1];
    ctx.gpr[10] = (0x08B2CE84u);
    rt.unsupported(0x08B2CE80u, 0x72746E65u, "unknown not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B2CE84u) goto L_08B2CE84;
    return;
L_08B2CE80:
    rt.unsupported(0x08B2CE80u, 0x72746E65u, "unknown not lowered yet"); return;
L_08B2CE84:
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(25961) ? 1u : 0u);
    ctx.gpr[12] = (ctx.gpr[3] & ctx.gpr[20]);
    goto L_08B2CE8C;
L_08B2CE8C:
    rt.unsupported(0x08B2CE8Cu, 0x00000072u, "special? not lowered yet"); return;
L_08B2CE90:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B2CE94u, 0x74206465u, "unknown not lowered yet"); return;
L_08B2CEAC:
    ctx.execute_vfpu_vminmax(99u, 111u, 109u, 1u, false);
    ctx.execute_vfpu_vscl_ct<105u, 116u, 116u, 1u>();
    ctx.execute_vfpu_vscl_ct<100u, 45u, 114u, 1u>();
    rt.unsupported(0x08B2CEB8u, 0x00000076u, "special? not lowered yet"); return;
L_08B2CEBC:
    rt.unsupported(0x08B2CEBCu, 0x4E524157u, "unknown not lowered yet"); return;
L_08B2CEE4:
    rt.unsupported(0x08B2CEE4u, 0x69642021u, "unknown not lowered yet"); return;
L_08B2CF00:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 122u, 1u>();
    rt.unsupported(0x08B2CF04u, 0x20666F20u, "unknown not lowered yet"); return;
L_08B2CF14:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 122u, 1u>();
    rt.unsupported(0x08B2CF18u, 0x20666F20u, "unknown not lowered yet"); return;
L_08B2CF2C:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 122u, 1u>();
    rt.unsupported(0x08B2CF30u, 0x20666F20u, "unknown not lowered yet"); return;
L_08B2CF40:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 122u, 1u>();
    rt.unsupported(0x08B2CF44u, 0x20666F20u, "unknown not lowered yet"); return;
L_08B2CF58:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 122u, 1u>();
    rt.unsupported(0x08B2CF5Cu, 0x20666F20u, "unknown not lowered yet"); return;
L_08B2CF6C:
    rt.unsupported(0x08B2CF6Cu, 0x41454353u, "unknown not lowered yet"); return;
L_08B2CF78:
    rt.unsupported(0x08B2CF78u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B2CF94:
    rt.unsupported(0x08B2CF94u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B2CFB8:
    rt.unsupported(0x08B2CFB8u, 0x6E696552u, "vfpu3 not lowered yet"); return;
L_08B2CFBC:
    rt.unsupported(0x08B2CFBCu, 0x61697469u, "vfpu0 not lowered yet"); return;
L_08B2CFE0:
    rt.unsupported(0x08B2CFE0u, 0x6E696552u, "vfpu3 not lowered yet"); return;
L_08B2D00C:
    rt.unsupported(0x08B2D00Cu, 0x21212121u, "unknown not lowered yet"); return;
L_08B2D024:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.execute_vfpu_vcmp_ct<77u, 117u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<105u, 112u, 1u, 4u>();
    rt.unsupported(0x08B2D048u, 0x72657961u, "unknown not lowered yet"); return;
L_08B2D06C:
    ctx.execute_vfpu_compare3(65u, 100u, 104u, 1u, 6u);
    rt.unsupported(0x08B2D070u, 0x6E6F4363u, "vfpu3 not lowered yet"); return;
L_08B2D094:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D098u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D0A8:
    rt.unsupported(0x08B2D0A8u, 0x75746553u, "unknown not lowered yet"); return;
L_08B2D0C0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D0C4u, 0x00306373u, "special? not lowered yet"); return;
L_08B2D0C8:
    rt.unsupported(0x08B2D0C8u, 0x75746553u, "unknown not lowered yet"); return;
L_08B2D0D8:
    rt.unsupported(0x08B2D0D8u, 0x75746553u, "unknown not lowered yet"); return;
L_08B2D0E0:
    rt.unsupported(0x08B2D0E0u, 0x69666661u, "unknown not lowered yet"); return;
L_08B2D0F0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D0F4u, 0x72637320u, "unknown not lowered yet"); return;
L_08B2D100:
    rt.unsupported(0x08B2D100u, 0x69736F50u, "unknown not lowered yet"); return;
L_08B2D11C:
    rt.unsupported(0x08B2D11Cu, 0x74696E49u, "unknown not lowered yet"); return;
L_08B2D12C:
    rt.unsupported(0x08B2D12Cu, 0x7020656Cu, "unknown not lowered yet"); return;
L_08B2D138:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D13Cu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D144:
    rt.unsupported(0x08B2D144u, 0x72617453u, "unknown not lowered yet"); return;
L_08B2D14C:
    rt.unsupported(0x08B2D14Cu, 0x74706972u, "unknown not lowered yet"); return;
L_08B2D154:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D158u, 0x00316373u, "special? not lowered yet"); return;
L_08B2D15C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D160u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D168:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    goto L_08B2D16C;
L_08B2D16C:
    ctx.execute_vfpu_vscl_ct<32u, 115u, 99u, 1u>();
    rt.unsupported(0x08B2D170u, 0x0000656Eu, "special? not lowered yet"); return;
L_08B2D174:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D178u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D180:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D184u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D18C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D190u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D198:
    rt.unsupported(0x08B2D198u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B2D1A0:
    ctx.execute_vfpu_compare3(65u, 100u, 104u, 1u, 6u);
    ctx.execute_vfpu_compare3(99u, 32u, 67u, 1u, 6u);
    rt.unsupported(0x08B2D1A8u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B2D1C4:
    rt.unsupported(0x08B2D1C4u, 0x206D754Eu, "unknown not lowered yet"); return;
L_08B2D1E8:
    rt.unsupported(0x08B2D1E8u, 0x72656854u, "unknown not lowered yet"); return;
L_08B2D21C:
    rt.unsupported(0x08B2D21Cu, 0x746C754Du, "unknown not lowered yet"); return;
L_08B2D23C:
    if (0u == 0u) (void)(0u);
    goto L_08B2D240;
L_08B2D240:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B2D244u, 0x754D202Au, "unknown not lowered yet"); return;
L_08B2D268:
    if (ctx.gpr[2] != ctx.gpr[12]) {
    rt.unsupported(0x08B2D26Cu, 0x41472049u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 97u, 0x08B427A0u>(ctx, &aot_mem); return;
    }
    goto L_08B2D270;
L_08B2D270:
    rt.unsupported(0x08B2D270u, 0x0000454Du, "special? not lowered yet"); return;
L_08B2D274:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B2D278u, 0x74206465u, "unknown not lowered yet"); return;
L_08B2D294:
    rt.unsupported(0x08B2D294u, 0x746C754Du, "unknown not lowered yet"); return;
L_08B2D2C0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D2C4u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D2D4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D2D8u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D2E8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    goto L_08B2D2EC;
L_08B2D2EC:
    rt.unsupported(0x08B2D2ECu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D2FC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D300u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D310:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D314u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2D330:
    rt.unsupported(0x08B2D330u, 0x72614343u, "unknown not lowered yet"); return;
L_08B2D390:
    rt.unsupported(0x08B2D390u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2D398:
    rt.unsupported(0x08B2D398u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2D3A0:
    rt.unsupported(0x08B2D3A0u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2D3A8:
    rt.unsupported(0x08B2D3A8u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2D3B0:
    rt.unsupported(0x08B2D3B0u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2D3B8:
    rt.unsupported(0x08B2D3B8u, 0x61656863u, "vfpu0 not lowered yet"); return;
L_08B2D3C8:
    rt.unsupported(0x08B2D3C8u, 0x61656863u, "vfpu0 not lowered yet"); return;
L_08B2D3D4:
    rt.unsupported(0x08B2D3D4u, 0x61656863u, "vfpu0 not lowered yet"); return;
L_08B2D3E0:
    rt.unsupported(0x08B2D3E0u, 0x61656863u, "vfpu0 not lowered yet"); return;
L_08B2D3EC:
    rt.unsupported(0x08B2D3ECu, 0x61656863u, "vfpu0 not lowered yet"); return;
L_08B2D3F8:
    rt.unsupported(0x08B2D3F8u, 0x61656863u, "vfpu0 not lowered yet"); return;
L_08B2D410:
    ctx.execute_vfpu_vscl_ct<99u, 77u, 112u, 1u>();
    rt.unsupported(0x08B2D414u, 0x616C5067u, "vfpu0 not lowered yet"); return;
L_08B2D424:
    rt.unsupported(0x08B2D424u, 0x444F4D4Bu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B2D428u, 0x4449562Fu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B2D42Cu, 0x4F434F45u, "unknown not lowered yet"); return;
L_08B2D430:
    ctx.gpr[3] = (ctx.gpr[18] < static_cast<std::uint32_t>(17732) ? 1u : 0u);
    ctx.gpr[10] = (ctx.hi);
    goto L_08B2D438;
L_08B2D438:
    rt.unsupported(0x08B2D438u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D44C:
    ctx.execute_vfpu_vcmp_ct<100u, 117u, 1u, 15u>();
    rt.unsupported(0x08B2D450u, 0x69762065u, "unknown not lowered yet"); return;
L_08B2D464:
    rt.unsupported(0x08B2D464u, 0x444F4D4Bu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B2D468u, 0x45504D2Fu, "cop1? not lowered yet"); return;
L_08B2D474:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B2D478;
L_08B2D478:
    rt.unsupported(0x08B2D478u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D4A0:
    ctx.gpr[4] = (ctx.gpr[26] < static_cast<std::uint32_t>(20301) ? 1u : 0u);
    rt.unsupported(0x08B2D4A4u, 0x4745504Du, "cop1? not lowered yet"); return;
L_08B2D4B0:
    rt.unsupported(0x08B2D4B0u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D4D4:
    rt.unsupported(0x08B2D4D4u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D4F8:
    rt.unsupported(0x08B2D4F8u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D51C:
    if (ctx.gpr[27] == ctx.gpr[13]) {
    rt.unsupported(0x08B2D520u, 0x20657A69u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 26u, 0x08B46A54u>(ctx, &aot_mem); return;
    }
    goto L_08B2D524;
L_08B2D524:
    rt.unsupported(0x08B2D524u, 0x78257830u, "unknown not lowered yet"); return;
L_08B2D52C:
    rt.unsupported(0x08B2D52Cu, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D554:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<110u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D558u, 0x20642520u, "unknown not lowered yet"); return;
L_08B2D568:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<110u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D56Cu, 0x20642520u, "unknown not lowered yet"); return;
L_08B2D57C:
    rt.unsupported(0x08B2D57Cu, 0x4F525245u, "unknown not lowered yet"); return;
L_08B2D5AC:
    rt.unsupported(0x08B2D5ACu, 0x4F525245u, "unknown not lowered yet"); return;
L_08B2D5D8:
    rt.unsupported(0x08B2D5D8u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D5F4:
    rt.unsupported(0x08B2D5F4u, 0x43726566u, "unknown not lowered yet"); return;
L_08B2D60C:
    rt.unsupported(0x08B2D60Cu, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D630:
    rt.unsupported(0x08B2D630u, 0x4F4D454Du, "unknown not lowered yet"); return;
L_08B2D640:
    ctx.execute_vfpu_vscl_ct<99u, 77u, 112u, 1u>();
    rt.unsupported(0x08B2D644u, 0x616C5067u, "vfpu0 not lowered yet"); return;
L_08B2D658:
    rt.unsupported(0x08B2D658u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D67C:
    rt.unsupported(0x08B2D67Cu, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D68C:
    ctx.execute_vfpu_vscl_ct<101u, 77u, 112u, 1u>();
    ctx.execute_vfpu_vscl_ct<103u, 81u, 117u, 1u>();
    rt.unsupported(0x08B2D694u, 0x74537972u, "unknown not lowered yet"); return;
L_08B2D6A8:
    rt.unsupported(0x08B2D6A8u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D6D0:
    rt.unsupported(0x08B2D6D0u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D6F0:
    ctx.execute_vfpu_vscl_ct<99u, 77u, 112u, 1u>();
    goto L_08B2D6F4;
L_08B2D6F4:
    rt.unsupported(0x08B2D6F4u, 0x616C5067u, "vfpu0 not lowered yet"); return;
L_08B2D708:
    rt.unsupported(0x08B2D708u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D728:
    rt.unsupported(0x08B2D728u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D748:
    rt.unsupported(0x08B2D748u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D764:
    rt.unsupported(0x08B2D764u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D784:
    rt.unsupported(0x08B2D784u, 0x2029286Du, "unknown not lowered yet"); return;
L_08B2D788:
    // nop
    (void)(ctx.pc = 0x090D5904u, rt.invoke_chained_call(ctx, &aot_mem)); return;
L_08B2D790:
    rt.unsupported(0x08B2D790u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D7A8:
    if (ctx.gpr[27] == ctx.gpr[20]) {
    rt.unsupported(0x08B2D7ACu, 0x61657274u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 99u, 0x08B4A550u>(ctx, &aot_mem); return;
    }
    goto L_08B2D7B0;
L_08B2D7B0:
    rt.unsupported(0x08B2D7B0u, 0x2029286Du, "unknown not lowered yet"); return;
L_08B2D7BC:
    rt.unsupported(0x08B2D7BCu, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D7E4:
    rt.unsupported(0x08B2D7E4u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D7EC:
    rt.unsupported(0x08B2D7ECu, 0x20726F72u, "unknown not lowered yet"); return;
L_08B2D808:
    ctx.gpr[15] = (0u | ctx.gpr[10]);
    goto L_08B2D80C;
L_08B2D80C:
    rt.unsupported(0x08B2D80Cu, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D838:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<110u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D83Cu, 0x20642520u, "unknown not lowered yet"); return;
L_08B2D84C:
    rt.unsupported(0x08B2D84Cu, 0x4F525245u, "unknown not lowered yet"); return;
L_08B2D878:
    rt.unsupported(0x08B2D878u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D89C:
    rt.unsupported(0x08B2D89Cu, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D8BC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<110u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2D8C0u, 0x20642520u, "unknown not lowered yet"); return;
L_08B2D8D4:
    rt.unsupported(0x08B2D8D4u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D8E8:
    ctx.execute_vfpu_vscl_ct<32u, 116u, 104u, 1u>();
    rt.unsupported(0x08B2D8ECu, 0x756F7320u, "unknown not lowered yet"); return;
L_08B2D900:
    rt.unsupported(0x08B2D900u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D920:
    rt.unsupported(0x08B2D920u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D93C:
    rt.unsupported(0x08B2D93Cu, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D95C:
    rt.unsupported(0x08B2D95Cu, 0x4745504Du, "cop1? not lowered yet"); return;
L_08B2D96C:
    (void)(0u & 0u);
    goto L_08B2D970;
L_08B2D970:
    rt.unsupported(0x08B2D970u, 0x4745504Du, "cop1? not lowered yet"); return;
L_08B2D980:
    rt.unsupported(0x08B2D980u, 0x4745504Du, "cop1? not lowered yet"); return;
L_08B2D990:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    rt.unsupported(0x08B2D99Cu, 0x4D79616Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 6u, 0x08B38244u>(ctx, &aot_mem); return;
    }
    goto L_08B2D9A0;
L_08B2D9A0:
    ctx.execute_vfpu_vscl_ct<111u, 118u, 105u, 1u>();
    goto L_08B2D9A4;
L_08B2D9A4:
    rt.unsupported(0x08B2D9A4u, 0x73252820u, "unknown not lowered yet"); return;
L_08B2D9B0:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    if (0u == 0u) (void)(0u);
    goto L_08B2D9B8;
L_08B2D9B8:
    rt.unsupported(0x08B2D9B8u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D9D4:
    rt.unsupported(0x08B2D9D4u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2D9DC:
    rt.unsupported(0x08B2D9DCu, 0x20726F72u, "unknown not lowered yet"); return;
L_08B2D9FC:
    rt.unsupported(0x08B2D9FCu, 0x726F6261u, "unknown not lowered yet"); return;
L_08B2DA10:
    rt.unsupported(0x08B2DA10u, 0x4745504Du, "cop1? not lowered yet"); return;
L_08B2DA1C:
    rt.unsupported(0x08B2DA1Cu, 0x4C424150u, "unknown not lowered yet"); return;
L_08B2DA24:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B2DA28u, 0x00000072u, "special? not lowered yet"); return;
L_08B2DA2C:
    rt.unsupported(0x08B2DA2Cu, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2DA58:
    rt.unsupported(0x08B2DA58u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2DA80:
    rt.unsupported(0x08B2DA80u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2DAA8:
    rt.unsupported(0x08B2DAA8u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B2DAD8:
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 14u>();
    // nop
    goto L_08B2DAE0;
L_08B2DAE0:
    rt.unsupported(0x08B2DAE0u, 0x61655743u, "vfpu0 not lowered yet"); return;
L_08B2DAF8:
    rt.unsupported(0x08B2DAF8u, 0x6E6F7246u, "vfpu3 not lowered yet"); return;
L_08B2DB0C:
    // nop
    goto L_08B2DB10;
L_08B2DB10:
    ctx.gpr[1] = (ctx.gpr[27] & 29799u);
    rt.unsupported(0x08B2DB14u, 0x7561705Fu, "unknown not lowered yet"); return;
L_08B2DB20:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    // nop
    goto L_08B2DB28;
L_08B2DB28:
    rt.unsupported(0x08B2DB28u, 0x62756F64u, "vfpu0 not lowered yet"); return;
L_08B2DB34:
    rt.unsupported(0x08B2DB34u, 0x68616A6Bu, "unknown not lowered yet"); return;
L_08B2DB3C:
    ctx.execute_vfpu_vscl_ct<114u, 105u, 115u, 1u>();
    // nop
    goto L_08B2DB44;
L_08B2DB44:
    rt.unsupported(0x08B2DB44u, 0x7370696Cu, "unknown not lowered yet"); return;
L_08B2DB4C:
    rt.unsupported(0x08B2DB4Cu, 0x69646172u, "unknown not lowered yet"); return;
L_08B2DB5C:
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[24]) ? ctx.gpr[3] : ctx.gpr[24]);
    goto L_08B2DB60;
L_08B2DB60:
    rt.unsupported(0x08B2DB60u, 0x73616C66u, "unknown not lowered yet"); return;
L_08B2DB6C:
    ctx.execute_vfpu_vscl_ct<108u, 105u, 98u, 1u>();
    rt.unsupported(0x08B2DB70u, 0x6A797472u, "unknown not lowered yet"); return;
L_08B2DB78:
    ctx.execute_vfpu_vscl_ct<108u, 105u, 98u, 1u>();
    ctx.execute_vfpu_vhdp(114u, 116u, 121u, 1u);
    rt.unsupported(0x08B2DB80u, 0x00656572u, "special? not lowered yet"); return;
L_08B2DB84:
    rt.unsupported(0x08B2DB84u, 0x635F6566u, "vfpu0 not lowered yet"); return;
L_08B2DB98:
    rt.unsupported(0x08B2DB98u, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DBAC:
    ctx.gpr[20] = (ctx.gpr[11] & 30063u);
    // nop
    goto L_08B2DBB4;
L_08B2DBB4:
    rt.unsupported(0x08B2DBB4u, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DBC0:
    rt.unsupported(0x08B2DBC0u, 0x69686576u, "unknown not lowered yet"); return;
L_08B2DBCC:
    rt.unsupported(0x08B2DBCCu, 0x00317475u, "special? not lowered yet"); return;
L_08B2DBD0:
    rt.unsupported(0x08B2DBD0u, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DBD8:
    rt.unsupported(0x08B2DBD8u, 0x6E6F5F73u, "vfpu3 not lowered yet"); return;
L_08B2DBEC:
    rt.unsupported(0x08B2DBECu, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DC04:
    rt.unsupported(0x08B2DC04u, 0x00327475u, "special? not lowered yet"); return;
L_08B2DC08:
    rt.unsupported(0x08B2DC08u, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DC18:
    rt.unsupported(0x08B2DC18u, 0x79616C5Fu, "unknown not lowered yet"); return;
L_08B2DC24:
    rt.unsupported(0x08B2DC24u, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DC30:
    rt.unsupported(0x08B2DC30u, 0x69686576u, "unknown not lowered yet"); return;
L_08B2DC3C:
    rt.unsupported(0x08B2DC3Cu, 0x00337475u, "special? not lowered yet"); return;
L_08B2DC40:
    rt.unsupported(0x08B2DC40u, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DC44:
    rt.unsupported(0x08B2DC44u, 0x776F7272u, "unknown not lowered yet"); return;
L_08B2DC58:
    // nop
    goto L_08B2DC5C;
L_08B2DC5C:
    rt.unsupported(0x08B2DC5Cu, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DC6C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_compare3(108u, 97u, 121u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 29u, 0x08B48DFCu>(ctx, &aot_mem); return;
    }
    goto L_08B2DC74;
L_08B2DC74:
    rt.unsupported(0x08B2DC74u, 0x00347475u, "special? not lowered yet"); return;
L_08B2DC78:
    rt.unsupported(0x08B2DC78u, 0x615F6566u, "vfpu0 not lowered yet"); return;
L_08B2DC80:
    rt.unsupported(0x08B2DC80u, 0x616C5F73u, "vfpu0 not lowered yet"); return;
L_08B2DC88:
    rt.unsupported(0x08B2DC88u, 0x6769725Fu, "vfpu1 not lowered yet"); return;
L_08B2DC90:
    ctx.gpr[1] = (ctx.gpr[27] & 29799u);
    rt.unsupported(0x08B2DC94u, 0x7561705Fu, "unknown not lowered yet"); return;
L_08B2DCA4:
    ctx.gpr[1] = (ctx.gpr[27] & 29799u);
    goto L_08B2DCA8;
L_08B2DCA8:
    rt.unsupported(0x08B2DCA8u, 0x7561705Fu, "unknown not lowered yet"); return;
L_08B2DCB8:
    ctx.gpr[1] = (ctx.gpr[27] & 29799u);
    rt.unsupported(0x08B2DCBCu, 0x7561705Fu, "unknown not lowered yet"); return;
L_08B2DCCC:
    ctx.gpr[1] = (ctx.gpr[27] & 29799u);
    goto L_08B2DCD0;
L_08B2DCD0:
    rt.unsupported(0x08B2DCD0u, 0x7561705Fu, "unknown not lowered yet"); return;
L_08B2DCE0:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2DCE4u, 0x63726963u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 104u, 0x08B4AE6Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DCE8;
L_08B2DCE4:
    rt.unsupported(0x08B2DCE4u, 0x63726963u, "vfpu0 not lowered yet"); return;
L_08B2DCE8:
    if (ctx.gpr[2] == ctx.gpr[31]) {
    ctx.lo = 0u;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 34u, 0x08B4729Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DCF0;
L_08B2DCF0:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2DCF4u, 0x736F7263u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 105u, 0x08B4AE7Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DCF8;
L_08B2DCF8:
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 17u, 0x08B45AC8u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD00;
L_08B2DD00:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2DD04u, 0x6E776F64u, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 106u, 0x08B4AE8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DD08;
L_08B2DD08:
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 29u, 0x08B41E88u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD10;
L_08B2DD10:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_vscl_ct<104u, 111u, 109u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 107u, 0x08B4AE9Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DD18;
L_08B2DD18:
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 30u, 0x08B41E98u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD20;
L_08B2DD20:
    rt.unsupported(0x08B2DD24u, 0x53505F4Cu, "control flow in delay slot"); return;
L_08B2DD28:
    (void)(ctx.hi);
    goto L_08B2DD2C;
L_08B2DD2C:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2DD30u, 0x7466656Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 109u, 0x08B4AEB8u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD34;
L_08B2DD34:
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 32u, 0x08B41EB4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD3C;
L_08B2DD3C:
    rt.unsupported(0x08B2DD40u, 0x53505F52u, "control flow in delay slot"); return;
L_08B2DD44:
    (void)(ctx.hi);
    goto L_08B2DD48;
L_08B2DD48:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2DD4Cu, 0x68676972u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 111u, 0x08B4AED4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD50;
L_08B2DD50:
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 18u, 0x08B45B24u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD58;
L_08B2DD58:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_vscl_ct<115u, 101u, 108u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 113u, 0x08B4AEE4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD60;
L_08B2DD60:
    if (ctx.gpr[2] == ctx.gpr[31]) {
    ctx.lo = 0u;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 114u, 0x08B4AEF0u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD68;
L_08B2DD64:
    ctx.lo = 0u;
    goto L_08B2DD68;
L_08B2DD68:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2DD6Cu, 0x61757173u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 115u, 0x08B4AEF4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD70;
L_08B2DD70:
    if (ctx.gpr[2] == ctx.gpr[31]) {
    ctx.lo = 0u;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 35u, 0x08B4733Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DD78;
L_08B2DD78:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2DD7Cu, 0x72617473u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 117u, 0x08B4AF04u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD80;
L_08B2DD80:
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 19u, 0x08B45B54u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD88;
L_08B2DD88:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2DD8Cu, 0x61697274u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 118u, 0x08B4AF14u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD90;
L_08B2DD90:
    ctx.execute_vfpu_vscl_ct<110u, 103u, 108u, 1u>();
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 35u, 0x08B41F14u>(ctx, &aot_mem); return;
    }
    goto L_08B2DD9C;
L_08B2DD9C:
    rt.unsupported(0x08B2DDA0u, 0x505F7075u, "control flow in delay slot"); return;
L_08B2DDA4:
    ctx.lo = 0u;
    goto L_08B2DDA8;
L_08B2DDA8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DDACu, 0x0050414Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 76u, 0x08B3F2C4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DDB0;
L_08B2DDB0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[9] >> 9u);
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 77u, 0x08B3F2CCu>(ctx, &aot_mem); return;
    }
    goto L_08B2DDB8;
L_08B2DDB8:
    rt.unsupported(0x08B2DDBCu, 0x00414F4Cu, "control flow in delay slot"); return;
L_08B2DDC0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.lo = ctx.gpr[2];
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 79u, 0x08B3F2DCu>(ctx, &aot_mem); return;
    }
    goto L_08B2DDC8;
L_08B2DDC8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 29u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 80u, 0x08B3F2E4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DDD0;
L_08B2DDD0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DDD4u, 0x00445541u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 81u, 0x08B3F2ECu>(ctx, &aot_mem); return;
    }
    goto L_08B2DDD8;
L_08B2DDD8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[19] << (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 82u, 0x08B3F2F4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DDE0;
L_08B2DDDC:
    ctx.gpr[9] = (ctx.gpr[19] << (ctx.gpr[2] & 31u));
    goto L_08B2DDE0;
L_08B2DDE0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DDE4u, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 83u, 0x08B3F2FCu>(ctx, &aot_mem); return;
    }
    goto L_08B2DDE8;
L_08B2DDE8:
    rt.unsupported(0x08B2DDE8u, 0x4F434F4Eu, "unknown not lowered yet"); return;
L_08B2DDF0:
    rt.unsupported(0x08B2DDF0u, 0x4F435257u, "unknown not lowered yet"); return;
L_08B2DDF4:
    rt.unsupported(0x08B2DDF4u, 0x0045544Eu, "special? not lowered yet"); return;
L_08B2DDF8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.lo = ctx.gpr[2];
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 84u, 0x08B3F314u>(ctx, &aot_mem); return;
    }
    goto L_08B2DE00;
L_08B2DE00:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[8] = (ctx.gpr[3] >> 5u);
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 85u, 0x08B3F31Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DE08;
L_08B2DE04:
    ctx.gpr[8] = (ctx.gpr[3] >> 5u);
    goto L_08B2DE08;
L_08B2DE08:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[8] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 86u, 0x08B3F324u>(ctx, &aot_mem); return;
    }
    goto L_08B2DE10;
L_08B2DE10:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[15]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 87u, 0x08B3F32Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DE18;
L_08B2DE14:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[15]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    goto L_08B2DE18;
L_08B2DE18:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.lo = ctx.gpr[2];
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 88u, 0x08B3F334u>(ctx, &aot_mem); return;
    }
    goto L_08B2DE20;
L_08B2DE20:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DE24u, 0x0056414Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 89u, 0x08B3F33Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DE28;
L_08B2DE24:
    rt.unsupported(0x08B2DE24u, 0x0056414Eu, "special? not lowered yet"); return;
L_08B2DE28:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DE2Cu, 0x00324154u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 90u, 0x08B3F344u>(ctx, &aot_mem); return;
    }
    goto L_08B2DE30;
L_08B2DE30:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DE34u, 0x00314154u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 91u, 0x08B3F34Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DE38;
L_08B2DE38:
    rt.unsupported(0x08B2DE3Cu, 0x0032454Cu, "control flow in delay slot"); return;
L_08B2DE40:
    rt.unsupported(0x08B2DE44u, 0x0031454Cu, "control flow in delay slot"); return;
L_08B2DE44:
    rt.unsupported(0x08B2DE44u, 0x0031454Cu, "syscall not lowered yet"); return;
L_08B2DE48:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[1]) >> 1u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 94u, 0x08B3F364u>(ctx, &aot_mem); return;
    }
    goto L_08B2DE50;
L_08B2DE50:
    rt.unsupported(0x08B2DE50u, 0x4E414843u, "unknown not lowered yet"); return;
L_08B2DE58:
    ctx.execute_vfpu_compare3(117u, 110u, 108u, 1u, 6u);
    rt.unsupported(0x08B2DE5Cu, 0x6E696461u, "vfpu3 not lowered yet"); return;
L_08B2DE68:
    rt.unsupported(0x08B2DE68u, 0x20646E65u, "unknown not lowered yet"); return;
L_08B2DE6C:
    rt.unsupported(0x08B2DE6Cu, 0x74786574u, "unknown not lowered yet"); return;
L_08B2DE78:
    rt.unsupported(0x08B2DE78u, 0x45455246u, "cop1? not lowered yet"); return;
L_08B2DE8C:
    rt.unsupported(0x08B2DE8Cu, 0x4F52474Bu, "unknown not lowered yet"); return;
L_08B2DE98:
    rt.unsupported(0x08B2DE98u, 0x6E6F7266u, "vfpu3 not lowered yet"); return;
L_08B2DEA4:
    rt.unsupported(0x08B2DEA4u, 0x6E6F7266u, "vfpu3 not lowered yet"); return;
L_08B2DEB0:
    rt.unsupported(0x08B2DEB0u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B2DEB8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 95u, 0x08B3F3D4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DEC0;
L_08B2DEC0:
    if (ctx.gpr[26] == ctx.gpr[4]) {
    rt.unsupported(0x08B2DEC4u, 0x0042545Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 96u, 0x08B3F3DCu>(ctx, &aot_mem); return;
    }
    goto L_08B2DEC8;
L_08B2DEC8:
    rt.unsupported(0x08B2DEC8u, 0x4C414D53u, "unknown not lowered yet"); return;
L_08B2DED4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DED8u, 0x45545942u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 99u, 0x08B3F420u>(ctx, &aot_mem); return;
    }
    goto L_08B2DEDC;
L_08B2DEDC:
    rt.unsupported(0x08B2DEDCu, 0x203D2053u, "unknown not lowered yet"); return;
L_08B2DEE4:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 4u, 0x08B403F4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DEEC;
L_08B2DEEC:
    if (ctx.gpr[2] == ctx.gpr[31]) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 101u, 0x08B3F428u>(ctx, &aot_mem); return;
    }
    goto L_08B2DEF4;
L_08B2DEF0:
    rt.memory().memory_barrier();
    goto L_08B2DEF4;
L_08B2DEF4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<83u, 1u>(vfpu_d); }
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 97u, 0x08B3F410u>(ctx, &aot_mem); return;
    }
    goto L_08B2DEFC;
L_08B2DEFC:
    // nop
    goto L_08B2DF00;
L_08B2DF00:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.lo = 0u;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 98u, 0x08B3F41Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DF08;
L_08B2DF08:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[19] << (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 100u, 0x08B3F424u>(ctx, &aot_mem); return;
    }
    goto L_08B2DF10;
L_08B2DF10:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 102u, 0x08B3F42Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DF18;
L_08B2DF18:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[16] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 103u, 0x08B3F434u>(ctx, &aot_mem); return;
    }
    goto L_08B2DF20;
L_08B2DF20:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[17] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 104u, 0x08B3F43Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DF28;
L_08B2DF28:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[18] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 105u, 0x08B3F444u>(ctx, &aot_mem); return;
    }
    goto L_08B2DF30;
L_08B2DF30:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[19] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 106u, 0x08B3F44Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DF38;
L_08B2DF34:
    ctx.gpr[9] = (ctx.gpr[19] >> (ctx.gpr[1] & 31u));
    goto L_08B2DF38;
L_08B2DF38:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[20] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 107u, 0x08B3F454u>(ctx, &aot_mem); return;
    }
    goto L_08B2DF40;
L_08B2DF40:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[21] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 108u, 0x08B3F45Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DF48;
L_08B2DF48:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[22] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 109u, 0x08B3F464u>(ctx, &aot_mem); return;
    }
    goto L_08B2DF50;
L_08B2DF50:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[23] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 110u, 0x08B3F46Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DF58;
L_08B2DF58:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[24] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 111u, 0x08B3F474u>(ctx, &aot_mem); return;
    }
    goto L_08B2DF60;
L_08B2DF60:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[25] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 112u, 0x08B3F47Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DF68;
L_08B2DF68:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 113u, 0x08B3F484u>(ctx, &aot_mem); return;
    }
    goto L_08B2DF70;
L_08B2DF70:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DF74u, 0x0000414Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 114u, 0x08B3F48Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DF78;
L_08B2DF78:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 25u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 115u, 0x08B3F494u>(ctx, &aot_mem); return;
    }
    goto L_08B2DF80;
L_08B2DF7C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 25u));
    goto L_08B2DF80;
L_08B2DF80:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 25u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 116u, 0x08B3F49Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2DF88;
L_08B2DF88:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[8] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 117u, 0x08B3F4A4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DF90;
L_08B2DF90:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[8] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 118u, 0x08B3F4ACu>(ctx, &aot_mem); return;
    }
    goto L_08B2DF98;
L_08B2DF98:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 119u, 0x08B3F4B4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DFA0;
L_08B2DF9C:
    rt.memory().memory_barrier();
    goto L_08B2DFA0;
L_08B2DFA0:
    rt.unsupported(0x08B2DFA4u, 0x00434E49u, "control flow in delay slot"); return;
L_08B2DFA8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (0u << (0u & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 121u, 0x08B3F4C4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DFB0;
L_08B2DFB0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DFB4u, 0x00005341u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 122u, 0x08B3F4CCu>(ctx, &aot_mem); return;
    }
    goto L_08B2DFB8;
L_08B2DFB8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[2]) * static_cast<std::uint64_t>(ctx.gpr[19]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 123u, 0x08B3F4D4u>(ctx, &aot_mem); return;
    }
    goto L_08B2DFC0;
L_08B2DFC0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B2DFC4u, 0x00004F4Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 124u, 0x08B3F4DCu>(ctx, &aot_mem); return;
    }
    goto L_08B2DFC8;
L_08B2DFC8:
    rt.unsupported(0x08B2DFC8u, 0x4D495243u, "unknown not lowered yet"); return;
L_08B2DFD0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[11]) < 9512 ? 1u : 0u);
    goto L_08B2DFD4;
L_08B2DFD4:
    // nop
    goto L_08B2DFD8;
L_08B2DFD8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2DFDCu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2DFF4:
    rt.unsupported(0x08B2DFF4u, 0x4F4C4C41u, "unknown not lowered yet"); return;
L_08B2E008:
    rt.unsupported(0x08B2E008u, 0x4B434142u, "cop2/vfpu not lowered yet"); return;
L_08B2E014:
    rt.unsupported(0x08B2E014u, 0x00000A69u, "special? not lowered yet"); return;
L_08B2E018:
    rt.unsupported(0x08B2E018u, 0x00647568u, "special? not lowered yet"); return;
L_08B2E01C:
    rt.unsupported(0x08B2E01Cu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B2E02C:
    // nop
    rt.unsupported(0x08B2E034u, 0x08AD8858u, "control flow in delay slot"); return;
L_08B2E034:
    rt.unsupported(0x08B2E038u, 0x08AD8894u, "control flow in delay slot"); return;
L_08B2E054:
    rt.unsupported(0x08B2E058u, 0x08AD8974u, "control flow in delay slot"); return;
L_08B2E078:
    rt.unsupported(0x08B2E07Cu, 0x08ADA130u, "control flow in delay slot"); return;
L_08B2E09C:
    rt.unsupported(0x08B2E0A0u, 0x08ADA228u, "control flow in delay slot"); return;
L_08B2E0A0:
    rt.unsupported(0x08B2E0A4u, 0x08ADA228u, "control flow in delay slot"); return;
L_08B2E0C0:
    rt.unsupported(0x08B2E0C4u, 0x08ADA228u, "control flow in delay slot"); return;
L_08B2E0E0:
    rt.unsupported(0x08B2E0E4u, 0x08ADA228u, "control flow in delay slot"); return;
L_08B2E100:
    rt.unsupported(0x08B2E104u, 0x08ADD144u, "control flow in delay slot"); return;
L_08B2E124:
    rt.unsupported(0x08B2E128u, 0x08ADD1D8u, "control flow in delay slot"); return;
L_08B2E148:
    rt.unsupported(0x08B2E14Cu, 0x08ADD400u, "control flow in delay slot"); return;
L_08B2E150:
    rt.unsupported(0x08B2E154u, 0x08ADD47Cu, "control flow in delay slot"); return;
L_08B2E16C:
    rt.unsupported(0x08B2E170u, 0x08ADD47Cu, "control flow in delay slot"); return;
L_08B2E18C:
    rt.unsupported(0x08B2E190u, 0x08ADD484u, "control flow in delay slot"); return;
L_08B2E190:
    rt.unsupported(0x08B2E194u, 0x08ADD484u, "control flow in delay slot"); return;
L_08B2E1B4:
    rt.unsupported(0x08B2E1B8u, 0x08ADD484u, "control flow in delay slot"); return;
L_08B2E1D8:
    rt.unsupported(0x08B2E1DCu, 0x08ADD484u, "control flow in delay slot"); return;
L_08B2E1F8:
    rt.unsupported(0x08B2E1FCu, 0x08ADD814u, "control flow in delay slot"); return;
L_08B2E21C:
    rt.unsupported(0x08B2E220u, 0x08ADD814u, "control flow in delay slot"); return;
L_08B2E220:
    // nop
    ctx.pc = 0x02B76050u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B2E240:
    rt.unsupported(0x08B2E244u, 0x08ADE4B0u, "control flow in delay slot"); return;
L_08B2E264:
    rt.unsupported(0x08B2E268u, 0x08ADE2A4u, "control flow in delay slot"); return;
L_08B2E288:
    rt.unsupported(0x08B2E28Cu, 0x08ADE3B4u, "control flow in delay slot"); return;
L_08B2E2A4:
    rt.unsupported(0x08B2E2A8u, 0x08ADE4B0u, "control flow in delay slot"); return;
L_08B2E2C4:
    rt.unsupported(0x08B2E2C8u, 0x08ADE3C4u, "control flow in delay slot"); return;
L_08B2E2C8:
    // nop
    ctx.pc = 0x02B78F10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B2E2E8:
    rt.unsupported(0x08B2E2ECu, 0x08ADEF64u, "control flow in delay slot"); return;
L_08B2E30C:
    rt.unsupported(0x08B2E310u, 0x08ADF174u, "control flow in delay slot"); return;
L_08B2E32C:
    rt.unsupported(0x08B2E330u, 0x08ADF6A4u, "control flow in delay slot"); return;
L_08B2E350:
    rt.unsupported(0x08B2E354u, 0x08AE1A24u, "control flow in delay slot"); return;
L_08B2E374:
    rt.unsupported(0x08B2E378u, 0x08AE1DACu, "control flow in delay slot"); return;
L_08B2E398:
    rt.unsupported(0x08B2E39Cu, 0x08AE1DACu, "control flow in delay slot"); return;
L_08B2E3B8:
    rt.unsupported(0x08B2E3BCu, 0x08AE1DACu, "control flow in delay slot"); return;
L_08B2E3D8:
    rt.unsupported(0x08B2E3DCu, 0x08AE1DACu, "control flow in delay slot"); return;
L_08B2E3FC:
    rt.unsupported(0x08B2E400u, 0x08AE0D08u, "control flow in delay slot"); return;
L_08B2E418:
    rt.unsupported(0x08B2E41Cu, 0x08AE251Cu, "control flow in delay slot"); return;
L_08B2E434:
    rt.unsupported(0x08B2E438u, 0x08AE2408u, "control flow in delay slot"); return;
L_08B2E454:
    rt.unsupported(0x08B2E458u, 0x08AE2560u, "control flow in delay slot"); return;
L_08B2E470:
    rt.unsupported(0x08B2E474u, 0x08AE2474u, "control flow in delay slot"); return;
L_08B2E490:
    rt.unsupported(0x08B2E494u, 0x08AE2560u, "control flow in delay slot"); return;
L_08B2E49C:
    rt.unsupported(0x08B2E4A0u, 0x08AE251Cu, "control flow in delay slot"); return;
L_08B2E4B4:
    // nop
    rt.unsupported(0x08B2E4BCu, 0x08AE25C0u, "control flow in delay slot"); return;
L_08B2E4D8:
    rt.unsupported(0x08B2E4DCu, 0x08AE25E4u, "control flow in delay slot"); return;
L_08B2E4FC:
    rt.unsupported(0x08B2E500u, 0x08AE25E4u, "control flow in delay slot"); return;
L_08B2E520:
    rt.unsupported(0x08B2E524u, 0x08AE25E4u, "control flow in delay slot"); return;
L_08B2E53C:
    rt.unsupported(0x08B2E540u, 0x08AE25C0u, "control flow in delay slot"); return;
L_08B2E550:
    // nop
    ctx.pc = 0x02B89700u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B2E558:
    rt.unsupported(0x08B2E558u, 0x74726170u, "unknown not lowered yet"); return;
L_08B2E564:
    rt.unsupported(0x08B2E564u, 0x74726170u, "unknown not lowered yet"); return;
L_08B2E598:
    rt.unsupported(0x08B2E598u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B2E5A0:
    rt.unsupported(0x08B2E5A0u, 0x454E4F42u, "cop1? not lowered yet"); return;
L_08B2E5A8:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B2E5ACu, 0x004E4941u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 63u, 0x08B3EAB8u>(ctx, &aot_mem); return;
    }
    goto L_08B2E5B0;
L_08B2E5B0:
    rt.unsupported(0x08B2E5B0u, 0x48534143u, "cop2/vfpu not lowered yet"); return;
L_08B2E5B8:
    if (ctx.gpr[2] != ctx.gpr[14]) {
    ctx.gpr[8] = (ctx.gpr[14] >> 5u);
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 62u, 0x08B422C8u>(ctx, &aot_mem); return;
    }
    goto L_08B2E5C0;
L_08B2E5C0:
    if (static_cast<std::int32_t>(ctx.gpr[18]) <= 0) {
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[1]) * static_cast<std::uint64_t>(ctx.gpr[25]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 109u, 0x08B42ED0u>(ctx, &aot_mem); return;
    }
    goto L_08B2E5C8;
L_08B2E5C8:
    if (ctx.gpr[2] != ctx.gpr[20]) {
    rt.unsupported(0x08B2E5CCu, 0x00545345u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 130u, 0x08B43AD8u>(ctx, &aot_mem); return;
    }
    goto L_08B2E5D0;
L_08B2E5D0:
    rt.unsupported(0x08B2E5D0u, 0x44414544u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B2E5D4u, 0x0000594Cu, "syscall not lowered yet"); return;
L_08B2E5D8:
    if (ctx.gpr[2] == ctx.gpr[14]) {
    ctx.gpr[9] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 65u, 0x08B422ECu>(ctx, &aot_mem); return;
    }
    goto L_08B2E5E0;
L_08B2E5DC:
    ctx.gpr[9] = (ctx.lo);
    goto L_08B2E5E0;
L_08B2E5E0:
    if (ctx.gpr[18] != ctx.gpr[9]) {
    rt.unsupported(0x08B2E5E4u, 0x00524D4Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 110u, 0x08B42EF4u>(ctx, &aot_mem); return;
    }
    goto L_08B2E5E8;
L_08B2E5E8:
    rt.unsupported(0x08B2E5E8u, 0x43454C45u, "unknown not lowered yet"); return;
L_08B2E5F0:
    rt.unsupported(0x08B2E5F0u, 0x414E4946u, "unknown not lowered yet"); return;
L_08B2E5F8:
    rt.unsupported(0x08B2E5F8u, 0x414E4946u, "unknown not lowered yet"); return;
L_08B2E600:
    if (ctx.gpr[26] == ctx.gpr[13]) {
    ctx.gpr[8] = (static_cast<std::uint32_t>(std::countl_one(ctx.gpr[2])));
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 67u, 0x08B42324u>(ctx, &aot_mem); return;
    }
    goto L_08B2E608;
L_08B2E608:
    rt.unsupported(0x08B2E60Cu, 0x004C4548u, "control flow in delay slot"); return;
L_08B2E610:
    rt.unsupported(0x08B2E610u, 0x4E44494Bu, "unknown not lowered yet"); return;
L_08B2E618:
    rt.unsupported(0x08B2E618u, 0x444E414Cu, "unsupported CFC1 control register"); return;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[2] & 31u)));
    goto L_08B2E620;
L_08B2E620:
    rt.unsupported(0x08B2E620u, 0x47524F4Du, "cop1? not lowered yet"); return;
L_08B2E628:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    ctx.gpr[9] = (ctx.gpr[19] << (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 136u, 0x08B43F68u>(ctx, &aot_mem); return;
    }
    goto L_08B2E630;
L_08B2E630:
    rt.unsupported(0x08B2E630u, 0x4A465552u, "cop2/vfpu not lowered yet"); return;
L_08B2E638:
    rt.unsupported(0x08B2E638u, 0x4F594153u, "unknown not lowered yet"); return;
L_08B2E640:
    rt.unsupported(0x08B2E640u, 0x49434953u, "cop2/vfpu not lowered yet"); return;
L_08B2E648:
    rt.unsupported(0x08B2E648u, 0x4F454854u, "unknown not lowered yet"); return;
L_08B2E650:
    if (ctx.gpr[18] == ctx.gpr[20]) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 39u, 0x08B41F78u>(ctx, &aot_mem); return;
    }
    goto L_08B2E658;
L_08B2E658:
    rt.unsupported(0x08B2E658u, 0x414E4946u, "unknown not lowered yet"); return;
L_08B2E660:
    rt.unsupported(0x08B2E660u, 0x6B6F6F6Cu, "unknown not lowered yet"); return;
L_08B2E684:
    if (static_cast<std::int32_t>(ctx.gpr[18]) <= 0) {
    rt.unsupported(0x08B2E688u, 0x46202141u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 132u, 0x08B43BA8u>(ctx, &aot_mem); return;
    }
    goto L_08B2E68C;
L_08B2E68C:
    rt.unsupported(0x08B2E68Cu, 0x444E554Fu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B2E690u, 0x74756320u, "unknown not lowered yet"); return;
L_08B2E6A8:
    rt.unsupported(0x08B2E6A8u, 0x20544F4Eu, "unknown not lowered yet"); return;
L_08B2E6C8:
    rt.unsupported(0x08B2E6C8u, 0x696D694Cu, "unknown not lowered yet"); return;
L_08B2E6EC:
    ctx.execute_vfpu_vscl_ct<71u, 105u, 118u, 1u>();
    rt.unsupported(0x08B2E6F0u, 0x74756320u, "unknown not lowered yet"); return;
L_08B2E704:
    rt.unsupported(0x08B2E704u, 0x4D494E41u, "unknown not lowered yet"); return;
L_08B2E710:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    goto L_08B2E714;
L_08B2E714:
    rt.unsupported(0x08B2E714u, 0x492E7325u, "cop2/vfpu not lowered yet"); return;
L_08B2E71C:
    rt.unsupported(0x08B2E71Cu, 0x00006272u, "special? not lowered yet"); return;
L_08B2E720:
    rt.unsupported(0x08B2E720u, 0x442E7325u, "cop1? not lowered yet"); return;
L_08B2E730:
    rt.unsupported(0x08B2E730u, 0x616E6966u, "vfpu0 not lowered yet"); return;
L_08B2E738:
    ctx.gpr[5] = (ctx.gpr[1] ^ ctx.gpr[5]);
    goto L_08B2E73C;
L_08B2E73C:
    rt.unsupported(0x08B2E73Cu, 0x432E7325u, "unknown not lowered yet"); return;
L_08B2E744:
    ctx.gpr[13] = (ctx.gpr[3] | ctx.gpr[4]);
    goto L_08B2E748;
L_08B2E748:
    ctx.execute_vfpu_compare3(105u, 110u, 102u, 1u, 6u);
    // nop
    goto L_08B2E750;
L_08B2E750:
    ctx.execute_vfpu_vscl_ct<109u, 111u, 100u, 1u>();
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B2E758;
L_08B2E758:
    rt.unsupported(0x08B2E758u, 0x74786574u, "unknown not lowered yet"); return;
L_08B2E760:
    ctx.execute_vfpu_compare3(117u, 110u, 99u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<109u, 112u, 114u, 1u>();
    rt.unsupported(0x08B2E768u, 0x00007373u, "special? not lowered yet"); return;
L_08B2E76C:
    rt.unsupported(0x08B2E76Cu, 0x61747461u, "vfpu0 not lowered yet"); return;
L_08B2E774:
    ctx.execute_vfpu_compare3(114u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B2E778u, 0x00006576u, "special? not lowered yet"); return;
L_08B2E77C:
    ctx.execute_vfpu_vhdp(112u, 101u, 102u, 1u);
    ctx.gpr[12] = (ctx.gpr[3] | ctx.gpr[20]);
    goto L_08B2E784;
L_08B2E784:
    rt.unsupported(0x08B2E784u, 0x72747865u, "unknown not lowered yet"); return;
L_08B2E790:
    ctx.gpr[12] = (0u | 0u);
    goto L_08B2E794;
L_08B2E794:
    rt.unsupported(0x08B2E794u, 0x7366666Fu, "unknown not lowered yet"); return;
L_08B2E79C:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(26149));
    ctx.execute_vfpu_vhdp(102u, 32u, 37u, 1u);
    // nop
    goto L_08B2E7A8;
L_08B2E7A8:
    { const bool signed_ok = ctx.execute_signed_add(5u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B2E7A8u, 0x00002C20u); return; } }
    goto L_08B2E7AC;
L_08B2E7AC:
    ctx.gpr[12] = (ctx.gpr[9] + static_cast<std::uint32_t>(25637));
    rt.unsupported(0x08B2E7B0u, 0x73252C64u, "unknown not lowered yet"); return;
L_08B2E7B8:
    ctx.gpr[12] = (ctx.gpr[9] + static_cast<std::uint32_t>(25637));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<44u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_d); }
    // nop
    goto L_08B2E7C4;
L_08B2E7C4:
    ctx.gpr[12] = (ctx.gpr[9] + static_cast<std::uint32_t>(26149));
    ctx.execute_vfpu_vhdp(102u, 44u, 37u, 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[3]) > static_cast<std::int32_t>(ctx.gpr[19]) ? ctx.gpr[3] : ctx.gpr[19]);
    goto L_08B2E7D0;
L_08B2E7D0:
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B2E7D4;
L_08B2E7D4:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    ctx.gpr[15] = (0u + 0u);
    goto L_08B2E7DC;
L_08B2E7DC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2E7E0u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2E7F4:
    rt.unsupported(0x08B2E7F4u, 0x73747543u, "unknown not lowered yet"); return;
L_08B2E858:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B2E85Cu, 0x00000020u); return; } }
    (void)(0u << 16u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(0u + static_cast<std::uint32_t>(0))))));
    goto L_08B2E868;
L_08B2E868:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B2E86Cu, 0x00000020u); return; } }
    (void)(0u << 16u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(0u + static_cast<std::uint32_t>(0))))));
    goto L_08B2E878;
L_08B2E878:
    rt.unsupported(0x08B2E878u, 0x72657375u, "unknown not lowered yet"); return;
L_08B2E884:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    goto L_08B2E888;
L_08B2E888:
    rt.unsupported(0x08B2E888u, 0x6978655Fu, "unknown not lowered yet"); return;
L_08B2E890:
    rt.unsupported(0x08B2E890u, 0x6362696Cu, "vfpu0 not lowered yet"); return;
L_08B2E8BC:
    rt.unsupported(0x08B2E8C0u, 0x72657355u, "unknown not lowered yet"); return;
    ctx.pc = 0x02BA9A80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B2E8C0:
    rt.unsupported(0x08B2E8C0u, 0x72657355u, "unknown not lowered yet"); return;
L_08B2E8D0:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    // nop
    goto L_08B2E8D8;
L_08B2E8D8:
    rt.unsupported(0x08B2E8D8u, 0x676E750Au, "vfpu1 not lowered yet"); return;
L_08B2E8DC:
    rt.unsupported(0x08B2E8DCu, 0x20637465u, "unknown not lowered yet"); return;
L_08B2E94C:
    rt.unsupported(0x08B2E950u, 0x08AEBFA8u, "control flow in delay slot"); return;
L_08B2EA48:
    rt.unsupported(0x08B2EA4Cu, 0x08AEBFA8u, "control flow in delay slot"); return;
L_08B2EAD4:
    rt.unsupported(0x08B2EAD8u, 0x08AEBF20u, "control flow in delay slot"); return;
L_08B2EAF8:
    rt.unsupported(0x08B2EAFCu, 0x08AEBFA8u, "control flow in delay slot"); return;
L_08B2EB78:
    ctx.gpr[1] = (0u & 0u);
    // nop
    goto L_08B2EB80;
L_08B2EB80:
    rt.unsupported(0x08B2EB80u, 0x4A532D43u, "cop2/vfpu not lowered yet"); return;
L_08B2EB8C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 9u));
    rt.unsupported(0x08B2EB90u, 0x494A2D43u, "cop2/vfpu not lowered yet"); return;
L_08B2EBA0:
    rt.unsupported(0x08B2EBA4u, 0x08AED164u, "control flow in delay slot"); return;
L_08B2EBAC:
    rt.unsupported(0x08B2EBB0u, 0x08AED078u, "control flow in delay slot"); return;
L_08B2EBB8:
    rt.unsupported(0x08B2EBB8u, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B2EBC4:
    rt.unsupported(0x08B2EBC4u, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B2EBE0:
    rt.unsupported(0x08B2EBE0u, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B2EBF0:
    ctx.execute_vfpu_vscl_ct<73u, 110u, 116u, 1u>();
    rt.unsupported(0x08B2EBF4u, 0x70757272u, "unknown not lowered yet"); return;
L_08B2EC08:
    rt.unsupported(0x08B2EC08u, 0x204F2F49u, "unknown not lowered yet"); return;
L_08B2EC14:
    rt.unsupported(0x08B2EC14u, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B2EC1C:
    rt.unsupported(0x08B2EC1Cu, 0x69766564u, "unknown not lowered yet"); return;
L_08B2EC30:
    rt.unsupported(0x08B2EC30u, 0x20677241u, "unknown not lowered yet"); return;
L_08B2EC44:
    rt.unsupported(0x08B2EC44u, 0x63657845u, "vfpu0 not lowered yet"); return;
L_08B2EC58:
    rt.unsupported(0x08B2EC58u, 0x20646142u, "unknown not lowered yet"); return;
L_08B2EC68:
    rt.unsupported(0x08B2EC68u, 0x63206F4Eu, "vfpu0 not lowered yet"); return;
L_08B2EC74:
    ctx.execute_vfpu_vminmax(78u, 111u, 32u, 1u, false);
    rt.unsupported(0x08B2EC78u, 0x2065726Fu, "unknown not lowered yet"); return;
L_08B2EC88:
    rt.unsupported(0x08B2EC88u, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B2EC9C:
    ctx.execute_vfpu_vminmax(80u, 101u, 114u, 1u, false);
    rt.unsupported(0x08B2ECA0u, 0x69737369u, "unknown not lowered yet"); return;
L_08B2ECB0:
    rt.unsupported(0x08B2ECB0u, 0x20646142u, "unknown not lowered yet"); return;
L_08B2ECBC:
    rt.unsupported(0x08B2ECBCu, 0x636F6C42u, "vfpu0 not lowered yet"); return;
L_08B2ECD4:
    rt.unsupported(0x08B2ECD4u, 0x69766544u, "unknown not lowered yet"); return;
L_08B2ECEC:
    ctx.execute_vfpu_vscl_ct<70u, 105u, 108u, 1u>();
    rt.unsupported(0x08B2ECF0u, 0x69786520u, "unknown not lowered yet"); return;
L_08B2ECF8:
    rt.unsupported(0x08B2ECF8u, 0x736F7243u, "unknown not lowered yet"); return;
L_08B2ED0C:
    rt.unsupported(0x08B2ED0Cu, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B2ED1C:
    rt.unsupported(0x08B2ED1Cu, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B2ED2C:
    rt.unsupported(0x08B2ED2Cu, 0x61207349u, "vfpu0 not lowered yet"); return;
L_08B2ED30:
    rt.unsupported(0x08B2ED30u, 0x72696420u, "unknown not lowered yet"); return;
L_08B2ED3C:
    rt.unsupported(0x08B2ED3Cu, 0x61766E49u, "vfpu0 not lowered yet"); return;
L_08B2ED4C:
    // nop
    goto L_08B2ED50;
L_08B2ED50:
    rt.unsupported(0x08B2ED50u, 0x206F6F54u, "unknown not lowered yet"); return;
L_08B2ED68:
    ctx.execute_vfpu_vscl_ct<121u, 115u, 116u, 1u>();
    goto L_08B2ED6C;
L_08B2ED6C:
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B2ED70;
L_08B2ED70:
    rt.unsupported(0x08B2ED70u, 0x206F6F54u, "unknown not lowered yet"); return;
L_08B2ED84:
    rt.unsupported(0x08B2ED84u, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B2ED9C:
    rt.unsupported(0x08B2ED9Cu, 0x74786554u, "unknown not lowered yet"); return;
L_08B2EDAC:
    ctx.execute_vfpu_vscl_ct<70u, 105u, 108u, 1u>();
    ctx.execute_vfpu_compare3(32u, 116u, 111u, 1u, 6u);
    rt.unsupported(0x08B2EDB4u, 0x72616C20u, "unknown not lowered yet"); return;
L_08B2EDBC:
    rt.unsupported(0x08B2EDBCu, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B2EDD4:
    ctx.execute_vfpu_vscl_ct<73u, 108u, 108u, 1u>();
    rt.unsupported(0x08B2EDD8u, 0x206C6167u, "unknown not lowered yet"); return;
L_08B2EDE4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<82u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<111u, 110u, 1u, 13u>();
    rt.unsupported(0x08B2EDECu, 0x69662079u, "unknown not lowered yet"); return;
L_08B2EDFC:
    rt.unsupported(0x08B2EDFCu, 0x206F6F54u, "unknown not lowered yet"); return;
L_08B2EE0C:
    rt.unsupported(0x08B2EE0Cu, 0x6B6F7242u, "unknown not lowered yet"); return;
L_08B2EE18:
    rt.unsupported(0x08B2EE18u, 0x6874614Du, "unknown not lowered yet"); return;
L_08B2EE28:
    rt.unsupported(0x08B2EE28u, 0x75736552u, "unknown not lowered yet"); return;
L_08B2EE2C:
    rt.unsupported(0x08B2EE2Cu, 0x7420746Cu, "unknown not lowered yet"); return;
L_08B2EE3C:
    ctx.execute_vfpu_vminmax(78u, 111u, 32u, 1u, false);
    rt.unsupported(0x08B2EE40u, 0x61737365u, "vfpu0 not lowered yet"); return;
L_08B2EE58:
    rt.unsupported(0x08B2EE58u, 0x6E656449u, "vfpu3 not lowered yet"); return;
L_08B2EE6C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<68u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2EE70u, 0x6B636F6Cu, "unknown not lowered yet"); return;
L_08B2EE78:
    ctx.execute_vfpu_vcmp_ct<111u, 32u, 1u, 14u>();
    rt.unsupported(0x08B2EE7Cu, 0x006B636Fu, "special? not lowered yet"); return;
L_08B2EE80:
    rt.unsupported(0x08B2EE80u, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B2EE90:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B2EE94u, 0x69206D61u, "unknown not lowered yet"); return;
L_08B2EE98:
    ctx.execute_vfpu_vcmp_ct<99u, 116u, 1u, 15u>();
    ctx.execute_vfpu_vminmax(32u, 116u, 105u, 1u, false);
    rt.unsupported(0x08B2EEA0u, 0x74756F65u, "unknown not lowered yet"); return;
L_08B2EEA8:
    rt.unsupported(0x08B2EEA8u, 0x73206F4Eu, "unknown not lowered yet"); return;
L_08B2EEB4:
    rt.unsupported(0x08B2EEB4u, 0x72756F73u, "unknown not lowered yet"); return;
L_08B2EEBC:
    rt.unsupported(0x08B2EEBCu, 0x6863614Du, "unknown not lowered yet"); return;
L_08B2EEDC:
    rt.unsupported(0x08B2EEDCu, 0x70206F4Eu, "unknown not lowered yet"); return;
L_08B2EEE8:
    ctx.execute_vfpu_compare3(82u, 101u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08B2EEF0u, 0x20736920u, "unknown not lowered yet"); return;
L_08B2EEFC:
    rt.unsupported(0x08B2EEFCu, 0x74726956u, "unknown not lowered yet"); return;
L_08B2EF14:
    ctx.execute_vfpu_vscl_ct<65u, 100u, 118u, 1u>();
    rt.unsupported(0x08B2EF18u, 0x73697472u, "unknown not lowered yet"); return;
L_08B2EF24:
    ctx.execute_vfpu_compare3(83u, 114u, 109u, 1u, 6u);
    goto L_08B2EF28;
L_08B2EF28:
    rt.unsupported(0x08B2EF28u, 0x20746E75u, "unknown not lowered yet"); return;
L_08B2EF34:
    ctx.execute_vfpu_vminmax(67u, 111u, 109u, 1u, false);
    rt.unsupported(0x08B2EF38u, 0x63696E75u, "vfpu0 not lowered yet"); return;
L_08B2EF48:
    rt.unsupported(0x08B2EF48u, 0x746F7250u, "unknown not lowered yet"); return;
L_08B2EF58:
    rt.unsupported(0x08B2EF58u, 0x746C754Du, "unknown not lowered yet"); return;
L_08B2EF68:
    ctx.gpr[12] = (0u | 0u);
    goto L_08B2EF6C;
L_08B2EF6C:
    rt.unsupported(0x08B2EF6Cu, 0x20646142u, "unknown not lowered yet"); return;
L_08B2EF78:
    rt.unsupported(0x08B2EF78u, 0x6E6E6143u, "vfpu3 not lowered yet"); return;
L_08B2EF84:
    rt.unsupported(0x08B2EF84u, 0x20612073u, "unknown not lowered yet"); return;
L_08B2EFA0:
    ctx.execute_vfpu_vscl_ct<65u, 99u, 99u, 1u>();
    rt.unsupported(0x08B2EFA4u, 0x6E697373u, "vfpu3 not lowered yet"); return;
L_08B2EFC8:
    rt.unsupported(0x08B2EFC8u, 0x62696C2Eu, "vfpu0 not lowered yet"); return;
L_08B2EFE8:
    ctx.execute_vfpu_vscl_ct<65u, 116u, 116u, 1u>();
    rt.unsupported(0x08B2EFECu, 0x6974706Du, "unknown not lowered yet"); return;
L_08B2F01C:
    rt.unsupported(0x08B2F01Cu, 0x206D6574u, "unknown not lowered yet"); return;
L_08B2F028:
    rt.unsupported(0x08B2F028u, 0x6E6E6143u, "vfpu3 not lowered yet"); return;
L_08B2F044:
    rt.unsupported(0x08B2F044u, 0x72696420u, "unknown not lowered yet"); return;
L_08B2F050:
    rt.unsupported(0x08B2F050u, 0x636E7546u, "vfpu0 not lowered yet"); return;
L_08B2F06C:
    ctx.execute_vfpu_vminmax(78u, 111u, 32u, 1u, false);
    rt.unsupported(0x08B2F070u, 0x2065726Fu, "unknown not lowered yet"); return;
L_08B2F07C:
    ctx.execute_vfpu_vscl_ct<68u, 105u, 114u, 1u>();
    rt.unsupported(0x08B2F080u, 0x726F7463u, "unknown not lowered yet"); return;
L_08B2F090:
    ctx.execute_vfpu_vscl_ct<70u, 105u, 108u, 1u>();
    rt.unsupported(0x08B2F094u, 0x20726F20u, "unknown not lowered yet"); return;
L_08B2F0AC:
    rt.unsupported(0x08B2F0ACu, 0x206F6F54u, "unknown not lowered yet"); return;
L_08B2F0C4:
    rt.unsupported(0x08B2F0C4u, 0x62206F4Eu, "vfpu0 not lowered yet"); return;
L_08B2F0D4:
    rt.unsupported(0x08B2F0D4u, 0x69617661u, "unknown not lowered yet"); return;
L_08B2F0E0:
    rt.unsupported(0x08B2F0E0u, 0x72646441u, "unknown not lowered yet"); return;
L_08B2F0E8:
    rt.unsupported(0x08B2F0E8u, 0x696D6166u, "unknown not lowered yet"); return;
L_08B2F10C:
    rt.unsupported(0x08B2F10Cu, 0x00796C69u, "special? not lowered yet"); return;
L_08B2F110:
    rt.unsupported(0x08B2F110u, 0x746F7250u, "unknown not lowered yet"); return;
L_08B2F120:
    rt.unsupported(0x08B2F120u, 0x20657079u, "unknown not lowered yet"); return;
L_08B2F130:
    rt.unsupported(0x08B2F130u, 0x6B636F53u, "unknown not lowered yet"); return;
L_08B2F150:
    rt.unsupported(0x08B2F150u, 0x746F7250u, "unknown not lowered yet"); return;
L_08B2F158:
    rt.unsupported(0x08B2F158u, 0x746F6E20u, "unknown not lowered yet"); return;
L_08B2F168:
    ctx.gpr[14] = (ctx.gpr[27] + static_cast<std::uint32_t>(24899));
    ctx.execute_vfpu_vscl_ct<116u, 32u, 115u, 1u>();
    rt.unsupported(0x08B2F170u, 0x6120646Eu, "vfpu0 not lowered yet"); return;
L_08B2F180:
    rt.unsupported(0x08B2F180u, 0x74756873u, "unknown not lowered yet"); return;
L_08B2F18C:
    rt.unsupported(0x08B2F18Cu, 0x6E6E6F43u, "vfpu3 not lowered yet"); return;
L_08B2F19C:
    ctx.gpr[12] = (0u | 0u);
    goto L_08B2F1A0;
L_08B2F1A0:
    rt.unsupported(0x08B2F1A0u, 0x72646441u, "unknown not lowered yet"); return;
L_08B2F1B0:
    rt.unsupported(0x08B2F1B0u, 0x75206E69u, "unknown not lowered yet"); return;
L_08B2F1B8:
    rt.unsupported(0x08B2F1B8u, 0x74666F53u, "unknown not lowered yet"); return;
L_08B2F1C0:
    rt.unsupported(0x08B2F1C0u, 0x75616320u, "unknown not lowered yet"); return;
L_08B2F1DC:
    // nop
    rt.unsupported(0x08B2F1E4u, 0x08AED78Cu, "control flow in delay slot"); return;
L_08B2F1F4:
    rt.unsupported(0x08B2F1F8u, 0x08AED7F0u, "control flow in delay slot"); return;
L_08B2F298:
    rt.unsupported(0x08B2F29Cu, 0x08AEDCF0u, "control flow in delay slot"); return;
L_08B2F29C:
    rt.unsupported(0x08B2F2A0u, 0x08AEDCF0u, "control flow in delay slot"); return;
L_08B2F448:
    rt.unsupported(0x08B2F44Cu, 0x08AEE13Cu, "control flow in delay slot"); return;
L_08B2F460:
    ctx.execute_vfpu_vhdp(45u, 73u, 110u, 1u);
    // nop
    jump_target = ctx.gpr[3];
    ctx.gpr[13] = (0x08B2F470u);
    rt.unsupported(0x08B2F46Cu, 0x004E614Eu, "special? not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B2F470u) goto L_08B2F470;
    return;
L_08B2F470:
    ctx.gpr[18] = (ctx.gpr[25] & 12592u);
    ctx.gpr[22] = (ctx.gpr[25] | 13620u);
    rt.unsupported(0x08B2F478u, 0x62613938u, "vfpu0 not lowered yet"); return;
L_08B2F480:
    // nop
    goto L_08B2F484;
L_08B2F484:
    ctx.execute_vfpu_vcmp_ct<110u, 117u, 1u, 8u>();
    ctx.gpr[5] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B2F48C;
L_08B2F48C:
    ctx.gpr[18] = (ctx.gpr[25] & 12592u);
    ctx.gpr[22] = (ctx.gpr[25] | 13620u);
    rt.unsupported(0x08B2F494u, 0x42413938u, "unknown not lowered yet"); return;
L_08B2F4A0:
    rt.unsupported(0x08B2F4A0u, 0x20677562u, "unknown not lowered yet"); return;
L_08B2F54C:
    // nop
    rt.unsupported(0x08B2F554u, 0x08AF08D4u, "control flow in delay slot"); return;
L_08B2F588:
    rt.unsupported(0x08B2F58Cu, 0x08AF08D4u, "control flow in delay slot"); return;
L_08B2F5C8:
    rt.unsupported(0x08B2F5CCu, 0x08AF08D4u, "control flow in delay slot"); return;
L_08B2F6B8:
    ctx.gpr[18] = (ctx.gpr[25] & 12592u);
    ctx.gpr[22] = (ctx.gpr[25] | 13620u);
    rt.unsupported(0x08B2F6C0u, 0x62613938u, "vfpu0 not lowered yet"); return;
L_08B2F6CC:
    ctx.execute_vfpu_vcmp_ct<110u, 117u, 1u, 8u>();
    ctx.gpr[5] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B2F6D4;
L_08B2F6D4:
    ctx.gpr[18] = (ctx.gpr[25] & 12592u);
    ctx.gpr[22] = (ctx.gpr[25] | 13620u);
    rt.unsupported(0x08B2F6DCu, 0x42413938u, "unknown not lowered yet"); return;
L_08B2F6E8:
    rt.unsupported(0x08B2F6E8u, 0x20677562u, "unknown not lowered yet"); return;
L_08B2F70C:
    rt.unsupported(0x08B2F710u, 0x08AF1DD4u, "control flow in delay slot"); return;
L_08B2F738:
    rt.unsupported(0x08B2F73Cu, 0x08AF17A0u, "control flow in delay slot"); return;
L_08B2F870:
    rt.unsupported(0x08B2F870u, 0x0000002Eu, "special? not lowered yet"); return;
L_08B2F874:
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    rt.unsupported(0x08B2F87Cu, 0x494A2D43u, "cop2/vfpu not lowered yet"); return;
L_08B2F880:
    ctx.lo = 0u;
    rt.unsupported(0x08B2F884u, 0x4A532D43u, "cop2/vfpu not lowered yet"); return;
L_08B2F890:
    rt.unsupported(0x08B2F890u, 0x40C90FDBu, "unknown not lowered yet"); return;
L_08B2F8C0:
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[25]) < 17162 ? 1u : 0u);
    rt.unsupported(0x08B2F8C4u, 0x6E757220u, "vfpu3 not lowered yet"); return;
L_08B2F8D4:
    ctx.execute_vfpu_vminmax(116u, 101u, 114u, 1u, false);
    rt.unsupported(0x08B2F8D8u, 0x74616E69u, "unknown not lowered yet"); return;
L_08B2F90C:
    rt.unsupported(0x08B2F90Cu, 0x75746572u, "unknown not lowered yet"); return;
L_08B2F940:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 116u, 1u>();
    ctx.execute_vfpu_vcmp_ct<110u, 97u, 1u, 2u>();
    goto L_08B2F948;
L_08B2F948:
    rt.unsupported(0x08B2F948u, 0x72726520u, "unknown not lowered yet"); return;
L_08B2F968:
    rt.unsupported(0x08B2F968u, 0x73656420u, "unknown not lowered yet"); return;
L_08B2F980:
    rt.unsupported(0x08B2F980u, 0x0065636Eu, "special? not lowered yet"); return;
L_08B2F984:
    rt.unsupported(0x08B2F984u, 0x6E69616Du, "vfpu3 not lowered yet"); return;
L_08B2F998:
    rt.unsupported(0x08B2F998u, 0x206E6168u, "unknown not lowered yet"); return;
L_08B2F9A4:
    rt.unsupported(0x08B2F9A4u, 0x75702061u, "unknown not lowered yet"); return;
L_08B2F9AC:
    rt.unsupported(0x08B2F9ACu, 0x75747269u, "unknown not lowered yet"); return;
L_08B2F9C0:
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 3u>();
    ctx.gpr[12] = (0u | 0u);
    goto L_08B2F9C8;
L_08B2F9C8:
    rt.unsupported(0x08B2F9C8u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2F9D8:
    rt.unsupported(0x08B2F9D8u, 0x74736163u, "unknown not lowered yet"); return;
L_08B2F9E0:
    rt.unsupported(0x08B2F9E0u, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2F9EC:
    ctx.execute_vfpu_compare3(105u, 100u, 32u, 1u, 6u);
    rt.unsupported(0x08B2F9F0u, 0x61726570u, "vfpu0 not lowered yet"); return;
L_08B2F9FC:
    ctx.execute_vfpu_vscl_ct<102u, 114u, 101u, 1u>();
    rt.unsupported(0x08B2FA00u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2FA04:
    rt.unsupported(0x08B2FA04u, 0x61727261u, "vfpu0 not lowered yet"); return;
L_08B2FA10:
    rt.unsupported(0x08B2FA10u, 0x61636F6Cu, "vfpu0 not lowered yet"); return;
L_08B2FA34:
    rt.unsupported(0x08B2FA34u, 0x203A7325u, "unknown not lowered yet"); return;
L_08B2FA60:
    // nop
    ctx.pc = 0x02BD53F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B2FA80:
    rt.unsupported(0x08B2FA80u, 0x7361635Fu, "unknown not lowered yet"); return;
L_08B2FA90:
    // nop
    // nop
    // nop
    goto L_08B2FA9C;
L_08B2FA9C:
    // nop
    // nop
    // nop
    ctx.gpr[18] = (31068u << 16u);
    (void)(ctx.gpr[3] & 25440u);
    ctx.gpr[20] = (rt.memory().aot_load_word_left(ctx.gpr[11] + static_cast<std::uint32_t>(31614), ctx.gpr[20]));
    ctx.gpr[23] = (ctx.gpr[19] & 34931u);
    goto L_08B2FAB8;
L_08B2FAB8:
    ctx.gpr[18] = (ctx.gpr[17] & 12850u);
    rt.unsupported(0x08B2FABCu, 0x44444A46u, "unsupported CFC1 control register"); return;
    goto L_08B2FAC0;
L_08B2FAC0:
    rt.unsupported(0x08B2FAC0u, 0x62733C00u, "vfpu0 not lowered yet"); return;
L_08B2FACC:
    if (ctx.gpr[27] != ctx.gpr[5]) {
    rt.unsupported(0x08B2FAD0u, 0x4D657661u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 9u, 0x08B4881Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2FAD4;
L_08B2FAD0:
    rt.unsupported(0x08B2FAD0u, 0x4D657661u, "unknown not lowered yet"); return;
L_08B2FAD4:
    ctx.gpr[13] = (ctx.gpr[3] + ctx.gpr[14]);
    ctx.gpr[18] = (31068u << 16u);
    (void)(ctx.gpr[3] & 25440u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(31614))))));
    ctx.gpr[18] = (ctx.gpr[17] & 34163u);
    ctx.gpr[18] = (ctx.gpr[17] & 12850u);
    goto L_08B2FAEC;
L_08B2FAEC:
    rt.unsupported(0x08B2FAECu, 0x44444A46u, "unsupported CFC1 control register"); return;
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FB00;
L_08B2FB00:
    rt.unsupported(0x08B2FB00u, 0x0032FFF9u, "special? not lowered yet"); return;
L_08B2FB0C:
    rt.unsupported(0x08B2FB0Cu, 0x050A0609u, "regimm? not lowered yet"); return;
L_08B2FB2C:
    // nop
    // nop
    // nop
    // nop
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    goto L_08B2FB48;
L_08B2FB48:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<51u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(-936);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<51u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[14] + static_cast<std::uint32_t>(-1328);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    rt.unsupported(0x08B2FB6Cu, 0xF7DDF8D3u, "vfpu not lowered yet"); return;
L_08B2FBC0:
    rt.unsupported(0x08B2FBC0u, 0x40C90FDBu, "unknown not lowered yet"); return;
L_08B2FC34:
    ctx.gpr[9] = (4059u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    // nop
    rt.unsupported(0x08B2FC44u, 0x40F00000u, "unknown not lowered yet"); return;
L_08B2FC60:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FC7C;
L_08B2FC7C:
    // nop
    // nop
    goto L_08B2FC84;
L_08B2FC84:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FCA0;
L_08B2FCA0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FD50;
L_08B2FD50:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FD78;
L_08B2FD78:
    // nop
    // nop
    // nop
    goto L_08B2FD84;
L_08B2FD84:
    // nop
    // nop
    // nop
    goto L_08B2FD90;
L_08B2FD90:
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FDA0;
L_08B2FDA0:
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FDB0;
L_08B2FDB0:
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FDC0;
L_08B2FDC0:
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FDD0;
L_08B2FDD0:
    // nop
    // nop
    // nop
    goto L_08B2FDDC;
L_08B2FDDC:
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FDEC;
L_08B2FDEC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FE08;
L_08B2FE08:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FE40;
L_08B2FE40:
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FE50;
L_08B2FE50:
    // nop
    // nop
    // nop
    goto L_08B2FE5C;
L_08B2FE5C:
    // nop
    // nop
    // nop
    goto L_08B2FE68;
L_08B2FE68:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FE90;
L_08B2FE90:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FEAC;
L_08B2FEAC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FEFC;
L_08B2FEFC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FF58;
L_08B2FF58:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FF84;
L_08B2FF84:
    // nop
    // nop
    // nop
    goto L_08B2FF90;
L_08B2FF90:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FFAC;
L_08B2FFAC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B2FFEC;
L_08B2FFEC:
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x08B30000u; return;
}

void recomp_unit_0202(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0202_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_202(Runtime &runtime) {
    runtime.register_generated_unit(202u, 0x08B2C000u, 16384u, &recomp_unit_0202, &recomp_unit_0202_entry);
    runtime.register_function(0x08B2C000u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C078u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C0D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C0D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C0E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C0ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C124u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C138u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C17Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C184u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C18Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C194u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C19Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C1A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C1A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C1B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C1BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C1D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C1DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C1F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C1FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C200u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C208u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C210u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C218u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C234u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C244u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C254u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C278u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C28Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C294u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C2A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C2B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C2BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C2CCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C2E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C2ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C2F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C300u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C308u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C310u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C318u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C320u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C344u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C34Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C368u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C370u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C390u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C398u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C3A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C3B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C3C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C3D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C3D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C3E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C3F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C410u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C414u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C418u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C420u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C428u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C430u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C434u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C43Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C444u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C44Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C454u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C45Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C464u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C468u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C478u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C498u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C4B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C4C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C4ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C50Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C520u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C534u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C548u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C554u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C56Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C570u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C578u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C580u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C5B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C5CCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C5D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C5E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C5F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C610u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C61Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C708u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C70Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C734u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C76Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C780u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C79Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C7A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C870u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C878u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C898u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C8A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C8D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C990u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C99Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2C9F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA04u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA18u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA44u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA70u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CA9Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAA4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAB0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAC4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CACCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAD4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CAF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB00u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB14u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB4Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB5Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB74u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB88u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CB9Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBB4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBBCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBC4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBD4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBDCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CBFCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC10u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC20u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC44u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC5Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC64u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC74u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC88u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC98u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CC9Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CCC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CCDCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CCECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD04u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD40u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD44u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD54u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD64u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD74u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CD94u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDA4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDB4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDC4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDD8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDE4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDE8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CDF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE00u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE18u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE4Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE54u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE5Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE74u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CE90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CEACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CEBCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CEE4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF00u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF14u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF40u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CF94u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CFB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CFBCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2CFE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D00Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D024u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D06Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D094u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D0F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D100u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D11Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D12Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D138u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D144u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D14Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D154u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D15Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D168u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D16Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D174u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D180u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D18Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D198u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D1A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D1C4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D1E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D21Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D23Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D240u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D268u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D270u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D274u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D294u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D2C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D2D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D2E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D2ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D2FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D310u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D330u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D390u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D398u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D3F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D410u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D424u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D430u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D438u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D44Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D464u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D474u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D478u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D4A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D4B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D4D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D4F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D51Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D524u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D52Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D554u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D568u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D57Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D5ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D5D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D5F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D60Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D630u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D640u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D658u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D67Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D68Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D6A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D6D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D6F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D6F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D708u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D728u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D748u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D764u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D784u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D788u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D790u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D7A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D7B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D7BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D7E4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D7ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D808u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D80Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D838u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D84Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D878u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D89Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D8BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D8D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D8E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D900u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D920u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D93Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D95Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D96Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D970u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D980u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D990u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D9A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D9A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D9B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D9B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D9D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D9DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2D9FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA10u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA24u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DA80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DAA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DAD8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DAE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DAF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB10u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB20u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB34u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB3Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB44u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB4Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB5Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DB98u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBB4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBCCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBD8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DBECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC04u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC18u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC24u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC30u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC3Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC40u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC44u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC5Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC74u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC88u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DC90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCA4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCCCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCE4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCE8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DCF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD00u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD10u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD18u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD20u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD34u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD3Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD44u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD64u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD70u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD88u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DD9Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDA4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDB0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDD8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDDCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDE8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DDF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE00u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE04u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE10u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE14u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE18u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE20u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE24u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE30u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE40u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE44u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DE98u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEA4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEB0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DED4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEDCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEE4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DEFCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF00u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF10u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF18u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF20u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF30u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF34u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF38u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF40u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF70u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF88u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF98u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DF9Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFA0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFB0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFD4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFD8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2DFF4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E008u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E014u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E018u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E01Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E02Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E034u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E054u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E078u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E09Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E0A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E0C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E0E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E100u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E124u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E148u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E150u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E16Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E18Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E190u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E1B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E1D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E1F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E21Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E220u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E240u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E264u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E288u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E2A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E2C4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E2C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E2E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E30Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E32Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E350u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E374u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E398u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E3B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E3D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E3FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E418u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E434u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E454u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E470u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E490u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E49Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E4B4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E4D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E4FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E520u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E53Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E550u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E558u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E564u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E598u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5F0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E5F8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E600u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E608u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E610u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E618u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E620u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E628u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E630u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E638u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E640u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E648u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E650u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E658u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E660u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E684u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E68Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E6A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E6C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E6ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E704u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E710u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E714u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E71Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E720u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E730u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E738u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E73Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E744u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E748u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E750u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E758u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E760u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E76Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E774u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E77Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E784u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E790u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E794u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E79Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E7A8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E7ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E7B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E7C4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E7D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E7D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E7DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E7F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E858u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E868u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E878u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E884u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E888u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E890u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E8BCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E8C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E8D0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E8D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E8DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2E94Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EA48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EAD4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EAF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EB8Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBA0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBC4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBE0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EBF0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC14u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC30u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC44u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC74u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC88u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EC9Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ECB0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ECBCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ECD4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ECECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ECF8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED1Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED30u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED3Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED4Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED70u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2ED9Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EDACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EDBCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EDD4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EDE4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EDFCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE18u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE3Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EE98u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EEA8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EEB4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EEBCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EEDCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EEE8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EEFCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF14u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF24u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF28u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF34u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF6Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EF84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EFA0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EFC8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2EFE8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F01Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F028u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F044u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F050u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F06Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F07Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F090u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F0ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F0C4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F0D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F0E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F0E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F10Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F110u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F120u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F130u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F150u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F158u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F168u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F180u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F18Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F19Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F1A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F1B0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F1B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F1C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F1DCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F1F4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F298u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F29Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F448u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F460u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F470u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F480u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F484u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F48Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F4A0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F54Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F588u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F5C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F6B8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F6CCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F6D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F6E8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F70Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F738u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F870u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F874u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F880u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F890u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F8C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F8D4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F90Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F940u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F948u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F968u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F980u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F984u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F998u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9A4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9ACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9C0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9C8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9D8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9E0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9ECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2F9FCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA04u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA10u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA34u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA80u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FA9Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FAB8u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FAC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FACCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FAD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FAD4u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FAECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FB00u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FB0Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FB2Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FB48u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FBC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FC34u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FC60u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FC7Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FC84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FCA0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FD50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FD78u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FD84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FD90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDA0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDB0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDC0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDD0u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDDCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FDECu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE08u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE40u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE50u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE5Cu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE68u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FE90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FEACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FEFCu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FF58u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FF84u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FF90u, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FFACu, &recomp_unit_0202, "recomp_unit_0202");
    runtime.register_function(0x08B2FFECu, &recomp_unit_0202, "recomp_unit_0202");
}
} // namespace psprecomp
