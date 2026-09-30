#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0107[4096] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 9, 10, 0, 0, 0,
    11, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 18, 0, 19, 0, 0, 20, 0, 21, 0, 0, 0,
    22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 28, 0, 29, 0, 0, 30, 0, 31, 0, 0, 32, 33, 0, 0,
    34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 40, 0, 41, 0, 42, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 46, 0, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 52, 0,
    0, 53, 0, 0, 54, 0, 55, 0, 56, 57, 0, 58, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 67, 0, 68, 69, 0,
    70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0,
    77, 0, 0, 0, 0, 0, 78, 0, 79, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 86, 0,
    0, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 0, 91, 0, 92, 93, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 100, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 0,
    107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 115,
    116, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 120, 121, 0, 122, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 0,
    0, 128, 0, 0, 129, 0, 130, 0, 131, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0,
    137, 0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 146, 147, 0, 0, 148, 0, 149, 0, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 0, 154, 0, 155, 0, 0,
    0, 0, 156, 0, 157, 0, 158, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 164, 0,
    165, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0, 174, 0, 0, 0, 175,
    0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0,
    186, 0, 187, 188, 0, 189, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 200, 0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 204,
    0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 220,
    0, 221, 0, 0, 222, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 229, 0, 230, 0, 0, 0, 231, 0, 232, 0,
    233, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 239, 0, 240, 0, 0, 241, 0, 0,
    242, 0, 0, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    0, 251, 252, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255, 0, 256, 0, 0, 257, 0, 0, 258, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261,
    0, 262, 0, 0, 263, 0, 264, 0, 265, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 273,
    0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 279, 0, 280, 0, 0, 0, 0, 0, 281, 0, 282, 0,
    283, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 287, 288, 0, 289, 0, 0, 0, 290, 291, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0,
    0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0,
    309, 0, 0, 0, 0, 310, 0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 314, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 0, 0, 325,
    0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 333,
    0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0,
    0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0,
    357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 360, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 362, 0, 363, 0, 364, 0, 365, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0,
    370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 383, 384, 0, 0, 0, 0,
    0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0, 0,
    393, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 398, 0, 399,
    0, 0, 0, 0, 0, 400, 401, 0, 0, 402, 0, 403, 0, 0, 0, 404, 0, 405, 0, 0, 0, 406, 0, 407, 0, 408, 0, 0, 0, 0, 409, 0,
    0, 0, 410, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0,
    419, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 425, 0, 426, 0, 0,
    0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431,
    0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0,
    0, 0, 0, 0, 442, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 449,
    0, 450, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 454, 455, 0, 456, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 460, 0, 461, 462, 0, 463, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 466, 0, 467, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482,
    0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 493, 0, 494, 0, 0, 495,
    0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 500, 0, 0, 501, 0, 502, 0, 0, 0, 503, 0, 0,
    0, 0, 504, 0, 0, 505, 0, 506, 0, 0, 0, 507, 0, 0, 508, 0, 0, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 0, 0,
    515, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0,
    523, 0, 0, 0, 524, 0, 0, 525, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 530, 0, 531, 0, 532,
    0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0,
    537, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 540, 0, 541, 0, 0, 0, 542, 0, 0, 543, 0, 544, 0, 0, 545, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 551, 0, 552, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 558, 0, 0,
    0, 559, 0, 560, 0, 561, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 567, 0, 0, 0,
    0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 0, 0,
    0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 579, 580, 0,
    0, 0, 0, 581, 0, 582, 0, 0, 583, 0, 584, 0, 0, 585, 0, 586, 0, 587, 0, 0, 588, 0, 0, 0, 589, 0, 590, 0, 591, 0, 0, 0,
    0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0,
    0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 0,
    0, 0, 603, 0, 0, 604, 0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 614, 0, 615, 0, 616, 0,
    617, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 621, 0, 622, 0, 0,
    0, 623, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 627, 0, 628, 0, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 631, 0,
    632, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 0, 639, 0,
    0, 640, 0, 641, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 0, 645, 0, 646, 0, 0, 647, 0, 0, 648, 0, 0, 0, 649,
    0, 650, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 656, 657, 0, 0, 0, 0, 0, 0,
    658, 0, 0, 659, 0, 0, 660, 0, 0, 661, 662, 0, 663, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0,
    667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 669, 0, 0, 0, 670, 0, 671, 0, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0,
    0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 0,
    0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0,
    0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0,
    0, 0, 698, 0, 699, 0, 700, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 705, 0, 706, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 710, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 716, 717, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0,
    727, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 731, 0, 0, 0, 0,
    0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 737, 0, 0, 0, 738, 0, 739, 0, 740, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0,
    0, 749, 0, 0, 0, 750, 0, 0, 0, 751, 752, 0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 757, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 760, 0, 0,
    761, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 765, 0,
    0, 0, 0, 0, 0, 0, 766, 767, 0, 0, 768, 0, 0, 0, 769, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 772, 0, 0, 0, 0, 0, 773, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0,
    779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 781, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 783, 0, 0, 0, 0, 784, 0, 785, 0,
    0, 0, 0, 0, 0, 786, 0, 787, 0, 788, 0, 789, 0, 0, 0, 790, 0, 791, 0, 792, 0, 793, 0, 794, 0, 795, 0, 0, 0, 796, 0, 797,
    0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 799, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 802, 0, 0, 0, 0, 803, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 806, 0, 807, 0, 808,
    0, 809, 0, 0, 0, 810, 0, 811, 0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0,
    0, 0, 815, 0, 0, 0, 0, 0, 0, 816, 0, 0, 817, 0, 0, 818, 0, 0, 819, 820, 0, 821, 0, 0, 0, 822, 0, 0, 823, 0, 0, 0,
    824, 0, 0, 825, 0, 826, 0, 0, 827, 0, 0, 828, 0, 0, 829, 830, 0, 831, 0, 0, 0, 832, 0, 0, 833, 0, 834, 0, 0, 0, 835, 0,
    0, 836, 0, 837, 0, 838, 0, 0, 0, 839, 0, 0, 840, 0, 0, 0, 841, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843, 0,
    844, 0, 0, 0, 0, 845, 0, 0, 846, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 849, 0,
    0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 852, 0, 853, 0, 854, 0, 855, 0, 0, 856, 0, 0, 0, 857,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 858, 0, 859, 0, 860, 0, 861, 0, 0, 862, 0, 0, 863, 0, 0, 0, 0, 0, 0,
    0, 0, 864, 0, 0, 0, 0, 865, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 868, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 870,
};
void recomp_unit_0107_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089B0000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0107[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B0000;
    case 2u: goto L_089B0008;
    case 3u: goto L_089B001C;
    case 4u: goto L_089B002C;
    case 5u: goto L_089B0040;
    case 6u: goto L_089B004C;
    case 7u: goto L_089B0058;
    case 8u: goto L_089B0064;
    case 9u: goto L_089B006C;
    case 10u: goto L_089B0070;
    case 11u: goto L_089B0080;
    case 12u: goto L_089B0090;
    case 13u: goto L_089B0098;
    case 14u: goto L_089B00A0;
    case 15u: goto L_089B00B4;
    case 16u: goto L_089B00BC;
    case 17u: goto L_089B00CC;
    case 18u: goto L_089B00D4;
    case 19u: goto L_089B00DC;
    case 20u: goto L_089B00E8;
    case 21u: goto L_089B00F0;
    case 22u: goto L_089B0100;
    case 23u: goto L_089B0114;
    case 24u: goto L_089B0124;
    case 25u: goto L_089B012C;
    case 26u: goto L_089B013C;
    case 27u: goto L_089B0144;
    case 28u: goto L_089B0148;
    case 29u: goto L_089B0150;
    case 30u: goto L_089B015C;
    case 31u: goto L_089B0164;
    case 32u: goto L_089B0170;
    case 33u: goto L_089B0174;
    case 34u: goto L_089B0180;
    case 35u: goto L_089B0188;
    case 36u: goto L_089B0190;
    case 37u: goto L_089B01A8;
    case 38u: goto L_089B01CC;
    case 39u: goto L_089B01D4;
    case 40u: goto L_089B01E0;
    case 41u: goto L_089B01E8;
    case 42u: goto L_089B01F0;
    case 43u: goto L_089B0208;
    case 44u: goto L_089B022C;
    case 45u: goto L_089B0230;
    case 46u: goto L_089B0238;
    case 47u: goto L_089B0244;
    case 48u: goto L_089B024C;
    case 49u: goto L_089B0258;
    case 50u: goto L_089B0268;
    case 51u: goto L_089B0274;
    case 52u: goto L_089B0278;
    case 53u: goto L_089B0284;
    case 54u: goto L_089B0290;
    case 55u: goto L_089B0298;
    case 56u: goto L_089B02A0;
    case 57u: goto L_089B02A4;
    case 58u: goto L_089B02AC;
    case 59u: goto L_089B02B0;
    case 60u: goto L_089B02E4;
    case 61u: goto L_089B0318;
    case 62u: goto L_089B0320;
    case 63u: goto L_089B0334;
    case 64u: goto L_089B034C;
    case 65u: goto L_089B0358;
    case 66u: goto L_089B0364;
    case 67u: goto L_089B036C;
    case 68u: goto L_089B0374;
    case 69u: goto L_089B0378;
    case 70u: goto L_089B0380;
    case 71u: goto L_089B0388;
    case 72u: goto L_089B0390;
    case 73u: goto L_089B03B4;
    case 74u: goto L_089B03BC;
    case 75u: goto L_089B03C8;
    case 76u: goto L_089B03F8;
    case 77u: goto L_089B0400;
    case 78u: goto L_089B0418;
    case 79u: goto L_089B0420;
    case 80u: goto L_089B0424;
    case 81u: goto L_089B0438;
    case 82u: goto L_089B0448;
    case 83u: goto L_089B0458;
    case 84u: goto L_089B0460;
    case 85u: goto L_089B0470;
    case 86u: goto L_089B0478;
    case 87u: goto L_089B0488;
    case 88u: goto L_089B0490;
    case 89u: goto L_089B0498;
    case 90u: goto L_089B04A0;
    case 91u: goto L_089B04B0;
    case 92u: goto L_089B04B8;
    case 93u: goto L_089B04BC;
    case 94u: goto L_089B04C8;
    case 95u: goto L_089B04D0;
    case 96u: goto L_089B04D8;
    case 97u: goto L_089B04E8;
    case 98u: goto L_089B04F0;
    case 99u: goto L_089B0528;
    case 100u: goto L_089B052C;
    case 101u: goto L_089B0534;
    case 102u: goto L_089B053C;
    case 103u: goto L_089B0544;
    case 104u: goto L_089B0558;
    case 105u: goto L_089B0564;
    case 106u: goto L_089B056C;
    case 107u: goto L_089B0580;
    case 108u: goto L_089B058C;
    case 109u: goto L_089B0594;
    case 110u: goto L_089B05AC;
    case 111u: goto L_089B05D0;
    case 112u: goto L_089B05E0;
    case 113u: goto L_089B05EC;
    case 114u: goto L_089B05F4;
    case 115u: goto L_089B05FC;
    case 116u: goto L_089B0600;
    case 117u: goto L_089B0610;
    case 118u: goto L_089B061C;
    case 119u: goto L_089B0624;
    case 120u: goto L_089B062C;
    case 121u: goto L_089B0630;
    case 122u: goto L_089B0638;
    case 123u: goto L_089B063C;
    case 124u: goto L_089B0658;
    case 125u: goto L_089B0664;
    case 126u: goto L_089B066C;
    case 127u: goto L_089B0674;
    case 128u: goto L_089B0684;
    case 129u: goto L_089B0690;
    case 130u: goto L_089B0698;
    case 131u: goto L_089B06A0;
    case 132u: goto L_089B06A4;
    case 133u: goto L_089B06AC;
    case 134u: goto L_089B06D0;
    case 135u: goto L_089B06E4;
    case 136u: goto L_089B06F8;
    case 137u: goto L_089B0700;
    case 138u: goto L_089B0710;
    case 139u: goto L_089B071C;
    case 140u: goto L_089B0724;
    case 141u: goto L_089B072C;
    case 142u: goto L_089B0770;
    case 143u: goto L_089B07A8;
    case 144u: goto L_089B07D0;
    case 145u: goto L_089B0810;
    case 146u: goto L_089B0820;
    case 147u: goto L_089B0824;
    case 148u: goto L_089B0830;
    case 149u: goto L_089B0838;
    case 150u: goto L_089B0848;
    case 151u: goto L_089B0850;
    case 152u: goto L_089B0858;
    case 153u: goto L_089B0860;
    case 154u: goto L_089B086C;
    case 155u: goto L_089B0874;
    case 156u: goto L_089B0888;
    case 157u: goto L_089B0890;
    case 158u: goto L_089B0898;
    case 159u: goto L_089B08A0;
    case 160u: goto L_089B08AC;
    case 161u: goto L_089B08BC;
    case 162u: goto L_089B08D8;
    case 163u: goto L_089B08E4;
    case 164u: goto L_089B08F8;
    case 165u: goto L_089B0900;
    case 166u: goto L_089B0914;
    case 167u: goto L_089B0920;
    case 168u: goto L_089B092C;
    case 169u: goto L_089B0934;
    case 170u: goto L_089B093C;
    case 171u: goto L_089B0950;
    case 172u: goto L_089B0958;
    case 173u: goto L_089B0960;
    case 174u: goto L_089B096C;
    case 175u: goto L_089B097C;
    case 176u: goto L_089B0994;
    case 177u: goto L_089B099C;
    case 178u: goto L_089B09A8;
    case 179u: goto L_089B09B4;
    case 180u: goto L_089B09C4;
    case 181u: goto L_089B09CC;
    case 182u: goto L_089B09D4;
    case 183u: goto L_089B09DC;
    case 184u: goto L_089B09EC;
    case 185u: goto L_089B09F8;
    case 186u: goto L_089B0A00;
    case 187u: goto L_089B0A08;
    case 188u: goto L_089B0A0C;
    case 189u: goto L_089B0A14;
    case 190u: goto L_089B0A20;
    case 191u: goto L_089B0A34;
    case 192u: goto L_089B0A44;
    case 193u: goto L_089B0A48;
    case 194u: goto L_089B0A68;
    case 195u: goto L_089B0A7C;
    case 196u: goto L_089B0A90;
    case 197u: goto L_089B0AA4;
    case 198u: goto L_089B0AB0;
    case 199u: goto L_089B0ABC;
    case 200u: goto L_089B0AC4;
    case 201u: goto L_089B0ACC;
    case 202u: goto L_089B0AD8;
    case 203u: goto L_089B0AE0;
    case 204u: goto L_089B0AFC;
    case 205u: goto L_089B0B04;
    case 206u: goto L_089B0B0C;
    case 207u: goto L_089B0B2C;
    case 208u: goto L_089B0B38;
    case 209u: goto L_089B0B64;
    case 210u: goto L_089B0B94;
    case 211u: goto L_089B0B9C;
    case 212u: goto L_089B0BA4;
    case 213u: goto L_089B0BB0;
    case 214u: goto L_089B0BBC;
    case 215u: goto L_089B0BCC;
    case 216u: goto L_089B0BD8;
    case 217u: goto L_089B0BE0;
    case 218u: goto L_089B0BE8;
    case 219u: goto L_089B0BF4;
    case 220u: goto L_089B0BFC;
    case 221u: goto L_089B0C04;
    case 222u: goto L_089B0C10;
    case 223u: goto L_089B0C18;
    case 224u: goto L_089B0C24;
    case 225u: goto L_089B0C30;
    case 226u: goto L_089B0C3C;
    case 227u: goto L_089B0C48;
    case 228u: goto L_089B0C54;
    case 229u: goto L_089B0C58;
    case 230u: goto L_089B0C60;
    case 231u: goto L_089B0C70;
    case 232u: goto L_089B0C78;
    case 233u: goto L_089B0C80;
    case 234u: goto L_089B0C88;
    case 235u: goto L_089B0C94;
    case 236u: goto L_089B0CA0;
    case 237u: goto L_089B0CB8;
    case 238u: goto L_089B0CDC;
    case 239u: goto L_089B0CE0;
    case 240u: goto L_089B0CE8;
    case 241u: goto L_089B0CF4;
    case 242u: goto L_089B0D00;
    case 243u: goto L_089B0D10;
    case 244u: goto L_089B0D18;
    case 245u: goto L_089B0D20;
    case 246u: goto L_089B0D28;
    case 247u: goto L_089B0D30;
    case 248u: goto L_089B0D3C;
    case 249u: goto L_089B0D48;
    case 250u: goto L_089B0D60;
    case 251u: goto L_089B0D84;
    case 252u: goto L_089B0D88;
    case 253u: goto L_089B0D90;
    case 254u: goto L_089B0DA4;
    case 255u: goto L_089B0DB0;
    case 256u: goto L_089B0DB8;
    case 257u: goto L_089B0DC4;
    case 258u: goto L_089B0DD0;
    case 259u: goto L_089B0DD4;
    case 260u: goto L_089B0DEC;
    case 261u: goto L_089B0DFC;
    case 262u: goto L_089B0E04;
    case 263u: goto L_089B0E10;
    case 264u: goto L_089B0E18;
    case 265u: goto L_089B0E20;
    case 266u: goto L_089B0E24;
    case 267u: goto L_089B0E2C;
    case 268u: goto L_089B0E34;
    case 269u: goto L_089B0E3C;
    case 270u: goto L_089B0E44;
    case 271u: goto L_089B0E5C;
    case 272u: goto L_089B0E64;
    case 273u: goto L_089B0E7C;
    case 274u: goto L_089B0E84;
    case 275u: goto L_089B0E94;
    case 276u: goto L_089B0EAC;
    case 277u: goto L_089B0EB4;
    case 278u: goto L_089B0ECC;
    case 279u: goto L_089B0ED0;
    case 280u: goto L_089B0ED8;
    case 281u: goto L_089B0EF0;
    case 282u: goto L_089B0EF8;
    case 283u: goto L_089B0F00;
    case 284u: goto L_089B0F0C;
    case 285u: goto L_089B0F18;
    case 286u: goto L_089B0F24;
    case 287u: goto L_089B0F34;
    case 288u: goto L_089B0F38;
    case 289u: goto L_089B0F40;
    case 290u: goto L_089B0F50;
    case 291u: goto L_089B0F54;
    case 292u: goto L_089B0F5C;
    case 293u: goto L_089B0F68;
    case 294u: goto L_089B0F74;
    case 295u: goto L_089B0F84;
    case 296u: goto L_089B0FC0;
    case 297u: goto L_089B0FCC;
    case 298u: goto L_089B0FDC;
    case 299u: goto L_089B1014;
    case 300u: goto L_089B1038;
    case 301u: goto L_089B1080;
    case 302u: goto L_089B1098;
    case 303u: goto L_089B10A8;
    case 304u: goto L_089B10B4;
    case 305u: goto L_089B10C4;
    case 306u: goto L_089B10D4;
    case 307u: goto L_089B10F0;
    case 308u: goto L_089B10F8;
    case 309u: goto L_089B1100;
    case 310u: goto L_089B1114;
    case 311u: goto L_089B1120;
    case 312u: goto L_089B1128;
    case 313u: goto L_089B1134;
    case 314u: goto L_089B1144;
    case 315u: goto L_089B1148;
    case 316u: goto L_089B1154;
    case 317u: goto L_089B1180;
    case 318u: goto L_089B11AC;
    case 319u: goto L_089B11BC;
    case 320u: goto L_089B11CC;
    case 321u: goto L_089B11D4;
    case 322u: goto L_089B11DC;
    case 323u: goto L_089B11E4;
    case 324u: goto L_089B11EC;
    case 325u: goto L_089B11FC;
    case 326u: goto L_089B1218;
    case 327u: goto L_089B1220;
    case 328u: goto L_089B122C;
    case 329u: goto L_089B123C;
    case 330u: goto L_089B124C;
    case 331u: goto L_089B1258;
    case 332u: goto L_089B1268;
    case 333u: goto L_089B127C;
    case 334u: goto L_089B1298;
    case 335u: goto L_089B12B0;
    case 336u: goto L_089B12F8;
    case 337u: goto L_089B1320;
    case 338u: goto L_089B1328;
    case 339u: goto L_089B1340;
    case 340u: goto L_089B1358;
    case 341u: goto L_089B138C;
    case 342u: goto L_089B13C0;
    case 343u: goto L_089B13F4;
    case 344u: goto L_089B1428;
    case 345u: goto L_089B145C;
    case 346u: goto L_089B1490;
    case 347u: goto L_089B14BC;
    case 348u: goto L_089B14C4;
    case 349u: goto L_089B14E0;
    case 350u: goto L_089B14EC;
    case 351u: goto L_089B1504;
    case 352u: goto L_089B1510;
    case 353u: goto L_089B1530;
    case 354u: goto L_089B154C;
    case 355u: goto L_089B1558;
    case 356u: goto L_089B1574;
    case 357u: goto L_089B1580;
    case 358u: goto L_089B15E4;
    case 359u: goto L_089B15EC;
    case 360u: goto L_089B15F8;
    case 361u: goto L_089B1654;
    case 362u: goto L_089B1658;
    case 363u: goto L_089B1660;
    case 364u: goto L_089B1668;
    case 365u: goto L_089B1670;
    case 366u: goto L_089B1680;
    case 367u: goto L_089B16C0;
    case 368u: goto L_089B16C8;
    case 369u: goto L_089B16F4;
    case 370u: goto L_089B1700;
    case 371u: goto L_089B170C;
    case 372u: goto L_089B1728;
    case 373u: goto L_089B1730;
    case 374u: goto L_089B1738;
    case 375u: goto L_089B1740;
    case 376u: goto L_089B1768;
    case 377u: goto L_089B1770;
    case 378u: goto L_089B1798;
    case 379u: goto L_089B17A8;
    case 380u: goto L_089B17B8;
    case 381u: goto L_089B17C8;
    case 382u: goto L_089B17D8;
    case 383u: goto L_089B17E8;
    case 384u: goto L_089B17EC;
    case 385u: goto L_089B1808;
    case 386u: goto L_089B1818;
    case 387u: goto L_089B1828;
    case 388u: goto L_089B1838;
    case 389u: goto L_089B1850;
    case 390u: goto L_089B1860;
    case 391u: goto L_089B1868;
    case 392u: goto L_089B1870;
    case 393u: goto L_089B1880;
    case 394u: goto L_089B1884;
    case 395u: goto L_089B18C8;
    case 396u: goto L_089B18D4;
    case 397u: goto L_089B18EC;
    case 398u: goto L_089B18F4;
    case 399u: goto L_089B18FC;
    case 400u: goto L_089B1914;
    case 401u: goto L_089B1918;
    case 402u: goto L_089B1924;
    case 403u: goto L_089B192C;
    case 404u: goto L_089B193C;
    case 405u: goto L_089B1944;
    case 406u: goto L_089B1954;
    case 407u: goto L_089B195C;
    case 408u: goto L_089B1964;
    case 409u: goto L_089B1978;
    case 410u: goto L_089B1988;
    case 411u: goto L_089B1990;
    case 412u: goto L_089B1998;
    case 413u: goto L_089B19B4;
    case 414u: goto L_089B19BC;
    case 415u: goto L_089B19C4;
    case 416u: goto L_089B19CC;
    case 417u: goto L_089B19D4;
    case 418u: goto L_089B19DC;
    case 419u: goto L_089B1A00;
    case 420u: goto L_089B1A08;
    case 421u: goto L_089B1A10;
    case 422u: goto L_089B1A44;
    case 423u: goto L_089B1A54;
    case 424u: goto L_089B1A64;
    case 425u: goto L_089B1A6C;
    case 426u: goto L_089B1A74;
    case 427u: goto L_089B1A8C;
    case 428u: goto L_089B1A98;
    case 429u: goto L_089B1ABC;
    case 430u: goto L_089B1AF0;
    case 431u: goto L_089B1AFC;
    case 432u: goto L_089B1B1C;
    case 433u: goto L_089B1B24;
    case 434u: goto L_089B1B40;
    case 435u: goto L_089B1B4C;
    case 436u: goto L_089B1B54;
    case 437u: goto L_089B1B64;
    case 438u: goto L_089B1BB0;
    case 439u: goto L_089B1BD4;
    case 440u: goto L_089B1BD8;
    case 441u: goto L_089B1BF8;
    case 442u: goto L_089B1C10;
    case 443u: goto L_089B1C18;
    case 444u: goto L_089B1C20;
    case 445u: goto L_089B1C38;
    case 446u: goto L_089B1C40;
    case 447u: goto L_089B1C58;
    case 448u: goto L_089B1C70;
    case 449u: goto L_089B1C7C;
    case 450u: goto L_089B1C84;
    case 451u: goto L_089B1C88;
    case 452u: goto L_089B1CA4;
    case 453u: goto L_089B1CB8;
    case 454u: goto L_089B1CC0;
    case 455u: goto L_089B1CC4;
    case 456u: goto L_089B1CCC;
    case 457u: goto L_089B1CD0;
    case 458u: goto L_089B1DC0;
    case 459u: goto L_089B1DD4;
    case 460u: goto L_089B1DDC;
    case 461u: goto L_089B1DE4;
    case 462u: goto L_089B1DE8;
    case 463u: goto L_089B1DF0;
    case 464u: goto L_089B1E1C;
    case 465u: goto L_089B1E30;
    case 466u: goto L_089B1E38;
    case 467u: goto L_089B1E40;
    case 468u: goto L_089B1E44;
    case 469u: goto L_089B1E94;
    case 470u: goto L_089B1EB8;
    case 471u: goto L_089B1EDC;
    case 472u: goto L_089B1EF0;
    case 473u: goto L_089B1F48;
    case 474u: goto L_089B1F60;
    case 475u: goto L_089B1F8C;
    case 476u: goto L_089B1FBC;
    case 477u: goto L_089B1FCC;
    case 478u: goto L_089B1FD4;
    case 479u: goto L_089B2008;
    case 480u: goto L_089B2020;
    case 481u: goto L_089B204C;
    case 482u: goto L_089B207C;
    case 483u: goto L_089B208C;
    case 484u: goto L_089B209C;
    case 485u: goto L_089B20B8;
    case 486u: goto L_089B20BC;
    case 487u: goto L_089B20D4;
    case 488u: goto L_089B20E4;
    case 489u: goto L_089B20F4;
    case 490u: goto L_089B2134;
    case 491u: goto L_089B214C;
    case 492u: goto L_089B215C;
    case 493u: goto L_089B2168;
    case 494u: goto L_089B2170;
    case 495u: goto L_089B217C;
    case 496u: goto L_089B2184;
    case 497u: goto L_089B219C;
    case 498u: goto L_089B21B8;
    case 499u: goto L_089B21C8;
    case 500u: goto L_089B21D0;
    case 501u: goto L_089B21DC;
    case 502u: goto L_089B21E4;
    case 503u: goto L_089B21F4;
    case 504u: goto L_089B2208;
    case 505u: goto L_089B2214;
    case 506u: goto L_089B221C;
    case 507u: goto L_089B222C;
    case 508u: goto L_089B2238;
    case 509u: goto L_089B2248;
    case 510u: goto L_089B2250;
    case 511u: goto L_089B2258;
    case 512u: goto L_089B2260;
    case 513u: goto L_089B2268;
    case 514u: goto L_089B2270;
    case 515u: goto L_089B2280;
    case 516u: goto L_089B2290;
    case 517u: goto L_089B22A0;
    case 518u: goto L_089B22B0;
    case 519u: goto L_089B22C0;
    case 520u: goto L_089B22D0;
    case 521u: goto L_089B22E0;
    case 522u: goto L_089B22F0;
    case 523u: goto L_089B2300;
    case 524u: goto L_089B2310;
    case 525u: goto L_089B231C;
    case 526u: goto L_089B2324;
    case 527u: goto L_089B232C;
    case 528u: goto L_089B2358;
    case 529u: goto L_089B2364;
    case 530u: goto L_089B236C;
    case 531u: goto L_089B2374;
    case 532u: goto L_089B237C;
    case 533u: goto L_089B238C;
    case 534u: goto L_089B239C;
    case 535u: goto L_089B23AC;
    case 536u: goto L_089B23E8;
    case 537u: goto L_089B2400;
    case 538u: goto L_089B240C;
    case 539u: goto L_089B241C;
    case 540u: goto L_089B243C;
    case 541u: goto L_089B2444;
    case 542u: goto L_089B2454;
    case 543u: goto L_089B2460;
    case 544u: goto L_089B2468;
    case 545u: goto L_089B2474;
    case 546u: goto L_089B24A8;
    case 547u: goto L_089B24B8;
    case 548u: goto L_089B24C4;
    case 549u: goto L_089B24CC;
    case 550u: goto L_089B24D8;
    case 551u: goto L_089B250C;
    case 552u: goto L_089B2514;
    case 553u: goto L_089B251C;
    case 554u: goto L_089B252C;
    case 555u: goto L_089B2548;
    case 556u: goto L_089B2558;
    case 557u: goto L_089B2568;
    case 558u: goto L_089B2574;
    case 559u: goto L_089B2584;
    case 560u: goto L_089B258C;
    case 561u: goto L_089B2594;
    case 562u: goto L_089B259C;
    case 563u: goto L_089B25B4;
    case 564u: goto L_089B25C4;
    case 565u: goto L_089B25DC;
    case 566u: goto L_089B25E4;
    case 567u: goto L_089B25F0;
    case 568u: goto L_089B2604;
    case 569u: goto L_089B2610;
    case 570u: goto L_089B2634;
    case 571u: goto L_089B2658;
    case 572u: goto L_089B2664;
    case 573u: goto L_089B2688;
    case 574u: goto L_089B2694;
    case 575u: goto L_089B26B8;
    case 576u: goto L_089B26C4;
    case 577u: goto L_089B26D4;
    case 578u: goto L_089B26E8;
    case 579u: goto L_089B26F4;
    case 580u: goto L_089B26F8;
    case 581u: goto L_089B270C;
    case 582u: goto L_089B2714;
    case 583u: goto L_089B2720;
    case 584u: goto L_089B2728;
    case 585u: goto L_089B2734;
    case 586u: goto L_089B273C;
    case 587u: goto L_089B2744;
    case 588u: goto L_089B2750;
    case 589u: goto L_089B2760;
    case 590u: goto L_089B2768;
    case 591u: goto L_089B2770;
    case 592u: goto L_089B278C;
    case 593u: goto L_089B279C;
    case 594u: goto L_089B27B4;
    case 595u: goto L_089B27C0;
    case 596u: goto L_089B27D4;
    case 597u: goto L_089B27E0;
    case 598u: goto L_089B2804;
    case 599u: goto L_089B2828;
    case 600u: goto L_089B2834;
    case 601u: goto L_089B2858;
    case 602u: goto L_089B2864;
    case 603u: goto L_089B2888;
    case 604u: goto L_089B2894;
    case 605u: goto L_089B28A0;
    case 606u: goto L_089B28A8;
    case 607u: goto L_089B28C4;
    case 608u: goto L_089B28D4;
    case 609u: goto L_089B28D8;
    case 610u: goto L_089B2910;
    case 611u: goto L_089B294C;
    case 612u: goto L_089B2954;
    case 613u: goto L_089B295C;
    case 614u: goto L_089B2968;
    case 615u: goto L_089B2970;
    case 616u: goto L_089B2978;
    case 617u: goto L_089B2980;
    case 618u: goto L_089B29A4;
    case 619u: goto L_089B29C0;
    case 620u: goto L_089B29DC;
    case 621u: goto L_089B29EC;
    case 622u: goto L_089B29F4;
    case 623u: goto L_089B2A04;
    case 624u: goto L_089B2A10;
    case 625u: goto L_089B2A20;
    case 626u: goto L_089B2A30;
    case 627u: goto L_089B2A38;
    case 628u: goto L_089B2A40;
    case 629u: goto L_089B2A58;
    case 630u: goto L_089B2A68;
    case 631u: goto L_089B2A78;
    case 632u: goto L_089B2A80;
    case 633u: goto L_089B2A88;
    case 634u: goto L_089B2A90;
    case 635u: goto L_089B2AAC;
    case 636u: goto L_089B2ABC;
    case 637u: goto L_089B2AD0;
    case 638u: goto L_089B2AEC;
    case 639u: goto L_089B2AF8;
    case 640u: goto L_089B2B04;
    case 641u: goto L_089B2B0C;
    case 642u: goto L_089B2B1C;
    case 643u: goto L_089B2B2C;
    case 644u: goto L_089B2B38;
    case 645u: goto L_089B2B4C;
    case 646u: goto L_089B2B54;
    case 647u: goto L_089B2B60;
    case 648u: goto L_089B2B6C;
    case 649u: goto L_089B2B7C;
    case 650u: goto L_089B2B84;
    case 651u: goto L_089B2B8C;
    case 652u: goto L_089B2B9C;
    case 653u: goto L_089B2BB4;
    case 654u: goto L_089B2BC0;
    case 655u: goto L_089B2BD0;
    case 656u: goto L_089B2BE0;
    case 657u: goto L_089B2BE4;
    case 658u: goto L_089B2C00;
    case 659u: goto L_089B2C0C;
    case 660u: goto L_089B2C18;
    case 661u: goto L_089B2C24;
    case 662u: goto L_089B2C28;
    case 663u: goto L_089B2C30;
    case 664u: goto L_089B2C4C;
    case 665u: goto L_089B2C5C;
    case 666u: goto L_089B2C70;
    case 667u: goto L_089B2C80;
    case 668u: goto L_089B2CAC;
    case 669u: goto L_089B2CB8;
    case 670u: goto L_089B2CC8;
    case 671u: goto L_089B2CD0;
    case 672u: goto L_089B2CE0;
    case 673u: goto L_089B2CF8;
    case 674u: goto L_089B2D08;
    case 675u: goto L_089B2D28;
    case 676u: goto L_089B2D38;
    case 677u: goto L_089B2D4C;
    case 678u: goto L_089B2D64;
    case 679u: goto L_089B2D6C;
    case 680u: goto L_089B2D88;
    case 681u: goto L_089B2E18;
    case 682u: goto L_089B2E2C;
    case 683u: goto L_089B2E3C;
    case 684u: goto L_089B2E4C;
    case 685u: goto L_089B2E64;
    case 686u: goto L_089B2E74;
    case 687u: goto L_089B2E98;
    case 688u: goto L_089B2EF8;
    case 689u: goto L_089B2F40;
    case 690u: goto L_089B2F60;
    case 691u: goto L_089B2F6C;
    case 692u: goto L_089B2F98;
    case 693u: goto L_089B2FA0;
    case 694u: goto L_089B2FAC;
    case 695u: goto L_089B2FC0;
    case 696u: goto L_089B2FD0;
    case 697u: goto L_089B2FF0;
    case 698u: goto L_089B3008;
    case 699u: goto L_089B3010;
    case 700u: goto L_089B3018;
    case 701u: goto L_089B3028;
    case 702u: goto L_089B3038;
    case 703u: goto L_089B30CC;
    case 704u: goto L_089B3220;
    case 705u: goto L_089B322C;
    case 706u: goto L_089B3234;
    case 707u: goto L_089B3244;
    case 708u: goto L_089B326C;
    case 709u: goto L_089B32CC;
    case 710u: goto L_089B32D4;
    case 711u: goto L_089B32E4;
    case 712u: goto L_089B3334;
    case 713u: goto L_089B3340;
    case 714u: goto L_089B338C;
    case 715u: goto L_089B33A4;
    case 716u: goto L_089B33A8;
    case 717u: goto L_089B33AC;
    case 718u: goto L_089B33BC;
    case 719u: goto L_089B33D0;
    case 720u: goto L_089B3414;
    case 721u: goto L_089B3444;
    case 722u: goto L_089B3494;
    case 723u: goto L_089B34B4;
    case 724u: goto L_089B34C4;
    case 725u: goto L_089B34D4;
    case 726u: goto L_089B34DC;
    case 727u: goto L_089B3500;
    case 728u: goto L_089B351C;
    case 729u: goto L_089B3544;
    case 730u: goto L_089B3558;
    case 731u: goto L_089B356C;
    case 732u: goto L_089B3584;
    case 733u: goto L_089B35A8;
    case 734u: goto L_089B35B8;
    case 735u: goto L_089B35C8;
    case 736u: goto L_089B35D0;
    case 737u: goto L_089B3608;
    case 738u: goto L_089B3618;
    case 739u: goto L_089B3620;
    case 740u: goto L_089B3628;
    case 741u: goto L_089B3638;
    case 742u: goto L_089B3648;
    case 743u: goto L_089B3658;
    case 744u: goto L_089B3670;
    case 745u: goto L_089B3698;
    case 746u: goto L_089B36C0;
    case 747u: goto L_089B36E0;
    case 748u: goto L_089B36F4;
    case 749u: goto L_089B3704;
    case 750u: goto L_089B3714;
    case 751u: goto L_089B3724;
    case 752u: goto L_089B3728;
    case 753u: goto L_089B3734;
    case 754u: goto L_089B374C;
    case 755u: goto L_089B375C;
    case 756u: goto L_089B376C;
    case 757u: goto L_089B3778;
    case 758u: goto L_089B37B4;
    case 759u: goto L_089B37DC;
    case 760u: goto L_089B37F4;
    case 761u: goto L_089B3800;
    case 762u: goto L_089B3820;
    case 763u: goto L_089B3848;
    case 764u: goto L_089B386C;
    case 765u: goto L_089B3878;
    case 766u: goto L_089B3898;
    case 767u: goto L_089B389C;
    case 768u: goto L_089B38A8;
    case 769u: goto L_089B38B8;
    case 770u: goto L_089B38C4;
    case 771u: goto L_089B38E4;
    case 772u: goto L_089B390C;
    case 773u: goto L_089B3924;
    case 774u: goto L_089B3930;
    case 775u: goto L_089B3950;
    case 776u: goto L_089B3970;
    case 777u: goto L_089B39E4;
    case 778u: goto L_089B39EC;
    case 779u: goto L_089B3A00;
    case 780u: goto L_089B3A28;
    case 781u: goto L_089B3A2C;
    case 782u: goto L_089B3A48;
    case 783u: goto L_089B3A5C;
    case 784u: goto L_089B3A70;
    case 785u: goto L_089B3A78;
    case 786u: goto L_089B3A94;
    case 787u: goto L_089B3A9C;
    case 788u: goto L_089B3AA4;
    case 789u: goto L_089B3AAC;
    case 790u: goto L_089B3ABC;
    case 791u: goto L_089B3AC4;
    case 792u: goto L_089B3ACC;
    case 793u: goto L_089B3AD4;
    case 794u: goto L_089B3ADC;
    case 795u: goto L_089B3AE4;
    case 796u: goto L_089B3AF4;
    case 797u: goto L_089B3AFC;
    case 798u: goto L_089B3B1C;
    case 799u: goto L_089B3B34;
    case 800u: goto L_089B3B40;
    case 801u: goto L_089B3B60;
    case 802u: goto L_089B3B8C;
    case 803u: goto L_089B3BA0;
    case 804u: goto L_089B3BA8;
    case 805u: goto L_089B3BE4;
    case 806u: goto L_089B3BEC;
    case 807u: goto L_089B3BF4;
    case 808u: goto L_089B3BFC;
    case 809u: goto L_089B3C04;
    case 810u: goto L_089B3C14;
    case 811u: goto L_089B3C1C;
    case 812u: goto L_089B3C3C;
    case 813u: goto L_089B3C54;
    case 814u: goto L_089B3C6C;
    case 815u: goto L_089B3C88;
    case 816u: goto L_089B3CA4;
    case 817u: goto L_089B3CB0;
    case 818u: goto L_089B3CBC;
    case 819u: goto L_089B3CC8;
    case 820u: goto L_089B3CCC;
    case 821u: goto L_089B3CD4;
    case 822u: goto L_089B3CE4;
    case 823u: goto L_089B3CF0;
    case 824u: goto L_089B3D00;
    case 825u: goto L_089B3D0C;
    case 826u: goto L_089B3D14;
    case 827u: goto L_089B3D20;
    case 828u: goto L_089B3D2C;
    case 829u: goto L_089B3D38;
    case 830u: goto L_089B3D3C;
    case 831u: goto L_089B3D44;
    case 832u: goto L_089B3D54;
    case 833u: goto L_089B3D60;
    case 834u: goto L_089B3D68;
    case 835u: goto L_089B3D78;
    case 836u: goto L_089B3D84;
    case 837u: goto L_089B3D8C;
    case 838u: goto L_089B3D94;
    case 839u: goto L_089B3DA4;
    case 840u: goto L_089B3DB0;
    case 841u: goto L_089B3DC0;
    case 842u: goto L_089B3DD0;
    case 843u: goto L_089B3DF8;
    case 844u: goto L_089B3E00;
    case 845u: goto L_089B3E14;
    case 846u: goto L_089B3E20;
    case 847u: goto L_089B3E40;
    case 848u: goto L_089B3E6C;
    case 849u: goto L_089B3E78;
    case 850u: goto L_089B3E88;
    case 851u: goto L_089B3EC0;
    case 852u: goto L_089B3EC8;
    case 853u: goto L_089B3ED0;
    case 854u: goto L_089B3ED8;
    case 855u: goto L_089B3EE0;
    case 856u: goto L_089B3EEC;
    case 857u: goto L_089B3EFC;
    case 858u: goto L_089B3F34;
    case 859u: goto L_089B3F3C;
    case 860u: goto L_089B3F44;
    case 861u: goto L_089B3F4C;
    case 862u: goto L_089B3F58;
    case 863u: goto L_089B3F64;
    case 864u: goto L_089B3F88;
    case 865u: goto L_089B3F9C;
    case 866u: goto L_089B3FA4;
    case 867u: goto L_089B3FC8;
    case 868u: goto L_089B3FD0;
    case 869u: goto L_089B3FF4;
    case 870u: goto L_089B3FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B0000:
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_089B0008;
    }
    goto L_089B0008;
L_089B0008:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089B002C;
      }
      goto L_089B001C;
    }
L_089B001C:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[12];
    goto L_089B002C;
L_089B002C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0070;
      }
      goto L_089B0040;
    }
L_089B0040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0070;
      }
      goto L_089B004C;
    }
L_089B004C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0070;
      }
      goto L_089B0058;
    }
L_089B0058:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[31] = (0x089B0064u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B0064u) goto L_089B0064;
    return;
L_089B0064:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0070;
      }
      goto L_089B006C;
    }
L_089B006C:
    ctx.gpr[18] = (0u | 1u);
    goto L_089B0070;
L_089B0070:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B00A0;
      }
      goto L_089B0080;
    }
L_089B0080:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B00A0;
      }
      goto L_089B0090;
    }
L_089B0090:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B00A0;
      }
      goto L_089B0098;
    }
L_089B0098:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B00D4;
      }
      goto L_089B00A0;
    }
L_089B00A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089B00B4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x089B00B4u) goto L_089B00B4;
    return;
L_089B00B4:
    ctx.gpr[31] = (0x089B00BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089B00BCu) goto L_089B00BC;
    return;
L_089B00BC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B00F0;
      }
      goto L_089B00CC;
    }
L_089B00CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
      if (branch_taken) {
          goto L_089B00DC;
      }
      goto L_089B00D4;
    }
L_089B00D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B02B0;
      }
      goto L_089B00DC;
    }
L_089B00DC:
    ctx.gpr[5] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B00F0;
      }
      goto L_089B00E8;
    }
L_089B00E8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B01D4;
      }
      goto L_089B00F0;
    }
L_089B00F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x089B0100u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0100u) goto L_089B0100;
    return;
L_089B0100:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089B0124;
      }
      goto L_089B0114;
    }
L_089B0114:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_089B0124;
L_089B0124:
    ctx.gpr[31] = (0x089B012Cu);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089B012Cu) goto L_089B012C;
    return;
L_089B012C:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0144;
      }
      goto L_089B013C;
    }
L_089B013C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[24] - ctx.fpr[28];
      if (branch_taken) {
          goto L_089B0148;
      }
      goto L_089B0144;
    }
L_089B0144:
    ctx.fpr[20] = ctx.fpr[24] + ctx.fpr[28];
    goto L_089B0148;
L_089B0148:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 169u);
      if (branch_taken) {
          goto L_089B015C;
      }
      goto L_089B0150;
    }
L_089B0150:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B0164;
      }
      goto L_089B015C;
    }
L_089B015C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 145u);
      if (branch_taken) {
          goto L_089B0174;
      }
      goto L_089B0164;
    }
L_089B0164:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B0174;
      }
      goto L_089B0170;
    }
L_089B0170:
    ctx.gpr[17] = (0u | 158u);
    goto L_089B0174;
L_089B0174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0180u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B0180u) goto L_089B0180;
    return;
L_089B0180:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0190;
      }
      goto L_089B0188;
    }
L_089B0188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B02B0;
      }
      goto L_089B0190;
    }
L_089B0190:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B01A8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089B01A8u) goto L_089B01A8;
    return;
L_089B01A8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B01CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12416));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x089B01CCu) goto L_089B01CC;
    return;
L_089B01CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 11u);
      if (branch_taken) {
          goto L_089B0230;
      }
      goto L_089B01D4;
    }
L_089B01D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B01E0u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B01E0u) goto L_089B01E0;
    return;
L_089B01E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B01F0;
      }
      goto L_089B01E8;
    }
L_089B01E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B02B0;
      }
      goto L_089B01F0;
    }
L_089B01F0:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B0208u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089B0208u) goto L_089B0208;
    return;
L_089B0208:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B022Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12416));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x089B022Cu) goto L_089B022C;
    return;
L_089B022C:
    ctx.gpr[17] = (0u | 11u);
    goto L_089B0230;
L_089B0230:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0244;
      }
      goto L_089B0238;
    }
L_089B0238:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B0244u);
    ctx.gpr[5] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0244u) goto L_089B0244;
    return;
L_089B0244:
    ctx.gpr[31] = (0x089B024Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089B024Cu) goto L_089B024C;
    return;
L_089B024C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089B0258u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 53u, 0x089A03F8u>(ctx, &aot_mem) && ctx.pc == 0x089B0258u) goto L_089B0258;
    return;
L_089B0258:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[31] = (0x089B0268u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x089B0268u) goto L_089B0268;
    return;
L_089B0268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0278;
      }
      goto L_089B0274;
    }
L_089B0274:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[18]);
    goto L_089B0278;
L_089B0278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089B02AC;
      }
      goto L_089B0284;
    }
L_089B0284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B02A4;
      }
      goto L_089B0290;
    }
L_089B0290:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089B02A4;
    }
    goto L_089B0298;
L_089B0298:
    ctx.gpr[31] = (0x089B02A0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B02A0u) goto L_089B02A0;
    return;
L_089B02A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089B02A4;
L_089B02A4:
    ctx.gpr[31] = (0x089B02ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089B02ACu) goto L_089B02AC;
    return;
L_089B02AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[19]);
    goto L_089B02B0;
L_089B02B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B02E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x089B0318u);
    ctx.gpr[19] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089B0318u) goto L_089B0318;
    return;
L_089B0318:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B07A8;
      }
      goto L_089B0320;
    }
L_089B0320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B07A8;
      }
      goto L_089B0334;
    }
L_089B0334:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089B0378;
      }
      goto L_089B034C;
    }
L_089B034C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0378;
      }
      goto L_089B0358;
    }
L_089B0358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0378;
      }
      goto L_089B0364;
    }
L_089B0364:
    ctx.gpr[31] = (0x089B036Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B036Cu) goto L_089B036C;
    return;
L_089B036C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0378;
      }
      goto L_089B0374;
    }
L_089B0374:
    ctx.gpr[19] = (0u | 1u);
    goto L_089B0378;
L_089B0378:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B04D0;
      }
      goto L_089B0380;
    }
L_089B0380:
    ctx.gpr[31] = (0x089B0388u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B0388u) goto L_089B0388;
    return;
L_089B0388:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0400;
      }
      goto L_089B0390;
    }
L_089B0390:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B03B4u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B03B4u) goto L_089B03B4;
    return;
L_089B03B4:
    ctx.gpr[31] = (0x089B03BCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089B03BCu) goto L_089B03BC;
    return;
L_089B03BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x089B03C8u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089B03C8u) goto L_089B03C8;
    return;
L_089B03C8:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B0420;
      }
      goto L_089B03F8;
    }
L_089B03F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0424;
      }
      goto L_089B0400;
    }
L_089B0400:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2950), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2968), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2968));
    ctx.gpr[31] = (0x089B0418u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089B0418u) goto L_089B0418;
    return;
L_089B0418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B07A8;
      }
      goto L_089B0420;
    }
L_089B0420:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    goto L_089B0424;
L_089B0424:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0448;
      }
      goto L_089B0438;
    }
L_089B0438:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089B0448;
L_089B0448:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0498;
      }
      goto L_089B0458;
    }
L_089B0458:
    ctx.gpr[31] = (0x089B0460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089B0460u) goto L_089B0460;
    return;
L_089B0460:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0490;
      }
      goto L_089B0470;
    }
L_089B0470:
    ctx.gpr[31] = (0x089B0478u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089B0478u) goto L_089B0478;
    return;
L_089B0478:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B04B8;
      }
      goto L_089B0488;
    }
L_089B0488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B04BC;
      }
      goto L_089B0490;
    }
L_089B0490:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B07A8;
      }
      goto L_089B0498;
    }
L_089B0498:
    ctx.gpr[31] = (0x089B04A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089B04A0u) goto L_089B04A0;
    return;
L_089B04A0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0470;
      }
      goto L_089B04B0;
    }
L_089B04B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089B0470;
      }
      goto L_089B04B8;
    }
L_089B04B8:
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[22];
    goto L_089B04BC;
L_089B04BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B04C8u);
    ctx.gpr[5] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B04C8u) goto L_089B04C8;
    return;
L_089B04C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B052C;
      }
      goto L_089B04D0;
    }
L_089B04D0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B052C;
      }
      goto L_089B04D8;
    }
L_089B04D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x089B04E8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B04E8u) goto L_089B04E8;
    return;
L_089B04E8:
    ctx.gpr[31] = (0x089B04F0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089B04F0u) goto L_089B04F0;
    return;
L_089B04F0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49097u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[31] = (0x089B0528u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089B0528u) goto L_089B0528;
    return;
L_089B0528:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B052C;
L_089B052C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0558;
      }
      goto L_089B0534;
    }
L_089B0534:
    ctx.gpr[31] = (0x089B053Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B053Cu) goto L_089B053C;
    return;
L_089B053C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0658;
      }
      goto L_089B0544;
    }
L_089B0544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0658;
      }
      goto L_089B0558;
    }
L_089B0558:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089B0564u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x089B0564u) goto L_089B0564;
    return;
L_089B0564:
    ctx.gpr[31] = (0x089B056Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 53u, 0x089A03F8u>(ctx, &aot_mem) && ctx.pc == 0x089B056Cu) goto L_089B056C;
    return;
L_089B056C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089B0580u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x089B0580u) goto L_089B0580;
    return;
L_089B0580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B058Cu);
    ctx.gpr[5] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B058Cu) goto L_089B058C;
    return;
L_089B058C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B05F4;
      }
      goto L_089B0594;
    }
L_089B0594:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B05ACu);
    ctx.gpr[6] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089B05ACu) goto L_089B05AC;
    return;
L_089B05AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B05D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12416));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x089B05D0u) goto L_089B05D0;
    return;
L_089B05D0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(848)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[31] = (0x089B05E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x089B05E0u) goto L_089B05E0;
    return;
L_089B05E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(848)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B05FC;
      }
      goto L_089B05EC;
    }
L_089B05EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0600;
      }
      goto L_089B05F4;
    }
L_089B05F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B07A8;
      }
      goto L_089B05FC;
    }
L_089B05FC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(848), ctx.gpr[18]);
    goto L_089B0600;
L_089B0600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 31u);
      if (branch_taken) {
          goto L_089B063C;
      }
      goto L_089B0610;
    }
L_089B0610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0630;
      }
      goto L_089B061C;
    }
L_089B061C:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_089B0630;
    }
    goto L_089B0624;
L_089B0624:
    ctx.gpr[31] = (0x089B062Cu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B062Cu) goto L_089B062C;
    return;
L_089B062C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_089B0630;
L_089B0630:
    ctx.gpr[31] = (0x089B0638u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0638u) goto L_089B0638;
    return;
L_089B0638:
    ctx.gpr[4] = (0u | 31u);
    goto L_089B063C;
L_089B063C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089B06F8;
      }
      goto L_089B0658;
    }
L_089B0658:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089B0664u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x089B0664u) goto L_089B0664;
    return;
L_089B0664:
    ctx.gpr[31] = (0x089B066Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 53u, 0x089A03F8u>(ctx, &aot_mem) && ctx.pc == 0x089B066Cu) goto L_089B066C;
    return;
L_089B066C:
    ctx.gpr[31] = (0x089B0674u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x089B0674u) goto L_089B0674;
    return;
L_089B0674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B06AC;
      }
      goto L_089B0684;
    }
L_089B0684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B06A4;
      }
      goto L_089B0690;
    }
L_089B0690:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_089B06A4;
    }
    goto L_089B0698;
L_089B0698:
    ctx.gpr[31] = (0x089B06A0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B06A0u) goto L_089B06A0;
    return;
L_089B06A0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_089B06A4;
L_089B06A4:
    ctx.gpr[31] = (0x089B06ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089B06ACu) goto L_089B06AC;
    return;
L_089B06AC:
    ctx.gpr[4] = (0u | 45u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089B06D0u);
    ctx.gpr[6] = (0u | 146u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089B06D0u) goto L_089B06D0;
    return;
L_089B06D0:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B06E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12416));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x089B06E4u) goto L_089B06E4;
    return;
L_089B06E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089B06F8;
L_089B06F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B07A8;
      }
      goto L_089B0700;
    }
L_089B0700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B07A8;
      }
      goto L_089B0710;
    }
L_089B0710:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B07A8;
      }
      goto L_089B071C;
    }
L_089B071C:
    ctx.gpr[31] = (0x089B0724u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B0724u) goto L_089B0724;
    return;
L_089B0724:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_089B07A8;
      }
      goto L_089B072C;
    }
L_089B072C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0770u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 293u, 0x08ACD308u>(ctx, &aot_mem) && ctx.pc == 0x089B0770u) goto L_089B0770;
    return;
L_089B0770:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B07A8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 293u, 0x08ACD308u>(ctx, &aot_mem) && ctx.pc == 0x089B07A8u) goto L_089B07A8;
    return;
L_089B07A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B07D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089B0824;
      }
      goto L_089B0810;
    }
L_089B0810:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 214u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0824;
      }
      goto L_089B0820;
    }
L_089B0820:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1924), 0u);
    goto L_089B0824;
L_089B0824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0848;
      }
      goto L_089B0830;
    }
L_089B0830:
    ctx.gpr[31] = (0x089B0838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x089B0838u) goto L_089B0838;
    return;
L_089B0838:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B0848u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 510u, 0x08A2A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0848u) goto L_089B0848;
    return;
L_089B0848:
    ctx.gpr[31] = (0x089B0850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089B0850u) goto L_089B0850;
    return;
L_089B0850:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B08E4;
      }
      goto L_089B0858;
    }
L_089B0858:
    ctx.gpr[31] = (0x089B0860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089B0860u) goto L_089B0860;
    return;
L_089B0860:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2997)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0890;
      }
      goto L_089B086C;
    }
L_089B086C:
    ctx.gpr[31] = (0x089B0874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089B0874u) goto L_089B0874;
    return;
L_089B0874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0898;
      }
      goto L_089B0888;
    }
L_089B0888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B08D8;
      }
      goto L_089B0890;
    }
L_089B0890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0B38;
      }
      goto L_089B0898;
    }
L_089B0898:
    ctx.gpr[31] = (0x089B08A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089B08A0u) goto L_089B08A0;
    return;
L_089B08A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B08D8;
      }
      goto L_089B08AC;
    }
L_089B08AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B08D8;
      }
      goto L_089B08BC;
    }
L_089B08BC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (0u | 204u);
    ctx.gpr[31] = (0x089B08D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089B08D8u) goto L_089B08D8;
    return;
L_089B08D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B08E4u);
    ctx.gpr[5] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B08E4u) goto L_089B08E4;
    return;
L_089B08E4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(640), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (0u | 54u);
      if (branch_taken) {
          goto L_089B0B38;
      }
      goto L_089B08F8;
    }
L_089B08F8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089B0B38;
      }
      goto L_089B0900;
    }
L_089B0900:
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[20] = (0u | 58u);
      if (branch_taken) {
          goto L_089B0920;
      }
      goto L_089B0914;
    }
L_089B0914:
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B092C;
      }
      goto L_089B0920;
    }
L_089B0920:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_089B092C;
L_089B092C:
    ctx.gpr[31] = (0x089B0934u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x089B0934u) goto L_089B0934;
    return;
L_089B0934:
    ctx.gpr[31] = (0x089B093Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 455u, 0x089A1F80u>(ctx, &aot_mem) && ctx.pc == 0x089B093Cu) goto L_089B093C;
    return;
L_089B093C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B099C;
      }
      goto L_089B0950;
    }
L_089B0950:
    ctx.gpr[31] = (0x089B0958u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B0958u) goto L_089B0958;
    return;
L_089B0958:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B09DC;
      }
      goto L_089B0960;
    }
L_089B0960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B097C;
      }
      goto L_089B096C;
    }
L_089B096C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B09DC;
      }
      goto L_089B097C;
    }
L_089B097C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B0994u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B0994u) goto L_089B0994;
    return;
L_089B0994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B09DC;
      }
      goto L_089B099C;
    }
L_089B099C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B09C4;
      }
      goto L_089B09A8;
    }
L_089B09A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B09DC;
      }
      goto L_089B09B4;
    }
L_089B09B4:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B09DC;
      }
      goto L_089B09C4;
    }
L_089B09C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[5] = (0u | 56u);
      if (branch_taken) {
          goto L_089B09D4;
      }
      goto L_089B09CC;
    }
L_089B09CC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B09DC;
      }
      goto L_089B09D4;
    }
L_089B09D4:
    ctx.gpr[31] = (0x089B09DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 618u, 0x0888F080u>(ctx, &aot_mem) && ctx.pc == 0x089B09DCu) goto L_089B09DC;
    return;
L_089B09DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0A14;
      }
      goto L_089B09EC;
    }
L_089B09EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0A0C;
      }
      goto L_089B09F8;
    }
L_089B09F8:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089B0A0C;
    }
    goto L_089B0A00;
L_089B0A00:
    ctx.gpr[31] = (0x089B0A08u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B0A08u) goto L_089B0A08;
    return;
L_089B0A08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089B0A0C;
L_089B0A0C:
    ctx.gpr[31] = (0x089B0A14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0A14u) goto L_089B0A14;
    return;
L_089B0A14:
    ctx.gpr[4] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089B0A90;
      }
      goto L_089B0A20;
    }
L_089B0A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B0A34u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089B0A34u) goto L_089B0A34;
    return;
L_089B0A34:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089B0A48;
      }
      goto L_089B0A44;
    }
L_089B0A44:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089B0A48;
L_089B0A48:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0AA4;
      }
      goto L_089B0A68;
    }
L_089B0A68:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B0A7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12900));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x089B0A7Cu) goto L_089B0A7C;
    return;
L_089B0A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B0AA4;
      }
      goto L_089B0A90;
    }
L_089B0A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089B0AA4;
L_089B0AA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B0AB0u);
    ctx.gpr[5] = (0u | 103u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0AB0u) goto L_089B0AB0;
    return;
L_089B0AB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[5] = (0u | 56u);
      if (branch_taken) {
          goto L_089B0AC4;
      }
      goto L_089B0ABC;
    }
L_089B0ABC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0ACC;
      }
      goto L_089B0AC4;
    }
L_089B0AC4:
    ctx.gpr[31] = (0x089B0ACCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 618u, 0x0888F080u>(ctx, &aot_mem) && ctx.pc == 0x089B0ACCu) goto L_089B0ACC;
    return;
L_089B0ACC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0AE0;
      }
      goto L_089B0AD8;
    }
L_089B0AD8:
    ctx.gpr[31] = (0x089B0AE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 539u, 0x089A2474u>(ctx, &aot_mem) && ctx.pc == 0x089B0AE0u) goto L_089B0AE0;
    return;
L_089B0AE0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 37u);
      if (branch_taken) {
          goto L_089B0B38;
      }
      goto L_089B0AFC;
    }
L_089B0AFC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B0B38;
      }
      goto L_089B0B04;
    }
L_089B0B04:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0B38;
      }
      goto L_089B0B0C;
    }
L_089B0B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (15395u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[5] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089B0B2Cu);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x089B0B2Cu) goto L_089B0B2C;
    return;
L_089B0B2C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089B0B38;
L_089B0B38:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0B64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(856)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089B0BE0;
      }
      goto L_089B0B94;
    }
L_089B0B94:
    ctx.gpr[31] = (0x089B0B9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089B0B9Cu) goto L_089B0B9C;
    return;
L_089B0B9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0BE0;
      }
      goto L_089B0BA4;
    }
L_089B0BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0BE0;
      }
      goto L_089B0BB0;
    }
L_089B0BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0BD8;
      }
      goto L_089B0BBC;
    }
L_089B0BBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0BE8;
      }
      goto L_089B0BCC;
    }
L_089B0BCC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089B0C18;
      }
      goto L_089B0BD8;
    }
L_089B0BD8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(856), 0u);
      if (branch_taken) {
          goto L_089B1014;
      }
      goto L_089B0BE0;
    }
L_089B0BE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1014;
      }
      goto L_089B0BE8;
    }
L_089B0BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0C10;
      }
      goto L_089B0BF4;
    }
L_089B0BF4:
    ctx.gpr[31] = (0x089B0BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B0BFCu) goto L_089B0BFC;
    return;
L_089B0BFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0C10;
      }
      goto L_089B0C04;
    }
L_089B0C04:
    ctx.gpr[17] = (0u | 31u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089B0C18;
      }
      goto L_089B0C10;
    }
L_089B0C10:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_089B0C18;
L_089B0C18:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B0C24u);
    ctx.gpr[5] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 336u, 0x08865854u>(ctx, &aot_mem) && ctx.pc == 0x089B0C24u) goto L_089B0C24;
    return;
L_089B0C24:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0CE0;
      }
      goto L_089B0C30;
    }
L_089B0C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0C3Cu);
    ctx.gpr[5] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B0C3Cu) goto L_089B0C3C;
    return;
L_089B0C3C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0C58;
      }
      goto L_089B0C48;
    }
L_089B0C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0C54u);
    ctx.gpr[5] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B0C54u) goto L_089B0C54;
    return;
L_089B0C54:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089B0C58;
L_089B0C58:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0C70;
      }
      goto L_089B0C60;
    }
L_089B0C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0C80;
      }
      goto L_089B0C70;
    }
L_089B0C70:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0C88;
      }
      goto L_089B0C78;
    }
L_089B0C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0CE0;
      }
      goto L_089B0C80;
    }
L_089B0C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1014;
      }
      goto L_089B0C88;
    }
L_089B0C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0C94u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B0C94u) goto L_089B0C94;
    return;
L_089B0C94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0CB8;
      }
      goto L_089B0CA0;
    }
L_089B0CA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0CE0;
      }
      goto L_089B0CB8;
    }
L_089B0CB8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0CDCu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089B0CDCu) goto L_089B0CDC;
    return;
L_089B0CDC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089B0CE0;
L_089B0CE0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0D88;
      }
      goto L_089B0CE8;
    }
L_089B0CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0CF4u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B0CF4u) goto L_089B0CF4;
    return;
L_089B0CF4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0D18;
      }
      goto L_089B0D00;
    }
L_089B0D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 20u);
      if (branch_taken) {
          goto L_089B0D28;
      }
      goto L_089B0D10;
    }
L_089B0D10:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0D28;
      }
      goto L_089B0D18;
    }
L_089B0D18:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0D30;
      }
      goto L_089B0D20;
    }
L_089B0D20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0D88;
      }
      goto L_089B0D28;
    }
L_089B0D28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1014;
      }
      goto L_089B0D30;
    }
L_089B0D30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0D3Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B0D3Cu) goto L_089B0D3C;
    return;
L_089B0D3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0D60;
      }
      goto L_089B0D48;
    }
L_089B0D48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0D88;
      }
      goto L_089B0D60;
    }
L_089B0D60:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0D84u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089B0D84u) goto L_089B0D84;
    return;
L_089B0D84:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089B0D88;
L_089B0D88:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1014;
      }
      goto L_089B0D90;
    }
L_089B0D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[19] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(856), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[20] = (0u | 5u);
      if (branch_taken) {
          goto L_089B0DB8;
      }
      goto L_089B0DA4;
    }
L_089B0DA4:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0DB8;
      }
      goto L_089B0DB0;
    }
L_089B0DB0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089B0E24;
      }
      goto L_089B0DB8;
    }
L_089B0DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0DC4u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 336u, 0x08865854u>(ctx, &aot_mem) && ctx.pc == 0x089B0DC4u) goto L_089B0DC4;
    return;
L_089B0DC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (49152u << 16u);
      if (branch_taken) {
          goto L_089B0E10;
      }
      goto L_089B0DD0;
    }
L_089B0DD0:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_089B0DD4;
L_089B0DD4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0DFC;
      }
      goto L_089B0DEC;
    }
L_089B0DEC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089B0DFC;
L_089B0DFC:
    ctx.gpr[31] = (0x089B0E04u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 346u, 0x088658C8u>(ctx, &aot_mem) && ctx.pc == 0x089B0E04u) goto L_089B0E04;
    return;
L_089B0E04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0DD4;
      }
      goto L_089B0E10;
    }
L_089B0E10:
    ctx.gpr[31] = (0x089B0E18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 53u, 0x089A03F8u>(ctx, &aot_mem) && ctx.pc == 0x089B0E18u) goto L_089B0E18;
    return;
L_089B0E18:
    ctx.gpr[31] = (0x089B0E20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x089B0E20u) goto L_089B0E20;
    return;
L_089B0E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    goto L_089B0E24;
L_089B0E24:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_089B0ED8;
      }
      goto L_089B0E2C;
    }
L_089B0E2C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0E84;
      }
      goto L_089B0E34;
    }
L_089B0E34:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_089B0E64;
      }
      goto L_089B0E3C;
    }
L_089B0E3C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0EF8;
      }
      goto L_089B0E44;
    }
L_089B0E44:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0E5Cu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089B0E5Cu) goto L_089B0E5C;
    return;
L_089B0E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089B0EF8;
      }
      goto L_089B0E64;
    }
L_089B0E64:
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0E7Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089B0E7Cu) goto L_089B0E7C;
    return;
L_089B0E7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089B0EF8;
      }
      goto L_089B0E84;
    }
L_089B0E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089B0EB4;
      }
      goto L_089B0E94;
    }
L_089B0E94:
    ctx.gpr[7] = (16448u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0EACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089B0EACu) goto L_089B0EAC;
    return;
L_089B0EAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089B0ED0;
      }
      goto L_089B0EB4;
    }
L_089B0EB4:
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0ECCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089B0ECCu) goto L_089B0ECC;
    return;
L_089B0ECC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089B0ED0;
L_089B0ED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0EF8;
      }
      goto L_089B0ED8;
    }
L_089B0ED8:
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B0EF0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089B0EF0u) goto L_089B0EF0;
    return;
L_089B0EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089B0EF8;
      }
      goto L_089B0EF8;
    }
L_089B0EF8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1014;
      }
      goto L_089B0F00;
    }
L_089B0F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0FC0;
      }
      goto L_089B0F0C;
    }
L_089B0F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B0F18u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B0F18u) goto L_089B0F18;
    return;
L_089B0F18:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0F38;
      }
      goto L_089B0F24;
    }
L_089B0F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089B0F34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B0F34u) goto L_089B0F34;
    return;
L_089B0F34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B0F38;
L_089B0F38:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0F54;
      }
      goto L_089B0F40;
    }
L_089B0F40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x089B0F50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B0F50u) goto L_089B0F50;
    return;
L_089B0F50:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B0F54;
L_089B0F54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0F68;
      }
      goto L_089B0F5C;
    }
L_089B0F5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B1014;
      }
      goto L_089B0F68;
    }
L_089B0F68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
        goto L_089B0F84;
    }
    goto L_089B0F74;
L_089B0F74:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B1014;
      }
      goto L_089B0F84;
    }
L_089B0F84:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (12288u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B1014;
      }
      goto L_089B0FC0;
    }
L_089B0FC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
        goto L_089B0FDC;
    }
    goto L_089B0FCC;
L_089B0FCC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B1014;
      }
      goto L_089B0FDC;
    }
L_089B0FDC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (12288u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B1014;
L_089B1014:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B1038:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1472));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2040)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1416), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1420), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1424), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1428), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1432), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1436), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1440), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1444), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1448), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1452), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1456), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1460), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1464), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1468), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089B10B4;
      }
      goto L_089B1080;
    }
L_089B1080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2036)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B10B4;
      }
      goto L_089B1098;
    }
L_089B1098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B10B4;
      }
      goto L_089B10A8;
    }
L_089B10A8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2040), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B10B4;
L_089B10B4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B10D4;
      }
      goto L_089B10C4;
    }
L_089B10C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089B10D4;
L_089B10D4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B10F8;
      }
      goto L_089B10F0;
    }
L_089B10F0:
    ctx.gpr[31] = (0x089B10F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 720u, 0x0883BA30u>(ctx, &aot_mem) && ctx.pc == 0x089B10F8u) goto L_089B10F8;
    return;
L_089B10F8:
    ctx.gpr[31] = (0x089B1100u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 314u, 0x08925F38u>(ctx, &aot_mem) && ctx.pc == 0x089B1100u) goto L_089B1100;
    return;
L_089B1100:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (128u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089B1128;
      }
      goto L_089B1114;
    }
L_089B1114:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089B1148;
      }
      goto L_089B1120;
    }
L_089B1120:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089B1148;
      }
      goto L_089B1128;
    }
L_089B1128:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1148;
      }
      goto L_089B1134;
    }
L_089B1134:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1148;
      }
      goto L_089B1144;
    }
L_089B1144:
    ctx.gpr[4] = (0u | 255u);
    goto L_089B1148;
L_089B1148:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089B1154u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925F24u>(ctx, &aot_mem) && ctx.pc == 0x089B1154u) goto L_089B1154;
    return;
L_089B1154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65472u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B1180u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 421u, 0x089A6604u>(ctx, &aot_mem) && ctx.pc == 0x089B1180u) goto L_089B1180;
    return;
L_089B1180:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (65535u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B11ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 146u, 0x089ACD9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B11ACu) goto L_089B11AC;
    return;
L_089B11AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B11D4;
      }
      goto L_089B11BC;
    }
L_089B11BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B11E4;
      }
      goto L_089B11CC;
    }
L_089B11CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B16C8;
      }
      goto L_089B11D4;
    }
L_089B11D4:
    ctx.gpr[31] = (0x089B11DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 472u, 0x088B6AA8u>(ctx, &aot_mem) && ctx.pc == 0x089B11DCu) goto L_089B11DC;
    return;
L_089B11DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 334u, 0x089B5134u>(ctx, &aot_mem); return;
      }
      goto L_089B11E4;
    }
L_089B11E4:
    ctx.gpr[31] = (0x089B11ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 296u, 0x0880D928u>(ctx, &aot_mem) && ctx.pc == 0x089B11ECu) goto L_089B11EC;
    return;
L_089B11EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1658;
      }
      goto L_089B11FC;
    }
L_089B11FC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(2000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1220;
      }
      goto L_089B1218;
    }
L_089B1218:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B1268;
      }
      goto L_089B1220;
    }
L_089B1220:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(7001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B123C;
      }
      goto L_089B122C;
    }
L_089B122C:
    ctx.gpr[4] = (16192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B1268;
      }
      goto L_089B123C;
    }
L_089B123C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2000));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_089B1258;
      }
      goto L_089B124C;
    }
L_089B124C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089B1258;
L_089B1258:
    ctx.gpr[4] = (14621u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_089B1268;
L_089B1268:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1504;
      }
      goto L_089B127C;
    }
L_089B127C:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_089B14EC;
      }
      goto L_089B1298;
    }
L_089B1298:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_089B14EC;
      }
      goto L_089B12B0;
    }
L_089B12B0:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
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
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_089B14EC;
      }
      goto L_089B12F8;
    }
L_089B12F8:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (0u | 200u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1812), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (ctx.gpr[6] | 64u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(408), ctx.gpr[6]);
    ctx.gpr[31] = (0x089B1320u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B1320u) goto L_089B1320;
    return;
L_089B1320:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_089B14EC;
      }
      goto L_089B1328;
    }
L_089B1328:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_089B14EC;
      }
      goto L_089B1340;
    }
L_089B1340:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089B14EC;
      }
      goto L_089B1358;
    }
L_089B1358:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089B14EC;
      }
      goto L_089B138C;
    }
L_089B138C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089B14EC;
      }
      goto L_089B13C0;
    }
L_089B13C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089B14EC;
      }
      goto L_089B13F4;
    }
L_089B13F4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089B14EC;
      }
      goto L_089B1428;
    }
L_089B1428:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089B14EC;
      }
      goto L_089B145C;
    }
L_089B145C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089B14EC;
      }
      goto L_089B1490;
    }
L_089B1490:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089B14BCu);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 526u, 0x088EAE40u>(ctx, &aot_mem) && ctx.pc == 0x089B14BCu) goto L_089B14BC;
    return;
L_089B14BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B14EC;
      }
      goto L_089B14C4;
    }
L_089B14C4:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089B14E0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x089B14E0u) goto L_089B14E0;
    return;
L_089B14E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[31] = (0x089B14ECu);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x089B14ECu) goto L_089B14EC;
    return;
L_089B14EC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B127C;
      }
      goto L_089B1504;
    }
L_089B1504:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1658;
      }
      goto L_089B1510;
    }
L_089B1510:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2000));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B15EC;
      }
      goto L_089B1530;
    }
L_089B1530:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(17));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27944)));
      if (branch_taken) {
          goto L_089B1558;
      }
      goto L_089B154C;
    }
L_089B154C:
    ctx.gpr[7] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089B1558;
L_089B1558:
    ctx.gpr[7] = (14621u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[7] | 18770u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_089B1580;
      }
      goto L_089B1574;
    }
L_089B1574:
    ctx.gpr[7] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089B1580;
L_089B1580:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (47389u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (16256u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[9] = (16928u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089B15E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 323u, 0x0892A980u>(ctx, &aot_mem) && ctx.pc == 0x089B15E4u) goto L_089B15E4;
    return;
L_089B15E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1658;
      }
      goto L_089B15EC;
    }
L_089B15EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1825)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1658;
      }
      goto L_089B15F8;
    }
L_089B15F8:
    ctx.gpr[10] = (16192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[10] = (ctx.gpr[10] | 1u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[10] = (48960u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27944)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[17] = (0u | 1u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[11] = (0u | 40000u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089B1654u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 142u, 0x08929268u>(ctx, &aot_mem) && ctx.pc == 0x089B1654u) goto L_089B1654;
    return;
L_089B1654:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1825), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_089B1658;
L_089B1658:
    ctx.gpr[31] = (0x089B1660u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 468u, 0x088B6A84u>(ctx, &aot_mem) && ctx.pc == 0x089B1660u) goto L_089B1660;
    return;
L_089B1660:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1670;
      }
      goto L_089B1668;
    }
L_089B1668:
    ctx.gpr[31] = (0x089B1670u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 472u, 0x088B6AA8u>(ctx, &aot_mem) && ctx.pc == 0x089B1670u) goto L_089B1670;
    return;
L_089B1670:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B16C0;
      }
      goto L_089B1680;
    }
L_089B1680:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B16C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 222u, 0x08A0DBD0u>(ctx, &aot_mem) && ctx.pc == 0x089B16C0u) goto L_089B16C0;
    return;
L_089B16C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 334u, 0x089B5134u>(ctx, &aot_mem); return;
      }
      goto L_089B16C8;
    }
L_089B16C8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089B1728;
      }
      goto L_089B16F4;
    }
L_089B16F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7811)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1728;
      }
      goto L_089B1700;
    }
L_089B1700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1728;
      }
      goto L_089B170C;
    }
L_089B170C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1740;
      }
      goto L_089B1728;
    }
L_089B1728:
    ctx.gpr[31] = (0x089B1730u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089B1730u) goto L_089B1730;
    return;
L_089B1730:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
        goto L_089B1768;
    }
    goto L_089B1738;
L_089B1738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B17E8;
      }
      goto L_089B1740;
    }
L_089B1740:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 334u, 0x089B5134u>(ctx, &aot_mem); return;
      }
      goto L_089B1768;
    }
L_089B1768:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089B17E8;
      }
      goto L_089B1770;
    }
L_089B1770:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B17E8;
      }
      goto L_089B1798;
    }
L_089B1798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(856)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B17C8;
      }
      goto L_089B17A8;
    }
L_089B17A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(856)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B17C8;
      }
      goto L_089B17B8;
    }
L_089B17B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(856)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B17E8;
      }
      goto L_089B17C8;
    }
L_089B17C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1824)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B17EC;
      }
      goto L_089B17D8;
    }
L_089B17D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1824)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1824), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089B17EC;
      }
      goto L_089B17E8;
    }
L_089B17E8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1824), static_cast<std::uint8_t>(0u));
    goto L_089B17EC;
L_089B17EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
        goto L_089B1884;
    }
    goto L_089B1808;
L_089B1808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 39 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
        goto L_089B1884;
    }
    goto L_089B1818;
L_089B1818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
        goto L_089B1884;
    }
    goto L_089B1828;
L_089B1828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
        goto L_089B1884;
    }
    goto L_089B1838;
L_089B1838:
    ctx.gpr[6] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089B1850u);
    ctx.gpr[5] = (0u | 13u);
    goto L_089B07D0;
L_089B1850:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
        goto L_089B1884;
    }
    goto L_089B1860;
L_089B1860:
    ctx.gpr[31] = (0x089B1868u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B1868u) goto L_089B1868;
    return;
L_089B1868:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
        goto L_089B1884;
    }
    goto L_089B1870;
L_089B1870:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B1880u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 119u, 0x088A8638u>(ctx, &aot_mem) && ctx.pc == 0x089B1880u) goto L_089B1880;
    return;
L_089B1880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    goto L_089B1884;
L_089B1884:
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (57344u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u < ctx.gpr[21] ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 59u, 0x089B4370u>(ctx, &aot_mem); return;
      }
      goto L_089B18C8;
    }
L_089B18C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B18EC;
      }
      goto L_089B18D4;
    }
L_089B18D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
        goto L_089B1918;
    }
    goto L_089B18EC;
L_089B18EC:
    ctx.gpr[31] = (0x089B18F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B18F4u) goto L_089B18F4;
    return;
L_089B18F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 59u, 0x089B4370u>(ctx, &aot_mem); return;
      }
      goto L_089B18FC;
    }
L_089B18FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 59u, 0x089B4370u>(ctx, &aot_mem); return;
      }
      goto L_089B1914;
    }
L_089B1914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    goto L_089B1918;
L_089B1918:
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 59u, 0x089B4370u>(ctx, &aot_mem); return;
      }
      goto L_089B1924;
    }
L_089B1924:
    ctx.gpr[31] = (0x089B192Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x089B192Cu) goto L_089B192C;
    return;
L_089B192C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B193Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 622u, 0x08A2AE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B193Cu) goto L_089B193C;
    return;
L_089B193C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 59u, 0x089B4370u>(ctx, &aot_mem); return;
      }
      goto L_089B1944;
    }
L_089B1944:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1824)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
      if (branch_taken) {
          goto L_089B1990;
      }
      goto L_089B1954;
    }
L_089B1954:
    ctx.gpr[31] = (0x089B195Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089B195Cu) goto L_089B195C;
    return;
L_089B195C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1990;
      }
      goto L_089B1964;
    }
L_089B1964:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089B1978u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1978u) goto L_089B1978;
    return;
L_089B1978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3638;
      }
      goto L_089B1988;
    }
L_089B1988:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3638;
      }
      goto L_089B1990;
    }
L_089B1990:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3638;
      }
      goto L_089B1998;
    }
L_089B1998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089B3638;
      }
      goto L_089B19B4;
    }
L_089B19B4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B28A8;
      }
      goto L_089B19BC;
    }
L_089B19BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B1A10;
      }
      goto L_089B19C4;
    }
L_089B19C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089B2728;
      }
      goto L_089B19CC;
    }
L_089B19CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B28A8;
      }
      goto L_089B19D4;
    }
L_089B19D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089B3638;
      }
      goto L_089B19DC;
    }
L_089B19DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089B1A00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24108));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B1A00u) goto L_089B1A00;
    return;
L_089B1A00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1A10;
      }
      goto L_089B1A08;
    }
L_089B1A08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3638;
      }
      goto L_089B1A10;
    }
L_089B1A10:
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B1A54;
      }
      goto L_089B1A44;
    }
L_089B1A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089B1A54;
L_089B1A54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 200u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1B24;
      }
      goto L_089B1A64;
    }
L_089B1A64:
    ctx.gpr[31] = (0x089B1A6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B1A6Cu) goto L_089B1A6C;
    return;
L_089B1A6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (14545u << 16u);
      if (branch_taken) {
          goto L_089B1B24;
      }
      goto L_089B1A74;
    }
L_089B1A74:
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1B24;
      }
      goto L_089B1A8C;
    }
L_089B1A8C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089B1A98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18028));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 101u, 0x0899CDCCu>(ctx, &aot_mem) && ctx.pc == 0x089B1A98u) goto L_089B1A98;
    return;
L_089B1A98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089B1ABCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 338u, 0x0899E180u>(ctx, &aot_mem) && ctx.pc == 0x089B1ABCu) goto L_089B1ABC;
    return;
L_089B1ABC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(25));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x089B1AF0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x089B1AF0u) goto L_089B1AF0;
    return;
L_089B1AF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B1AFCu);
    ctx.gpr[5] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1AFCu) goto L_089B1AFC;
    return;
L_089B1AFC:
    ctx.gpr[9] = (17046u << 16u);
    ctx.gpr[8] = (ctx.gpr[20] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 39u);
    ctx.gpr[31] = (0x089B1B1Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1B1Cu) goto L_089B1B1C;
    return;
L_089B1B1C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
      if (branch_taken) {
          goto L_089B26F8;
      }
      goto L_089B1B24;
    }
L_089B1B24:
    ctx.gpr[4] = (15139u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2250;
      }
      goto L_089B1B40;
    }
L_089B1B40:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (0x089B1B4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B1B4Cu) goto L_089B1B4C;
    return;
L_089B1B4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (15692u << 16u);
      if (branch_taken) {
          goto L_089B1BD8;
      }
      goto L_089B1B54;
    }
L_089B1B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15692u << 16u);
      if (branch_taken) {
          goto L_089B1BD8;
      }
      goto L_089B1B64;
    }
L_089B1B64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(756)));
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1BD4;
      }
      goto L_089B1BB0;
    }
L_089B1BB0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089B1BD4;
    }
    goto L_089B1BD4;
L_089B1BD4:
    ctx.gpr[4] = (15692u << 16u);
    goto L_089B1BD8;
L_089B1BD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1C10;
      }
      goto L_089B1BF8;
    }
L_089B1BF8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 166u);
    ctx.gpr[31] = (0x089B1C10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1C10u) goto L_089B1C10;
    return;
L_089B1C10:
    ctx.gpr[31] = (0x089B1C18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B1C18u) goto L_089B1C18;
    return;
L_089B1C18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B221C;
      }
      goto L_089B1C20;
    }
L_089B1C20:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1C40;
      }
      goto L_089B1C38;
    }
L_089B1C38:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089B1C40;
L_089B1C40:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1C88;
      }
      goto L_089B1C58;
    }
L_089B1C58:
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1C84;
      }
      goto L_089B1C70;
    }
L_089B1C70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B1C7Cu);
    ctx.gpr[5] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1C7Cu) goto L_089B1C7C;
    return;
L_089B1C7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1C88;
      }
      goto L_089B1C84;
    }
L_089B1C84:
    ctx.gpr[18] = (0u | 1u);
    goto L_089B1C88;
L_089B1C88:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[13])) && ctx.fpr[22] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B1CC0;
      }
      goto L_089B1CA4;
    }
L_089B1CA4:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089B1CC4;
    }
    goto L_089B1CB8;
L_089B1CB8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B1CD0;
      }
      goto L_089B1CC0;
    }
L_089B1CC0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B1CC4;
L_089B1CC4:
    ctx.gpr[31] = (0x089B1CCCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1CCCu) goto L_089B1CCC;
    return;
L_089B1CCC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B1CD0;
L_089B1CD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
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
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
      if (branch_taken) {
          goto L_089B1DDC;
      }
      goto L_089B1DC0;
    }
L_089B1DC0:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1DDC;
      }
      goto L_089B1DD4;
    }
L_089B1DD4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B1DE8;
      }
      goto L_089B1DDC;
    }
L_089B1DDC:
    ctx.gpr[31] = (0x089B1DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1DE4u) goto L_089B1DE4;
    return;
L_089B1DE4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B1DE8;
L_089B1DE8:
    ctx.gpr[31] = (0x089B1DF0u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089B1DF0u) goto L_089B1DF0;
    return;
L_089B1DF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
      if (branch_taken) {
          goto L_089B1E38;
      }
      goto L_089B1E1C;
    }
L_089B1E1C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1E38;
      }
      goto L_089B1E30;
    }
L_089B1E30:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B1E44;
      }
      goto L_089B1E38;
    }
L_089B1E38:
    ctx.gpr[31] = (0x089B1E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1E40u) goto L_089B1E40;
    return;
L_089B1E40:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B1E44;
L_089B1E44:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1EB8;
      }
      goto L_089B1E94;
    }
L_089B1E94:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1EDC;
      }
      goto L_089B1EB8;
    }
L_089B1EB8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B208C;
      }
      goto L_089B1EDC;
    }
L_089B1EDC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_089B1FD4;
    }
    goto L_089B1EF0;
L_089B1EF0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
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
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_089B1FCC;
      }
      goto L_089B1F48;
    }
L_089B1F48:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1FCC;
      }
      goto L_089B1F60;
    }
L_089B1F60:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1FCC;
      }
      goto L_089B1F8C;
    }
L_089B1F8C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1FCC;
      }
      goto L_089B1FBC;
    }
L_089B1FBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B1FCCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 706u, 0x089AFF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1FCCu) goto L_089B1FCC;
    return;
L_089B1FCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B208C;
      }
      goto L_089B1FD4;
    }
L_089B1FD4:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_089B208C;
      }
      goto L_089B2008;
    }
L_089B2008:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B208C;
      }
      goto L_089B2020;
    }
L_089B2020:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B208C;
      }
      goto L_089B204C;
    }
L_089B204C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B208C;
      }
      goto L_089B207C;
    }
L_089B207C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B208Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 706u, 0x089AFF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089B208Cu) goto L_089B208C;
    return;
L_089B208C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_089B20BC;
      }
      goto L_089B209C;
    }
L_089B209C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B20D4;
      }
      goto L_089B20B8;
    }
L_089B20B8:
    ctx.gpr[4] = (15820u << 16u);
    goto L_089B20BC;
L_089B20BC:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B21E4;
      }
      goto L_089B20D4;
    }
L_089B20D4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089B20E4u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18004));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089B20E4u) goto L_089B20E4;
    return;
L_089B20E4:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B20F4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089B20F4u) goto L_089B20F4;
    return;
L_089B20F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089B2134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 338u, 0x0899E180u>(ctx, &aot_mem) && ctx.pc == 0x089B2134u) goto L_089B2134;
    return;
L_089B2134:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(25));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x089B214Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x089B214Cu) goto L_089B214C;
    return;
L_089B214C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 197u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2168;
      }
      goto L_089B215C;
    }
L_089B215C:
    ctx.gpr[4] = (16968u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B2184;
      }
      goto L_089B2168;
    }
L_089B2168:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B217C;
      }
      goto L_089B2170;
    }
L_089B2170:
    ctx.gpr[4] = (16672u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B2184;
      }
      goto L_089B217C;
    }
L_089B217C:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089B2184;
L_089B2184:
    ctx.gpr[8] = (ctx.gpr[22] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 39u);
    ctx.gpr[31] = (0x089B219Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089B219Cu) goto L_089B219C;
    return;
L_089B219C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B21D0;
      }
      goto L_089B21B8;
    }
L_089B21B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 197u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B21D0;
      }
      goto L_089B21C8;
    }
L_089B21C8:
    ctx.gpr[31] = (0x089B21D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 320u, 0x089A54F8u>(ctx, &aot_mem) && ctx.pc == 0x089B21D0u) goto L_089B21D0;
    return;
L_089B21D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B21DCu);
    ctx.gpr[5] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B21DCu) goto L_089B21DC;
    return;
L_089B21DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2214;
      }
      goto L_089B21E4;
    }
L_089B21E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2214;
      }
      goto L_089B21F4;
    }
L_089B21F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089B2208u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x089B2208u) goto L_089B2208;
    return;
L_089B2208:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2214u);
    ctx.gpr[5] = (0u | 700u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x089B2214u) goto L_089B2214;
    return;
L_089B2214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B222C;
      }
      goto L_089B221C;
    }
L_089B221C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B222Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 430u, 0x088E1CC0u>(ctx, &aot_mem) && ctx.pc == 0x089B222Cu) goto L_089B222C;
    return;
L_089B222C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089B2248;
      }
      goto L_089B2238;
    }
L_089B2238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089B2248;
L_089B2248:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
      if (branch_taken) {
          goto L_089B26F8;
      }
      goto L_089B2250;
    }
L_089B2250:
    ctx.gpr[31] = (0x089B2258u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089B2258u) goto L_089B2258;
    return;
L_089B2258:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B250C;
      }
      goto L_089B2260;
    }
L_089B2260:
    ctx.gpr[31] = (0x089B2268u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B2268u) goto L_089B2268;
    return;
L_089B2268:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2310;
      }
      goto L_089B2270;
    }
L_089B2270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2310;
      }
      goto L_089B2280;
    }
L_089B2280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2310;
      }
      goto L_089B2290;
    }
L_089B2290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2310;
      }
      goto L_089B22A0;
    }
L_089B22A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2310;
      }
      goto L_089B22B0;
    }
L_089B22B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2310;
      }
      goto L_089B22C0;
    }
L_089B22C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2310;
      }
      goto L_089B22D0;
    }
L_089B22D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2310;
      }
      goto L_089B22E0;
    }
L_089B22E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2310;
      }
      goto L_089B22F0;
    }
L_089B22F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2310;
      }
      goto L_089B2300;
    }
L_089B2300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B250C;
      }
      goto L_089B2310;
    }
L_089B2310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B237C;
      }
      goto L_089B231C;
    }
L_089B231C:
    ctx.gpr[31] = (0x089B2324u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B2324u) goto L_089B2324;
    return;
L_089B2324:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B237C;
      }
      goto L_089B232C;
    }
L_089B232C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089B26F4;
      }
      goto L_089B2358;
    }
L_089B2358:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B2364u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 59u, 0x089A4334u>(ctx, &aot_mem) && ctx.pc == 0x089B2364u) goto L_089B2364;
    return;
L_089B2364:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
        goto L_089B26F8;
    }
    goto L_089B236C;
L_089B236C:
    ctx.gpr[31] = (0x089B2374u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 93u, 0x089A46D4u>(ctx, &aot_mem) && ctx.pc == 0x089B2374u) goto L_089B2374;
    return;
L_089B2374:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
      if (branch_taken) {
          goto L_089B26F8;
      }
      goto L_089B237C;
    }
L_089B237C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
        goto L_089B26F8;
    }
    goto L_089B238C;
L_089B238C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B24A8;
      }
      goto L_089B239C;
    }
L_089B239C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089B24A8;
      }
      goto L_089B23AC;
    }
L_089B23AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2444;
      }
      goto L_089B23E8;
    }
L_089B23E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2444;
      }
      goto L_089B2400;
    }
L_089B2400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    if (ctx.gpr[4] == ctx.gpr[20]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
        goto L_089B26F8;
    }
    goto L_089B240C;
L_089B240C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B241Cu);
    ctx.gpr[6] = (0u | 4000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 377u, 0x089A1A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B241Cu) goto L_089B241C;
    return;
L_089B241C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B243Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089B243Cu) goto L_089B243C;
    return;
L_089B243C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
      if (branch_taken) {
          goto L_089B26F8;
      }
      goto L_089B2444;
    }
L_089B2444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2468;
      }
      goto L_089B2454;
    }
L_089B2454:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2460u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 388u, 0x0899E350u>(ctx, &aot_mem) && ctx.pc == 0x089B2460u) goto L_089B2460;
    return;
L_089B2460:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
      if (branch_taken) {
          goto L_089B26F8;
      }
      goto L_089B2468;
    }
L_089B2468:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2474u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 667u, 0x089A7EE8u>(ctx, &aot_mem) && ctx.pc == 0x089B2474u) goto L_089B2474;
    return;
L_089B2474:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089B26F4;
      }
      goto L_089B24A8;
    }
L_089B24A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B24CC;
      }
      goto L_089B24B8;
    }
L_089B24B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B24C4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 388u, 0x0899E350u>(ctx, &aot_mem) && ctx.pc == 0x089B24C4u) goto L_089B24C4;
    return;
L_089B24C4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
      if (branch_taken) {
          goto L_089B26F8;
      }
      goto L_089B24CC;
    }
L_089B24CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B24D8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 667u, 0x089A7EE8u>(ctx, &aot_mem) && ctx.pc == 0x089B24D8u) goto L_089B24D8;
    return;
L_089B24D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089B26F4;
      }
      goto L_089B250C;
    }
L_089B250C:
    ctx.gpr[31] = (0x089B2514u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B2514u) goto L_089B2514;
    return;
L_089B2514:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
        goto L_089B26F8;
    }
    goto L_089B251C;
L_089B251C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
        goto L_089B26F8;
    }
    goto L_089B252C;
L_089B252C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089B2584;
      }
      goto L_089B2548;
    }
L_089B2548:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2574;
      }
      goto L_089B2558;
    }
L_089B2558:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[31] = (0x089B2568u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089B2568u) goto L_089B2568;
    return;
L_089B2568:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B2574;
L_089B2574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 1u);
      if (branch_taken) {
          goto L_089B258C;
      }
      goto L_089B2584;
    }
L_089B2584:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(504)));
    ctx.gpr[20] = (0u < ctx.gpr[20] ? 1u : 0u);
    goto L_089B258C;
L_089B258C:
    ctx.gpr[31] = (0x089B2594u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089B2594u) goto L_089B2594;
    return;
L_089B2594:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B26D4;
      }
      goto L_089B259C;
    }
L_089B259C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2932)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B26D4;
      }
      goto L_089B25B4;
    }
L_089B25B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B26D4;
      }
      goto L_089B25C4;
    }
L_089B25C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B26D4;
      }
      goto L_089B25DC;
    }
L_089B25DC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B26D4;
      }
      goto L_089B25E4;
    }
L_089B25E4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B25F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 264u, 0x08945234u>(ctx, &aot_mem) && ctx.pc == 0x089B25F0u) goto L_089B25F0;
    return;
L_089B25F0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089B2604u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x089B2604u) goto L_089B2604;
    return;
L_089B2604:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B2610u);
    ctx.gpr[5] = (0u | 1300u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x089B2610u) goto L_089B2610;
    return;
L_089B2610:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B26C4;
      }
      goto L_089B2634;
    }
L_089B2634:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089B2658u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 652u, 0x0899F648u>(ctx, &aot_mem) && ctx.pc == 0x089B2658u) goto L_089B2658;
    return;
L_089B2658:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B26C4;
      }
      goto L_089B2664;
    }
L_089B2664:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089B2688u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 652u, 0x0899F648u>(ctx, &aot_mem) && ctx.pc == 0x089B2688u) goto L_089B2688;
    return;
L_089B2688:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B26C4;
      }
      goto L_089B2694;
    }
L_089B2694:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089B26B8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 652u, 0x0899F648u>(ctx, &aot_mem) && ctx.pc == 0x089B26B8u) goto L_089B26B8;
    return;
L_089B26B8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B26F4;
      }
      goto L_089B26C4;
    }
L_089B26C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B26F4;
      }
      goto L_089B26D4;
    }
L_089B26D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089B26E8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x089B26E8u) goto L_089B26E8;
    return;
L_089B26E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B26F4u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x089B26F4u) goto L_089B26F4;
    return;
L_089B26F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    goto L_089B26F8;
L_089B26F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2720;
      }
      goto L_089B270C;
    }
L_089B270C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2720;
      }
      goto L_089B2714;
    }
L_089B2714:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2720u);
    ctx.gpr[5] = (0u | 105u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2720u) goto L_089B2720;
    return;
L_089B2720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3638;
      }
      goto L_089B2728;
    }
L_089B2728:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2734u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 196u, 0x088E0B64u>(ctx, &aot_mem) && ctx.pc == 0x089B2734u) goto L_089B2734;
    return;
L_089B2734:
    ctx.gpr[31] = (0x089B273Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B273Cu) goto L_089B273C;
    return;
L_089B273C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B28A0;
      }
      goto L_089B2744;
    }
L_089B2744:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2750u);
    ctx.gpr[5] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2750u) goto L_089B2750;
    return;
L_089B2750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B28A0;
      }
      goto L_089B2760;
    }
L_089B2760:
    ctx.gpr[31] = (0x089B2768u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089B2768u) goto L_089B2768;
    return;
L_089B2768:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B28A0;
      }
      goto L_089B2770;
    }
L_089B2770:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B28A0;
      }
      goto L_089B278C;
    }
L_089B278C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B28A0;
      }
      goto L_089B279C;
    }
L_089B279C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B28A0;
      }
      goto L_089B27B4;
    }
L_089B27B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B27C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 264u, 0x08945234u>(ctx, &aot_mem) && ctx.pc == 0x089B27C0u) goto L_089B27C0;
    return;
L_089B27C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089B27D4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x089B27D4u) goto L_089B27D4;
    return;
L_089B27D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B27E0u);
    ctx.gpr[5] = (0u | 1300u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x089B27E0u) goto L_089B27E0;
    return;
L_089B27E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2894;
      }
      goto L_089B2804;
    }
L_089B2804:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089B2828u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 652u, 0x0899F648u>(ctx, &aot_mem) && ctx.pc == 0x089B2828u) goto L_089B2828;
    return;
L_089B2828:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B2894;
      }
      goto L_089B2834;
    }
L_089B2834:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089B2858u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 652u, 0x0899F648u>(ctx, &aot_mem) && ctx.pc == 0x089B2858u) goto L_089B2858;
    return;
L_089B2858:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B2894;
      }
      goto L_089B2864;
    }
L_089B2864:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089B2888u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 652u, 0x0899F648u>(ctx, &aot_mem) && ctx.pc == 0x089B2888u) goto L_089B2888;
    return;
L_089B2888:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B28A0;
      }
      goto L_089B2894;
    }
L_089B2894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089B28A0;
L_089B28A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3638;
      }
      goto L_089B28A8;
    }
L_089B28A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_089B28D8;
    }
    goto L_089B28C4;
L_089B28C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(433)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B294C;
      }
      goto L_089B28D4;
    }
L_089B28D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    goto L_089B28D8;
L_089B28D8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2970;
      }
      goto L_089B2910;
    }
L_089B2910:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2970;
      }
      goto L_089B294C;
    }
L_089B294C:
    ctx.gpr[31] = (0x089B2954u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B2954u) goto L_089B2954;
    return;
L_089B2954:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2970;
      }
      goto L_089B295C;
    }
L_089B295C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2968u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 667u, 0x089A7EE8u>(ctx, &aot_mem) && ctx.pc == 0x089B2968u) goto L_089B2968;
    return;
L_089B2968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3638;
      }
      goto L_089B2970;
    }
L_089B2970:
    ctx.gpr[31] = (0x089B2978u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B2978u) goto L_089B2978;
    return;
L_089B2978:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089B3628;
      }
      goto L_089B2980;
    }
L_089B2980:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B29A4u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B29A4u) goto L_089B29A4;
    return;
L_089B29A4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
        goto L_089B29C0;
    }
    goto L_089B29C0;
L_089B29C0:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B29EC;
      }
      goto L_089B29DC;
    }
L_089B29DC:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[22];
    goto L_089B29EC;
L_089B29EC:
    ctx.gpr[31] = (0x089B29F4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089B29F4u) goto L_089B29F4;
    return;
L_089B29F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089B35D0;
      }
      goto L_089B2A04;
    }
L_089B2A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2B8C;
      }
      goto L_089B2A10;
    }
L_089B2A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2A30;
      }
      goto L_089B2A20;
    }
L_089B2A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2B8C;
      }
      goto L_089B2A30;
    }
L_089B2A30:
    ctx.gpr[31] = (0x089B2A38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B2A38u) goto L_089B2A38;
    return;
L_089B2A38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16050u << 16u);
      if (branch_taken) {
          goto L_089B2B54;
      }
      goto L_089B2A40;
    }
L_089B2A40:
    ctx.gpr[4] = (ctx.gpr[4] | 47299u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2A68;
      }
      goto L_089B2A58;
    }
L_089B2A58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1824)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2B54;
      }
      goto L_089B2A68;
    }
L_089B2A68:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2A78u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 59u, 0x089A4334u>(ctx, &aot_mem) && ctx.pc == 0x089B2A78u) goto L_089B2A78;
    return;
L_089B2A78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2A90;
      }
      goto L_089B2A80;
    }
L_089B2A80:
    ctx.gpr[31] = (0x089B2A88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 93u, 0x089A46D4u>(ctx, &aot_mem) && ctx.pc == 0x089B2A88u) goto L_089B2A88;
    return;
L_089B2A88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B35A8;
      }
      goto L_089B2A90;
    }
L_089B2A90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B35A8;
      }
      goto L_089B2AAC;
    }
L_089B2AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2B0C;
      }
      goto L_089B2ABC;
    }
L_089B2ABC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089B2AD0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2AD0u) goto L_089B2AD0;
    return;
L_089B2AD0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089B2AECu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x089B2AECu) goto L_089B2AEC;
    return;
L_089B2AEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2AF8u);
    ctx.gpr[5] = (0u | 3000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x089B2AF8u) goto L_089B2AF8;
    return;
L_089B2AF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2B04u);
    ctx.gpr[5] = (0u | 158u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2B04u) goto L_089B2B04;
    return;
L_089B2B04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B35A8;
      }
      goto L_089B2B0C;
    }
L_089B2B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2B38;
      }
      goto L_089B2B1C;
    }
L_089B2B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2B38;
      }
      goto L_089B2B2C;
    }
L_089B2B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2112), ctx.gpr[4]);
    goto L_089B2B38;
L_089B2B38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089B2B4Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2B4Cu) goto L_089B2B4C;
    return;
L_089B2B4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B35A8;
      }
      goto L_089B2B54;
    }
L_089B2B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2B6C;
      }
      goto L_089B2B60;
    }
L_089B2B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[31] = (0x089B2B6Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089B2B6Cu) goto L_089B2B6C;
    return;
L_089B2B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    ctx.gpr[31] = (0x089B2B7Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1760), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089B2B7Cu) goto L_089B2B7C;
    return;
L_089B2B7C:
    ctx.gpr[31] = (0x089B2B84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 795u, 0x0899FF58u>(ctx, &aot_mem) && ctx.pc == 0x089B2B84u) goto L_089B2B84;
    return;
L_089B2B84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B35A8;
      }
      goto L_089B2B8C;
    }
L_089B2B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16006u << 16u);
      if (branch_taken) {
          goto L_089B2C70;
      }
      goto L_089B2B9C;
    }
L_089B2B9C:
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2C70;
      }
      goto L_089B2BB4;
    }
L_089B2BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2C70;
      }
      goto L_089B2BC0;
    }
L_089B2BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(856)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_089B2BE4;
      }
      goto L_089B2BD0;
    }
L_089B2BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(856)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2C70;
      }
      goto L_089B2BE0;
    }
L_089B2BE0:
    ctx.gpr[4] = (16025u << 16u);
    goto L_089B2BE4;
L_089B2BE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2C70;
      }
      goto L_089B2C00;
    }
L_089B2C00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B2C0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B2C0Cu) goto L_089B2C0C;
    return;
L_089B2C0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2C28;
      }
      goto L_089B2C18;
    }
L_089B2C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B2C24u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B2C24u) goto L_089B2C24;
    return;
L_089B2C24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B2C28;
L_089B2C28:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (16230u << 16u);
      if (branch_taken) {
          goto L_089B2C70;
      }
      goto L_089B2C30;
    }
L_089B2C30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2C70;
      }
      goto L_089B2C4C;
    }
L_089B2C4C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2C70;
      }
      goto L_089B2C5C;
    }
L_089B2C5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089B2C70u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2C70u) goto L_089B2C70;
    return;
L_089B2C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089B2CD0;
      }
      goto L_089B2C80;
    }
L_089B2C80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(308));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2CACu);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 353u, 0x089A18ACu>(ctx, &aot_mem) && ctx.pc == 0x089B2CACu) goto L_089B2CAC;
    return;
L_089B2CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1396)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B2CC8;
      }
      goto L_089B2CB8;
    }
L_089B2CB8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    goto L_089B2CC8;
L_089B2CC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B35A8;
      }
      goto L_089B2CD0;
    }
L_089B2CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16095u << 16u);
      if (branch_taken) {
          goto L_089B2D6C;
      }
      goto L_089B2CE0;
    }
L_089B2CE0:
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2D08;
      }
      goto L_089B2CF8;
    }
L_089B2CF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1824)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2D6C;
      }
      goto L_089B2D08;
    }
L_089B2D08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1404), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1408), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1404));
    ctx.gpr[31] = (0x089B2D28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089B2D28u) goto L_089B2D28;
    return;
L_089B2D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2D4C;
      }
      goto L_089B2D38;
    }
L_089B2D38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089B2D4Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2D4Cu) goto L_089B2D4C;
    return;
L_089B2D4C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5000));
    ctx.gpr[31] = (0x089B2D64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 628u, 0x089AAD08u>(ctx, &aot_mem) && ctx.pc == 0x089B2D64u) goto L_089B2D64;
    return;
L_089B2D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B35A8;
      }
      goto L_089B2D6C;
    }
L_089B2D6C:
    ctx.gpr[4] = (16262u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B35A8;
      }
      goto L_089B2D88;
    }
L_089B2D88:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089B2E18u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 369u, 0x0897572Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2E18u) goto L_089B2E18;
    return;
L_089B2E18:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B2E3C;
      }
      goto L_089B2E2C;
    }
L_089B2E2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B3018;
      }
      goto L_089B2E3C;
    }
L_089B2E3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (0x089B2E4Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2E4Cu) goto L_089B2E4C;
    return;
L_089B2E4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2E74;
      }
      goto L_089B2E64;
    }
L_089B2E64:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_089B2E74;
L_089B2E74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
        goto L_089B2EF8;
    }
    goto L_089B2E98;
L_089B2E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[22] = ctx.fpr[15] - ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B2F40;
      }
      goto L_089B2EF8;
    }
L_089B2EF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[15] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B2F40;
L_089B2F40:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B34D4;
      }
      goto L_089B2F60;
    }
L_089B2F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B34D4;
      }
      goto L_089B2F6C;
    }
L_089B2F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B2F98u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2F98u) goto L_089B2F98;
    return;
L_089B2F98:
    ctx.gpr[31] = (0x089B2FA0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089B2FA0u) goto L_089B2FA0;
    return;
L_089B2FA0:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089B2FACu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089B2FACu) goto L_089B2FAC;
    return;
L_089B2FAC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2FD0;
      }
      goto L_089B2FC0;
    }
L_089B2FC0:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_089B2FD0;
L_089B2FD0:
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (16423u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36151u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16490u << 16u);
      if (branch_taken) {
          goto L_089B3010;
      }
      goto L_089B2FF0;
    }
L_089B2FF0:
    ctx.gpr[4] = (ctx.gpr[4] | 37504u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3010;
      }
      goto L_089B3008;
    }
L_089B3008:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2076), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B3010;
L_089B3010:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B34D4;
      }
      goto L_089B3018;
    }
L_089B3018:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B3038;
      }
      goto L_089B3028;
    }
L_089B3028:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B3234;
      }
      goto L_089B3038;
    }
L_089B3038:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089B30CCu);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B30CCu) goto L_089B30CC;
    return;
L_089B30CC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1236), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1268), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[5]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[18];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B322C;
      }
      goto L_089B3220;
    }
L_089B3220:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B3638;
      }
      goto L_089B322C;
    }
L_089B322C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B34D4;
      }
      goto L_089B3234;
    }
L_089B3234:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_089B32D4;
      }
      goto L_089B3244;
    }
L_089B3244:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x089B326Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 719u, 0x08977A28u>(ctx, &aot_mem) && ctx.pc == 0x089B326Cu) goto L_089B326C;
    return;
L_089B326C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1300), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B32CCu);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B32CCu) goto L_089B32CC;
    return;
L_089B32CC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089B34D4;
      }
      goto L_089B32D4;
    }
L_089B32D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B3340;
      }
      goto L_089B32E4;
    }
L_089B32E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089B3334u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3334u) goto L_089B3334;
    return;
L_089B3334:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B34D4;
      }
      goto L_089B3340;
    }
L_089B3340:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089B33A8;
      }
      goto L_089B338C;
    }
L_089B338C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089B33AC;
      }
      goto L_089B33A4;
    }
L_089B33A4:
    ctx.gpr[4] = (0u | 1u);
    goto L_089B33A8;
L_089B33A8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089B33AC;
L_089B33AC:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B33D0;
      }
      goto L_089B33BC;
    }
L_089B33BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089B3494;
      }
      goto L_089B33D0;
    }
L_089B33D0:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089B3414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089B3414u) goto L_089B3414;
    return;
L_089B3414:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089B3444u);
    ctx.fpr[26] = ctx.fpr[12] - ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089B3444u) goto L_089B3444;
    return;
L_089B3444:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B3494;
L_089B3494:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B34B4u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B34B4u) goto L_089B34B4;
    return;
L_089B34B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089B34D4;
      }
      goto L_089B34C4;
    }
L_089B34C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    goto L_089B34D4;
L_089B34D4:
    ctx.gpr[31] = (0x089B34DCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089B34DCu) goto L_089B34DC;
    return;
L_089B34DC:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089B351C;
      }
      goto L_089B3500;
    }
L_089B3500:
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B3558;
      }
      goto L_089B351C;
    }
L_089B351C:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089B3558;
      }
      goto L_089B3544;
    }
L_089B3544:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B3558;
L_089B3558:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B35A8;
      }
      goto L_089B356C;
    }
L_089B356C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (16329u << 16u);
      if (branch_taken) {
          goto L_089B35A8;
      }
      goto L_089B3584;
    }
L_089B3584:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B35A8;
L_089B35A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3628;
      }
      goto L_089B35B8;
    }
L_089B35B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3628;
      }
      goto L_089B35C8;
    }
L_089B35C8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
      if (branch_taken) {
          goto L_089B3628;
      }
      goto L_089B35D0;
    }
L_089B35D0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48989u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 45613u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3628;
      }
      goto L_089B3608;
    }
L_089B3608:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B3618u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 59u, 0x089A4334u>(ctx, &aot_mem) && ctx.pc == 0x089B3618u) goto L_089B3618;
    return;
L_089B3618:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3628;
      }
      goto L_089B3620;
    }
L_089B3620:
    ctx.gpr[31] = (0x089B3628u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 93u, 0x089A46D4u>(ctx, &aot_mem) && ctx.pc == 0x089B3628u) goto L_089B3628;
    return;
L_089B3628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B3638;
      }
      goto L_089B3638;
    }
L_089B3638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B36F4;
      }
      goto L_089B3648;
    }
L_089B3648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B36F4;
      }
      goto L_089B3658;
    }
L_089B3658:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B36F4;
      }
      goto L_089B3670;
    }
L_089B3670:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B36C0;
      }
      goto L_089B3698;
    }
L_089B3698:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B36E0;
      }
      goto L_089B36C0;
    }
L_089B36C0:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089B36E0;
L_089B36E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x089B36F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x089B36F4u) goto L_089B36F4;
    return;
L_089B36F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
        goto L_089B3728;
    }
    goto L_089B3704;
L_089B3704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
        goto L_089B3728;
    }
    goto L_089B3714;
L_089B3714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B375C;
      }
      goto L_089B3724;
    }
L_089B3724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    goto L_089B3728;
L_089B3728:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 56u, 0x089B4354u>(ctx, &aot_mem); return;
      }
      goto L_089B3734;
    }
L_089B3734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 56u, 0x089B4354u>(ctx, &aot_mem); return;
      }
      goto L_089B374C;
    }
L_089B374C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 56u, 0x089B4354u>(ctx, &aot_mem); return;
      }
      goto L_089B375C;
    }
L_089B375C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), 0u);
      if (branch_taken) {
          goto L_089B3778;
      }
      goto L_089B376C;
    }
L_089B376C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B37B4;
      }
      goto L_089B3778;
    }
L_089B3778:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1728));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B37DC;
      }
      goto L_089B37B4;
    }
L_089B37B4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1728));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
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
    goto L_089B37DC;
L_089B37DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089B3800;
      }
      goto L_089B37F4;
    }
L_089B37F4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089B3800;
L_089B3800:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089B3820;
    }
    goto L_089B3820;
L_089B3820:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[15] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(266)));
        goto L_089B389C;
    }
    goto L_089B3848;
L_089B3848:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_089B3878;
      }
      goto L_089B386C;
    }
L_089B386C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089B3878;
L_089B3878:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3950;
      }
      goto L_089B3898;
    }
L_089B3898:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(266)));
    goto L_089B389C;
L_089B389C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3D68;
      }
      goto L_089B38A8;
    }
L_089B38A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089B38C4;
      }
      goto L_089B38B8;
    }
L_089B38B8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089B38C4;
L_089B38C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089B38E4;
    }
    goto L_089B38E4;
L_089B38E4:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[15] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3D68;
      }
      goto L_089B390C;
    }
L_089B390C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_089B3930;
      }
      goto L_089B3924;
    }
L_089B3924:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089B3930;
L_089B3930:
    ctx.gpr[4] = (15235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3D68;
      }
      goto L_089B3950;
    }
L_089B3950:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3A9C;
      }
      goto L_089B3970;
    }
L_089B3970:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16261u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089B39E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x089B39E4u) goto L_089B39E4;
    return;
L_089B39E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3A94;
      }
      goto L_089B39EC;
    }
L_089B39EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16261u << 16u);
      if (branch_taken) {
          goto L_089B3A2C;
      }
      goto L_089B3A00;
    }
L_089B3A00:
    ctx.gpr[4] = (16261u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3A70;
      }
      goto L_089B3A28;
    }
L_089B3A28:
    ctx.gpr[4] = (16261u << 16u);
    goto L_089B3A2C;
L_089B3A2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B3A48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3A48u) goto L_089B3A48;
    return;
L_089B3A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3A70;
      }
      goto L_089B3A5C;
    }
L_089B3A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65472u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089B3A70;
L_089B3A70:
    ctx.gpr[31] = (0x089B3A78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 205u, 0x089A0EA4u>(ctx, &aot_mem) && ctx.pc == 0x089B3A78u) goto L_089B3A78;
    return;
L_089B3A78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089B3A94;
L_089B3A94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 55u, 0x089B434Cu>(ctx, &aot_mem); return;
      }
      goto L_089B3A9C;
    }
L_089B3A9C:
    ctx.gpr[31] = (0x089B3AA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B3AA4u) goto L_089B3AA4;
    return;
L_089B3AA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3BE4;
      }
      goto L_089B3AAC;
    }
L_089B3AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3BE4;
      }
      goto L_089B3ABC;
    }
L_089B3ABC:
    ctx.gpr[31] = (0x089B3AC4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x089B3AC4u) goto L_089B3AC4;
    return;
L_089B3AC4:
    ctx.gpr[31] = (0x089B3ACCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 78u, 0x08A98308u>(ctx, &aot_mem) && ctx.pc == 0x089B3ACCu) goto L_089B3ACC;
    return;
L_089B3ACC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3BE4;
      }
      goto L_089B3AD4;
    }
L_089B3AD4:
    ctx.gpr[31] = (0x089B3ADCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x089B3ADCu) goto L_089B3ADC;
    return;
L_089B3ADC:
    ctx.gpr[31] = (0x089B3AE4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 859u, 0x08A97538u>(ctx, &aot_mem) && ctx.pc == 0x089B3AE4u) goto L_089B3AE4;
    return;
L_089B3AE4:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089B3AF4u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x089B3AF4u) goto L_089B3AF4;
    return;
L_089B3AF4:
    ctx.gpr[31] = (0x089B3AFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 868u, 0x08A9759Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3AFCu) goto L_089B3AFC;
    return;
L_089B3AFC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3B34;
      }
      goto L_089B3B1C;
    }
L_089B3B1C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3BA0;
      }
      goto L_089B3B34;
    }
L_089B3B34:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x089B3B40u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3B40u) goto L_089B3B40;
    return;
L_089B3B40:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089B3B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089B3B60u) goto L_089B3B60;
    return;
L_089B3B60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1392));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089B3B8Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x089B3B8Cu) goto L_089B3B8C;
    return;
L_089B3B8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1392)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1396)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1400)));
    ctx.gpr[31] = (0x089B3BA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x089B3BA0u) goto L_089B3BA0;
    return;
L_089B3BA0:
    ctx.gpr[31] = (0x089B3BA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 93u, 0x089A46D4u>(ctx, &aot_mem) && ctx.pc == 0x089B3BA8u) goto L_089B3BA8;
    return;
L_089B3BA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1728));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(784), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(788), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(792), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 55u, 0x089B434Cu>(ctx, &aot_mem); return;
      }
      goto L_089B3BE4;
    }
L_089B3BE4:
    ctx.gpr[31] = (0x089B3BECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089B3BECu) goto L_089B3BEC;
    return;
L_089B3BEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3D14;
      }
      goto L_089B3BF4;
    }
L_089B3BF4:
    ctx.gpr[31] = (0x089B3BFCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x089B3BFCu) goto L_089B3BFC;
    return;
L_089B3BFC:
    ctx.gpr[31] = (0x089B3C04u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 859u, 0x08A97538u>(ctx, &aot_mem) && ctx.pc == 0x089B3C04u) goto L_089B3C04;
    return;
L_089B3C04:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089B3C14u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x089B3C14u) goto L_089B3C14;
    return;
L_089B3C14:
    ctx.gpr[31] = (0x089B3C1Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 868u, 0x08A9759Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3C1Cu) goto L_089B3C1C;
    return;
L_089B3C1C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3C54;
      }
      goto L_089B3C3C;
    }
L_089B3C3C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3CA4;
      }
      goto L_089B3C54;
    }
L_089B3C54:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089B3C6Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 270u, 0x0899DBA8u>(ctx, &aot_mem) && ctx.pc == 0x089B3C6Cu) goto L_089B3C6C;
    return;
L_089B3C6C:
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    ctx.gpr[31] = (0x089B3C88u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089B3C88u) goto L_089B3C88;
    return;
L_089B3C88:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B3CA4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 209u, 0x0899D764u>(ctx, &aot_mem) && ctx.pc == 0x089B3CA4u) goto L_089B3CA4;
    return;
L_089B3CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B3CB0u);
    ctx.gpr[5] = (0u | 137u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B3CB0u) goto L_089B3CB0;
    return;
L_089B3CB0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3CCC;
      }
      goto L_089B3CBC;
    }
L_089B3CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B3CC8u);
    ctx.gpr[5] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B3CC8u) goto L_089B3CC8;
    return;
L_089B3CC8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_089B3CCC;
L_089B3CCC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3CF0;
      }
      goto L_089B3CD4;
    }
L_089B3CD4:
    ctx.gpr[5] = (49216u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B3CE4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 813u, 0x08AFB828u>(ctx, &aot_mem) && ctx.pc == 0x089B3CE4u) goto L_089B3CE4;
    return;
L_089B3CE4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B3CF0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 817u, 0x08AFB85Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3CF0u) goto L_089B3CF0;
    return;
L_089B3CF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3D0C;
      }
      goto L_089B3D00;
    }
L_089B3D00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B3D0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 462u, 0x08AFA114u>(ctx, &aot_mem) && ctx.pc == 0x089B3D0Cu) goto L_089B3D0C;
    return;
L_089B3D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 55u, 0x089B434Cu>(ctx, &aot_mem); return;
      }
      goto L_089B3D14;
    }
L_089B3D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B3D20u);
    ctx.gpr[5] = (0u | 137u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B3D20u) goto L_089B3D20;
    return;
L_089B3D20:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3D3C;
      }
      goto L_089B3D2C;
    }
L_089B3D2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089B3D38u);
    ctx.gpr[5] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089B3D38u) goto L_089B3D38;
    return;
L_089B3D38:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_089B3D3C;
L_089B3D3C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3D60;
      }
      goto L_089B3D44;
    }
L_089B3D44:
    ctx.gpr[5] = (49216u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B3D54u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 813u, 0x08AFB828u>(ctx, &aot_mem) && ctx.pc == 0x089B3D54u) goto L_089B3D54;
    return;
L_089B3D54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B3D60u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 817u, 0x08AFB85Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3D60u) goto L_089B3D60;
    return;
L_089B3D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 55u, 0x089B434Cu>(ctx, &aot_mem); return;
      }
      goto L_089B3D68;
    }
L_089B3D68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(266)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 34u, 0x089B4220u>(ctx, &aot_mem); return;
      }
      goto L_089B3D78;
    }
L_089B3D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 34u, 0x089B4220u>(ctx, &aot_mem); return;
      }
      goto L_089B3D84;
    }
L_089B3D84:
    ctx.gpr[31] = (0x089B3D8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 404u, 0x08AF9C74u>(ctx, &aot_mem) && ctx.pc == 0x089B3D8Cu) goto L_089B3D8C;
    return;
L_089B3D8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 34u, 0x089B4220u>(ctx, &aot_mem); return;
      }
      goto L_089B3D94;
    }
L_089B3D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_089B3DB0;
      }
      goto L_089B3DA4;
    }
L_089B3DA4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089B3DB0;
L_089B3DB0:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089B3DC0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x089B3DC0u) goto L_089B3DC0;
    return;
L_089B3DC0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(804), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(804));
    ctx.gpr[31] = (0x089B3DD0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x089B3DD0u) goto L_089B3DD0;
    return;
L_089B3DD0:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 34u, 0x089B4220u>(ctx, &aot_mem); return;
      }
      goto L_089B3DF8;
    }
L_089B3DF8:
    ctx.gpr[31] = (0x089B3E00u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 204u, 0x0899D6F4u>(ctx, &aot_mem) && ctx.pc == 0x089B3E00u) goto L_089B3E00;
    return;
L_089B3E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_089B3E20;
      }
      goto L_089B3E14;
    }
L_089B3E14:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089B3E20;
L_089B3E20:
    ctx.gpr[4] = (15235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 34u, 0x089B4220u>(ctx, &aot_mem); return;
      }
      goto L_089B3E40;
    }
L_089B3E40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089B3E6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 205u, 0x0899D700u>(ctx, &aot_mem) && ctx.pc == 0x089B3E6Cu) goto L_089B3E6C;
    return;
L_089B3E6C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[31] = (0x089B3E78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3E78u) goto L_089B3E78;
    return;
L_089B3E78:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B3E88u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 103u, 0x0899CE20u>(ctx, &aot_mem) && ctx.pc == 0x089B3E88u) goto L_089B3E88;
    return;
L_089B3E88:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (49568u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089B3EC0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x089B3EC0u) goto L_089B3EC0;
    return;
L_089B3EC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3ED8;
      }
      goto L_089B3EC8;
    }
L_089B3EC8:
    ctx.gpr[31] = (0x089B3ED0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x089B3ED0u) goto L_089B3ED0;
    return;
L_089B3ED0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089B3EE0;
      }
      goto L_089B3ED8;
    }
L_089B3ED8:
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089B3EE0;
L_089B3EE0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[31] = (0x089B3EECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3EECu) goto L_089B3EEC;
    return;
L_089B3EEC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B3EFCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 104u, 0x0899CE38u>(ctx, &aot_mem) && ctx.pc == 0x089B3EFCu) goto L_089B3EFC;
    return;
L_089B3EFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (49568u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089B3F34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x089B3F34u) goto L_089B3F34;
    return;
L_089B3F34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3F4C;
      }
      goto L_089B3F3C;
    }
L_089B3F3C:
    ctx.gpr[31] = (0x089B3F44u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x089B3F44u) goto L_089B3F44;
    return;
L_089B3F44:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089B3F58;
      }
      goto L_089B3F4C;
    }
L_089B3F4C:
    ctx.gpr[4] = (17402u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089B3F58;
L_089B3F58:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089B3F64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3F64u) goto L_089B3F64;
    return;
L_089B3F64:
    ctx.gpr[4] = (16261u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17402u << 16u);
      if (branch_taken) {
          goto L_089B3F9C;
      }
      goto L_089B3F88;
    }
L_089B3F88:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3FF4;
      }
      goto L_089B3F9C;
    }
L_089B3F9C:
    ctx.gpr[31] = (0x089B3FA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3FA4u) goto L_089B3FA4;
    return;
L_089B3FA4:
    ctx.gpr[4] = (16261u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3FFC;
      }
      goto L_089B3FC8;
    }
L_089B3FC8:
    ctx.gpr[31] = (0x089B3FD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3FD0u) goto L_089B3FD0;
    return;
L_089B3FD0:
    ctx.gpr[4] = (16261u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3FFC;
      }
      goto L_089B3FF4;
    }
L_089B3FF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 4u, 0x089B4044u>(ctx, &aot_mem); return;
      }
      goto L_089B3FFC;
    }
L_089B3FFC:
    ctx.gpr[31] = (0x089B4004u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0107(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0107_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_107(Runtime &runtime) {
    runtime.register_generated_unit(107u, 0x089B0000u, 16384u, &recomp_unit_0107, &recomp_unit_0107_entry);
    runtime.register_function(0x089B0000u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0008u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B001Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B002Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0040u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B004Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0058u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0064u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B006Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0070u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0080u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0090u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0098u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0100u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0114u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0124u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B012Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B013Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0144u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0148u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0150u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B015Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0164u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0170u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0174u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0180u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0188u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0190u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0208u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B022Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0230u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0238u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0244u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B024Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0258u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0268u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0274u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0278u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0284u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0290u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0298u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0318u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0320u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0334u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B034Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0358u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0364u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B036Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0374u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0378u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0380u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0388u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0390u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B03B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B03BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B03C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B03F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0400u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0418u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0420u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0424u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0438u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0448u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0458u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0460u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0470u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0478u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0488u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0490u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0498u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0528u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B052Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0534u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B053Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0544u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0558u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0564u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B056Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0580u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B058Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0594u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0600u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0610u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B061Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0624u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B062Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0630u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0638u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B063Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0658u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0664u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B066Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0674u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0684u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0690u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0698u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0700u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0710u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B071Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0724u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B072Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0770u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B07A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B07D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0810u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0820u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0824u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0830u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0838u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0848u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0850u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0858u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0860u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B086Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0874u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0888u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0890u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0898u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0900u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0914u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0920u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B092Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0934u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B093Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0950u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0958u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0960u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B096Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B097Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0994u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B099Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A68u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0ABCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0ACCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AD8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BD8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BE8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CE8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0ECCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0ED0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0ED8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F68u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1014u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1038u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1080u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1098u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1100u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1114u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1120u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1128u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1134u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1144u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1148u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1154u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1180u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1218u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1220u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B122Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B123Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B124Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1258u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1268u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B127Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1298u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1320u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1328u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1340u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1358u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B138Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B13C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B13F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1428u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B145Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1490u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B14BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B14C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B14E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B14ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1504u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1510u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1530u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B154Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1558u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1574u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1580u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B15E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B15ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B15F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1654u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1658u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1660u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1668u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1670u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1680u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B16C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B16C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B16F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1700u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B170Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1728u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1730u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1738u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1740u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1768u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1770u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1798u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1808u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1818u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1828u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1838u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1850u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1860u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1868u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1870u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1880u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1884u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1914u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1918u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1924u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B192Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B193Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1944u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1954u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B195Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1964u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1978u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1988u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1990u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1998u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A8Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1ABCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1AF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1AFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1BB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1BD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1BD8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1BF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DE8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F8Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1FBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1FCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1FD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2008u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2020u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B204Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B207Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B208Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B209Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B20B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B20BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B20D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B20E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B20F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2134u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B214Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B215Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2168u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2170u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B217Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2184u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B219Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2208u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2214u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B221Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B222Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2238u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2248u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2250u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2258u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2260u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2268u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2270u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2280u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2290u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2300u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2310u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B231Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2324u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B232Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2358u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2364u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B236Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2374u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B237Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B238Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B239Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B23ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B23E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2400u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B240Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B241Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B243Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2444u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2454u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2460u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2468u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2474u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B24A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B24B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B24C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B24CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B24D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B250Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2514u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B251Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B252Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2548u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2558u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2568u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2574u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2584u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B258Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2594u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B259Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2604u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2610u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2634u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2658u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2664u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2688u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2694u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B270Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2714u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2720u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2728u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2734u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B273Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2744u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2750u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2760u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2768u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2770u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B278Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B279Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2804u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2828u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2834u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2858u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2864u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2888u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2894u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B28A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B28A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B28C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B28D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B28D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2910u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B294Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2954u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B295Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2968u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2970u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2978u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2980u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B29A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B29C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B29DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B29ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B29F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A68u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2AACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2ABCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2AD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2AECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2AF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B8Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CC8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2EF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2FA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2FACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2FC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2FD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2FF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3008u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3010u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3018u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3028u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3038u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B30CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3220u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B322Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3234u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3244u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B326Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3334u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3340u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B338Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3414u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3444u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3494u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B34B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B34C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B34D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B34DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3500u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B351Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3544u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3558u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B356Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3584u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3608u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3618u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3620u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3628u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3638u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3648u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3658u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3670u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3698u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3704u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3714u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3724u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3728u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3734u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B374Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B375Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B376Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3778u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3800u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3820u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3848u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B386Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3878u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3898u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B389Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B390Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3924u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3930u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3950u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3970u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B39E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B39ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3AA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3AACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3ABCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3AC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3ACCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3AD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3ADCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3AE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3AF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3AFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B8Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CC8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D68u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D8Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3EC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3EC8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3ED0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3ED8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3EE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3EECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3EFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FC8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FFCu, &recomp_unit_0107, "recomp_unit_0107");
}
} // namespace psprecomp
