#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0018[4088] = {
    1, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 9, 0,
    10, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0,
    18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    0, 33, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 39, 0,
    40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0,
    0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0,
    0, 91, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99,
    0, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113,
    0, 114, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 137,
    0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0,
    0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 159,
    0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0,
    0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 173, 174,
    0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    180, 0, 181, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 199, 200, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204,
    0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 210, 211, 0, 212, 0, 0, 0, 0, 213, 0, 0,
    214, 0, 215, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 221, 222, 0, 223, 0, 0, 0, 0,
    224, 0, 0, 225, 0, 226, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 232, 233, 0, 234, 0,
    0, 0, 0, 235, 0, 0, 236, 0, 237, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 243, 244,
    0, 245, 0, 0, 0, 0, 246, 0, 0, 247, 0, 248, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 253,
    0, 254, 255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263,
    0, 0, 264, 0, 265, 266, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 273,
    0, 0, 274, 0, 0, 275, 0, 276, 277, 0, 278, 0, 0, 0, 0, 279, 0, 0, 280, 0, 281, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0,
    0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 287, 288, 0, 289, 0, 0, 0, 0, 290, 0, 0, 291, 0, 292, 0, 0, 0, 0, 293, 0, 294, 0,
    0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 298, 299, 0, 300, 0, 0, 0, 0, 301, 0, 0, 302, 0, 303, 0, 0, 0, 0, 304,
    0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 309, 310, 0, 311, 0, 0, 0, 0, 312, 0, 0, 313, 0, 314, 0, 0,
    0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320, 321, 0, 322, 0, 0, 0, 0, 323, 0, 0, 324, 0,
    325, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 331, 332, 0, 333, 0, 0, 0, 0, 334, 0,
    0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 342, 343, 0, 344, 0, 0, 0,
    0, 345, 0, 0, 346, 0, 347, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 353, 354, 0, 355,
    0, 0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 359, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0,
    0, 0, 0, 0, 365, 0, 366, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 371, 0, 372, 0, 373, 0,
    0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 376, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 382, 0, 0, 0, 383, 0, 0,
    0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 392, 0,
    393, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 397, 398, 399, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0,
    0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 408, 409, 410, 0, 0, 411, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0,
    415, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 419, 420, 421, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0,
    0, 426, 0, 0, 427, 0, 0, 428, 0, 429, 430, 431, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 436, 0, 0,
    437, 0, 0, 438, 0, 0, 439, 0, 440, 441, 442, 0, 0, 443, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 448,
    0, 0, 0, 449, 0, 0, 450, 0, 451, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0,
    457, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464,
    0, 0, 465, 0, 466, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 0,
    474, 0, 0, 475, 0, 476, 477, 0, 478, 0, 0, 479, 0, 0, 480, 0, 0, 481, 0, 0, 482, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 486,
    0, 487, 488, 0, 489, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 501, 0, 0, 502, 0, 0, 0,
    0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 508, 0, 0, 0, 509, 510, 0, 511, 0,
    512, 0, 0, 0, 0, 0, 513, 514, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 518, 0, 519, 0, 0, 520, 0, 0,
    0, 0, 0, 0, 521, 0, 522, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0,
    0, 528, 0, 529, 0, 0, 0, 530, 0, 0, 0, 531, 532, 0, 533, 0, 534, 0, 0, 0, 0, 0, 535, 536, 537, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 538, 0, 539, 0, 540, 0, 541, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0,
    0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 551, 0, 552, 0, 0, 0, 553, 0, 554, 0, 555, 0, 556, 0, 557, 0, 558,
    0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 562, 563, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 571, 0, 572,
    0, 0, 573, 574, 0, 0, 575, 0, 0, 576, 0, 0, 0, 577, 0, 578, 0, 579, 580, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 583, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    588, 0, 0, 0, 589, 590, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 0, 594,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 596,
    0, 0, 0, 597, 0, 598, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 601, 602, 0, 603,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 607, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 613, 0, 614, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 0,
    0, 617, 0, 618, 0, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 622, 623, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 625, 0, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 630, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0,
    0, 636, 637, 0, 638, 0, 0, 639, 0, 0, 0, 0, 0, 0, 640, 641, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    643, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 645, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 649, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0,
    653, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0,
    0, 0, 0, 0, 663, 0, 664, 0, 665, 0, 0, 0, 666, 667, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 0,
    0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 673, 0, 674, 675, 0, 0, 0, 0, 676, 0,
    0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 679, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 682, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0,
    0, 0, 0, 0, 687, 688, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 691, 0, 692, 0, 0, 0, 0, 0, 0, 0, 693, 694, 0, 0, 0, 0,
    695, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    700, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 702, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0, 706, 0, 707, 0, 708, 0, 709,
    0, 0, 710, 0, 0, 711, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 0, 714, 0, 715, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 717,
    0, 718, 0, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 725,
    0, 726, 0, 727, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 730, 0, 731, 0, 732, 0, 0, 733, 0, 734, 0,
    0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 738, 0, 739, 0, 0,
    740, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 0, 0,
    0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 747, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0,
    0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0,
    0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 760, 0, 0, 0, 0, 761, 0, 0, 762, 0, 0, 0, 0, 0, 0, 763, 0, 0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 773, 0, 774,
    0, 775, 0, 776, 0, 0, 0, 777, 0, 778, 0, 779, 0, 780, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 783, 0, 784, 0, 785,
    0, 786, 0, 0, 787, 0, 788, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 791, 0, 792, 0, 793, 0, 794, 0,
    795, 0, 0, 796, 0, 797, 0, 798, 0, 0, 799, 0, 0, 0, 800, 0, 801, 0, 802, 0, 0, 0, 803, 0, 0, 0, 804, 0, 0, 0, 0, 0,
    0, 805, 0, 0, 0, 806, 0, 0, 0, 807, 0, 0, 808, 0, 0, 0, 809, 0, 810, 0, 811, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 813, 0, 0, 814, 0, 815, 0, 816, 0, 0, 0, 817, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    819, 820, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 824, 0, 0, 825, 0, 0,
    826, 0, 0, 827, 828, 0, 829, 830, 831, 0, 832, 0, 0, 0, 833, 0, 0, 0, 0, 0, 834, 0, 835, 0, 0, 0, 0, 0, 836, 0, 837, 0,
    0, 0, 0, 0, 0, 838, 0, 0, 0, 839, 0, 840, 0, 841, 0, 842, 0, 843, 0, 844, 0, 0, 0, 0, 0, 845, 0, 846, 0, 0, 0, 0,
    0, 0, 847, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 849, 0, 850, 0, 851, 0, 852, 853, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    854, 0, 0, 0, 0, 0, 0, 855, 0, 856, 0, 857, 0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 859, 0, 860, 0, 0, 0, 0, 861, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 862, 0, 863, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 866, 0,
    867, 0, 0, 868, 0, 869, 0, 0, 0, 0, 0, 0, 0, 870, 0, 871, 0, 872, 873, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 874,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 875, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 878, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 882, 0, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0,
    0, 885, 0, 886, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 888, 0, 0, 0, 0, 0, 889, 0, 0, 890,
};
void recomp_unit_0018_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0884C004u;
        entry_id = (entry_delta < 16352u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0018[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0884C004;
    case 2u: goto L_0884C00C;
    case 3u: goto L_0884C014;
    case 4u: goto L_0884C024;
    case 5u: goto L_0884C030;
    case 6u: goto L_0884C058;
    case 7u: goto L_0884C060;
    case 8u: goto L_0884C074;
    case 9u: goto L_0884C07C;
    case 10u: goto L_0884C084;
    case 11u: goto L_0884C094;
    case 12u: goto L_0884C0A0;
    case 13u: goto L_0884C0C8;
    case 14u: goto L_0884C0D0;
    case 15u: goto L_0884C0E4;
    case 16u: goto L_0884C0EC;
    case 17u: goto L_0884C0F4;
    case 18u: goto L_0884C104;
    case 19u: goto L_0884C110;
    case 20u: goto L_0884C138;
    case 21u: goto L_0884C140;
    case 22u: goto L_0884C154;
    case 23u: goto L_0884C15C;
    case 24u: goto L_0884C164;
    case 25u: goto L_0884C174;
    case 26u: goto L_0884C180;
    case 27u: goto L_0884C1A8;
    case 28u: goto L_0884C1B0;
    case 29u: goto L_0884C1C0;
    case 30u: goto L_0884C1C8;
    case 31u: goto L_0884C1D0;
    case 32u: goto L_0884C200;
    case 33u: goto L_0884C208;
    case 34u: goto L_0884C21C;
    case 35u: goto L_0884C224;
    case 36u: goto L_0884C22C;
    case 37u: goto L_0884C260;
    case 38u: goto L_0884C268;
    case 39u: goto L_0884C27C;
    case 40u: goto L_0884C284;
    case 41u: goto L_0884C28C;
    case 42u: goto L_0884C2C0;
    case 43u: goto L_0884C2C8;
    case 44u: goto L_0884C2E0;
    case 45u: goto L_0884C2E8;
    case 46u: goto L_0884C2F0;
    case 47u: goto L_0884C320;
    case 48u: goto L_0884C328;
    case 49u: goto L_0884C33C;
    case 50u: goto L_0884C344;
    case 51u: goto L_0884C34C;
    case 52u: goto L_0884C35C;
    case 53u: goto L_0884C368;
    case 54u: goto L_0884C390;
    case 55u: goto L_0884C398;
    case 56u: goto L_0884C3AC;
    case 57u: goto L_0884C3B4;
    case 58u: goto L_0884C3BC;
    case 59u: goto L_0884C400;
    case 60u: goto L_0884C408;
    case 61u: goto L_0884C424;
    case 62u: goto L_0884C42C;
    case 63u: goto L_0884C434;
    case 64u: goto L_0884C468;
    case 65u: goto L_0884C470;
    case 66u: goto L_0884C48C;
    case 67u: goto L_0884C494;
    case 68u: goto L_0884C49C;
    case 69u: goto L_0884C4D0;
    case 70u: goto L_0884C4D8;
    case 71u: goto L_0884C4F4;
    case 72u: goto L_0884C4FC;
    case 73u: goto L_0884C504;
    case 74u: goto L_0884C538;
    case 75u: goto L_0884C540;
    case 76u: goto L_0884C55C;
    case 77u: goto L_0884C564;
    case 78u: goto L_0884C56C;
    case 79u: goto L_0884C5A0;
    case 80u: goto L_0884C5A8;
    case 81u: goto L_0884C5C4;
    case 82u: goto L_0884C5CC;
    case 83u: goto L_0884C5D4;
    case 84u: goto L_0884C608;
    case 85u: goto L_0884C610;
    case 86u: goto L_0884C62C;
    case 87u: goto L_0884C634;
    case 88u: goto L_0884C63C;
    case 89u: goto L_0884C670;
    case 90u: goto L_0884C678;
    case 91u: goto L_0884C688;
    case 92u: goto L_0884C698;
    case 93u: goto L_0884C6A0;
    case 94u: goto L_0884C6A8;
    case 95u: goto L_0884C6B4;
    case 96u: goto L_0884C6C0;
    case 97u: goto L_0884C6E8;
    case 98u: goto L_0884C6F0;
    case 99u: goto L_0884C700;
    case 100u: goto L_0884C710;
    case 101u: goto L_0884C718;
    case 102u: goto L_0884C720;
    case 103u: goto L_0884C750;
    case 104u: goto L_0884C758;
    case 105u: goto L_0884C768;
    case 106u: goto L_0884C770;
    case 107u: goto L_0884C778;
    case 108u: goto L_0884C7A8;
    case 109u: goto L_0884C7B0;
    case 110u: goto L_0884C7C0;
    case 111u: goto L_0884C7C8;
    case 112u: goto L_0884C7D0;
    case 113u: goto L_0884C800;
    case 114u: goto L_0884C808;
    case 115u: goto L_0884C810;
    case 116u: goto L_0884C820;
    case 117u: goto L_0884C828;
    case 118u: goto L_0884C858;
    case 119u: goto L_0884C860;
    case 120u: goto L_0884C868;
    case 121u: goto L_0884C870;
    case 122u: goto L_0884C8A0;
    case 123u: goto L_0884C8A8;
    case 124u: goto L_0884C8B0;
    case 125u: goto L_0884C8B8;
    case 126u: goto L_0884C8C0;
    case 127u: goto L_0884C8C8;
    case 128u: goto L_0884C8D8;
    case 129u: goto L_0884C8F0;
    case 130u: goto L_0884C90C;
    case 131u: goto L_0884C914;
    case 132u: goto L_0884C930;
    case 133u: goto L_0884C938;
    case 134u: goto L_0884C954;
    case 135u: goto L_0884C95C;
    case 136u: goto L_0884C978;
    case 137u: goto L_0884C980;
    case 138u: goto L_0884C99C;
    case 139u: goto L_0884C9A4;
    case 140u: goto L_0884C9C0;
    case 141u: goto L_0884C9C8;
    case 142u: goto L_0884C9E4;
    case 143u: goto L_0884C9EC;
    case 144u: goto L_0884CA08;
    case 145u: goto L_0884CA10;
    case 146u: goto L_0884CA2C;
    case 147u: goto L_0884CA34;
    case 148u: goto L_0884CA50;
    case 149u: goto L_0884CA58;
    case 150u: goto L_0884CA64;
    case 151u: goto L_0884CA6C;
    case 152u: goto L_0884CA7C;
    case 153u: goto L_0884CA94;
    case 154u: goto L_0884CAB0;
    case 155u: goto L_0884CAB8;
    case 156u: goto L_0884CAD4;
    case 157u: goto L_0884CADC;
    case 158u: goto L_0884CAF8;
    case 159u: goto L_0884CB00;
    case 160u: goto L_0884CB1C;
    case 161u: goto L_0884CB24;
    case 162u: goto L_0884CB40;
    case 163u: goto L_0884CB48;
    case 164u: goto L_0884CB64;
    case 165u: goto L_0884CB6C;
    case 166u: goto L_0884CB88;
    case 167u: goto L_0884CB90;
    case 168u: goto L_0884CBAC;
    case 169u: goto L_0884CBB4;
    case 170u: goto L_0884CBD0;
    case 171u: goto L_0884CBD8;
    case 172u: goto L_0884CBF4;
    case 173u: goto L_0884CBFC;
    case 174u: goto L_0884CC00;
    case 175u: goto L_0884CC08;
    case 176u: goto L_0884CC14;
    case 177u: goto L_0884CC1C;
    case 178u: goto L_0884CC4C;
    case 179u: goto L_0884CC54;
    case 180u: goto L_0884CC84;
    case 181u: goto L_0884CC8C;
    case 182u: goto L_0884CC98;
    case 183u: goto L_0884CCA4;
    case 184u: goto L_0884CCAC;
    case 185u: goto L_0884CCDC;
    case 186u: goto L_0884CCE4;
    case 187u: goto L_0884CD18;
    case 188u: goto L_0884CD20;
    case 189u: goto L_0884CD30;
    case 190u: goto L_0884CD38;
    case 191u: goto L_0884CD48;
    case 192u: goto L_0884CD50;
    case 193u: goto L_0884CD80;
    case 194u: goto L_0884CD88;
    case 195u: goto L_0884CD90;
    case 196u: goto L_0884CDAC;
    case 197u: goto L_0884CDB8;
    case 198u: goto L_0884CDC4;
    case 199u: goto L_0884CDCC;
    case 200u: goto L_0884CDD0;
    case 201u: goto L_0884CDD8;
    case 202u: goto L_0884CDEC;
    case 203u: goto L_0884CDF8;
    case 204u: goto L_0884CE00;
    case 205u: goto L_0884CE14;
    case 206u: goto L_0884CE1C;
    case 207u: goto L_0884CE38;
    case 208u: goto L_0884CE44;
    case 209u: goto L_0884CE50;
    case 210u: goto L_0884CE58;
    case 211u: goto L_0884CE5C;
    case 212u: goto L_0884CE64;
    case 213u: goto L_0884CE78;
    case 214u: goto L_0884CE84;
    case 215u: goto L_0884CE8C;
    case 216u: goto L_0884CEA0;
    case 217u: goto L_0884CEA8;
    case 218u: goto L_0884CEC4;
    case 219u: goto L_0884CED0;
    case 220u: goto L_0884CEDC;
    case 221u: goto L_0884CEE4;
    case 222u: goto L_0884CEE8;
    case 223u: goto L_0884CEF0;
    case 224u: goto L_0884CF04;
    case 225u: goto L_0884CF10;
    case 226u: goto L_0884CF18;
    case 227u: goto L_0884CF2C;
    case 228u: goto L_0884CF34;
    case 229u: goto L_0884CF50;
    case 230u: goto L_0884CF5C;
    case 231u: goto L_0884CF68;
    case 232u: goto L_0884CF70;
    case 233u: goto L_0884CF74;
    case 234u: goto L_0884CF7C;
    case 235u: goto L_0884CF90;
    case 236u: goto L_0884CF9C;
    case 237u: goto L_0884CFA4;
    case 238u: goto L_0884CFB8;
    case 239u: goto L_0884CFC0;
    case 240u: goto L_0884CFDC;
    case 241u: goto L_0884CFE8;
    case 242u: goto L_0884CFF4;
    case 243u: goto L_0884CFFC;
    case 244u: goto L_0884D000;
    case 245u: goto L_0884D008;
    case 246u: goto L_0884D01C;
    case 247u: goto L_0884D028;
    case 248u: goto L_0884D030;
    case 249u: goto L_0884D044;
    case 250u: goto L_0884D04C;
    case 251u: goto L_0884D068;
    case 252u: goto L_0884D074;
    case 253u: goto L_0884D080;
    case 254u: goto L_0884D088;
    case 255u: goto L_0884D08C;
    case 256u: goto L_0884D094;
    case 257u: goto L_0884D0A8;
    case 258u: goto L_0884D0B4;
    case 259u: goto L_0884D0BC;
    case 260u: goto L_0884D0D0;
    case 261u: goto L_0884D0D8;
    case 262u: goto L_0884D0F4;
    case 263u: goto L_0884D100;
    case 264u: goto L_0884D10C;
    case 265u: goto L_0884D114;
    case 266u: goto L_0884D118;
    case 267u: goto L_0884D120;
    case 268u: goto L_0884D134;
    case 269u: goto L_0884D140;
    case 270u: goto L_0884D148;
    case 271u: goto L_0884D15C;
    case 272u: goto L_0884D164;
    case 273u: goto L_0884D180;
    case 274u: goto L_0884D18C;
    case 275u: goto L_0884D198;
    case 276u: goto L_0884D1A0;
    case 277u: goto L_0884D1A4;
    case 278u: goto L_0884D1AC;
    case 279u: goto L_0884D1C0;
    case 280u: goto L_0884D1CC;
    case 281u: goto L_0884D1D4;
    case 282u: goto L_0884D1E8;
    case 283u: goto L_0884D1F0;
    case 284u: goto L_0884D20C;
    case 285u: goto L_0884D218;
    case 286u: goto L_0884D224;
    case 287u: goto L_0884D22C;
    case 288u: goto L_0884D230;
    case 289u: goto L_0884D238;
    case 290u: goto L_0884D24C;
    case 291u: goto L_0884D258;
    case 292u: goto L_0884D260;
    case 293u: goto L_0884D274;
    case 294u: goto L_0884D27C;
    case 295u: goto L_0884D298;
    case 296u: goto L_0884D2A4;
    case 297u: goto L_0884D2B0;
    case 298u: goto L_0884D2B8;
    case 299u: goto L_0884D2BC;
    case 300u: goto L_0884D2C4;
    case 301u: goto L_0884D2D8;
    case 302u: goto L_0884D2E4;
    case 303u: goto L_0884D2EC;
    case 304u: goto L_0884D300;
    case 305u: goto L_0884D308;
    case 306u: goto L_0884D324;
    case 307u: goto L_0884D330;
    case 308u: goto L_0884D33C;
    case 309u: goto L_0884D344;
    case 310u: goto L_0884D348;
    case 311u: goto L_0884D350;
    case 312u: goto L_0884D364;
    case 313u: goto L_0884D370;
    case 314u: goto L_0884D378;
    case 315u: goto L_0884D38C;
    case 316u: goto L_0884D394;
    case 317u: goto L_0884D3B0;
    case 318u: goto L_0884D3BC;
    case 319u: goto L_0884D3C8;
    case 320u: goto L_0884D3D0;
    case 321u: goto L_0884D3D4;
    case 322u: goto L_0884D3DC;
    case 323u: goto L_0884D3F0;
    case 324u: goto L_0884D3FC;
    case 325u: goto L_0884D404;
    case 326u: goto L_0884D418;
    case 327u: goto L_0884D420;
    case 328u: goto L_0884D43C;
    case 329u: goto L_0884D448;
    case 330u: goto L_0884D454;
    case 331u: goto L_0884D45C;
    case 332u: goto L_0884D460;
    case 333u: goto L_0884D468;
    case 334u: goto L_0884D47C;
    case 335u: goto L_0884D488;
    case 336u: goto L_0884D490;
    case 337u: goto L_0884D4A4;
    case 338u: goto L_0884D4AC;
    case 339u: goto L_0884D4C8;
    case 340u: goto L_0884D4D4;
    case 341u: goto L_0884D4E0;
    case 342u: goto L_0884D4E8;
    case 343u: goto L_0884D4EC;
    case 344u: goto L_0884D4F4;
    case 345u: goto L_0884D508;
    case 346u: goto L_0884D514;
    case 347u: goto L_0884D51C;
    case 348u: goto L_0884D530;
    case 349u: goto L_0884D538;
    case 350u: goto L_0884D554;
    case 351u: goto L_0884D560;
    case 352u: goto L_0884D56C;
    case 353u: goto L_0884D574;
    case 354u: goto L_0884D578;
    case 355u: goto L_0884D580;
    case 356u: goto L_0884D594;
    case 357u: goto L_0884D5A0;
    case 358u: goto L_0884D5A8;
    case 359u: goto L_0884D5B0;
    case 360u: goto L_0884D5B8;
    case 361u: goto L_0884D5CC;
    case 362u: goto L_0884D5E0;
    case 363u: goto L_0884D5E8;
    case 364u: goto L_0884D5F8;
    case 365u: goto L_0884D614;
    case 366u: goto L_0884D61C;
    case 367u: goto L_0884D624;
    case 368u: goto L_0884D630;
    case 369u: goto L_0884D650;
    case 370u: goto L_0884D658;
    case 371u: goto L_0884D66C;
    case 372u: goto L_0884D674;
    case 373u: goto L_0884D67C;
    case 374u: goto L_0884D69C;
    case 375u: goto L_0884D6A4;
    case 376u: goto L_0884D6B4;
    case 377u: goto L_0884D6B8;
    case 378u: goto L_0884D6DC;
    case 379u: goto L_0884D724;
    case 380u: goto L_0884D758;
    case 381u: goto L_0884D760;
    case 382u: goto L_0884D768;
    case 383u: goto L_0884D778;
    case 384u: goto L_0884D790;
    case 385u: goto L_0884D798;
    case 386u: goto L_0884D7B0;
    case 387u: goto L_0884D7B8;
    case 388u: goto L_0884D7C0;
    case 389u: goto L_0884D7D0;
    case 390u: goto L_0884D7EC;
    case 391u: goto L_0884D7F4;
    case 392u: goto L_0884D7FC;
    case 393u: goto L_0884D804;
    case 394u: goto L_0884D818;
    case 395u: goto L_0884D824;
    case 396u: goto L_0884D830;
    case 397u: goto L_0884D838;
    case 398u: goto L_0884D83C;
    case 399u: goto L_0884D840;
    case 400u: goto L_0884D84C;
    case 401u: goto L_0884D854;
    case 402u: goto L_0884D86C;
    case 403u: goto L_0884D874;
    case 404u: goto L_0884D888;
    case 405u: goto L_0884D894;
    case 406u: goto L_0884D8A0;
    case 407u: goto L_0884D8AC;
    case 408u: goto L_0884D8B4;
    case 409u: goto L_0884D8B8;
    case 410u: goto L_0884D8BC;
    case 411u: goto L_0884D8C8;
    case 412u: goto L_0884D8D0;
    case 413u: goto L_0884D8DC;
    case 414u: goto L_0884D8FC;
    case 415u: goto L_0884D904;
    case 416u: goto L_0884D918;
    case 417u: goto L_0884D924;
    case 418u: goto L_0884D930;
    case 419u: goto L_0884D938;
    case 420u: goto L_0884D93C;
    case 421u: goto L_0884D940;
    case 422u: goto L_0884D94C;
    case 423u: goto L_0884D954;
    case 424u: goto L_0884D96C;
    case 425u: goto L_0884D974;
    case 426u: goto L_0884D988;
    case 427u: goto L_0884D994;
    case 428u: goto L_0884D9A0;
    case 429u: goto L_0884D9A8;
    case 430u: goto L_0884D9AC;
    case 431u: goto L_0884D9B0;
    case 432u: goto L_0884D9BC;
    case 433u: goto L_0884D9C4;
    case 434u: goto L_0884D9DC;
    case 435u: goto L_0884D9E4;
    case 436u: goto L_0884D9F8;
    case 437u: goto L_0884DA04;
    case 438u: goto L_0884DA10;
    case 439u: goto L_0884DA1C;
    case 440u: goto L_0884DA24;
    case 441u: goto L_0884DA28;
    case 442u: goto L_0884DA2C;
    case 443u: goto L_0884DA38;
    case 444u: goto L_0884DA40;
    case 445u: goto L_0884DA4C;
    case 446u: goto L_0884DA6C;
    case 447u: goto L_0884DA74;
    case 448u: goto L_0884DA80;
    case 449u: goto L_0884DA90;
    case 450u: goto L_0884DA9C;
    case 451u: goto L_0884DAA4;
    case 452u: goto L_0884DAAC;
    case 453u: goto L_0884DAB4;
    case 454u: goto L_0884DAD0;
    case 455u: goto L_0884DAD8;
    case 456u: goto L_0884DAF0;
    case 457u: goto L_0884DB04;
    case 458u: goto L_0884DB0C;
    case 459u: goto L_0884DB28;
    case 460u: goto L_0884DB30;
    case 461u: goto L_0884DB4C;
    case 462u: goto L_0884DB54;
    case 463u: goto L_0884DB6C;
    case 464u: goto L_0884DB80;
    case 465u: goto L_0884DB8C;
    case 466u: goto L_0884DB94;
    case 467u: goto L_0884DB9C;
    case 468u: goto L_0884DBB4;
    case 469u: goto L_0884DBC4;
    case 470u: goto L_0884DBD0;
    case 471u: goto L_0884DBE0;
    case 472u: goto L_0884DBEC;
    case 473u: goto L_0884DBF8;
    case 474u: goto L_0884DC04;
    case 475u: goto L_0884DC10;
    case 476u: goto L_0884DC18;
    case 477u: goto L_0884DC1C;
    case 478u: goto L_0884DC24;
    case 479u: goto L_0884DC30;
    case 480u: goto L_0884DC3C;
    case 481u: goto L_0884DC48;
    case 482u: goto L_0884DC54;
    case 483u: goto L_0884DC5C;
    case 484u: goto L_0884DC68;
    case 485u: goto L_0884DC74;
    case 486u: goto L_0884DC80;
    case 487u: goto L_0884DC88;
    case 488u: goto L_0884DC8C;
    case 489u: goto L_0884DC94;
    case 490u: goto L_0884DCA0;
    case 491u: goto L_0884DCAC;
    case 492u: goto L_0884DCB8;
    case 493u: goto L_0884DCC4;
    case 494u: goto L_0884DCF8;
    case 495u: goto L_0884DDC0;
    case 496u: goto L_0884DDEC;
    case 497u: goto L_0884DE14;
    case 498u: goto L_0884DEB8;
    case 499u: goto L_0884DED4;
    case 500u: goto L_0884DEDC;
    case 501u: goto L_0884DEE8;
    case 502u: goto L_0884DEF4;
    case 503u: goto L_0884DF0C;
    case 504u: goto L_0884DF14;
    case 505u: goto L_0884DF30;
    case 506u: goto L_0884DF48;
    case 507u: goto L_0884DF50;
    case 508u: goto L_0884DF60;
    case 509u: goto L_0884DF70;
    case 510u: goto L_0884DF74;
    case 511u: goto L_0884DF7C;
    case 512u: goto L_0884DF84;
    case 513u: goto L_0884DF9C;
    case 514u: goto L_0884DFA0;
    case 515u: goto L_0884DFA4;
    case 516u: goto L_0884DFD4;
    case 517u: goto L_0884DFDC;
    case 518u: goto L_0884DFE4;
    case 519u: goto L_0884DFEC;
    case 520u: goto L_0884DFF8;
    case 521u: goto L_0884E014;
    case 522u: goto L_0884E01C;
    case 523u: goto L_0884E028;
    case 524u: goto L_0884E034;
    case 525u: goto L_0884E04C;
    case 526u: goto L_0884E054;
    case 527u: goto L_0884E070;
    case 528u: goto L_0884E088;
    case 529u: goto L_0884E090;
    case 530u: goto L_0884E0A0;
    case 531u: goto L_0884E0B0;
    case 532u: goto L_0884E0B4;
    case 533u: goto L_0884E0BC;
    case 534u: goto L_0884E0C4;
    case 535u: goto L_0884E0DC;
    case 536u: goto L_0884E0E0;
    case 537u: goto L_0884E0E4;
    case 538u: goto L_0884E114;
    case 539u: goto L_0884E11C;
    case 540u: goto L_0884E124;
    case 541u: goto L_0884E12C;
    case 542u: goto L_0884E13C;
    case 543u: goto L_0884E148;
    case 544u: goto L_0884E160;
    case 545u: goto L_0884E1D0;
    case 546u: goto L_0884E1EC;
    case 547u: goto L_0884E1F8;
    case 548u: goto L_0884E208;
    case 549u: goto L_0884E220;
    case 550u: goto L_0884E238;
    case 551u: goto L_0884E240;
    case 552u: goto L_0884E248;
    case 553u: goto L_0884E258;
    case 554u: goto L_0884E260;
    case 555u: goto L_0884E268;
    case 556u: goto L_0884E270;
    case 557u: goto L_0884E278;
    case 558u: goto L_0884E280;
    case 559u: goto L_0884E290;
    case 560u: goto L_0884E2A4;
    case 561u: goto L_0884E2AC;
    case 562u: goto L_0884E2C4;
    case 563u: goto L_0884E2C8;
    case 564u: goto L_0884E2CC;
    case 565u: goto L_0884E2E0;
    case 566u: goto L_0884E314;
    case 567u: goto L_0884E320;
    case 568u: goto L_0884E348;
    case 569u: goto L_0884E360;
    case 570u: goto L_0884E370;
    case 571u: goto L_0884E378;
    case 572u: goto L_0884E380;
    case 573u: goto L_0884E38C;
    case 574u: goto L_0884E390;
    case 575u: goto L_0884E39C;
    case 576u: goto L_0884E3A8;
    case 577u: goto L_0884E3B8;
    case 578u: goto L_0884E3C0;
    case 579u: goto L_0884E3C8;
    case 580u: goto L_0884E3CC;
    case 581u: goto L_0884E3D4;
    case 582u: goto L_0884E424;
    case 583u: goto L_0884E430;
    case 584u: goto L_0884E43C;
    case 585u: goto L_0884E4AC;
    case 586u: goto L_0884E4B4;
    case 587u: goto L_0884E4C8;
    case 588u: goto L_0884E504;
    case 589u: goto L_0884E514;
    case 590u: goto L_0884E518;
    case 591u: goto L_0884E520;
    case 592u: goto L_0884E568;
    case 593u: goto L_0884E574;
    case 594u: goto L_0884E580;
    case 595u: goto L_0884E5F0;
    case 596u: goto L_0884E600;
    case 597u: goto L_0884E610;
    case 598u: goto L_0884E618;
    case 599u: goto L_0884E62C;
    case 600u: goto L_0884E664;
    case 601u: goto L_0884E674;
    case 602u: goto L_0884E678;
    case 603u: goto L_0884E680;
    case 604u: goto L_0884E6B4;
    case 605u: goto L_0884E6C4;
    case 606u: goto L_0884E720;
    case 607u: goto L_0884E738;
    case 608u: goto L_0884E740;
    case 609u: goto L_0884E748;
    case 610u: goto L_0884E768;
    case 611u: goto L_0884E7A0;
    case 612u: goto L_0884E7BC;
    case 613u: goto L_0884E7CC;
    case 614u: goto L_0884E7D4;
    case 615u: goto L_0884E7DC;
    case 616u: goto L_0884E7F8;
    case 617u: goto L_0884E808;
    case 618u: goto L_0884E810;
    case 619u: goto L_0884E81C;
    case 620u: goto L_0884E828;
    case 621u: goto L_0884E834;
    case 622u: goto L_0884E840;
    case 623u: goto L_0884E844;
    case 624u: goto L_0884E84C;
    case 625u: goto L_0884E898;
    case 626u: goto L_0884E8A4;
    case 627u: goto L_0884E8C0;
    case 628u: goto L_0884E8DC;
    case 629u: goto L_0884E8E8;
    case 630u: goto L_0884E8F0;
    case 631u: goto L_0884E93C;
    case 632u: goto L_0884E954;
    case 633u: goto L_0884E964;
    case 634u: goto L_0884E970;
    case 635u: goto L_0884E97C;
    case 636u: goto L_0884E988;
    case 637u: goto L_0884E98C;
    case 638u: goto L_0884E994;
    case 639u: goto L_0884E9A0;
    case 640u: goto L_0884E9BC;
    case 641u: goto L_0884E9C0;
    case 642u: goto L_0884E9C4;
    case 643u: goto L_0884EA04;
    case 644u: goto L_0884EA24;
    case 645u: goto L_0884EA30;
    case 646u: goto L_0884EA38;
    case 647u: goto L_0884EA4C;
    case 648u: goto L_0884EA64;
    case 649u: goto L_0884EA94;
    case 650u: goto L_0884EAA0;
    case 651u: goto L_0884EAE8;
    case 652u: goto L_0884EAF0;
    case 653u: goto L_0884EB04;
    case 654u: goto L_0884EB24;
    case 655u: goto L_0884EB50;
    case 656u: goto L_0884EB5C;
    case 657u: goto L_0884EBA4;
    case 658u: goto L_0884EBE0;
    case 659u: goto L_0884EC14;
    case 660u: goto L_0884EC3C;
    case 661u: goto L_0884ECB0;
    case 662u: goto L_0884ECF8;
    case 663u: goto L_0884ED14;
    case 664u: goto L_0884ED1C;
    case 665u: goto L_0884ED24;
    case 666u: goto L_0884ED34;
    case 667u: goto L_0884ED38;
    case 668u: goto L_0884ED5C;
    case 669u: goto L_0884ED78;
    case 670u: goto L_0884ED9C;
    case 671u: goto L_0884EDB0;
    case 672u: goto L_0884EDD0;
    case 673u: goto L_0884EDDC;
    case 674u: goto L_0884EDE4;
    case 675u: goto L_0884EDE8;
    case 676u: goto L_0884EDFC;
    case 677u: goto L_0884EE14;
    case 678u: goto L_0884EE34;
    case 679u: goto L_0884EE40;
    case 680u: goto L_0884EE48;
    case 681u: goto L_0884EE5C;
    case 682u: goto L_0884EE74;
    case 683u: goto L_0884EEA8;
    case 684u: goto L_0884EEC4;
    case 685u: goto L_0884EEDC;
    case 686u: goto L_0884EEF4;
    case 687u: goto L_0884EF14;
    case 688u: goto L_0884EF18;
    case 689u: goto L_0884EF24;
    case 690u: goto L_0884EF3C;
    case 691u: goto L_0884EF44;
    case 692u: goto L_0884EF4C;
    case 693u: goto L_0884EF6C;
    case 694u: goto L_0884EF70;
    case 695u: goto L_0884EF84;
    case 696u: goto L_0884EF90;
    case 697u: goto L_0884EFB4;
    case 698u: goto L_0884EFBC;
    case 699u: goto L_0884EFCC;
    case 700u: goto L_0884F004;
    case 701u: goto L_0884F024;
    case 702u: goto L_0884F088;
    case 703u: goto L_0884F098;
    case 704u: goto L_0884F0C8;
    case 705u: goto L_0884F0D8;
    case 706u: goto L_0884F0E8;
    case 707u: goto L_0884F0F0;
    case 708u: goto L_0884F0F8;
    case 709u: goto L_0884F100;
    case 710u: goto L_0884F10C;
    case 711u: goto L_0884F118;
    case 712u: goto L_0884F124;
    case 713u: goto L_0884F134;
    case 714u: goto L_0884F148;
    case 715u: goto L_0884F150;
    case 716u: goto L_0884F160;
    case 717u: goto L_0884F180;
    case 718u: goto L_0884F188;
    case 719u: goto L_0884F1A8;
    case 720u: goto L_0884F1B0;
    case 721u: goto L_0884F1C0;
    case 722u: goto L_0884F1C8;
    case 723u: goto L_0884F1E4;
    case 724u: goto L_0884F1F4;
    case 725u: goto L_0884F200;
    case 726u: goto L_0884F208;
    case 727u: goto L_0884F210;
    case 728u: goto L_0884F218;
    case 729u: goto L_0884F250;
    case 730u: goto L_0884F258;
    case 731u: goto L_0884F260;
    case 732u: goto L_0884F268;
    case 733u: goto L_0884F274;
    case 734u: goto L_0884F27C;
    case 735u: goto L_0884F290;
    case 736u: goto L_0884F298;
    case 737u: goto L_0884F2E8;
    case 738u: goto L_0884F2F0;
    case 739u: goto L_0884F2F8;
    case 740u: goto L_0884F304;
    case 741u: goto L_0884F328;
    case 742u: goto L_0884F33C;
    case 743u: goto L_0884F360;
    case 744u: goto L_0884F370;
    case 745u: goto L_0884F390;
    case 746u: goto L_0884F3A0;
    case 747u: goto L_0884F3AC;
    case 748u: goto L_0884F3C4;
    case 749u: goto L_0884F3E4;
    case 750u: goto L_0884F3F4;
    case 751u: goto L_0884F410;
    case 752u: goto L_0884F424;
    case 753u: goto L_0884F444;
    case 754u: goto L_0884F464;
    case 755u: goto L_0884F494;
    case 756u: goto L_0884F4CC;
    case 757u: goto L_0884F4F4;
    case 758u: goto L_0884F514;
    case 759u: goto L_0884F53C;
    case 760u: goto L_0884F588;
    case 761u: goto L_0884F59C;
    case 762u: goto L_0884F5A8;
    case 763u: goto L_0884F5C4;
    case 764u: goto L_0884F5D0;
    case 765u: goto L_0884F5D8;
    case 766u: goto L_0884F608;
    case 767u: goto L_0884F678;
    case 768u: goto L_0884F6C8;
    case 769u: goto L_0884F6D0;
    case 770u: goto L_0884F6D8;
    case 771u: goto L_0884F708;
    case 772u: goto L_0884F76C;
    case 773u: goto L_0884F778;
    case 774u: goto L_0884F780;
    case 775u: goto L_0884F788;
    case 776u: goto L_0884F790;
    case 777u: goto L_0884F7A0;
    case 778u: goto L_0884F7A8;
    case 779u: goto L_0884F7B0;
    case 780u: goto L_0884F7B8;
    case 781u: goto L_0884F7D4;
    case 782u: goto L_0884F7E4;
    case 783u: goto L_0884F7F0;
    case 784u: goto L_0884F7F8;
    case 785u: goto L_0884F800;
    case 786u: goto L_0884F808;
    case 787u: goto L_0884F814;
    case 788u: goto L_0884F81C;
    case 789u: goto L_0884F838;
    case 790u: goto L_0884F854;
    case 791u: goto L_0884F864;
    case 792u: goto L_0884F86C;
    case 793u: goto L_0884F874;
    case 794u: goto L_0884F87C;
    case 795u: goto L_0884F884;
    case 796u: goto L_0884F890;
    case 797u: goto L_0884F898;
    case 798u: goto L_0884F8A0;
    case 799u: goto L_0884F8AC;
    case 800u: goto L_0884F8BC;
    case 801u: goto L_0884F8C4;
    case 802u: goto L_0884F8CC;
    case 803u: goto L_0884F8DC;
    case 804u: goto L_0884F8EC;
    case 805u: goto L_0884F908;
    case 806u: goto L_0884F918;
    case 807u: goto L_0884F928;
    case 808u: goto L_0884F934;
    case 809u: goto L_0884F944;
    case 810u: goto L_0884F94C;
    case 811u: goto L_0884F954;
    case 812u: goto L_0884F95C;
    case 813u: goto L_0884F988;
    case 814u: goto L_0884F994;
    case 815u: goto L_0884F99C;
    case 816u: goto L_0884F9A4;
    case 817u: goto L_0884F9B4;
    case 818u: goto L_0884F9BC;
    case 819u: goto L_0884FA04;
    case 820u: goto L_0884FA08;
    case 821u: goto L_0884FA14;
    case 822u: goto L_0884FA44;
    case 823u: goto L_0884FA5C;
    case 824u: goto L_0884FA6C;
    case 825u: goto L_0884FA78;
    case 826u: goto L_0884FA84;
    case 827u: goto L_0884FA90;
    case 828u: goto L_0884FA94;
    case 829u: goto L_0884FA9C;
    case 830u: goto L_0884FAA0;
    case 831u: goto L_0884FAA4;
    case 832u: goto L_0884FAAC;
    case 833u: goto L_0884FABC;
    case 834u: goto L_0884FAD4;
    case 835u: goto L_0884FADC;
    case 836u: goto L_0884FAF4;
    case 837u: goto L_0884FAFC;
    case 838u: goto L_0884FB18;
    case 839u: goto L_0884FB28;
    case 840u: goto L_0884FB30;
    case 841u: goto L_0884FB38;
    case 842u: goto L_0884FB40;
    case 843u: goto L_0884FB48;
    case 844u: goto L_0884FB50;
    case 845u: goto L_0884FB68;
    case 846u: goto L_0884FB70;
    case 847u: goto L_0884FB8C;
    case 848u: goto L_0884FBA8;
    case 849u: goto L_0884FBB8;
    case 850u: goto L_0884FBC0;
    case 851u: goto L_0884FBC8;
    case 852u: goto L_0884FBD0;
    case 853u: goto L_0884FBD4;
    case 854u: goto L_0884FC04;
    case 855u: goto L_0884FC20;
    case 856u: goto L_0884FC28;
    case 857u: goto L_0884FC30;
    case 858u: goto L_0884FC40;
    case 859u: goto L_0884FC5C;
    case 860u: goto L_0884FC64;
    case 861u: goto L_0884FC78;
    case 862u: goto L_0884FCA0;
    case 863u: goto L_0884FCA8;
    case 864u: goto L_0884FCBC;
    case 865u: goto L_0884FCE0;
    case 866u: goto L_0884FCFC;
    case 867u: goto L_0884FD04;
    case 868u: goto L_0884FD10;
    case 869u: goto L_0884FD18;
    case 870u: goto L_0884FD38;
    case 871u: goto L_0884FD40;
    case 872u: goto L_0884FD48;
    case 873u: goto L_0884FD4C;
    case 874u: goto L_0884FD80;
    case 875u: goto L_0884FE08;
    case 876u: goto L_0884FE14;
    case 877u: goto L_0884FE48;
    case 878u: goto L_0884FE74;
    case 879u: goto L_0884FE9C;
    case 880u: goto L_0884FEB8;
    case 881u: goto L_0884FEF8;
    case 882u: goto L_0884FF34;
    case 883u: goto L_0884FF4C;
    case 884u: goto L_0884FF78;
    case 885u: goto L_0884FF88;
    case 886u: goto L_0884FF90;
    case 887u: goto L_0884FFAC;
    case 888u: goto L_0884FFBC;
    case 889u: goto L_0884FFD4;
    case 890u: goto L_0884FFE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0884C004:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884C014;
      }
      goto L_0884C00C;
    }
L_0884C00C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C060;
      }
      goto L_0884C014;
    }
L_0884C014:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884C024u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884C024u) goto L_0884C024;
    return;
L_0884C024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x0884C030u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884C030u) goto L_0884C030;
    return;
L_0884C030:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(648));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(652));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C058u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6024));
    goto L_0884D6DC;
L_0884C058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C060;
    }
L_0884C060:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C0D0;
      }
      goto L_0884C074;
    }
L_0884C074:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884C084;
      }
      goto L_0884C07C;
    }
L_0884C07C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C0D0;
      }
      goto L_0884C084;
    }
L_0884C084:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884C094u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884C094u) goto L_0884C094;
    return;
L_0884C094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x0884C0A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884C0A0u) goto L_0884C0A0;
    return;
L_0884C0A0:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(660));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C0C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6016));
    goto L_0884D6DC;
L_0884C0C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C0D0;
    }
L_0884C0D0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C140;
      }
      goto L_0884C0E4;
    }
L_0884C0E4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884C0F4;
      }
      goto L_0884C0EC;
    }
L_0884C0EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C140;
      }
      goto L_0884C0F4;
    }
L_0884C0F4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884C104u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884C104u) goto L_0884C104;
    return;
L_0884C104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x0884C110u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884C110u) goto L_0884C110;
    return;
L_0884C110:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(664));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(668));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C138u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6008));
    goto L_0884D6DC;
L_0884C138:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C140;
    }
L_0884C140:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C1B0;
      }
      goto L_0884C154;
    }
L_0884C154:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884C164;
      }
      goto L_0884C15C;
    }
L_0884C15C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C1B0;
      }
      goto L_0884C164;
    }
L_0884C164:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884C174u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884C174u) goto L_0884C174;
    return;
L_0884C174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x0884C180u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884C180u) goto L_0884C180;
    return;
L_0884C180:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(676));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C1A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6000));
    goto L_0884D6DC;
L_0884C1A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C1B0;
    }
L_0884C1B0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5896)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C208;
      }
      goto L_0884C1C0;
    }
L_0884C1C0:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884C1D0;
      }
      goto L_0884C1C8;
    }
L_0884C1C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C208;
      }
      goto L_0884C1D0;
    }
L_0884C1D0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5896)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(680));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C200u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5992));
    goto L_0884D6DC;
L_0884C200:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C208;
    }
L_0884C208:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5896));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C268;
      }
      goto L_0884C21C;
    }
L_0884C21C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884C22C;
      }
      goto L_0884C224;
    }
L_0884C224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C268;
      }
      goto L_0884C22C;
    }
L_0884C22C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5896));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(684));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C260u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5984));
    goto L_0884D6DC;
L_0884C260:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C268;
    }
L_0884C268:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5896));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C2C8;
      }
      goto L_0884C27C;
    }
L_0884C27C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884C28C;
      }
      goto L_0884C284;
    }
L_0884C284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C2C8;
      }
      goto L_0884C28C;
    }
L_0884C28C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5896));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C2C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5976));
    goto L_0884D6DC;
L_0884C2C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C2C8;
    }
L_0884C2C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7292)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884C328;
      }
      goto L_0884C2E0;
    }
L_0884C2E0:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884C2F0;
      }
      goto L_0884C2E8;
    }
L_0884C2E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C328;
      }
      goto L_0884C2F0;
    }
L_0884C2F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7292)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(692));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C320u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5968));
    goto L_0884D6DC;
L_0884C320:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C328;
    }
L_0884C328:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C398;
      }
      goto L_0884C33C;
    }
L_0884C33C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884C34C;
      }
      goto L_0884C344;
    }
L_0884C344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C398;
      }
      goto L_0884C34C;
    }
L_0884C34C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884C35Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884C35Cu) goto L_0884C35C;
    return;
L_0884C35C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0884C368u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884C368u) goto L_0884C368;
    return;
L_0884C368:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(696));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(700));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C390u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5960));
    goto L_0884D6DC;
L_0884C390:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C398;
    }
L_0884C398:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C408;
      }
      goto L_0884C3AC;
    }
L_0884C3AC:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[5] = (2269u << 16u);
      if (branch_taken) {
          goto L_0884C3BC;
      }
      goto L_0884C3B4;
    }
L_0884C3B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C408;
      }
      goto L_0884C3BC;
    }
L_0884C3BC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5952));
    ctx.gpr[11] = (ctx.lo);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x0884C400u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884D6DC;
L_0884C400:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C408;
    }
L_0884C408:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7360)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884C470;
      }
      goto L_0884C424;
    }
L_0884C424:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884C434;
      }
      goto L_0884C42C;
    }
L_0884C42C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C470;
      }
      goto L_0884C434;
    }
L_0884C434:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7360)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(708));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C468u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5944));
    goto L_0884D6DC;
L_0884C468:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C470;
    }
L_0884C470:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7356)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884C4D8;
      }
      goto L_0884C48C;
    }
L_0884C48C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884C49C;
      }
      goto L_0884C494;
    }
L_0884C494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C4D8;
      }
      goto L_0884C49C;
    }
L_0884C49C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7356)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(712));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C4D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5936));
    goto L_0884D6DC;
L_0884C4D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C4D8;
    }
L_0884C4D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7352)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884C540;
      }
      goto L_0884C4F4;
    }
L_0884C4F4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884C504;
      }
      goto L_0884C4FC;
    }
L_0884C4FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C540;
      }
      goto L_0884C504;
    }
L_0884C504:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7352)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(716));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C538u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5928));
    goto L_0884D6DC;
L_0884C538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C540;
    }
L_0884C540:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7348)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884C5A8;
      }
      goto L_0884C55C;
    }
L_0884C55C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884C56C;
      }
      goto L_0884C564;
    }
L_0884C564:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C5A8;
      }
      goto L_0884C56C;
    }
L_0884C56C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7348)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C5A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5920));
    goto L_0884D6DC;
L_0884C5A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C5A8;
    }
L_0884C5A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7344)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884C610;
      }
      goto L_0884C5C4;
    }
L_0884C5C4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884C5D4;
      }
      goto L_0884C5CC;
    }
L_0884C5CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C610;
      }
      goto L_0884C5D4;
    }
L_0884C5D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7344)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(724));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C608u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5912));
    goto L_0884D6DC;
L_0884C608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C610;
    }
L_0884C610:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7340)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884C678;
      }
      goto L_0884C62C;
    }
L_0884C62C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884C63C;
      }
      goto L_0884C634;
    }
L_0884C634:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C678;
      }
      goto L_0884C63C;
    }
L_0884C63C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(728));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C670u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5904));
    goto L_0884D6DC;
L_0884C670:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C678;
    }
L_0884C678:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C6F0;
      }
      goto L_0884C688;
    }
L_0884C688:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7424)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884C6F0;
      }
      goto L_0884C698;
    }
L_0884C698:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884C6A8;
      }
      goto L_0884C6A0;
    }
L_0884C6A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C6F0;
      }
      goto L_0884C6A8;
    }
L_0884C6A8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[31] = (0x0884C6B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7424)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884C6B4u) goto L_0884C6B4;
    return;
L_0884C6B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7424)));
    ctx.gpr[31] = (0x0884C6C0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(732), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884C6C0u) goto L_0884C6C0;
    return;
L_0884C6C0:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(732));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C6E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5896));
    goto L_0884D6DC;
L_0884C6E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C6F0;
    }
L_0884C6F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C758;
      }
      goto L_0884C700;
    }
L_0884C700:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7420)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884C758;
      }
      goto L_0884C710;
    }
L_0884C710:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884C720;
      }
      goto L_0884C718;
    }
L_0884C718:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C758;
      }
      goto L_0884C720;
    }
L_0884C720:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7420)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(740));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C750u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5888));
    goto L_0884D6DC;
L_0884C750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C758;
    }
L_0884C758:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7328)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884C7B0;
      }
      goto L_0884C768;
    }
L_0884C768:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884C778;
      }
      goto L_0884C770;
    }
L_0884C770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C7B0;
      }
      goto L_0884C778;
    }
L_0884C778:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7328)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(744));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C7A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5880));
    goto L_0884D6DC;
L_0884C7A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C7B0;
    }
L_0884C7B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7324)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884C808;
      }
      goto L_0884C7C0;
    }
L_0884C7C0:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884C7D0;
      }
      goto L_0884C7C8;
    }
L_0884C7C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C808;
      }
      goto L_0884C7D0;
    }
L_0884C7D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7324)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(748));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C800u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5872));
    goto L_0884D6DC;
L_0884C800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C808;
    }
L_0884C808:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884C828;
      }
      goto L_0884C810;
    }
L_0884C810:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7404)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C860;
      }
      goto L_0884C820;
    }
L_0884C820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C8A8;
      }
      goto L_0884C828;
    }
L_0884C828:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7408)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C858u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5864));
    goto L_0884D6DC;
L_0884C858:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C860;
    }
L_0884C860:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884C870;
      }
      goto L_0884C868;
    }
L_0884C868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884C8A8;
      }
      goto L_0884C870;
    }
L_0884C870:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7404)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(756));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884C8A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5856));
    goto L_0884D6DC;
L_0884C8A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884C8A8;
    }
L_0884C8A8:
    ctx.gpr[31] = (0x0884C8B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 243u, 0x08845278u>(ctx, &aot_mem) && ctx.pc == 0x0884C8B0u) goto L_0884C8B0;
    return;
L_0884C8B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884CC00;
      }
      goto L_0884C8B8;
    }
L_0884C8B8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884CA58;
      }
      goto L_0884C8C0;
    }
L_0884C8C0:
    ctx.gpr[31] = (0x0884C8C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 250u, 0x08845310u>(ctx, &aot_mem) && ctx.pc == 0x0884C8C8u) goto L_0884C8C8;
    return;
L_0884C8C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CA34;
      }
      goto L_0884C8D8;
    }
L_0884C8D8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-5352)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C8F0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5848));
    ctx.gpr[31] = (0x0884C90Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5840));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884C90Cu) goto L_0884C90C;
    return;
L_0884C90C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CA50;
      }
      goto L_0884C914;
    }
L_0884C914:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5848));
    ctx.gpr[31] = (0x0884C930u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5832));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884C930u) goto L_0884C930;
    return;
L_0884C930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CA50;
      }
      goto L_0884C938;
    }
L_0884C938:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5848));
    ctx.gpr[31] = (0x0884C954u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5824));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884C954u) goto L_0884C954;
    return;
L_0884C954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CA50;
      }
      goto L_0884C95C;
    }
L_0884C95C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5848));
    ctx.gpr[31] = (0x0884C978u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5816));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884C978u) goto L_0884C978;
    return;
L_0884C978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CA50;
      }
      goto L_0884C980;
    }
L_0884C980:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5848));
    ctx.gpr[31] = (0x0884C99Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5808));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884C99Cu) goto L_0884C99C;
    return;
L_0884C99C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CA50;
      }
      goto L_0884C9A4;
    }
L_0884C9A4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5848));
    ctx.gpr[31] = (0x0884C9C0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5800));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884C9C0u) goto L_0884C9C0;
    return;
L_0884C9C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CA50;
      }
      goto L_0884C9C8;
    }
L_0884C9C8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5848));
    ctx.gpr[31] = (0x0884C9E4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5792));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884C9E4u) goto L_0884C9E4;
    return;
L_0884C9E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CA50;
      }
      goto L_0884C9EC;
    }
L_0884C9EC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5848));
    ctx.gpr[31] = (0x0884CA08u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5784));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884CA08u) goto L_0884CA08;
    return;
L_0884CA08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CA50;
      }
      goto L_0884CA10;
    }
L_0884CA10:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5848));
    ctx.gpr[31] = (0x0884CA2Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5776));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884CA2Cu) goto L_0884CA2C;
    return;
L_0884CA2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CA50;
      }
      goto L_0884CA34;
    }
L_0884CA34:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5848));
    ctx.gpr[31] = (0x0884CA50u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5768));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884CA50u) goto L_0884CA50;
    return;
L_0884CA50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884CA58;
    }
L_0884CA58:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884CBFC;
      }
      goto L_0884CA64;
    }
L_0884CA64:
    ctx.gpr[31] = (0x0884CA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 255u, 0x0884535Cu>(ctx, &aot_mem) && ctx.pc == 0x0884CA6Cu) goto L_0884CA6C;
    return;
L_0884CA6C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CBD8;
      }
      goto L_0884CA7C;
    }
L_0884CA7C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-5312)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884CA94:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5760));
    ctx.gpr[31] = (0x0884CAB0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5840));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884CAB0u) goto L_0884CAB0;
    return;
L_0884CAB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CBF4;
      }
      goto L_0884CAB8;
    }
L_0884CAB8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5760));
    ctx.gpr[31] = (0x0884CAD4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5832));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884CAD4u) goto L_0884CAD4;
    return;
L_0884CAD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CBF4;
      }
      goto L_0884CADC;
    }
L_0884CADC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5760));
    ctx.gpr[31] = (0x0884CAF8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5824));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884CAF8u) goto L_0884CAF8;
    return;
L_0884CAF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CBF4;
      }
      goto L_0884CB00;
    }
L_0884CB00:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5760));
    ctx.gpr[31] = (0x0884CB1Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5816));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884CB1Cu) goto L_0884CB1C;
    return;
L_0884CB1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CBF4;
      }
      goto L_0884CB24;
    }
L_0884CB24:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5760));
    ctx.gpr[31] = (0x0884CB40u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5808));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884CB40u) goto L_0884CB40;
    return;
L_0884CB40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CBF4;
      }
      goto L_0884CB48;
    }
L_0884CB48:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5760));
    ctx.gpr[31] = (0x0884CB64u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5800));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884CB64u) goto L_0884CB64;
    return;
L_0884CB64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CBF4;
      }
      goto L_0884CB6C;
    }
L_0884CB6C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5760));
    ctx.gpr[31] = (0x0884CB88u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5792));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884CB88u) goto L_0884CB88;
    return;
L_0884CB88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CBF4;
      }
      goto L_0884CB90;
    }
L_0884CB90:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5760));
    ctx.gpr[31] = (0x0884CBACu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5784));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884CBACu) goto L_0884CBAC;
    return;
L_0884CBAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CBF4;
      }
      goto L_0884CBB4;
    }
L_0884CBB4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5760));
    ctx.gpr[31] = (0x0884CBD0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5776));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884CBD0u) goto L_0884CBD0;
    return;
L_0884CBD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CBF4;
      }
      goto L_0884CBD8;
    }
L_0884CBD8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5760));
    ctx.gpr[31] = (0x0884CBF4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5768));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884CBF4u) goto L_0884CBF4;
    return;
L_0884CBF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884CBFC;
    }
L_0884CBFC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0884CC00;
L_0884CC00:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884CC1C;
      }
      goto L_0884CC08;
    }
L_0884CC08:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884CC54;
      }
      goto L_0884CC14;
    }
L_0884CC14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CC8C;
      }
      goto L_0884CC1C;
    }
L_0884CC1C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7524)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(760), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(760));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884CC4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5752));
    goto L_0884D6DC;
L_0884CC4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884CC54;
    }
L_0884CC54:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7400)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(764));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(764), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884CC84u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5744));
    goto L_0884D6DC;
L_0884CC84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884CC8C;
    }
L_0884CC8C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884CCAC;
      }
      goto L_0884CC98;
    }
L_0884CC98:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884CCE4;
      }
      goto L_0884CCA4;
    }
L_0884CCA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CD20;
      }
      goto L_0884CCAC;
    }
L_0884CCAC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7396)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884CCDCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5736));
    goto L_0884D6DC;
L_0884CCDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884CCE4;
    }
L_0884CCE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7796)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(772));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884CD18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5728));
    goto L_0884D6DC;
L_0884CD18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884CD20;
    }
L_0884CD20:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7336)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884D5A8;
      }
      goto L_0884CD30;
    }
L_0884CD30:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884CD50;
      }
      goto L_0884CD38;
    }
L_0884CD38:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6008)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884CD88;
      }
      goto L_0884CD48;
    }
L_0884CD48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CE00;
      }
      goto L_0884CD50;
    }
L_0884CD50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7336)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(776));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884CD80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5720));
    goto L_0884D6DC;
L_0884CD80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884CD88;
    }
L_0884CD88:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884CE00;
      }
      goto L_0884CD90;
    }
L_0884CD90:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884CDD8;
      }
      goto L_0884CDAC;
    }
L_0884CDAC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884CDB8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884CDB8u) goto L_0884CDB8;
    return;
L_0884CDB8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CDD0;
      }
      goto L_0884CDC4;
    }
L_0884CDC4:
    ctx.gpr[31] = (0x0884CDCCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884CDCCu) goto L_0884CDCC;
    return;
L_0884CDCC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884CDD0;
L_0884CDD0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884CDD8;
L_0884CDD8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884CDECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5712));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884CDECu) goto L_0884CDEC;
    return;
L_0884CDEC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884CDF8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884CDF8u) goto L_0884CDF8;
    return;
L_0884CDF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884CE00;
    }
L_0884CE00:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6008));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CE8C;
      }
      goto L_0884CE14;
    }
L_0884CE14:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884CE8C;
      }
      goto L_0884CE1C;
    }
L_0884CE1C:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884CE64;
      }
      goto L_0884CE38;
    }
L_0884CE38:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884CE44u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884CE44u) goto L_0884CE44;
    return;
L_0884CE44:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CE5C;
      }
      goto L_0884CE50;
    }
L_0884CE50:
    ctx.gpr[31] = (0x0884CE58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884CE58u) goto L_0884CE58;
    return;
L_0884CE58:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884CE5C;
L_0884CE5C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884CE64;
L_0884CE64:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884CE78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5704));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884CE78u) goto L_0884CE78;
    return;
L_0884CE78:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884CE84u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884CE84u) goto L_0884CE84;
    return;
L_0884CE84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884CE8C;
    }
L_0884CE8C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6008));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CF18;
      }
      goto L_0884CEA0;
    }
L_0884CEA0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884CF18;
      }
      goto L_0884CEA8;
    }
L_0884CEA8:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884CEF0;
      }
      goto L_0884CEC4;
    }
L_0884CEC4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884CED0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884CED0u) goto L_0884CED0;
    return;
L_0884CED0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CEE8;
      }
      goto L_0884CEDC;
    }
L_0884CEDC:
    ctx.gpr[31] = (0x0884CEE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884CEE4u) goto L_0884CEE4;
    return;
L_0884CEE4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884CEE8;
L_0884CEE8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884CEF0;
L_0884CEF0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884CF04u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5696));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884CF04u) goto L_0884CF04;
    return;
L_0884CF04:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884CF10u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884CF10u) goto L_0884CF10;
    return;
L_0884CF10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884CF18;
    }
L_0884CF18:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6008));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CFA4;
      }
      goto L_0884CF2C;
    }
L_0884CF2C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884CFA4;
      }
      goto L_0884CF34;
    }
L_0884CF34:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884CF7C;
      }
      goto L_0884CF50;
    }
L_0884CF50:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884CF5Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884CF5Cu) goto L_0884CF5C;
    return;
L_0884CF5C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CF74;
      }
      goto L_0884CF68;
    }
L_0884CF68:
    ctx.gpr[31] = (0x0884CF70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884CF70u) goto L_0884CF70;
    return;
L_0884CF70:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884CF74;
L_0884CF74:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884CF7C;
L_0884CF7C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884CF90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5688));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884CF90u) goto L_0884CF90;
    return;
L_0884CF90:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884CF9Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884CF9Cu) goto L_0884CF9C;
    return;
L_0884CF9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884CFA4;
    }
L_0884CFA4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6008));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D030;
      }
      goto L_0884CFB8;
    }
L_0884CFB8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884D030;
      }
      goto L_0884CFC0;
    }
L_0884CFC0:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884D008;
      }
      goto L_0884CFDC;
    }
L_0884CFDC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884CFE8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884CFE8u) goto L_0884CFE8;
    return;
L_0884CFE8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D000;
      }
      goto L_0884CFF4;
    }
L_0884CFF4:
    ctx.gpr[31] = (0x0884CFFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884CFFCu) goto L_0884CFFC;
    return;
L_0884CFFC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884D000;
L_0884D000:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884D008;
L_0884D008:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884D01Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5680));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884D01Cu) goto L_0884D01C;
    return;
L_0884D01C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884D028u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884D028u) goto L_0884D028;
    return;
L_0884D028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884D030;
    }
L_0884D030:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6008));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D0BC;
      }
      goto L_0884D044;
    }
L_0884D044:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884D0BC;
      }
      goto L_0884D04C;
    }
L_0884D04C:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884D094;
      }
      goto L_0884D068;
    }
L_0884D068:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884D074u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884D074u) goto L_0884D074;
    return;
L_0884D074:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D08C;
      }
      goto L_0884D080;
    }
L_0884D080:
    ctx.gpr[31] = (0x0884D088u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884D088u) goto L_0884D088;
    return;
L_0884D088:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884D08C;
L_0884D08C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884D094;
L_0884D094:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884D0A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5672));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884D0A8u) goto L_0884D0A8;
    return;
L_0884D0A8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884D0B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884D0B4u) goto L_0884D0B4;
    return;
L_0884D0B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884D0BC;
    }
L_0884D0BC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6008));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D148;
      }
      goto L_0884D0D0;
    }
L_0884D0D0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884D148;
      }
      goto L_0884D0D8;
    }
L_0884D0D8:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884D120;
      }
      goto L_0884D0F4;
    }
L_0884D0F4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884D100u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884D100u) goto L_0884D100;
    return;
L_0884D100:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D118;
      }
      goto L_0884D10C;
    }
L_0884D10C:
    ctx.gpr[31] = (0x0884D114u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884D114u) goto L_0884D114;
    return;
L_0884D114:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884D118;
L_0884D118:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884D120;
L_0884D120:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884D134u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5664));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884D134u) goto L_0884D134;
    return;
L_0884D134:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884D140u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884D140u) goto L_0884D140;
    return;
L_0884D140:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884D148;
    }
L_0884D148:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6008));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D1D4;
      }
      goto L_0884D15C;
    }
L_0884D15C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884D1D4;
      }
      goto L_0884D164;
    }
L_0884D164:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884D1AC;
      }
      goto L_0884D180;
    }
L_0884D180:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884D18Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884D18Cu) goto L_0884D18C;
    return;
L_0884D18C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D1A4;
      }
      goto L_0884D198;
    }
L_0884D198:
    ctx.gpr[31] = (0x0884D1A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884D1A0u) goto L_0884D1A0;
    return;
L_0884D1A0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884D1A4;
L_0884D1A4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884D1AC;
L_0884D1AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884D1C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5656));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884D1C0u) goto L_0884D1C0;
    return;
L_0884D1C0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884D1CCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884D1CCu) goto L_0884D1CC;
    return;
L_0884D1CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884D1D4;
    }
L_0884D1D4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6008));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D260;
      }
      goto L_0884D1E8;
    }
L_0884D1E8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884D260;
      }
      goto L_0884D1F0;
    }
L_0884D1F0:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884D238;
      }
      goto L_0884D20C;
    }
L_0884D20C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884D218u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884D218u) goto L_0884D218;
    return;
L_0884D218:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D230;
      }
      goto L_0884D224;
    }
L_0884D224:
    ctx.gpr[31] = (0x0884D22Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884D22Cu) goto L_0884D22C;
    return;
L_0884D22C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884D230;
L_0884D230:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884D238;
L_0884D238:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884D24Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5648));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884D24Cu) goto L_0884D24C;
    return;
L_0884D24C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884D258u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884D258u) goto L_0884D258;
    return;
L_0884D258:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884D260;
    }
L_0884D260:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6008));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D2EC;
      }
      goto L_0884D274;
    }
L_0884D274:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884D2EC;
      }
      goto L_0884D27C;
    }
L_0884D27C:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884D2C4;
      }
      goto L_0884D298;
    }
L_0884D298:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884D2A4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884D2A4u) goto L_0884D2A4;
    return;
L_0884D2A4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D2BC;
      }
      goto L_0884D2B0;
    }
L_0884D2B0:
    ctx.gpr[31] = (0x0884D2B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884D2B8u) goto L_0884D2B8;
    return;
L_0884D2B8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884D2BC;
L_0884D2BC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884D2C4;
L_0884D2C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884D2D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5640));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884D2D8u) goto L_0884D2D8;
    return;
L_0884D2D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884D2E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884D2E4u) goto L_0884D2E4;
    return;
L_0884D2E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884D2EC;
    }
L_0884D2EC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6008));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D378;
      }
      goto L_0884D300;
    }
L_0884D300:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884D378;
      }
      goto L_0884D308;
    }
L_0884D308:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884D350;
      }
      goto L_0884D324;
    }
L_0884D324:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884D330u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884D330u) goto L_0884D330;
    return;
L_0884D330:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D348;
      }
      goto L_0884D33C;
    }
L_0884D33C:
    ctx.gpr[31] = (0x0884D344u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884D344u) goto L_0884D344;
    return;
L_0884D344:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884D348;
L_0884D348:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884D350;
L_0884D350:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884D364u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5632));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884D364u) goto L_0884D364;
    return;
L_0884D364:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884D370u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884D370u) goto L_0884D370;
    return;
L_0884D370:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884D378;
    }
L_0884D378:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6008));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D404;
      }
      goto L_0884D38C;
    }
L_0884D38C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884D404;
      }
      goto L_0884D394;
    }
L_0884D394:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884D3DC;
      }
      goto L_0884D3B0;
    }
L_0884D3B0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884D3BCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884D3BCu) goto L_0884D3BC;
    return;
L_0884D3BC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D3D4;
      }
      goto L_0884D3C8;
    }
L_0884D3C8:
    ctx.gpr[31] = (0x0884D3D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884D3D0u) goto L_0884D3D0;
    return;
L_0884D3D0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884D3D4;
L_0884D3D4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884D3DC;
L_0884D3DC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884D3F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5624));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884D3F0u) goto L_0884D3F0;
    return;
L_0884D3F0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884D3FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884D3FCu) goto L_0884D3FC;
    return;
L_0884D3FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884D404;
    }
L_0884D404:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6008));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D490;
      }
      goto L_0884D418;
    }
L_0884D418:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884D490;
      }
      goto L_0884D420;
    }
L_0884D420:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884D468;
      }
      goto L_0884D43C;
    }
L_0884D43C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884D448u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884D448u) goto L_0884D448;
    return;
L_0884D448:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D460;
      }
      goto L_0884D454;
    }
L_0884D454:
    ctx.gpr[31] = (0x0884D45Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884D45Cu) goto L_0884D45C;
    return;
L_0884D45C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884D460;
L_0884D460:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884D468;
L_0884D468:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884D47Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5616));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884D47Cu) goto L_0884D47C;
    return;
L_0884D47C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884D488u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884D488u) goto L_0884D488;
    return;
L_0884D488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884D490;
    }
L_0884D490:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6008));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D51C;
      }
      goto L_0884D4A4;
    }
L_0884D4A4:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884D51C;
      }
      goto L_0884D4AC;
    }
L_0884D4AC:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884D4F4;
      }
      goto L_0884D4C8;
    }
L_0884D4C8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884D4D4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884D4D4u) goto L_0884D4D4;
    return;
L_0884D4D4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D4EC;
      }
      goto L_0884D4E0;
    }
L_0884D4E0:
    ctx.gpr[31] = (0x0884D4E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884D4E8u) goto L_0884D4E8;
    return;
L_0884D4E8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884D4EC;
L_0884D4EC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884D4F4;
L_0884D4F4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884D508u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5608));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884D508u) goto L_0884D508;
    return;
L_0884D508:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884D514u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884D514u) goto L_0884D514;
    return;
L_0884D514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884D51C;
    }
L_0884D51C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6008));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D5A8;
      }
      goto L_0884D530;
    }
L_0884D530:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884D5A8;
      }
      goto L_0884D538;
    }
L_0884D538:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[16] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884D580;
      }
      goto L_0884D554;
    }
L_0884D554:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0884D560u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884D560u) goto L_0884D560;
    return;
L_0884D560:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D578;
      }
      goto L_0884D56C;
    }
L_0884D56C:
    ctx.gpr[31] = (0x0884D574u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884D574u) goto L_0884D574;
    return;
L_0884D574:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0884D578;
L_0884D578:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_0884D580;
L_0884D580:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884D594u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5600));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884D594u) goto L_0884D594;
    return;
L_0884D594:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884D5A0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884D5A0u) goto L_0884D5A0;
    return;
L_0884D5A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884D5A8;
    }
L_0884D5A8:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884D5B8;
      }
      goto L_0884D5B0;
    }
L_0884D5B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884D5E8;
      }
      goto L_0884D5B8;
    }
L_0884D5B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7288)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0884D5CCu);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5592));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 124u, 0x08844A48u>(ctx, &aot_mem) && ctx.pc == 0x0884D5CCu) goto L_0884D5CC;
    return;
L_0884D5CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0884D5E0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884D5E0u) goto L_0884D5E0;
    return;
L_0884D5E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884D5E8;
    }
L_0884D5E8:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B4;
      }
      goto L_0884D5F8;
    }
L_0884D5F8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7332)));
    ctx.gpr[4] = (ctx.gpr[4] << (ctx.gpr[20] & 31u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D6A4;
      }
      goto L_0884D614;
    }
L_0884D614:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884D658;
      }
      goto L_0884D61C;
    }
L_0884D61C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_0884D630;
      }
      goto L_0884D624;
    }
L_0884D624:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0884D658;
      }
      goto L_0884D630;
    }
L_0884D630:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884D650u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5584));
    goto L_0884D6DC;
L_0884D650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884D658;
    }
L_0884D658:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(780));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0884D66Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5576));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0884D66Cu) goto L_0884D66C;
    return;
L_0884D66C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884D67C;
      }
      goto L_0884D674;
    }
L_0884D674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884D6A4;
      }
      goto L_0884D67C;
    }
L_0884D67C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(780));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x0884D69Cu);
    ctx.gpr[10] = (0u | 4u);
    goto L_0884D6DC;
L_0884D69C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884D6B8;
      }
      goto L_0884D6A4;
    }
L_0884D6A4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884D5F8;
      }
      goto L_0884D6B4;
    }
L_0884D6B4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_0884D6B8;
L_0884D6B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(788)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(792)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(796)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(800)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(804)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(808)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(812)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D6DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-608));
    ctx.gpr[11] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_0884D760;
      }
      goto L_0884D724;
    }
L_0884D724:
    ctx.gpr[22] = (2269u << 16u);
    ctx.gpr[8] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(-4624), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[20] = (2269u << 16u);
    ctx.gpr[23] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-4624));
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(-5136));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-5648));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[6];
    ctx.gpr[30] = (2227u << 16u);
      if (branch_taken) {
          goto L_0884D768;
      }
      goto L_0884D758;
    }
L_0884D758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D7B8;
      }
      goto L_0884D760;
    }
L_0884D760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DCC4;
      }
      goto L_0884D768;
    }
L_0884D768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0884D798;
      }
      goto L_0884D778;
    }
L_0884D778:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884D790u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5564));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0884D790u) goto L_0884D790;
    return;
L_0884D790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D7B0;
      }
      goto L_0884D798;
    }
L_0884D798:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884D7B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5556));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0884D7B0u) goto L_0884D7B0;
    return;
L_0884D7B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DB8C;
      }
      goto L_0884D7B8;
    }
L_0884D7B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DA74;
      }
      goto L_0884D7C0;
    }
L_0884D7C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[23]);
    ctx.gpr[6] = (ctx.gpr[7] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0884DB80;
      }
      goto L_0884D7D0;
    }
L_0884D7D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[19]);
    ctx.gpr[23] = (2225u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-5536));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0884D874;
      }
      goto L_0884D7EC;
    }
L_0884D7EC:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0884D904;
      }
      goto L_0884D7F4;
    }
L_0884D7F4:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884D9E4;
      }
      goto L_0884D7FC;
    }
L_0884D7FC:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0884D974;
      }
      goto L_0884D804;
    }
L_0884D804:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5548));
      if (branch_taken) {
          goto L_0884D840;
      }
      goto L_0884D818;
    }
L_0884D818:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0884D824u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884D824u) goto L_0884D824;
    return;
L_0884D824:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D83C;
      }
      goto L_0884D830;
    }
L_0884D830:
    ctx.gpr[31] = (0x0884D838u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884D838u) goto L_0884D838;
    return;
L_0884D838:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0884D83C;
L_0884D83C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_0884D840;
L_0884D840:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884D84Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884D84Cu) goto L_0884D84C;
    return;
L_0884D84C:
    ctx.gpr[31] = (0x0884D854u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x0884D854u) goto L_0884D854;
    return;
L_0884D854:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0884D86Cu);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0884D86Cu) goto L_0884D86C;
    return;
L_0884D86C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DB80;
      }
      goto L_0884D874;
    }
L_0884D874:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (2225u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884D888u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-5528));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0884D888u) goto L_0884D888;
    return;
L_0884D888:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0884D8BC;
      }
      goto L_0884D894;
    }
L_0884D894:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0884D8A0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884D8A0u) goto L_0884D8A0;
    return;
L_0884D8A0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D8B8;
      }
      goto L_0884D8AC;
    }
L_0884D8AC:
    ctx.gpr[31] = (0x0884D8B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884D8B4u) goto L_0884D8B4;
    return;
L_0884D8B4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0884D8B8;
L_0884D8B8:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_0884D8BC;
L_0884D8BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884D8C8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884D8C8u) goto L_0884D8C8;
    return;
L_0884D8C8:
    ctx.gpr[31] = (0x0884D8D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x0884D8D0u) goto L_0884D8D0;
    return;
L_0884D8D0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0884D8DCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0884D8DCu) goto L_0884D8DC;
    return;
L_0884D8DC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884D8FCu);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0884D8FCu) goto L_0884D8FC;
    return;
L_0884D8FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DB80;
      }
      goto L_0884D904;
    }
L_0884D904:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5512));
      if (branch_taken) {
          goto L_0884D940;
      }
      goto L_0884D918;
    }
L_0884D918:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0884D924u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884D924u) goto L_0884D924;
    return;
L_0884D924:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D93C;
      }
      goto L_0884D930;
    }
L_0884D930:
    ctx.gpr[31] = (0x0884D938u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884D938u) goto L_0884D938;
    return;
L_0884D938:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0884D93C;
L_0884D93C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_0884D940;
L_0884D940:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884D94Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884D94Cu) goto L_0884D94C;
    return;
L_0884D94C:
    ctx.gpr[31] = (0x0884D954u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x0884D954u) goto L_0884D954;
    return;
L_0884D954:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0884D96Cu);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0884D96Cu) goto L_0884D96C;
    return;
L_0884D96C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DB80;
      }
      goto L_0884D974;
    }
L_0884D974:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5496));
      if (branch_taken) {
          goto L_0884D9B0;
      }
      goto L_0884D988;
    }
L_0884D988:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0884D994u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884D994u) goto L_0884D994;
    return;
L_0884D994:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D9AC;
      }
      goto L_0884D9A0;
    }
L_0884D9A0:
    ctx.gpr[31] = (0x0884D9A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884D9A8u) goto L_0884D9A8;
    return;
L_0884D9A8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0884D9AC;
L_0884D9AC:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_0884D9B0;
L_0884D9B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884D9BCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884D9BCu) goto L_0884D9BC;
    return;
L_0884D9BC:
    ctx.gpr[31] = (0x0884D9C4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x0884D9C4u) goto L_0884D9C4;
    return;
L_0884D9C4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0884D9DCu);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0884D9DCu) goto L_0884D9DC;
    return;
L_0884D9DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DB80;
      }
      goto L_0884D9E4;
    }
L_0884D9E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (2225u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884D9F8u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-5480));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0884D9F8u) goto L_0884D9F8;
    return;
L_0884D9F8:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0884DA2C;
      }
      goto L_0884DA04;
    }
L_0884DA04:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0884DA10u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884DA10u) goto L_0884DA10;
    return;
L_0884DA10:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DA28;
      }
      goto L_0884DA1C;
    }
L_0884DA1C:
    ctx.gpr[31] = (0x0884DA24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884DA24u) goto L_0884DA24;
    return;
L_0884DA24:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0884DA28;
L_0884DA28:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_0884DA2C;
L_0884DA2C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884DA38u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884DA38u) goto L_0884DA38;
    return;
L_0884DA38:
    ctx.gpr[31] = (0x0884DA40u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 284u, 0x089130F4u>(ctx, &aot_mem) && ctx.pc == 0x0884DA40u) goto L_0884DA40;
    return;
L_0884DA40:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0884DA4Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0884DA4Cu) goto L_0884DA4C;
    return;
L_0884DA4C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884DA6Cu);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0884DA6Cu) goto L_0884DA6C;
    return;
L_0884DA6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DB80;
      }
      goto L_0884DA74;
    }
L_0884DA74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0884DB80;
      }
      goto L_0884DA80;
    }
L_0884DA80:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0884DB80;
      }
      goto L_0884DA90;
    }
L_0884DA90:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0884DAD8;
      }
      goto L_0884DA9C;
    }
L_0884DA9C:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0884DB0C;
      }
      goto L_0884DAA4;
    }
L_0884DAA4:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884DB54;
      }
      goto L_0884DAAC;
    }
L_0884DAAC:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0884DB30;
      }
      goto L_0884DAB4;
    }
L_0884DAB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884DAD0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5460));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0884DAD0u) goto L_0884DAD0;
    return;
L_0884DAD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DB80;
      }
      goto L_0884DAD8;
    }
L_0884DAD8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[19]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884DAF0u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5456));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0884DAF0u) goto L_0884DAF0;
    return;
L_0884DAF0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884DB04u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0884DB04u) goto L_0884DB04;
    return;
L_0884DB04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DB80;
      }
      goto L_0884DB0C;
    }
L_0884DB0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884DB28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5448));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0884DB28u) goto L_0884DB28;
    return;
L_0884DB28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DB80;
      }
      goto L_0884DB30;
    }
L_0884DB30:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884DB4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5440));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0884DB4Cu) goto L_0884DB4C;
    return;
L_0884DB4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DB80;
      }
      goto L_0884DB54;
    }
L_0884DB54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[19]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884DB6Cu);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5436));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0884DB6Cu) goto L_0884DB6C;
    return;
L_0884DB6C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884DB80u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0884DB80u) goto L_0884DB80;
    return;
L_0884DB80:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[20] = (2269u << 16u);
    goto L_0884DB8C;
L_0884DB8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884DC5C;
      }
      goto L_0884DB94;
    }
L_0884DB94:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DC5C;
      }
      goto L_0884DB9C;
    }
L_0884DB9C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884DBB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7560));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x0884DBB4u) goto L_0884DBB4;
    return;
L_0884DBB4:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0884DBE0;
      }
      goto L_0884DBC4;
    }
L_0884DBC4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884DBD0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A541E4u>(ctx, &aot_mem) && ctx.pc == 0x0884DBD0u) goto L_0884DBD0;
    return;
L_0884DBD0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884DBC4;
      }
      goto L_0884DBE0;
    }
L_0884DBE0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884DBECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884DBECu) goto L_0884DBEC;
    return;
L_0884DBEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
        goto L_0884DC24;
    }
    goto L_0884DBF8;
L_0884DBF8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884DC04u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884DC04u) goto L_0884DC04;
    return;
L_0884DC04:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DC1C;
      }
      goto L_0884DC10;
    }
L_0884DC10:
    ctx.gpr[31] = (0x0884DC18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884DC18u) goto L_0884DC18;
    return;
L_0884DC18:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884DC1C;
L_0884DC1C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    goto L_0884DC24;
L_0884DC24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[31] = (0x0884DC30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884DC30u) goto L_0884DC30;
    return;
L_0884DC30:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884DC3Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A541E4u>(ctx, &aot_mem) && ctx.pc == 0x0884DC3Cu) goto L_0884DC3C;
    return;
L_0884DC3C:
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(-5136));
    ctx.gpr[31] = (0x0884DC48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 588u, 0x08ADA6F4u>(ctx, &aot_mem) && ctx.pc == 0x0884DC48u) goto L_0884DC48;
    return;
L_0884DC48:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884DC54u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x0884DC54u) goto L_0884DC54;
    return;
L_0884DC54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DCC4;
      }
      goto L_0884DC5C;
    }
L_0884DC5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
        goto L_0884DC94;
    }
    goto L_0884DC68;
L_0884DC68:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884DC74u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884DC74u) goto L_0884DC74;
    return;
L_0884DC74:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DC8C;
      }
      goto L_0884DC80;
    }
L_0884DC80:
    ctx.gpr[31] = (0x0884DC88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884DC88u) goto L_0884DC88;
    return;
L_0884DC88:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884DC8C;
L_0884DC8C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    goto L_0884DC94;
L_0884DC94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[31] = (0x0884DCA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884DCA0u) goto L_0884DCA0;
    return;
L_0884DCA0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884DCACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884DCACu) goto L_0884DCAC;
    return;
L_0884DCAC:
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(-5136));
    ctx.gpr[31] = (0x0884DCB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 588u, 0x08ADA6F4u>(ctx, &aot_mem) && ctx.pc == 0x0884DCB8u) goto L_0884DCB8;
    return;
L_0884DCB8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0884DCC4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x0884DCC4u) goto L_0884DCC4;
    return;
L_0884DCC4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884DCF8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5100)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5096)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(5128)));
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[14] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(5104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(5124)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(5132), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(5140), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (16281u << 16u);
    ctx.gpr[8] = (16268u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.gpr[13] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[24] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(5112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(5108), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(5116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(5120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5136), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(5144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884DDC0:
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
L_0884DDEC:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884DE14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 24u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7128)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(19));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]);
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[1] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(31), ctx.gpr[1]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(34), ctx.gpr[1]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_0884DFEC;
      }
      goto L_0884DEB8;
    }
L_0884DEB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 12u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DF30;
      }
      goto L_0884DED4;
    }
L_0884DED4:
    ctx.gpr[31] = (0x0884DEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0884DEDCu) goto L_0884DEDC;
    return;
L_0884DEDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
        goto L_0884DEF4;
    }
    goto L_0884DEE8;
L_0884DEE8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0884DFEC;
      }
      goto L_0884DEF4;
    }
L_0884DEF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0884DF0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884DF0Cu) goto L_0884DF0C;
    return;
L_0884DF0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884DFEC;
      }
      goto L_0884DF14;
    }
L_0884DF14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0884DFEC;
      }
      goto L_0884DF30;
    }
L_0884DF30:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DF7C;
      }
      goto L_0884DF48;
    }
L_0884DF48:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_0884DF50;
L_0884DF50:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_0884DF70;
    }
    goto L_0884DF60;
L_0884DF60:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0884DF74;
      }
      goto L_0884DF70;
    }
L_0884DF70:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_0884DF74;
L_0884DF74:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_0884DF50;
    }
    goto L_0884DF7C;
L_0884DF7C:
    if (ctx.gpr[5] == ctx.gpr[7]) {
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
        goto L_0884DFA0;
    }
    goto L_0884DF84;
L_0884DF84:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
        goto L_0884DFA4;
    }
    goto L_0884DF9C;
L_0884DF9C:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_0884DFA0;
L_0884DFA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    goto L_0884DFA4;
L_0884DFA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
        goto L_0884DFDC;
    }
    goto L_0884DFD4;
L_0884DFD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0884DFDC;
      }
      goto L_0884DFDC;
    }
L_0884DFDC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DFEC;
      }
      goto L_0884DFE4;
    }
L_0884DFE4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0884DFEC;
L_0884DFEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E12C;
      }
      goto L_0884DFF8;
    }
L_0884DFF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 12u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E070;
      }
      goto L_0884E014;
    }
L_0884E014:
    ctx.gpr[31] = (0x0884E01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0884E01Cu) goto L_0884E01C;
    return;
L_0884E01C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
        goto L_0884E034;
    }
    goto L_0884E028;
L_0884E028:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0884E12C;
      }
      goto L_0884E034;
    }
L_0884E034:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0884E04Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884E04Cu) goto L_0884E04C;
    return;
L_0884E04C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E12C;
      }
      goto L_0884E054;
    }
L_0884E054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0884E12C;
      }
      goto L_0884E070;
    }
L_0884E070:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E0BC;
      }
      goto L_0884E088;
    }
L_0884E088:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_0884E090;
L_0884E090:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_0884E0B0;
    }
    goto L_0884E0A0;
L_0884E0A0:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0884E0B4;
      }
      goto L_0884E0B0;
    }
L_0884E0B0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_0884E0B4;
L_0884E0B4:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_0884E090;
    }
    goto L_0884E0BC;
L_0884E0BC:
    if (ctx.gpr[6] == ctx.gpr[5]) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_0884E0E0;
    }
    goto L_0884E0C4;
L_0884E0C4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
        goto L_0884E0E4;
    }
    goto L_0884E0DC;
L_0884E0DC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_0884E0E0;
L_0884E0E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    goto L_0884E0E4;
L_0884E0E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
        goto L_0884E11C;
    }
    goto L_0884E114;
L_0884E114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0884E11C;
      }
      goto L_0884E11C;
    }
L_0884E11C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E12C;
      }
      goto L_0884E124;
    }
L_0884E124:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0884E12C;
L_0884E12C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884E13Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E13Cu) goto L_0884E13C;
    return;
L_0884E13C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0884E148u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5272));
    goto L_0884DDC0;
L_0884E148:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E160:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[5] = (16204u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E1D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0884E2CC;
      }
      goto L_0884E1EC;
    }
L_0884E1EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E208;
      }
      goto L_0884E1F8;
    }
L_0884E1F8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24800)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24800), ctx.gpr[5]);
    goto L_0884E208;
L_0884E208:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E2CC;
      }
      goto L_0884E220;
    }
L_0884E220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884E2AC;
      }
      goto L_0884E238;
    }
L_0884E238:
    ctx.gpr[31] = (0x0884E240u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 368u, 0x0899E2A8u>(ctx, &aot_mem) && ctx.pc == 0x0884E240u) goto L_0884E240;
    return;
L_0884E240:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E2A4;
      }
      goto L_0884E248;
    }
L_0884E248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 42u);
      if (branch_taken) {
          goto L_0884E2A4;
      }
      goto L_0884E258;
    }
L_0884E258:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884E2A4;
      }
      goto L_0884E260;
    }
L_0884E260:
    ctx.gpr[31] = (0x0884E268u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0884E268u) goto L_0884E268;
    return;
L_0884E268:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E280;
      }
      goto L_0884E270;
    }
L_0884E270:
    ctx.gpr[31] = (0x0884E278u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x0884E278u) goto L_0884E278;
    return;
L_0884E278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E2A4;
      }
      goto L_0884E280;
    }
L_0884E280:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884E290u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x0884E290u) goto L_0884E290;
    return;
L_0884E290:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0884E2A4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E2A4u) goto L_0884E2A4;
    return;
L_0884E2A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1756), 0u);
      if (branch_taken) {
          goto L_0884E2C8;
      }
      goto L_0884E2AC;
    }
L_0884E2AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884E2C8;
      }
      goto L_0884E2C4;
    }
L_0884E2C4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(580), 0u);
    goto L_0884E2C8;
L_0884E2C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    goto L_0884E2CC;
L_0884E2CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E2E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24800)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-24800), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x0884E314u);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 508u, 0x08A924D8u>(ctx, &aot_mem) && ctx.pc == 0x0884E314u) goto L_0884E314;
    return;
L_0884E314:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E320:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (2181u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[6] = (0u | 64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884E348u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-7840));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E348u) goto L_0884E348;
    return;
L_0884E348:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E360:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_0884E380;
      }
      goto L_0884E370;
    }
L_0884E370:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E380;
      }
      goto L_0884E378;
    }
L_0884E378:
    ctx.gpr[31] = (0x0884E380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x0884E380u) goto L_0884E380;
    return;
L_0884E380:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E38C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0884E390;
L_0884E390:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E3A8;
      }
      goto L_0884E39C;
    }
L_0884E39C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E3C0;
      }
      goto L_0884E3A8;
    }
L_0884E3A8:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0884E390;
      }
      goto L_0884E3B8;
    }
L_0884E3B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E3C8;
      }
      goto L_0884E3C0;
    }
L_0884E3C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E3CC;
      }
      goto L_0884E3C8;
    }
L_0884E3C8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0884E3CC;
L_0884E3CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E3D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[11] = (18804u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[11] = (ctx.gpr[11] | 9200u);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(32));
    goto L_0884E424;
L_0884E424:
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E4B4;
      }
      goto L_0884E430;
    }
L_0884E430:
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E4B4;
      }
      goto L_0884E43C;
    }
L_0884E43C:
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[16] = ctx.fpr[1] - ctx.fpr[18];
    ctx.fpr[15] = ctx.fpr[2] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[6];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[5]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884E4B4;
      }
      goto L_0884E4AC;
    }
L_0884E4AC:
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.fpr[5] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884E4B4;
L_0884E4B4:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(64));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0884E424;
      }
      goto L_0884E4C8;
    }
L_0884E4C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
      if (branch_taken) {
          goto L_0884E514;
      }
      goto L_0884E504;
    }
L_0884E504:
    ctx.gpr[5] = (ctx.gpr[10] << 6u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0884E518;
      }
      goto L_0884E514;
    }
L_0884E514:
    ctx.gpr[2] = (0u | 0u);
    goto L_0884E518;
L_0884E518:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E520:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[7] = std::bit_cast<float>(0u);
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    goto L_0884E568;
L_0884E568:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E618;
      }
      goto L_0884E574;
    }
L_0884E574:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E618;
      }
      goto L_0884E580;
    }
L_0884E580:
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[18] = ctx.fpr[4] - ctx.fpr[0];
    ctx.fpr[17] = ctx.fpr[3] - ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[8] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[8];
    ctx.fpr[14] = std::sqrt(ctx.fpr[14]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884E618;
      }
      goto L_0884E5F0;
    }
L_0884E5F0:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884E618;
      }
      goto L_0884E600;
    }
L_0884E600:
    ctx.set_fpu_condition((ctx.fpr[7] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884E618;
      }
      goto L_0884E610;
    }
L_0884E610:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.fpr[7] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0884E618;
L_0884E618:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0884E568;
      }
      goto L_0884E62C;
    }
L_0884E62C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_0884E674;
      }
      goto L_0884E664;
    }
L_0884E664:
    ctx.gpr[5] = (ctx.gpr[9] << 6u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0884E678;
      }
      goto L_0884E674;
    }
L_0884E674:
    ctx.gpr[2] = (0u | 0u);
    goto L_0884E678;
L_0884E678:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E680:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] & 255u);
    ctx.gpr[18] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884E6B4u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_0884E38C;
L_0884E6B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884E748;
      }
      goto L_0884E6C4;
    }
L_0884E6C4:
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[31] = (0x0884E720u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0884E2E0;
L_0884E720:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E748;
      }
      goto L_0884E738;
    }
L_0884E738:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E748;
      }
      goto L_0884E740;
    }
L_0884E740:
    ctx.gpr[31] = (0x0884E748u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0884DE14;
L_0884E748:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E768:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0884E840;
      }
      goto L_0884E7A0;
    }
L_0884E7A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E7DC;
      }
      goto L_0884E7BC;
    }
L_0884E7BC:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1756)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
        goto L_0884E844;
    }
    goto L_0884E7CC;
L_0884E7CC:
    ctx.gpr[31] = (0x0884E7D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1756)));
    goto L_0884E1D0;
L_0884E7D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0884E844;
      }
      goto L_0884E7DC;
    }
L_0884E7DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0884E844;
      }
      goto L_0884E7F8;
    }
L_0884E7F8:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E810;
      }
      goto L_0884E808;
    }
L_0884E808:
    ctx.gpr[31] = (0x0884E810u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(580)));
    goto L_0884E1D0;
L_0884E810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
        goto L_0884E844;
    }
    goto L_0884E81C;
L_0884E81C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0884E828u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 220u, 0x08A292F8u>(ctx, &aot_mem) && ctx.pc == 0x0884E828u) goto L_0884E828;
    return;
L_0884E828:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(225) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
        goto L_0884E844;
    }
    goto L_0884E834;
L_0884E834:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0884E840u);
    ctx.gpr[5] = (0u | 215u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 216u, 0x08A292D4u>(ctx, &aot_mem) && ctx.pc == 0x0884E840u) goto L_0884E840;
    return;
L_0884E840:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    goto L_0884E844;
L_0884E844:
    ctx.gpr[31] = (0x0884E84Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0884E38C;
L_0884E84C:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[17] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E8A4;
      }
      goto L_0884E898;
    }
L_0884E898:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0884E8A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0884E8A4u) goto L_0884E8A4;
    return;
L_0884E8A4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0884E9C0;
      }
      goto L_0884E8C0;
    }
L_0884E8C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E9A0;
      }
      goto L_0884E8DC;
    }
L_0884E8DC:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884E8E8u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1756), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0884E8E8u) goto L_0884E8E8;
    return;
L_0884E8E8:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0884E9C4;
      }
      goto L_0884E8F0;
    }
L_0884E8F0:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0884E93Cu);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 353u, 0x089A18ACu>(ctx, &aot_mem) && ctx.pc == 0x0884E93Cu) goto L_0884E93C;
    return;
L_0884E93C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884E954u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884E954u) goto L_0884E954;
    return;
L_0884E954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884E994;
      }
      goto L_0884E964;
    }
L_0884E964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E98C;
      }
      goto L_0884E970;
    }
L_0884E970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(912), 0u);
        goto L_0884E98C;
    }
    goto L_0884E97C;
L_0884E97C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0884E988u);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0884E988u) goto L_0884E988;
    return;
L_0884E988:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(912), 0u);
    goto L_0884E98C;
L_0884E98C:
    ctx.gpr[31] = (0x0884E994u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E994u) goto L_0884E994;
    return;
L_0884E994:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884E9C0;
      }
      goto L_0884E9A0;
    }
L_0884E9A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0884E9C4;
      }
      goto L_0884E9BC;
    }
L_0884E9BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(580), ctx.gpr[17]);
    goto L_0884E9C0;
L_0884E9C0:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_0884E9C4;
L_0884E9C4:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 6u));
    ctx.gpr[5] = (ctx.gpr[5] >> 26u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 6u));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EA04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_0884EA24;
L_0884EA24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EA38;
      }
      goto L_0884EA30;
    }
L_0884EA30:
    ctx.gpr[31] = (0x0884EA38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0884F024;
L_0884EA38:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0884EA24;
      }
      goto L_0884EA4C;
    }
L_0884EA4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EA64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_0884EA94;
L_0884EA94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EAF0;
      }
      goto L_0884EAA0;
    }
L_0884EAA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884EAF0;
      }
      goto L_0884EAE8;
    }
L_0884EAE8:
    ctx.gpr[31] = (0x0884EAF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0884E1D0;
L_0884EAF0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0884EA94;
      }
      goto L_0884EB04;
    }
L_0884EB04:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EB24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 0u);
    goto L_0884EB50;
L_0884EB50:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884ED24;
      }
      goto L_0884EB5C;
    }
L_0884EB5C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884ED24;
      }
      goto L_0884EBA4;
    }
L_0884EBA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15428u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0884EBE0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0884EBE0u) goto L_0884EBE0;
    return;
L_0884EBE0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0884EC14u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0884EC14u) goto L_0884EC14;
    return;
L_0884EC14:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0884EC3Cu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0884EC3Cu) goto L_0884EC3C;
    return;
L_0884EC3C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884ECB0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0884ECB0u) goto L_0884ECB0;
    return;
L_0884ECB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884ECF8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0884ECF8u) goto L_0884ECF8;
    return;
L_0884ECF8:
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884ED1C;
      }
      goto L_0884ED14;
    }
L_0884ED14:
    ctx.gpr[31] = (0x0884ED1Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_0884E1D0;
L_0884ED1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0884ED38;
      }
      goto L_0884ED24;
    }
L_0884ED24:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0884EB50;
      }
      goto L_0884ED34;
    }
L_0884ED34:
    ctx.gpr[2] = (0u | 0u);
    goto L_0884ED38;
L_0884ED38:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884ED5C:
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884ED78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884ED9Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_0884E1D0;
L_0884ED9C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EDB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_0884EDD0;
L_0884EDD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EDE8;
      }
      goto L_0884EDDC;
    }
L_0884EDDC:
    ctx.gpr[31] = (0x0884EDE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0884E1D0;
L_0884EDE4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    goto L_0884EDE8;
L_0884EDE8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0884EDD0;
      }
      goto L_0884EDFC;
    }
L_0884EDFC:
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
L_0884EE14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_0884EE34;
L_0884EE34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EE48;
      }
      goto L_0884EE40;
    }
L_0884EE40:
    ctx.gpr[31] = (0x0884EE48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0884E1D0;
L_0884EE48:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0884EE34;
      }
      goto L_0884EE5C;
    }
L_0884EE5C:
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
L_0884EE74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884EEA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5244));
    goto L_0884DDC0;
L_0884EEA8:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(22), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(25), ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0884EEDC;
      }
      goto L_0884EEC4;
    }
L_0884EEC4:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(23), ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0884EFBC;
      }
      goto L_0884EEDC;
    }
L_0884EEDC:
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(22), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(25), ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0884EF18;
      }
      goto L_0884EEF4;
    }
L_0884EEF4:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(22), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(25), ctx.gpr[6]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884EF14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0884EF14u) goto L_0884EF14;
    return;
L_0884EF14:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0884EF18;
L_0884EF18:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EF44;
      }
      goto L_0884EF24;
    }
L_0884EF24:
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(23), ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0884EF4C;
      }
      goto L_0884EF3C;
    }
L_0884EF3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EF70;
      }
      goto L_0884EF44;
    }
L_0884EF44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F004;
      }
      goto L_0884EF4C;
    }
L_0884EF4C:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(23), ctx.gpr[6]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884EF6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0884EF6Cu) goto L_0884EF6C;
    return;
L_0884EF6C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0884EF70;
L_0884EF70:
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-24800));
    ctx.gpr[5] = (0u | 0u);
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
        goto L_0884EF84;
    }
    goto L_0884EF84;
L_0884EF84:
    ctx.gpr[7] = (0u | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
        goto L_0884EF90;
    }
    goto L_0884EF90;
L_0884EF90:
    ctx.gpr[1] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(15), ctx.gpr[1]));
    ctx.gpr[1] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(18), ctx.gpr[1]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[1]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x0884EFB4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0884F708;
L_0884EFB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F004;
      }
      goto L_0884EFBC;
    }
L_0884EFBC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0884EFCCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 533u, 0x08AFA51Cu>(ctx, &aot_mem) && ctx.pc == 0x0884EFCCu) goto L_0884EFCC;
    return;
L_0884EFCC:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24800));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[1] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(15), ctx.gpr[1]));
    ctx.gpr[1] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(18), ctx.gpr[1]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[1]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884F004u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0884E680;
L_0884F004:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F024:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (15107u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[31]);
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_0884F088;
    }
    goto L_0884F088;
L_0884F088:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F250;
      }
      goto L_0884F098;
    }
L_0884F098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884F1C8;
      }
      goto L_0884F0C8;
    }
L_0884F0C8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0884F0F0;
      }
      goto L_0884F0D8;
    }
L_0884F0D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884F100;
      }
      goto L_0884F0E8;
    }
L_0884F0E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F10C;
      }
      goto L_0884F0F0;
    }
L_0884F0F0:
    ctx.gpr[31] = (0x0884F0F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0884E1D0;
L_0884F0F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F6D8;
      }
      goto L_0884F100;
    }
L_0884F100:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884F10C;
L_0884F10C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F148;
      }
      goto L_0884F118;
    }
L_0884F118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F148;
      }
      goto L_0884F124;
    }
L_0884F124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F1C0;
      }
      goto L_0884F134;
    }
L_0884F134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (17046u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0884F1C0;
      }
      goto L_0884F148;
    }
L_0884F148:
    ctx.gpr[31] = (0x0884F150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0884F150u) goto L_0884F150;
    return;
L_0884F150:
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884F188;
      }
      goto L_0884F160;
    }
L_0884F160:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (0u | 31u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0884F180u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F180u) goto L_0884F180;
    return;
L_0884F180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F1C0;
      }
      goto L_0884F188;
    }
L_0884F188:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (0u | 31u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0884F1A8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F1A8u) goto L_0884F1A8;
    return;
L_0884F1A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F1C0;
      }
      goto L_0884F1B0;
    }
L_0884F1B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0884F1C0;
L_0884F1C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F250;
      }
      goto L_0884F1C8;
    }
L_0884F1C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884F250;
      }
      goto L_0884F1E4;
    }
L_0884F1E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0884F208;
      }
      goto L_0884F1F4;
    }
L_0884F1F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F218;
      }
      goto L_0884F200;
    }
L_0884F200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F250;
      }
      goto L_0884F208;
    }
L_0884F208:
    ctx.gpr[31] = (0x0884F210u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0884E1D0;
L_0884F210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F6D8;
      }
      goto L_0884F218;
    }
L_0884F218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[6] = (16281u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x0884F250u);
    ctx.gpr[6] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 272u, 0x088A184Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F250u) goto L_0884F250;
    return;
L_0884F250:
    ctx.gpr[31] = (0x0884F258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0884F258u) goto L_0884F258;
    return;
L_0884F258:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884F328;
      }
      goto L_0884F260;
    }
L_0884F260:
    ctx.gpr[31] = (0x0884F268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0884F268u) goto L_0884F268;
    return;
L_0884F268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F328;
      }
      goto L_0884F274;
    }
L_0884F274:
    ctx.gpr[31] = (0x0884F27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0884F27Cu) goto L_0884F27C;
    return;
L_0884F27C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F328;
      }
      goto L_0884F290;
    }
L_0884F290:
    ctx.gpr[31] = (0x0884F298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0884F298u) goto L_0884F298;
    return;
L_0884F298:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884F328;
      }
      goto L_0884F2E8;
    }
L_0884F2E8:
    ctx.gpr[31] = (0x0884F2F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0884F2F0u) goto L_0884F2F0;
    return;
L_0884F2F0:
    ctx.gpr[31] = (0x0884F2F8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 261u, 0x08945204u>(ctx, &aot_mem) && ctx.pc == 0x0884F2F8u) goto L_0884F2F8;
    return;
L_0884F2F8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0884F304u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24800));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0884F304u) goto L_0884F304;
    return;
L_0884F304:
    ctx.gpr[9] = (16204u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x0884F328u);
    ctx.gpr[8] = (0u | 1u);
    goto L_0884F708;
L_0884F328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F588;
      }
      goto L_0884F33C;
    }
L_0884F33C:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0884F370;
      }
      goto L_0884F360;
    }
L_0884F360:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(400));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0884F3AC;
      }
      goto L_0884F370;
    }
L_0884F370:
    ctx.gpr[5] = (16179u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884F3A0;
      }
      goto L_0884F390;
    }
L_0884F390:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(200));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0884F3AC;
      }
      goto L_0884F3A0;
    }
L_0884F3A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    goto L_0884F3AC;
L_0884F3AC:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F464;
      }
      goto L_0884F3C4;
    }
L_0884F3C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F464;
      }
      goto L_0884F3E4;
    }
L_0884F3E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F464;
      }
      goto L_0884F3F4;
    }
L_0884F3F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0884F424;
      }
      goto L_0884F410;
    }
L_0884F410:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0884F424;
L_0884F424:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884F444u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_0884DDEC;
L_0884F444:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884F464;
L_0884F464:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (15436u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0884F494u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0884F494u) goto L_0884F494;
    return;
L_0884F494:
    ctx.fpr[14] = ctx.fpr[28] - ctx.fpr[26];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (0u | 27u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884F4CCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0884F4CCu) goto L_0884F4CC;
    return;
L_0884F4CC:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (48928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[4] = (16160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0884F4F4u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0884F4F4u) goto L_0884F4F4;
    return;
L_0884F4F4:
    ctx.fpr[14] = ctx.fpr[28] - ctx.fpr[26];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0884F514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0884F514u) goto L_0884F514;
    return;
L_0884F514:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0884F53Cu);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0884F53Cu) goto L_0884F53C;
    return;
L_0884F53C:
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[28];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[28] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (0u | 57u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884F588u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0884F588u) goto L_0884F588;
    return;
L_0884F588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F5A8;
      }
      goto L_0884F59C;
    }
L_0884F59C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F6D0;
      }
      goto L_0884F5A8;
    }
L_0884F5A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_0884F5D0;
      }
      goto L_0884F5C4;
    }
L_0884F5C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    goto L_0884F5D0;
L_0884F5D0:
    ctx.gpr[31] = (0x0884F5D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0884F5D8u) goto L_0884F5D8;
    return;
L_0884F5D8:
    ctx.gpr[18] = (ctx.gpr[2] & 65535u);
    ctx.gpr[18] = (ctx.gpr[18] & 127u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
      if (branch_taken) {
          goto L_0884F678;
      }
      goto L_0884F608;
    }
L_0884F608:
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[2] = (16608u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (49376u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27924)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (16928u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0884F678u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 323u, 0x0892A980u>(ctx, &aot_mem) && ctx.pc == 0x0884F678u) goto L_0884F678;
    return;
L_0884F678:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0884F6C8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 333u, 0x08AE5D44u>(ctx, &aot_mem) && ctx.pc == 0x0884F6C8u) goto L_0884F6C8;
    return;
L_0884F6C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F6D8;
      }
      goto L_0884F6D0;
    }
L_0884F6D0:
    ctx.gpr[31] = (0x0884F6D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0884E1D0;
L_0884F6D8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (ctx.gpr[9] & 14u);
    ctx.gpr[7] = (ctx.gpr[7] ^ 6u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0884F7B8;
      }
      goto L_0884F76C;
    }
L_0884F76C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F7B0;
      }
      goto L_0884F778;
    }
L_0884F778:
    ctx.gpr[31] = (0x0884F780u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x0884F780u) goto L_0884F780;
    return;
L_0884F780:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F7A8;
      }
      goto L_0884F788;
    }
L_0884F788:
    ctx.gpr[31] = (0x0884F790u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0884E38C;
L_0884F790:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884F95C;
      }
      goto L_0884F7A0;
    }
L_0884F7A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FD48;
      }
      goto L_0884F7A8;
    }
L_0884F7A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884FD4C;
      }
      goto L_0884F7B0;
    }
L_0884F7B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884FD4C;
      }
      goto L_0884F7B8;
    }
L_0884F7B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F81C;
      }
      goto L_0884F7D4;
    }
L_0884F7D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(580)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F7F8;
      }
      goto L_0884F7E4;
    }
L_0884F7E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F788;
      }
      goto L_0884F7F0;
    }
L_0884F7F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F800;
      }
      goto L_0884F7F8;
    }
L_0884F7F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884FD4C;
      }
      goto L_0884F800;
    }
L_0884F800:
    ctx.gpr[31] = (0x0884F808u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(848));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 220u, 0x08A292F8u>(ctx, &aot_mem) && ctx.pc == 0x0884F808u) goto L_0884F808;
    return;
L_0884F808:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(225) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F788;
      }
      goto L_0884F814;
    }
L_0884F814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884FD4C;
      }
      goto L_0884F81C;
    }
L_0884F81C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F788;
      }
      goto L_0884F838;
    }
L_0884F838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0884F854u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884F854u) goto L_0884F854;
    return;
L_0884F854:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_0884F874;
    }
    goto L_0884F864;
L_0884F864:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0884F954;
      }
      goto L_0884F86C;
    }
L_0884F86C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F884;
      }
      goto L_0884F874;
    }
L_0884F874:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F8A0;
      }
      goto L_0884F87C;
    }
L_0884F87C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F954;
      }
      goto L_0884F884;
    }
L_0884F884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F898;
      }
      goto L_0884F890;
    }
L_0884F890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F954;
      }
      goto L_0884F898;
    }
L_0884F898:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884FD4C;
      }
      goto L_0884F8A0;
    }
L_0884F8A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884F8C4;
      }
      goto L_0884F8AC;
    }
L_0884F8AC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F8CC;
      }
      goto L_0884F8BC;
    }
L_0884F8BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_0884F8EC;
      }
      goto L_0884F8C4;
    }
L_0884F8C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884FD4C;
      }
      goto L_0884F8CC;
    }
L_0884F8CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x0884F8DCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0884F8DCu) goto L_0884F8DC;
    return;
L_0884F8DC:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_0884F8EC;
L_0884F8EC:
    ctx.gpr[5] = (17274u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884F944;
      }
      goto L_0884F908;
    }
L_0884F908:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (0u | 5u);
      if (branch_taken) {
          goto L_0884F934;
      }
      goto L_0884F918;
    }
L_0884F918:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(65));
    ctx.gpr[31] = (0x0884F928u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0884F928u) goto L_0884F928;
    return;
L_0884F928:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(65)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0884F934;
L_0884F934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0884F94C;
      }
      goto L_0884F944;
    }
L_0884F944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F954;
      }
      goto L_0884F94C;
    }
L_0884F94C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0884FD4C;
      }
      goto L_0884F954;
    }
L_0884F954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F788;
      }
      goto L_0884F95C;
    }
L_0884F95C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[22] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[30] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884FAFC;
      }
      goto L_0884F988;
    }
L_0884F988:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884F994u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1756), ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0884F994u) goto L_0884F994;
    return;
L_0884F994:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884FAA4;
      }
      goto L_0884F99C;
    }
L_0884F99C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0884F9BC;
      }
      goto L_0884F9A4;
    }
L_0884F9A4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884F9B4u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 377u, 0x089A1A5Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F9B4u) goto L_0884F9B4;
    return;
L_0884F9B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FA08;
      }
      goto L_0884F9BC;
    }
L_0884F9BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0884FA04u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 353u, 0x089A18ACu>(ctx, &aot_mem) && ctx.pc == 0x0884FA04u) goto L_0884FA04;
    return;
L_0884FA04:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1392), 0u);
    goto L_0884FA08;
L_0884FA08:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0884FA14u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x0884FA14u) goto L_0884FA14;
    return;
L_0884FA14:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1328), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1396), ctx.gpr[4]);
    ctx.gpr[4] = (57344u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0884FA44u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FA44u) goto L_0884FA44;
    return;
L_0884FA44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884FA5Cu);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884FA5Cu) goto L_0884FA5C;
    return;
L_0884FA5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_0884FAA0;
      }
      goto L_0884FA6C;
    }
L_0884FA6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FA94;
      }
      goto L_0884FA78;
    }
L_0884FA78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(912), 0u);
        goto L_0884FA94;
    }
    goto L_0884FA84;
L_0884FA84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0884FA90u);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0884FA90u) goto L_0884FA90;
    return;
L_0884FA90:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(912), 0u);
    goto L_0884FA94;
L_0884FA94:
    ctx.gpr[31] = (0x0884FA9Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FA9Cu) goto L_0884FA9C;
    return;
L_0884FA9C:
    ctx.gpr[4] = (0u | 32u);
    goto L_0884FAA0;
L_0884FAA0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    goto L_0884FAA4;
L_0884FAA4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FBD4;
      }
      goto L_0884FAAC;
    }
L_0884FAAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884FADC;
      }
      goto L_0884FABC;
    }
L_0884FABC:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884FAD4u);
    ctx.gpr[8] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x0884FAD4u) goto L_0884FAD4;
    return;
L_0884FAD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FBD4;
      }
      goto L_0884FADC;
    }
L_0884FADC:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884FAF4u);
    ctx.gpr[8] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x0884FAF4u) goto L_0884FAF4;
    return;
L_0884FAF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FBD4;
      }
      goto L_0884FAFC;
    }
L_0884FAFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FB70;
      }
      goto L_0884FB18;
    }
L_0884FB18:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x0884FB28u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(580), ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28E68u>(ctx, &aot_mem) && ctx.pc == 0x0884FB28u) goto L_0884FB28;
    return;
L_0884FB28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884FB40;
      }
      goto L_0884FB30;
    }
L_0884FB30:
    ctx.gpr[31] = (0x0884FB38u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 124u, 0x08A28D44u>(ctx, &aot_mem) && ctx.pc == 0x0884FB38u) goto L_0884FB38;
    return;
L_0884FB38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FB48;
      }
      goto L_0884FB40;
    }
L_0884FB40:
    ctx.gpr[31] = (0x0884FB48u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 269u, 0x0891D6E0u>(ctx, &aot_mem) && ctx.pc == 0x0884FB48u) goto L_0884FB48;
    return;
L_0884FB48:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FB68;
      }
      goto L_0884FB50;
    }
L_0884FB50:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0884FB68u);
    ctx.gpr[8] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x0884FB68u) goto L_0884FB68;
    return;
L_0884FB68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FBD4;
      }
      goto L_0884FB70;
    }
L_0884FB70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FBD4;
      }
      goto L_0884FB8C;
    }
L_0884FB8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0884FBA8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884FBA8u) goto L_0884FBA8;
    return;
L_0884FBA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_0884FBC8;
    }
    goto L_0884FBB8;
L_0884FBB8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0884FBD4;
      }
      goto L_0884FBC0;
    }
L_0884FBC0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(360), ctx.gpr[22]);
      if (branch_taken) {
          goto L_0884FBD4;
      }
      goto L_0884FBC8;
    }
L_0884FBC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FBD4;
      }
      goto L_0884FBD0;
    }
L_0884FBD0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(352), ctx.gpr[22]);
    goto L_0884FBD4;
L_0884FBD4:
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
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FC40;
      }
      goto L_0884FC04;
    }
L_0884FC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FC40;
      }
      goto L_0884FC20;
    }
L_0884FC20:
    ctx.gpr[31] = (0x0884FC28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0884FC28u) goto L_0884FC28;
    return;
L_0884FC28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FC40;
      }
      goto L_0884FC30;
    }
L_0884FC30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3333));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884FCE0;
      }
      goto L_0884FC40;
    }
L_0884FC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(5196)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(5192)));
      if (branch_taken) {
          goto L_0884FCA0;
      }
      goto L_0884FC5C;
    }
L_0884FC5C:
    ctx.gpr[31] = (0x0884FC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0884FC64u) goto L_0884FC64;
    return;
L_0884FC64:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0884FC78u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0884FC78u) goto L_0884FC78;
    return;
L_0884FC78:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884FCE0;
      }
      goto L_0884FCA0;
    }
L_0884FCA0:
    ctx.gpr[31] = (0x0884FCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0884FCA8u) goto L_0884FCA8;
    return;
L_0884FCA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0884FCBCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0884FCBCu) goto L_0884FCBC;
    return;
L_0884FCBC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_0884FCE0;
L_0884FCE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0884FCFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0884FCFCu) goto L_0884FCFC;
    return;
L_0884FCFC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0884FD10;
      }
      goto L_0884FD04;
    }
L_0884FD04:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x0884FD10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0884FD10u) goto L_0884FD10;
    return;
L_0884FD10:
    ctx.gpr[31] = (0x0884FD18u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_0884E2E0;
L_0884FD18:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FD48;
      }
      goto L_0884FD38;
    }
L_0884FD38:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FD48;
      }
      goto L_0884FD40;
    }
L_0884FD40:
    ctx.gpr[31] = (0x0884FD48u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_0884DE14;
L_0884FD48:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
    goto L_0884FD4C;
L_0884FD4C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884FD80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5164)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 14571u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5160)));
    ctx.gpr[7] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(5168), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(5176), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(5172), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (2227u << 16u);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24800));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(5180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884FE08u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(5184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884E320;
L_0884FE08:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0884FE14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5200));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0884FE14u) goto L_0884FE14;
    return;
L_0884FE14:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7128), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7128)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6264));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5228));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884FE48:
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
L_0884FE74:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884FE9C:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
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
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884FEB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[31] = (0x0884FEF8u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 812u, 0x08AFB7E8u>(ctx, &aot_mem) && ctx.pc == 0x0884FEF8u) goto L_0884FEF8;
    return;
L_0884FEF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0884FF34u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 533u, 0x08AFA51Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FF34u) goto L_0884FF34;
    return;
L_0884FF34:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0884FF4Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 533u, 0x08AFA51Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FF4Cu) goto L_0884FF4C;
    return;
L_0884FF4C:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[21] = (2232u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(5992));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(39), ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0884FF78u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0884FF78u) goto L_0884FF78;
    return;
L_0884FF78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[22] = (0u | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
        goto L_0884FF88;
    }
    goto L_0884FF88;
L_0884FF88:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FFBC;
      }
      goto L_0884FF90;
    }
L_0884FF90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0884FFACu);
    ctx.gpr[6] = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FFACu) goto L_0884FFAC;
    return;
L_0884FFAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0884FFBCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 99u, 0x08864748u>(ctx, &aot_mem) && ctx.pc == 0x0884FFBCu) goto L_0884FFBC;
    return;
L_0884FFBC:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(39), ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x0884FFD4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0884FFD4u) goto L_0884FFD4;
    return;
L_0884FFD4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 2u, 0x08850018u>(ctx, &aot_mem); return;
      }
      goto L_0884FFE0;
    }
L_0884FFE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(38), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(41), ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[10] & 2u);
    ctx.gpr[11] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.pc = 0x08850000u; return;
}

void recomp_unit_0018(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0018_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_18(Runtime &runtime) {
    runtime.register_generated_unit(18u, 0x0884C000u, 16384u, &recomp_unit_0018, &recomp_unit_0018_entry);
    runtime.register_function(0x0884C004u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C00Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C014u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C024u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C030u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C058u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C060u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C074u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C07Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C084u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C094u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C0A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C0C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C0D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C0E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C0ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C0F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C104u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C110u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C138u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C140u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C154u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C15Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C164u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C174u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C180u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C1A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C1B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C1C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C1C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C1D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C200u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C208u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C21Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C224u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C22Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C260u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C268u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C27Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C284u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C28Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C320u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C328u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C33Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C344u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C34Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C35Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C368u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C390u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C398u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C3ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C3B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C3BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C400u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C408u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C424u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C42Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C434u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C468u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C470u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C48Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C494u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C49Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C4D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C4D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C4F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C4FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C504u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C538u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C540u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C55Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C564u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C56Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C608u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C610u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C62Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C634u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C63Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C670u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C678u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C688u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C698u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C6A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C6A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C6B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C6C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C6E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C6F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C700u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C710u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C718u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C720u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C750u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C758u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C768u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C770u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C778u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C7A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C7B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C7C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C7C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C7D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C800u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C808u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C810u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C820u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C828u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C858u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C860u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C868u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C870u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C90Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C914u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C930u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C938u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C954u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C95Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C978u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C980u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C99Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA08u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA10u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA2Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA34u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA58u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA64u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA7Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA94u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CAB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CAB8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CAD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CADCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CAF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB64u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB88u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBB4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBD8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBF4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBFCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC08u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC54u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC98u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CCA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CCACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CCDCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CCE4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD20u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD88u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDB8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDC4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDCCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDD8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE44u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE58u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE64u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CEA0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CEA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CEC4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CED0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CEDCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CEE4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CEE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CEF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF10u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF2Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF34u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF68u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF70u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF7Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFB8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFC0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFDCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFF4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFFCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D000u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D008u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D01Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D028u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D030u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D044u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D04Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D068u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D074u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D080u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D088u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D08Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D094u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D100u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D10Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D114u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D118u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D120u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D134u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D140u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D148u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D15Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D164u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D180u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D18Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D198u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D20Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D218u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D224u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D22Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D230u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D238u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D24Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D258u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D260u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D274u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D27Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D298u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D2A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D2B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D2B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D2BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D2C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D2D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D2E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D2ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D300u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D308u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D324u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D330u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D33Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D344u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D348u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D350u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D364u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D370u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D378u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D38Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D394u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D404u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D418u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D420u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D43Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D448u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D454u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D45Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D460u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D468u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D47Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D488u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D490u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D508u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D514u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D51Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D530u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D538u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D554u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D560u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D56Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D574u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D578u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D580u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D594u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D5A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D5A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D5B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D5B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D5CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D5E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D5E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D5F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D614u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D61Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D624u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D630u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D650u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D658u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D66Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D674u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D67Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D69Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D724u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D758u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D760u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D768u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D778u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D790u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D798u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D804u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D818u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D824u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D830u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D838u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D83Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D840u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D84Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D854u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D86Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D874u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D888u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D894u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D8A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D8ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D8B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D8B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D8BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D8C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D8D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D8DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D8FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D904u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D918u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D924u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D930u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D938u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D93Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D940u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D94Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D954u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D96Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D974u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D988u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D994u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA10u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA2Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DAA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DAACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DAB4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DAD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DAD8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DAF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB0Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB54u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB94u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBB4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBC4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC10u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC3Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC54u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC68u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC88u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC94u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DCA0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DCACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DCB8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DCC4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DCF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DDC0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DDECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEB8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DED4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEDCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEF4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF0Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF60u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF70u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF7Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFA0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFDCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFE4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E014u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E01Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E028u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E034u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E04Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E054u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E070u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E088u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E090u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E114u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E11Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E124u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E12Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E13Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E148u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E160u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E1D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E1ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E1F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E208u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E220u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E238u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E240u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E248u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E258u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E260u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E268u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E270u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E278u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E280u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E290u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E314u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E320u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E348u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E360u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E370u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E378u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E380u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E38Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E390u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E39Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E424u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E430u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E43Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E4ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E4B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E4C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E504u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E514u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E518u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E520u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E568u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E574u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E580u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E5F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E600u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E610u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E618u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E62Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E664u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E674u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E678u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E680u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E6B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E6C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E720u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E738u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E740u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E748u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E768u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E7A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E7BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E7CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E7D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E7DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E7F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E808u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E810u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E81Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E828u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E834u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E840u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E844u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E84Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E898u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E8A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E8C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E8DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E8E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E8F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E93Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E954u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E964u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E970u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E97Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E988u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E98Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E994u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA64u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA94u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EAA0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EAE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EAF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EBA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EBE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EC14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EC3Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ECB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ECF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED34u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDDCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDE4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDFCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE34u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EEA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EEC4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EEDCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EEF4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF3Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF44u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF70u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFB4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFBCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFCCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F004u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F024u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F088u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F098u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F0C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F0D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F0E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F0F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F0F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F100u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F10Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F118u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F124u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F134u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F148u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F150u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F160u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F180u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F188u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F1A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F1B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F1C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F1C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F1E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F1F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F200u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F208u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F210u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F218u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F250u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F258u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F260u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F268u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F274u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F27Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F290u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F298u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F2E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F2F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F2F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F304u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F328u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F33Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F360u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F370u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F390u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F410u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F424u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F444u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F464u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F494u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F4CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F4F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F514u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F53Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F588u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F59Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F608u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F678u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F708u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F76Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F778u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F780u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F788u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F790u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F800u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F808u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F814u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F81Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F838u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F854u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F864u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F86Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F874u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F87Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F884u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F890u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F898u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F908u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F918u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F928u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F934u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F944u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F94Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F954u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F95Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F988u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F994u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F99Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA08u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA44u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA94u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAA0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FABCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FADCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAF4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAFCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB68u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB70u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBB8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBC0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC20u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC64u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FCA0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FCA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FCBCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FCE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FCFCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD10u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE08u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FEB8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FEF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF34u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF88u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFBCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFE0u, &recomp_unit_0018, "recomp_unit_0018");
}
} // namespace psprecomp
