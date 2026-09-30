#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0111[4071] = {
    1, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 8, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0,
    0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 19, 20, 0, 21, 0, 0, 22, 0, 23, 0, 0, 24, 0,
    25, 0, 0, 26, 0, 27, 0, 28, 0, 0, 29, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0,
    0, 0, 52, 0, 53, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 62, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 68, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    112, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 121, 0, 122, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 130, 131, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 136, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0,
    141, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0,
    148, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0,
    0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174,
    0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0,
    201, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 211, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 214, 0, 215, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0,
    0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0, 0, 0, 227, 0, 228, 0, 229, 0, 0, 230, 0, 231, 0,
    0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 235, 236, 237, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 242, 243, 244, 0, 245, 0, 246,
    0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0,
    0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0,
    0, 261, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265,
    0, 266, 0, 267, 0, 268, 0, 269, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 275,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 285, 0, 0, 286, 0, 287, 288, 289, 0, 290, 0, 291, 0, 0, 292, 0, 0, 293, 0,
    0, 294, 0, 295, 296, 0, 297, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 322, 323, 0, 324, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 329, 0, 330, 0, 331,
    0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341,
    0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 349, 0, 350, 0, 0, 351, 0, 352, 0, 0, 353, 0, 354, 0, 0, 355, 0,
    356, 0, 0, 357, 0, 358, 0, 0, 359, 0, 360, 0, 0, 361, 0, 362, 0, 0, 363, 0, 364, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 374, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 379, 0, 380, 0, 0, 381, 382, 0, 383, 0, 384, 0, 0, 385, 0, 386, 0, 0,
    0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 391, 0, 392, 0, 0, 393, 0, 394, 0, 0, 395, 0, 0, 0,
    396, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 401, 0, 402, 0, 0, 403, 0, 404, 0, 0, 0,
    405, 406, 0, 407, 0, 0, 408, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 413,
    0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 419, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0,
    442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0,
    0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 454, 0, 455, 0, 456, 0, 0, 0, 0, 0, 457, 0, 458, 0, 459,
    0, 460, 0, 461, 0, 462, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0,
    470, 0, 0, 471, 0, 0, 472, 0, 473, 474, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 478, 0, 479, 0, 0, 0, 480, 0, 0, 481,
    0, 0, 482, 0, 483, 484, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 491,
    0, 0, 492, 0, 493, 494, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 502,
    503, 0, 504, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 511, 0,
    0, 512, 0, 0, 513, 0, 514, 0, 515, 0, 0, 0, 516, 0, 517, 0, 518, 0, 519, 0, 0, 0, 0, 0, 520, 0, 521, 0, 522, 0, 523, 0,
    524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 528, 0, 0, 0,
    0, 0, 0, 0, 529, 0, 530, 0, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0,
    0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0,
    0, 0, 0, 0, 543, 0, 544, 0, 545, 0, 0, 546, 0, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 0, 552, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 553, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0,
    559, 0, 0, 0, 560, 0, 0, 561, 562, 563, 0, 564, 0, 565, 0, 0, 566, 0, 567, 0, 568, 569, 0, 570, 0, 571, 0, 572, 0, 573, 0, 0,
    0, 574, 0, 0, 575, 576, 577, 0, 578, 0, 579, 0, 0, 580, 0, 581, 0, 582, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0,
    0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0,
    0, 596, 0, 0, 0, 0, 597, 0, 598, 0, 0, 599, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0,
    603, 0, 604, 0, 605, 0, 0, 606, 0, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 609, 0, 0, 0, 610, 0, 611, 0, 0, 612, 0, 0, 613,
    0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 617, 0, 0, 618, 0, 619, 0, 620, 0, 0, 621, 0, 0, 622, 0, 623, 0, 624, 0,
    625, 0, 626, 627, 0, 628, 0, 0, 629, 0, 630, 0, 631, 0, 632, 0, 633, 0, 634, 0, 635, 0, 0, 636, 0, 637, 0, 638, 0, 0, 639, 0,
    640, 0, 641, 0, 642, 0, 643, 0, 0, 0, 644, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648,
    0, 649, 0, 650, 0, 651, 0, 0, 0, 652, 0, 653, 0, 654, 0, 655, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 0, 658, 0, 659, 0, 660,
    0, 661, 0, 662, 0, 663, 0, 664, 0, 0, 0, 665, 0, 666, 0, 0, 667, 0, 0, 668, 0, 669, 0, 670, 0, 671, 0, 672, 0, 673, 0, 674,
    0, 675, 0, 676, 0, 677, 0, 678, 0, 679, 0, 680, 0, 681, 0, 682, 0, 683, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 688, 0, 0, 689, 0, 0, 690, 0, 0, 0, 0, 691, 0, 692, 0, 693, 0, 0, 694, 0, 695,
    0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0, 700, 0, 701, 0, 702, 0,
    703, 704, 0, 0, 705, 0, 706, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0,
    0, 711, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 715, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 717, 0,
    0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0,
    723, 0, 0, 724, 0, 725, 0, 0, 726, 0, 727, 0, 0, 728, 0, 729, 0, 730, 0, 731, 0, 732, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 734, 0, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 741, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0, 748, 0, 749, 0, 750, 0, 0, 751, 0, 0, 0, 0, 0, 752, 0, 0,
    0, 0, 0, 753, 0, 754, 0, 755, 0, 756, 0, 757, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 759, 0, 760, 0, 761, 0, 762, 0, 763, 0, 764, 0, 765, 0, 766, 0, 767, 0, 768, 0, 769, 770, 0, 0, 0, 771, 0, 0, 772, 0,
    0, 0, 0, 0, 773, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777,
    0, 778, 0, 0, 779, 0, 0, 780, 0, 0, 0, 781, 0, 782, 0, 0, 783, 0, 784, 0, 0, 785, 0, 786, 0, 0, 0, 787, 0, 0, 788, 0,
    0, 789, 0, 0, 790, 0, 0, 791, 0, 0, 792, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 0, 796, 0, 0, 797, 0, 0, 798, 0, 0, 799,
    0, 800, 0, 801, 0, 802, 0, 0, 803, 0, 804, 0, 0, 805, 0, 0, 0, 0, 806, 0, 807, 0, 808, 0, 0, 0, 0, 0, 809, 0, 0, 0,
    810, 0, 0, 0, 811, 0, 0, 0, 812, 0, 0, 0, 813, 0, 0, 0, 814, 0, 0, 0, 815, 0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 0,
    0, 818, 0, 0, 0, 819, 0, 0, 0, 0, 820, 0, 0, 0, 0, 821, 0, 0, 0, 822, 0, 0, 0, 823, 0, 824, 0, 825, 0, 826, 0, 0,
    0, 827, 0, 828, 829, 0, 830, 0, 0, 0, 831, 0, 832, 0, 833, 0, 0, 0, 834, 0, 835, 0, 836, 0, 837, 0, 0, 838, 0, 839, 0, 840,
    0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 0, 843, 0, 0, 0, 844, 0, 0, 845, 0, 0, 846, 0, 847, 848, 0, 0, 849, 0, 850, 0, 0,
    0, 0, 851, 0, 0, 0, 852, 0, 0, 853, 0, 0, 854, 0, 855, 856, 0, 0, 857, 0, 0, 0, 0, 0, 858, 0, 0, 859, 0, 0, 860, 0,
    0, 861, 0, 862, 863, 0, 0, 864, 0, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 0, 868, 0,
    0, 0, 869, 0, 0, 870, 0, 0, 871, 0, 872, 873, 0, 0, 874, 0, 0, 0, 0, 0, 875, 0, 0, 876, 0, 0, 877, 0, 0, 878, 0, 879,
    880, 0, 0, 881, 0, 0, 0, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 884, 0, 0, 885, 0, 886, 0, 0, 887, 0, 888,
    0, 0, 0, 0, 0, 0, 0, 889, 0, 890, 0, 0, 0, 0, 0, 891, 0, 0, 892, 0, 0, 0, 0, 0, 893, 0, 894, 0, 0, 0, 0, 0,
    0, 0, 895, 0, 0, 0, 0, 0, 0, 896, 0, 897, 0, 0, 0, 0, 0, 898, 0, 899, 0, 0, 0, 900, 0, 0, 901, 0, 0, 902, 0, 903,
    904, 0, 0, 905, 0, 906, 0, 907, 0, 0, 908, 0, 909, 0, 910, 0, 911, 912, 0, 0, 0, 0, 913, 0, 0, 0, 0, 0, 0, 914, 0, 0,
    915, 0, 916, 0, 917, 0, 0, 918, 0, 919, 0, 0, 920, 0, 0, 921, 0, 0, 922, 0, 0, 923, 0, 0, 924, 0, 0, 925, 0, 0, 926, 0,
    0, 927, 0, 0, 928, 0, 0, 929, 0, 0, 930, 0, 0, 931, 0, 0, 932, 0, 0, 933, 0, 0, 934, 0, 0, 935, 0, 0, 936, 0, 0, 937,
    0, 0, 938, 0, 0, 939, 0, 0, 940, 0, 0, 941, 0, 0, 942, 0, 0, 943, 0, 0, 944, 0, 0, 945, 0, 0, 946, 0, 0, 947, 0, 0,
    948, 0, 0, 949, 0, 0, 950, 0, 0, 951, 0, 0, 952, 0, 0, 953, 0, 0, 954, 0, 0, 955, 0, 0, 956, 0, 0, 957, 0, 0, 958, 0,
    0, 959, 0, 0, 960, 0, 0, 961, 0, 0, 962, 0, 0, 963, 0, 0, 964, 0, 0, 965, 0, 0, 966, 0, 0, 967, 0, 0, 968, 0, 0, 969,
    0, 0, 970, 0, 0, 971, 0, 0, 972, 0, 0, 973, 0, 0, 974, 0, 0, 975, 0, 0, 976, 0, 0, 977, 0, 0, 978, 0, 0, 979, 0, 0,
    980, 0, 0, 981, 0, 0, 982, 0, 0, 983, 0, 0, 984, 0, 0, 985, 0, 0, 986, 0, 0, 987, 0, 0, 988, 0, 0, 989, 0, 0, 990, 0,
    0, 991, 0, 0, 992, 0, 0, 993, 0, 0, 994, 0, 0, 995, 0, 0, 996, 0, 0, 997, 0, 0, 998, 0, 0, 999, 0, 0, 1000, 0, 0, 1001,
    0, 0, 1002, 0, 0, 1003, 0, 0, 1004, 0, 0, 1005, 0, 0, 1006, 0, 0, 1007, 0, 0, 1008, 0, 0, 1009, 0, 0, 1010, 0, 0, 1011, 0, 0,
    1012, 0, 0, 1013, 0, 0, 1014, 0, 0, 1015, 0, 0, 1016, 0, 0, 1017, 0, 0, 1018, 0, 0, 1019, 0, 0, 1020, 0, 0, 1021, 0, 0, 1022, 0,
    0, 1023, 0, 0, 1024, 0, 0, 1025, 0, 0, 1026, 0, 0, 1027, 0, 0, 1028, 0, 0, 1029, 0, 0, 1030, 0, 0, 1031, 0, 0, 1032, 0, 0, 1033,
    0, 0, 1034, 0, 0, 1035, 0, 0, 1036, 0, 0, 1037, 0, 0, 1038, 0, 0, 1039, 0, 0, 1040, 0, 0, 0, 1041, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1042, 0, 0, 0, 0, 0, 1043, 0, 0, 0, 0, 1044, 0, 1045, 0, 1046, 0, 0, 1047, 0, 0, 1048, 0, 0,
    0, 0, 1049, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1050, 0, 0, 0, 1051, 0, 0, 0, 0, 1052, 1053, 0, 0, 1054, 1055, 0, 0,
    0, 1056, 0, 0, 0, 0, 1057,
};
void recomp_unit_0111_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089C0000u;
        entry_id = (entry_delta < 16284u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0111[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C0000;
    case 2u: goto L_089C0008;
    case 3u: goto L_089C0010;
    case 4u: goto L_089C0020;
    case 5u: goto L_089C0098;
    case 6u: goto L_089C00C4;
    case 7u: goto L_089C00E8;
    case 8u: goto L_089C00EC;
    case 9u: goto L_089C0108;
    case 10u: goto L_089C011C;
    case 11u: goto L_089C012C;
    case 12u: goto L_089C0174;
    case 13u: goto L_089C0184;
    case 14u: goto L_089C0190;
    case 15u: goto L_089C01A0;
    case 16u: goto L_089C01A8;
    case 17u: goto L_089C01B4;
    case 18u: goto L_089C01BC;
    case 19u: goto L_089C01CC;
    case 20u: goto L_089C01D0;
    case 21u: goto L_089C01D8;
    case 22u: goto L_089C01E4;
    case 23u: goto L_089C01EC;
    case 24u: goto L_089C01F8;
    case 25u: goto L_089C0200;
    case 26u: goto L_089C020C;
    case 27u: goto L_089C0214;
    case 28u: goto L_089C021C;
    case 29u: goto L_089C0228;
    case 30u: goto L_089C022C;
    case 31u: goto L_089C0234;
    case 32u: goto L_089C0258;
    case 33u: goto L_089C0278;
    case 34u: goto L_089C02C8;
    case 35u: goto L_089C02CC;
    case 36u: goto L_089C02DC;
    case 37u: goto L_089C02EC;
    case 38u: goto L_089C02FC;
    case 39u: goto L_089C030C;
    case 40u: goto L_089C0330;
    case 41u: goto L_089C0344;
    case 42u: goto L_089C0350;
    case 43u: goto L_089C0368;
    case 44u: goto L_089C0380;
    case 45u: goto L_089C0394;
    case 46u: goto L_089C03A4;
    case 47u: goto L_089C03B4;
    case 48u: goto L_089C03BC;
    case 49u: goto L_089C03D4;
    case 50u: goto L_089C03E8;
    case 51u: goto L_089C03F8;
    case 52u: goto L_089C0408;
    case 53u: goto L_089C0410;
    case 54u: goto L_089C0414;
    case 55u: goto L_089C041C;
    case 56u: goto L_089C0444;
    case 57u: goto L_089C0478;
    case 58u: goto L_089C04B4;
    case 59u: goto L_089C04BC;
    case 60u: goto L_089C04CC;
    case 61u: goto L_089C04DC;
    case 62u: goto L_089C04E0;
    case 63u: goto L_089C04E8;
    case 64u: goto L_089C0508;
    case 65u: goto L_089C0518;
    case 66u: goto L_089C0528;
    case 67u: goto L_089C0538;
    case 68u: goto L_089C0544;
    case 69u: goto L_089C0548;
    case 70u: goto L_089C0578;
    case 71u: goto L_089C0588;
    case 72u: goto L_089C05B8;
    case 73u: goto L_089C05C4;
    case 74u: goto L_089C05D4;
    case 75u: goto L_089C05DC;
    case 76u: goto L_089C05EC;
    case 77u: goto L_089C05F8;
    case 78u: goto L_089C0600;
    case 79u: goto L_089C0620;
    case 80u: goto L_089C0660;
    case 81u: goto L_089C066C;
    case 82u: goto L_089C0678;
    case 83u: goto L_089C0684;
    case 84u: goto L_089C06AC;
    case 85u: goto L_089C06B4;
    case 86u: goto L_089C06C4;
    case 87u: goto L_089C06D4;
    case 88u: goto L_089C06D8;
    case 89u: goto L_089C06E0;
    case 90u: goto L_089C0700;
    case 91u: goto L_089C0710;
    case 92u: goto L_089C0720;
    case 93u: goto L_089C0730;
    case 94u: goto L_089C0744;
    case 95u: goto L_089C0748;
    case 96u: goto L_089C0778;
    case 97u: goto L_089C0790;
    case 98u: goto L_089C07C0;
    case 99u: goto L_089C07CC;
    case 100u: goto L_089C07D8;
    case 101u: goto L_089C07EC;
    case 102u: goto L_089C0814;
    case 103u: goto L_089C0838;
    case 104u: goto L_089C085C;
    case 105u: goto L_089C0868;
    case 106u: goto L_089C0874;
    case 107u: goto L_089C0898;
    case 108u: goto L_089C08AC;
    case 109u: goto L_089C08C0;
    case 110u: goto L_089C08CC;
    case 111u: goto L_089C08F8;
    case 112u: goto L_089C0900;
    case 113u: goto L_089C0908;
    case 114u: goto L_089C0910;
    case 115u: goto L_089C0920;
    case 116u: goto L_089C092C;
    case 117u: goto L_089C0944;
    case 118u: goto L_089C0950;
    case 119u: goto L_089C095C;
    case 120u: goto L_089C0978;
    case 121u: goto L_089C0990;
    case 122u: goto L_089C0998;
    case 123u: goto L_089C09A0;
    case 124u: goto L_089C09AC;
    case 125u: goto L_089C09B4;
    case 126u: goto L_089C09BC;
    case 127u: goto L_089C09C4;
    case 128u: goto L_089C09D8;
    case 129u: goto L_089C09E4;
    case 130u: goto L_089C09EC;
    case 131u: goto L_089C09F0;
    case 132u: goto L_089C0A00;
    case 133u: goto L_089C0A2C;
    case 134u: goto L_089C0A34;
    case 135u: goto L_089C0A3C;
    case 136u: goto L_089C0A48;
    case 137u: goto L_089C0A50;
    case 138u: goto L_089C0A58;
    case 139u: goto L_089C0A60;
    case 140u: goto L_089C0A74;
    case 141u: goto L_089C0A80;
    case 142u: goto L_089C0A8C;
    case 143u: goto L_089C0AA4;
    case 144u: goto L_089C0AD4;
    case 145u: goto L_089C0AE4;
    case 146u: goto L_089C0AEC;
    case 147u: goto L_089C0AF4;
    case 148u: goto L_089C0B00;
    case 149u: goto L_089C0B08;
    case 150u: goto L_089C0B10;
    case 151u: goto L_089C0B18;
    case 152u: goto L_089C0B40;
    case 153u: goto L_089C0B4C;
    case 154u: goto L_089C0B58;
    case 155u: goto L_089C0B60;
    case 156u: goto L_089C0B68;
    case 157u: goto L_089C0B70;
    case 158u: goto L_089C0B78;
    case 159u: goto L_089C0B94;
    case 160u: goto L_089C0BA8;
    case 161u: goto L_089C0BC4;
    case 162u: goto L_089C0BD0;
    case 163u: goto L_089C0BDC;
    case 164u: goto L_089C0BE4;
    case 165u: goto L_089C0BEC;
    case 166u: goto L_089C0BF4;
    case 167u: goto L_089C0BFC;
    case 168u: goto L_089C0C18;
    case 169u: goto L_089C0C2C;
    case 170u: goto L_089C0C40;
    case 171u: goto L_089C0C48;
    case 172u: goto L_089C0C54;
    case 173u: goto L_089C0C74;
    case 174u: goto L_089C0C7C;
    case 175u: goto L_089C0C94;
    case 176u: goto L_089C0CBC;
    case 177u: goto L_089C0CD4;
    case 178u: goto L_089C0CDC;
    case 179u: goto L_089C0CEC;
    case 180u: goto L_089C0D08;
    case 181u: goto L_089C0D14;
    case 182u: goto L_089C0D1C;
    case 183u: goto L_089C0D4C;
    case 184u: goto L_089C0D5C;
    case 185u: goto L_089C0D64;
    case 186u: goto L_089C0D7C;
    case 187u: goto L_089C0DA8;
    case 188u: goto L_089C0DB0;
    case 189u: goto L_089C0DB8;
    case 190u: goto L_089C0DC0;
    case 191u: goto L_089C0DC8;
    case 192u: goto L_089C0DD0;
    case 193u: goto L_089C0DD8;
    case 194u: goto L_089C0DE0;
    case 195u: goto L_089C0DE8;
    case 196u: goto L_089C0E30;
    case 197u: goto L_089C0E48;
    case 198u: goto L_089C0E54;
    case 199u: goto L_089C0E5C;
    case 200u: goto L_089C0E74;
    case 201u: goto L_089C0E80;
    case 202u: goto L_089C0E88;
    case 203u: goto L_089C0E9C;
    case 204u: goto L_089C0EB8;
    case 205u: goto L_089C0ECC;
    case 206u: goto L_089C0ED8;
    case 207u: goto L_089C0EEC;
    case 208u: goto L_089C0F20;
    case 209u: goto L_089C0F40;
    case 210u: goto L_089C0F4C;
    case 211u: goto L_089C0F54;
    case 212u: goto L_089C0F58;
    case 213u: goto L_089C0F74;
    case 214u: goto L_089C0F8C;
    case 215u: goto L_089C0F94;
    case 216u: goto L_089C0FA0;
    case 217u: goto L_089C0FA8;
    case 218u: goto L_089C0FB8;
    case 219u: goto L_089C0FD0;
    case 220u: goto L_089C0FEC;
    case 221u: goto L_089C0FF8;
    case 222u: goto L_089C1004;
    case 223u: goto L_089C1028;
    case 224u: goto L_089C1034;
    case 225u: goto L_089C103C;
    case 226u: goto L_089C1044;
    case 227u: goto L_089C1054;
    case 228u: goto L_089C105C;
    case 229u: goto L_089C1064;
    case 230u: goto L_089C1070;
    case 231u: goto L_089C1078;
    case 232u: goto L_089C1088;
    case 233u: goto L_089C1094;
    case 234u: goto L_089C10A0;
    case 235u: goto L_089C10A8;
    case 236u: goto L_089C10AC;
    case 237u: goto L_089C10B0;
    case 238u: goto L_089C10B8;
    case 239u: goto L_089C10C4;
    case 240u: goto L_089C10D0;
    case 241u: goto L_089C10DC;
    case 242u: goto L_089C10E4;
    case 243u: goto L_089C10E8;
    case 244u: goto L_089C10EC;
    case 245u: goto L_089C10F4;
    case 246u: goto L_089C10FC;
    case 247u: goto L_089C1114;
    case 248u: goto L_089C111C;
    case 249u: goto L_089C1170;
    case 250u: goto L_089C11E8;
    case 251u: goto L_089C11F0;
    case 252u: goto L_089C1204;
    case 253u: goto L_089C120C;
    case 254u: goto L_089C1214;
    case 255u: goto L_089C121C;
    case 256u: goto L_089C1224;
    case 257u: goto L_089C122C;
    case 258u: goto L_089C1238;
    case 259u: goto L_089C1240;
    case 260u: goto L_089C126C;
    case 261u: goto L_089C1284;
    case 262u: goto L_089C1288;
    case 263u: goto L_089C12B4;
    case 264u: goto L_089C1358;
    case 265u: goto L_089C137C;
    case 266u: goto L_089C1384;
    case 267u: goto L_089C138C;
    case 268u: goto L_089C1394;
    case 269u: goto L_089C139C;
    case 270u: goto L_089C13B0;
    case 271u: goto L_089C13BC;
    case 272u: goto L_089C13CC;
    case 273u: goto L_089C13D8;
    case 274u: goto L_089C13F8;
    case 275u: goto L_089C13FC;
    case 276u: goto L_089C142C;
    case 277u: goto L_089C143C;
    case 278u: goto L_089C1448;
    case 279u: goto L_089C1464;
    case 280u: goto L_089C146C;
    case 281u: goto L_089C1480;
    case 282u: goto L_089C1498;
    case 283u: goto L_089C14A0;
    case 284u: goto L_089C14A8;
    case 285u: goto L_089C14B4;
    case 286u: goto L_089C14C0;
    case 287u: goto L_089C14C8;
    case 288u: goto L_089C14CC;
    case 289u: goto L_089C14D0;
    case 290u: goto L_089C14D8;
    case 291u: goto L_089C14E0;
    case 292u: goto L_089C14EC;
    case 293u: goto L_089C14F8;
    case 294u: goto L_089C1504;
    case 295u: goto L_089C150C;
    case 296u: goto L_089C1510;
    case 297u: goto L_089C1518;
    case 298u: goto L_089C1524;
    case 299u: goto L_089C152C;
    case 300u: goto L_089C1548;
    case 301u: goto L_089C1550;
    case 302u: goto L_089C1558;
    case 303u: goto L_089C1560;
    case 304u: goto L_089C1568;
    case 305u: goto L_089C1588;
    case 306u: goto L_089C1590;
    case 307u: goto L_089C1598;
    case 308u: goto L_089C15A0;
    case 309u: goto L_089C15A8;
    case 310u: goto L_089C15B0;
    case 311u: goto L_089C15B8;
    case 312u: goto L_089C15C0;
    case 313u: goto L_089C15C8;
    case 314u: goto L_089C15D0;
    case 315u: goto L_089C15E8;
    case 316u: goto L_089C161C;
    case 317u: goto L_089C1628;
    case 318u: goto L_089C1634;
    case 319u: goto L_089C1648;
    case 320u: goto L_089C1650;
    case 321u: goto L_089C1664;
    case 322u: goto L_089C1698;
    case 323u: goto L_089C169C;
    case 324u: goto L_089C16A4;
    case 325u: goto L_089C16AC;
    case 326u: goto L_089C16BC;
    case 327u: goto L_089C16D4;
    case 328u: goto L_089C16E4;
    case 329u: goto L_089C16EC;
    case 330u: goto L_089C16F4;
    case 331u: goto L_089C16FC;
    case 332u: goto L_089C1710;
    case 333u: goto L_089C1720;
    case 334u: goto L_089C1728;
    case 335u: goto L_089C1730;
    case 336u: goto L_089C174C;
    case 337u: goto L_089C175C;
    case 338u: goto L_089C1764;
    case 339u: goto L_089C176C;
    case 340u: goto L_089C1774;
    case 341u: goto L_089C177C;
    case 342u: goto L_089C1784;
    case 343u: goto L_089C178C;
    case 344u: goto L_089C1794;
    case 345u: goto L_089C179C;
    case 346u: goto L_089C17A4;
    case 347u: goto L_089C17AC;
    case 348u: goto L_089C17B4;
    case 349u: goto L_089C17BC;
    case 350u: goto L_089C17C4;
    case 351u: goto L_089C17D0;
    case 352u: goto L_089C17D8;
    case 353u: goto L_089C17E4;
    case 354u: goto L_089C17EC;
    case 355u: goto L_089C17F8;
    case 356u: goto L_089C1800;
    case 357u: goto L_089C180C;
    case 358u: goto L_089C1814;
    case 359u: goto L_089C1820;
    case 360u: goto L_089C1828;
    case 361u: goto L_089C1834;
    case 362u: goto L_089C183C;
    case 363u: goto L_089C1848;
    case 364u: goto L_089C1850;
    case 365u: goto L_089C1854;
    case 366u: goto L_089C1860;
    case 367u: goto L_089C1888;
    case 368u: goto L_089C1890;
    case 369u: goto L_089C1898;
    case 370u: goto L_089C18A0;
    case 371u: goto L_089C18A8;
    case 372u: goto L_089C18B0;
    case 373u: goto L_089C18B8;
    case 374u: goto L_089C18BC;
    case 375u: goto L_089C18D0;
    case 376u: goto L_089C18DC;
    case 377u: goto L_089C1920;
    case 378u: goto L_089C1930;
    case 379u: goto L_089C1938;
    case 380u: goto L_089C1940;
    case 381u: goto L_089C194C;
    case 382u: goto L_089C1950;
    case 383u: goto L_089C1958;
    case 384u: goto L_089C1960;
    case 385u: goto L_089C196C;
    case 386u: goto L_089C1974;
    case 387u: goto L_089C1984;
    case 388u: goto L_089C1990;
    case 389u: goto L_089C19AC;
    case 390u: goto L_089C19B8;
    case 391u: goto L_089C19C8;
    case 392u: goto L_089C19D0;
    case 393u: goto L_089C19DC;
    case 394u: goto L_089C19E4;
    case 395u: goto L_089C19F0;
    case 396u: goto L_089C1A00;
    case 397u: goto L_089C1A14;
    case 398u: goto L_089C1A1C;
    case 399u: goto L_089C1A3C;
    case 400u: goto L_089C1A4C;
    case 401u: goto L_089C1A54;
    case 402u: goto L_089C1A5C;
    case 403u: goto L_089C1A68;
    case 404u: goto L_089C1A70;
    case 405u: goto L_089C1A80;
    case 406u: goto L_089C1A84;
    case 407u: goto L_089C1A8C;
    case 408u: goto L_089C1A98;
    case 409u: goto L_089C1A9C;
    case 410u: goto L_089C1AC4;
    case 411u: goto L_089C1AE4;
    case 412u: goto L_089C1AF4;
    case 413u: goto L_089C1AFC;
    case 414u: goto L_089C1B10;
    case 415u: goto L_089C1B1C;
    case 416u: goto L_089C1B2C;
    case 417u: goto L_089C1B40;
    case 418u: goto L_089C1B58;
    case 419u: goto L_089C1B9C;
    case 420u: goto L_089C1BA0;
    case 421u: goto L_089C1BBC;
    case 422u: goto L_089C1BD0;
    case 423u: goto L_089C1BE8;
    case 424u: goto L_089C1BF8;
    case 425u: goto L_089C1CA0;
    case 426u: goto L_089C1CC0;
    case 427u: goto L_089C1CD0;
    case 428u: goto L_089C1D30;
    case 429u: goto L_089C1D4C;
    case 430u: goto L_089C1D5C;
    case 431u: goto L_089C1DB4;
    case 432u: goto L_089C1DD0;
    case 433u: goto L_089C1DE0;
    case 434u: goto L_089C1E28;
    case 435u: goto L_089C1E44;
    case 436u: goto L_089C1E54;
    case 437u: goto L_089C1E8C;
    case 438u: goto L_089C1E98;
    case 439u: goto L_089C1ED0;
    case 440u: goto L_089C1ED8;
    case 441u: goto L_089C1EEC;
    case 442u: goto L_089C1F00;
    case 443u: goto L_089C1F20;
    case 444u: goto L_089C1F28;
    case 445u: goto L_089C1F30;
    case 446u: goto L_089C1F38;
    case 447u: goto L_089C1F40;
    case 448u: goto L_089C1F48;
    case 449u: goto L_089C1F70;
    case 450u: goto L_089C1F8C;
    case 451u: goto L_089C1F9C;
    case 452u: goto L_089C1FAC;
    case 453u: goto L_089C1FBC;
    case 454u: goto L_089C1FC4;
    case 455u: goto L_089C1FCC;
    case 456u: goto L_089C1FD4;
    case 457u: goto L_089C1FEC;
    case 458u: goto L_089C1FF4;
    case 459u: goto L_089C1FFC;
    case 460u: goto L_089C2004;
    case 461u: goto L_089C200C;
    case 462u: goto L_089C2014;
    case 463u: goto L_089C201C;
    case 464u: goto L_089C2028;
    case 465u: goto L_089C2034;
    case 466u: goto L_089C2040;
    case 467u: goto L_089C2048;
    case 468u: goto L_089C2064;
    case 469u: goto L_089C2070;
    case 470u: goto L_089C2080;
    case 471u: goto L_089C208C;
    case 472u: goto L_089C2098;
    case 473u: goto L_089C20A0;
    case 474u: goto L_089C20A4;
    case 475u: goto L_089C20AC;
    case 476u: goto L_089C20B8;
    case 477u: goto L_089C20D0;
    case 478u: goto L_089C20D8;
    case 479u: goto L_089C20E0;
    case 480u: goto L_089C20F0;
    case 481u: goto L_089C20FC;
    case 482u: goto L_089C2108;
    case 483u: goto L_089C2110;
    case 484u: goto L_089C2114;
    case 485u: goto L_089C211C;
    case 486u: goto L_089C2128;
    case 487u: goto L_089C2144;
    case 488u: goto L_089C214C;
    case 489u: goto L_089C2158;
    case 490u: goto L_089C2170;
    case 491u: goto L_089C217C;
    case 492u: goto L_089C2188;
    case 493u: goto L_089C2190;
    case 494u: goto L_089C2194;
    case 495u: goto L_089C2198;
    case 496u: goto L_089C21A8;
    case 497u: goto L_089C21C0;
    case 498u: goto L_089C21D0;
    case 499u: goto L_089C21DC;
    case 500u: goto L_089C21E8;
    case 501u: goto L_089C21F4;
    case 502u: goto L_089C21FC;
    case 503u: goto L_089C2200;
    case 504u: goto L_089C2208;
    case 505u: goto L_089C2214;
    case 506u: goto L_089C2220;
    case 507u: goto L_089C2238;
    case 508u: goto L_089C2240;
    case 509u: goto L_089C2258;
    case 510u: goto L_089C2270;
    case 511u: goto L_089C2278;
    case 512u: goto L_089C2284;
    case 513u: goto L_089C2290;
    case 514u: goto L_089C2298;
    case 515u: goto L_089C22A0;
    case 516u: goto L_089C22B0;
    case 517u: goto L_089C22B8;
    case 518u: goto L_089C22C0;
    case 519u: goto L_089C22C8;
    case 520u: goto L_089C22E0;
    case 521u: goto L_089C22E8;
    case 522u: goto L_089C22F0;
    case 523u: goto L_089C22F8;
    case 524u: goto L_089C2300;
    case 525u: goto L_089C2328;
    case 526u: goto L_089C2358;
    case 527u: goto L_089C2360;
    case 528u: goto L_089C2370;
    case 529u: goto L_089C2390;
    case 530u: goto L_089C2398;
    case 531u: goto L_089C23A4;
    case 532u: goto L_089C23AC;
    case 533u: goto L_089C23B4;
    case 534u: goto L_089C23BC;
    case 535u: goto L_089C23C4;
    case 536u: goto L_089C23F4;
    case 537u: goto L_089C2410;
    case 538u: goto L_089C241C;
    case 539u: goto L_089C2434;
    case 540u: goto L_089C2450;
    case 541u: goto L_089C2460;
    case 542u: goto L_089C2474;
    case 543u: goto L_089C2490;
    case 544u: goto L_089C2498;
    case 545u: goto L_089C24A0;
    case 546u: goto L_089C24AC;
    case 547u: goto L_089C24B8;
    case 548u: goto L_089C24C0;
    case 549u: goto L_089C24C8;
    case 550u: goto L_089C24D0;
    case 551u: goto L_089C24D8;
    case 552u: goto L_089C24E4;
    case 553u: goto L_089C250C;
    case 554u: goto L_089C2514;
    case 555u: goto L_089C252C;
    case 556u: goto L_089C2544;
    case 557u: goto L_089C2568;
    case 558u: goto L_089C2578;
    case 559u: goto L_089C2580;
    case 560u: goto L_089C2590;
    case 561u: goto L_089C259C;
    case 562u: goto L_089C25A0;
    case 563u: goto L_089C25A4;
    case 564u: goto L_089C25AC;
    case 565u: goto L_089C25B4;
    case 566u: goto L_089C25C0;
    case 567u: goto L_089C25C8;
    case 568u: goto L_089C25D0;
    case 569u: goto L_089C25D4;
    case 570u: goto L_089C25DC;
    case 571u: goto L_089C25E4;
    case 572u: goto L_089C25EC;
    case 573u: goto L_089C25F4;
    case 574u: goto L_089C2604;
    case 575u: goto L_089C2610;
    case 576u: goto L_089C2614;
    case 577u: goto L_089C2618;
    case 578u: goto L_089C2620;
    case 579u: goto L_089C2628;
    case 580u: goto L_089C2634;
    case 581u: goto L_089C263C;
    case 582u: goto L_089C2644;
    case 583u: goto L_089C264C;
    case 584u: goto L_089C2664;
    case 585u: goto L_089C2688;
    case 586u: goto L_089C2694;
    case 587u: goto L_089C26AC;
    case 588u: goto L_089C26D0;
    case 589u: goto L_089C26E8;
    case 590u: goto L_089C26F0;
    case 591u: goto L_089C2728;
    case 592u: goto L_089C274C;
    case 593u: goto L_089C2754;
    case 594u: goto L_089C2770;
    case 595u: goto L_089C2778;
    case 596u: goto L_089C2784;
    case 597u: goto L_089C2798;
    case 598u: goto L_089C27A0;
    case 599u: goto L_089C27AC;
    case 600u: goto L_089C27B4;
    case 601u: goto L_089C27C8;
    case 602u: goto L_089C27E4;
    case 603u: goto L_089C2800;
    case 604u: goto L_089C2808;
    case 605u: goto L_089C2810;
    case 606u: goto L_089C281C;
    case 607u: goto L_089C2838;
    case 608u: goto L_089C2840;
    case 609u: goto L_089C284C;
    case 610u: goto L_089C285C;
    case 611u: goto L_089C2864;
    case 612u: goto L_089C2870;
    case 613u: goto L_089C287C;
    case 614u: goto L_089C2888;
    case 615u: goto L_089C28A0;
    case 616u: goto L_089C28A8;
    case 617u: goto L_089C28B4;
    case 618u: goto L_089C28C0;
    case 619u: goto L_089C28C8;
    case 620u: goto L_089C28D0;
    case 621u: goto L_089C28DC;
    case 622u: goto L_089C28E8;
    case 623u: goto L_089C28F0;
    case 624u: goto L_089C28F8;
    case 625u: goto L_089C2900;
    case 626u: goto L_089C2908;
    case 627u: goto L_089C290C;
    case 628u: goto L_089C2914;
    case 629u: goto L_089C2920;
    case 630u: goto L_089C2928;
    case 631u: goto L_089C2930;
    case 632u: goto L_089C2938;
    case 633u: goto L_089C2940;
    case 634u: goto L_089C2948;
    case 635u: goto L_089C2950;
    case 636u: goto L_089C295C;
    case 637u: goto L_089C2964;
    case 638u: goto L_089C296C;
    case 639u: goto L_089C2978;
    case 640u: goto L_089C2980;
    case 641u: goto L_089C2988;
    case 642u: goto L_089C2990;
    case 643u: goto L_089C2998;
    case 644u: goto L_089C29A8;
    case 645u: goto L_089C29B0;
    case 646u: goto L_089C29B8;
    case 647u: goto L_089C29E8;
    case 648u: goto L_089C29FC;
    case 649u: goto L_089C2A04;
    case 650u: goto L_089C2A0C;
    case 651u: goto L_089C2A14;
    case 652u: goto L_089C2A24;
    case 653u: goto L_089C2A2C;
    case 654u: goto L_089C2A34;
    case 655u: goto L_089C2A3C;
    case 656u: goto L_089C2A4C;
    case 657u: goto L_089C2A54;
    case 658u: goto L_089C2A6C;
    case 659u: goto L_089C2A74;
    case 660u: goto L_089C2A7C;
    case 661u: goto L_089C2A84;
    case 662u: goto L_089C2A8C;
    case 663u: goto L_089C2A94;
    case 664u: goto L_089C2A9C;
    case 665u: goto L_089C2AAC;
    case 666u: goto L_089C2AB4;
    case 667u: goto L_089C2AC0;
    case 668u: goto L_089C2ACC;
    case 669u: goto L_089C2AD4;
    case 670u: goto L_089C2ADC;
    case 671u: goto L_089C2AE4;
    case 672u: goto L_089C2AEC;
    case 673u: goto L_089C2AF4;
    case 674u: goto L_089C2AFC;
    case 675u: goto L_089C2B04;
    case 676u: goto L_089C2B0C;
    case 677u: goto L_089C2B14;
    case 678u: goto L_089C2B1C;
    case 679u: goto L_089C2B24;
    case 680u: goto L_089C2B2C;
    case 681u: goto L_089C2B34;
    case 682u: goto L_089C2B3C;
    case 683u: goto L_089C2B44;
    case 684u: goto L_089C2B4C;
    case 685u: goto L_089C2B60;
    case 686u: goto L_089C2B90;
    case 687u: goto L_089C2BA0;
    case 688u: goto L_089C2BAC;
    case 689u: goto L_089C2BB8;
    case 690u: goto L_089C2BC4;
    case 691u: goto L_089C2BD8;
    case 692u: goto L_089C2BE0;
    case 693u: goto L_089C2BE8;
    case 694u: goto L_089C2BF4;
    case 695u: goto L_089C2BFC;
    case 696u: goto L_089C2C08;
    case 697u: goto L_089C2C34;
    case 698u: goto L_089C2C50;
    case 699u: goto L_089C2C5C;
    case 700u: goto L_089C2C68;
    case 701u: goto L_089C2C70;
    case 702u: goto L_089C2C78;
    case 703u: goto L_089C2C80;
    case 704u: goto L_089C2C84;
    case 705u: goto L_089C2C90;
    case 706u: goto L_089C2C98;
    case 707u: goto L_089C2CA0;
    case 708u: goto L_089C2CA8;
    case 709u: goto L_089C2CC8;
    case 710u: goto L_089C2CE4;
    case 711u: goto L_089C2D04;
    case 712u: goto L_089C2D14;
    case 713u: goto L_089C2D30;
    case 714u: goto L_089C2D40;
    case 715u: goto L_089C2D48;
    case 716u: goto L_089C2D68;
    case 717u: goto L_089C2D78;
    case 718u: goto L_089C2D94;
    case 719u: goto L_089C2DA4;
    case 720u: goto L_089C2DC4;
    case 721u: goto L_089C2DD4;
    case 722u: goto L_089C2DF0;
    case 723u: goto L_089C2E00;
    case 724u: goto L_089C2E0C;
    case 725u: goto L_089C2E14;
    case 726u: goto L_089C2E20;
    case 727u: goto L_089C2E28;
    case 728u: goto L_089C2E34;
    case 729u: goto L_089C2E3C;
    case 730u: goto L_089C2E44;
    case 731u: goto L_089C2E4C;
    case 732u: goto L_089C2E54;
    case 733u: goto L_089C2E5C;
    case 734u: goto L_089C2E84;
    case 735u: goto L_089C2EA4;
    case 736u: goto L_089C2EAC;
    case 737u: goto L_089C2ED0;
    case 738u: goto L_089C2EE4;
    case 739u: goto L_089C2F10;
    case 740u: goto L_089C2F20;
    case 741u: goto L_089C2F2C;
    case 742u: goto L_089C2F38;
    case 743u: goto L_089C2F44;
    case 744u: goto L_089C2F60;
    case 745u: goto L_089C2F90;
    case 746u: goto L_089C2FA0;
    case 747u: goto L_089C2FB0;
    case 748u: goto L_089C2FC0;
    case 749u: goto L_089C2FC8;
    case 750u: goto L_089C2FD0;
    case 751u: goto L_089C2FDC;
    case 752u: goto L_089C2FF4;
    case 753u: goto L_089C300C;
    case 754u: goto L_089C3014;
    case 755u: goto L_089C301C;
    case 756u: goto L_089C3024;
    case 757u: goto L_089C302C;
    case 758u: goto L_089C3034;
    case 759u: goto L_089C3088;
    case 760u: goto L_089C3090;
    case 761u: goto L_089C3098;
    case 762u: goto L_089C30A0;
    case 763u: goto L_089C30A8;
    case 764u: goto L_089C30B0;
    case 765u: goto L_089C30B8;
    case 766u: goto L_089C30C0;
    case 767u: goto L_089C30C8;
    case 768u: goto L_089C30D0;
    case 769u: goto L_089C30D8;
    case 770u: goto L_089C30DC;
    case 771u: goto L_089C30EC;
    case 772u: goto L_089C30F8;
    case 773u: goto L_089C3110;
    case 774u: goto L_089C3120;
    case 775u: goto L_089C313C;
    case 776u: goto L_089C3154;
    case 777u: goto L_089C317C;
    case 778u: goto L_089C3184;
    case 779u: goto L_089C3190;
    case 780u: goto L_089C319C;
    case 781u: goto L_089C31AC;
    case 782u: goto L_089C31B4;
    case 783u: goto L_089C31C0;
    case 784u: goto L_089C31C8;
    case 785u: goto L_089C31D4;
    case 786u: goto L_089C31DC;
    case 787u: goto L_089C31EC;
    case 788u: goto L_089C31F8;
    case 789u: goto L_089C3204;
    case 790u: goto L_089C3210;
    case 791u: goto L_089C321C;
    case 792u: goto L_089C3228;
    case 793u: goto L_089C3234;
    case 794u: goto L_089C3240;
    case 795u: goto L_089C324C;
    case 796u: goto L_089C3258;
    case 797u: goto L_089C3264;
    case 798u: goto L_089C3270;
    case 799u: goto L_089C327C;
    case 800u: goto L_089C3284;
    case 801u: goto L_089C328C;
    case 802u: goto L_089C3294;
    case 803u: goto L_089C32A0;
    case 804u: goto L_089C32A8;
    case 805u: goto L_089C32B4;
    case 806u: goto L_089C32C8;
    case 807u: goto L_089C32D0;
    case 808u: goto L_089C32D8;
    case 809u: goto L_089C32F0;
    case 810u: goto L_089C3300;
    case 811u: goto L_089C3310;
    case 812u: goto L_089C3320;
    case 813u: goto L_089C3330;
    case 814u: goto L_089C3340;
    case 815u: goto L_089C3350;
    case 816u: goto L_089C3360;
    case 817u: goto L_089C3370;
    case 818u: goto L_089C3384;
    case 819u: goto L_089C3394;
    case 820u: goto L_089C33A8;
    case 821u: goto L_089C33BC;
    case 822u: goto L_089C33CC;
    case 823u: goto L_089C33DC;
    case 824u: goto L_089C33E4;
    case 825u: goto L_089C33EC;
    case 826u: goto L_089C33F4;
    case 827u: goto L_089C3404;
    case 828u: goto L_089C340C;
    case 829u: goto L_089C3410;
    case 830u: goto L_089C3418;
    case 831u: goto L_089C3428;
    case 832u: goto L_089C3430;
    case 833u: goto L_089C3438;
    case 834u: goto L_089C3448;
    case 835u: goto L_089C3450;
    case 836u: goto L_089C3458;
    case 837u: goto L_089C3460;
    case 838u: goto L_089C346C;
    case 839u: goto L_089C3474;
    case 840u: goto L_089C347C;
    case 841u: goto L_089C3484;
    case 842u: goto L_089C34A0;
    case 843u: goto L_089C34AC;
    case 844u: goto L_089C34BC;
    case 845u: goto L_089C34C8;
    case 846u: goto L_089C34D4;
    case 847u: goto L_089C34DC;
    case 848u: goto L_089C34E0;
    case 849u: goto L_089C34EC;
    case 850u: goto L_089C34F4;
    case 851u: goto L_089C3508;
    case 852u: goto L_089C3518;
    case 853u: goto L_089C3524;
    case 854u: goto L_089C3530;
    case 855u: goto L_089C3538;
    case 856u: goto L_089C353C;
    case 857u: goto L_089C3548;
    case 858u: goto L_089C3560;
    case 859u: goto L_089C356C;
    case 860u: goto L_089C3578;
    case 861u: goto L_089C3584;
    case 862u: goto L_089C358C;
    case 863u: goto L_089C3590;
    case 864u: goto L_089C359C;
    case 865u: goto L_089C35B8;
    case 866u: goto L_089C35DC;
    case 867u: goto L_089C35E4;
    case 868u: goto L_089C35F8;
    case 869u: goto L_089C3608;
    case 870u: goto L_089C3614;
    case 871u: goto L_089C3620;
    case 872u: goto L_089C3628;
    case 873u: goto L_089C362C;
    case 874u: goto L_089C3638;
    case 875u: goto L_089C3650;
    case 876u: goto L_089C365C;
    case 877u: goto L_089C3668;
    case 878u: goto L_089C3674;
    case 879u: goto L_089C367C;
    case 880u: goto L_089C3680;
    case 881u: goto L_089C368C;
    case 882u: goto L_089C36A8;
    case 883u: goto L_089C36CC;
    case 884u: goto L_089C36D4;
    case 885u: goto L_089C36E0;
    case 886u: goto L_089C36E8;
    case 887u: goto L_089C36F4;
    case 888u: goto L_089C36FC;
    case 889u: goto L_089C371C;
    case 890u: goto L_089C3724;
    case 891u: goto L_089C373C;
    case 892u: goto L_089C3748;
    case 893u: goto L_089C3760;
    case 894u: goto L_089C3768;
    case 895u: goto L_089C3788;
    case 896u: goto L_089C37A4;
    case 897u: goto L_089C37AC;
    case 898u: goto L_089C37C4;
    case 899u: goto L_089C37CC;
    case 900u: goto L_089C37DC;
    case 901u: goto L_089C37E8;
    case 902u: goto L_089C37F4;
    case 903u: goto L_089C37FC;
    case 904u: goto L_089C3800;
    case 905u: goto L_089C380C;
    case 906u: goto L_089C3814;
    case 907u: goto L_089C381C;
    case 908u: goto L_089C3828;
    case 909u: goto L_089C3830;
    case 910u: goto L_089C3838;
    case 911u: goto L_089C3840;
    case 912u: goto L_089C3844;
    case 913u: goto L_089C3858;
    case 914u: goto L_089C3874;
    case 915u: goto L_089C3880;
    case 916u: goto L_089C3888;
    case 917u: goto L_089C3890;
    case 918u: goto L_089C389C;
    case 919u: goto L_089C38A4;
    case 920u: goto L_089C38B0;
    case 921u: goto L_089C38BC;
    case 922u: goto L_089C38C8;
    case 923u: goto L_089C38D4;
    case 924u: goto L_089C38E0;
    case 925u: goto L_089C38EC;
    case 926u: goto L_089C38F8;
    case 927u: goto L_089C3904;
    case 928u: goto L_089C3910;
    case 929u: goto L_089C391C;
    case 930u: goto L_089C3928;
    case 931u: goto L_089C3934;
    case 932u: goto L_089C3940;
    case 933u: goto L_089C394C;
    case 934u: goto L_089C3958;
    case 935u: goto L_089C3964;
    case 936u: goto L_089C3970;
    case 937u: goto L_089C397C;
    case 938u: goto L_089C3988;
    case 939u: goto L_089C3994;
    case 940u: goto L_089C39A0;
    case 941u: goto L_089C39AC;
    case 942u: goto L_089C39B8;
    case 943u: goto L_089C39C4;
    case 944u: goto L_089C39D0;
    case 945u: goto L_089C39DC;
    case 946u: goto L_089C39E8;
    case 947u: goto L_089C39F4;
    case 948u: goto L_089C3A00;
    case 949u: goto L_089C3A0C;
    case 950u: goto L_089C3A18;
    case 951u: goto L_089C3A24;
    case 952u: goto L_089C3A30;
    case 953u: goto L_089C3A3C;
    case 954u: goto L_089C3A48;
    case 955u: goto L_089C3A54;
    case 956u: goto L_089C3A60;
    case 957u: goto L_089C3A6C;
    case 958u: goto L_089C3A78;
    case 959u: goto L_089C3A84;
    case 960u: goto L_089C3A90;
    case 961u: goto L_089C3A9C;
    case 962u: goto L_089C3AA8;
    case 963u: goto L_089C3AB4;
    case 964u: goto L_089C3AC0;
    case 965u: goto L_089C3ACC;
    case 966u: goto L_089C3AD8;
    case 967u: goto L_089C3AE4;
    case 968u: goto L_089C3AF0;
    case 969u: goto L_089C3AFC;
    case 970u: goto L_089C3B08;
    case 971u: goto L_089C3B14;
    case 972u: goto L_089C3B20;
    case 973u: goto L_089C3B2C;
    case 974u: goto L_089C3B38;
    case 975u: goto L_089C3B44;
    case 976u: goto L_089C3B50;
    case 977u: goto L_089C3B5C;
    case 978u: goto L_089C3B68;
    case 979u: goto L_089C3B74;
    case 980u: goto L_089C3B80;
    case 981u: goto L_089C3B8C;
    case 982u: goto L_089C3B98;
    case 983u: goto L_089C3BA4;
    case 984u: goto L_089C3BB0;
    case 985u: goto L_089C3BBC;
    case 986u: goto L_089C3BC8;
    case 987u: goto L_089C3BD4;
    case 988u: goto L_089C3BE0;
    case 989u: goto L_089C3BEC;
    case 990u: goto L_089C3BF8;
    case 991u: goto L_089C3C04;
    case 992u: goto L_089C3C10;
    case 993u: goto L_089C3C1C;
    case 994u: goto L_089C3C28;
    case 995u: goto L_089C3C34;
    case 996u: goto L_089C3C40;
    case 997u: goto L_089C3C4C;
    case 998u: goto L_089C3C58;
    case 999u: goto L_089C3C64;
    case 1000u: goto L_089C3C70;
    case 1001u: goto L_089C3C7C;
    case 1002u: goto L_089C3C88;
    case 1003u: goto L_089C3C94;
    case 1004u: goto L_089C3CA0;
    case 1005u: goto L_089C3CAC;
    case 1006u: goto L_089C3CB8;
    case 1007u: goto L_089C3CC4;
    case 1008u: goto L_089C3CD0;
    case 1009u: goto L_089C3CDC;
    case 1010u: goto L_089C3CE8;
    case 1011u: goto L_089C3CF4;
    case 1012u: goto L_089C3D00;
    case 1013u: goto L_089C3D0C;
    case 1014u: goto L_089C3D18;
    case 1015u: goto L_089C3D24;
    case 1016u: goto L_089C3D30;
    case 1017u: goto L_089C3D3C;
    case 1018u: goto L_089C3D48;
    case 1019u: goto L_089C3D54;
    case 1020u: goto L_089C3D60;
    case 1021u: goto L_089C3D6C;
    case 1022u: goto L_089C3D78;
    case 1023u: goto L_089C3D84;
    case 1024u: goto L_089C3D90;
    case 1025u: goto L_089C3D9C;
    case 1026u: goto L_089C3DA8;
    case 1027u: goto L_089C3DB4;
    case 1028u: goto L_089C3DC0;
    case 1029u: goto L_089C3DCC;
    case 1030u: goto L_089C3DD8;
    case 1031u: goto L_089C3DE4;
    case 1032u: goto L_089C3DF0;
    case 1033u: goto L_089C3DFC;
    case 1034u: goto L_089C3E08;
    case 1035u: goto L_089C3E14;
    case 1036u: goto L_089C3E20;
    case 1037u: goto L_089C3E2C;
    case 1038u: goto L_089C3E38;
    case 1039u: goto L_089C3E44;
    case 1040u: goto L_089C3E50;
    case 1041u: goto L_089C3E60;
    case 1042u: goto L_089C3EA0;
    case 1043u: goto L_089C3EB8;
    case 1044u: goto L_089C3ECC;
    case 1045u: goto L_089C3ED4;
    case 1046u: goto L_089C3EDC;
    case 1047u: goto L_089C3EE8;
    case 1048u: goto L_089C3EF4;
    case 1049u: goto L_089C3F08;
    case 1050u: goto L_089C3F3C;
    case 1051u: goto L_089C3F4C;
    case 1052u: goto L_089C3F60;
    case 1053u: goto L_089C3F64;
    case 1054u: goto L_089C3F70;
    case 1055u: goto L_089C3F74;
    case 1056u: goto L_089C3F84;
    case 1057u: goto L_089C3F98;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C0000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089C0008;
L_089C0008:
    ctx.gpr[31] = (0x089C0010u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x089C0010u) goto L_089C0010;
    return;
L_089C0010:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0020:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28572)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28576)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-28568), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-28560), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-28564), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-28556), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-28552), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0098:
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
L_089C00C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C011C;
      }
      goto L_089C00E8;
    }
L_089C00E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089C00EC;
L_089C00EC:
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089C0108u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 307u, 0x08A59AECu>(ctx, &aot_mem) && ctx.pc == 0x089C0108u) goto L_089C0108;
    return;
L_089C0108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089C00EC;
    }
    goto L_089C011C;
L_089C011C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C012C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C0258;
      }
      goto L_089C0174;
    }
L_089C0174:
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[18] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16040));
    goto L_089C0184;
L_089C0184:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C022C;
      }
      goto L_089C0190;
    }
L_089C0190:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C01A8;
      }
      goto L_089C01A0;
    }
L_089C01A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C01D0;
      }
      goto L_089C01A8;
    }
L_089C01A8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C01BC;
      }
      goto L_089C01B4;
    }
L_089C01B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089C01D0;
      }
      goto L_089C01BC;
    }
L_089C01BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C01CCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 644u, 0x088A7D9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C01CCu) goto L_089C01CC;
    return;
L_089C01CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089C01D0;
L_089C01D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0200;
      }
      goto L_089C01D8;
    }
L_089C01D8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C01E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 423u, 0x08A5A250u>(ctx, &aot_mem) && ctx.pc == 0x089C01E4u) goto L_089C01E4;
    return;
L_089C01E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C0228;
      }
      goto L_089C01EC;
    }
L_089C01EC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C01F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 352u, 0x08A59CD8u>(ctx, &aot_mem) && ctx.pc == 0x089C01F8u) goto L_089C01F8;
    return;
L_089C01F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0228;
      }
      goto L_089C0200;
    }
L_089C0200:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C020Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 423u, 0x08A5A250u>(ctx, &aot_mem) && ctx.pc == 0x089C020Cu) goto L_089C020C;
    return;
L_089C020C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0228;
      }
      goto L_089C0214;
    }
L_089C0214:
    ctx.gpr[31] = (0x089C021Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C0098;
L_089C021C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C0228u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 377u, 0x08A59EC4u>(ctx, &aot_mem) && ctx.pc == 0x089C0228u) goto L_089C0228;
    return;
L_089C0228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089C022C;
L_089C022C:
    ctx.gpr[31] = (0x089C0234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x089C0234u) goto L_089C0234;
    return;
L_089C0234:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C0184;
      }
      goto L_089C0258;
    }
L_089C0258:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0278:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C030C;
      }
      goto L_089C02C8;
    }
L_089C02C8:
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_089C02CC;
L_089C02CC:
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C02FC;
      }
      goto L_089C02DC;
    }
L_089C02DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C02ECu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_089C0620;
L_089C02EC:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[23] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C02DC;
      }
      goto L_089C02FC;
    }
L_089C02FC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C02CC;
      }
      goto L_089C030C;
    }
L_089C030C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C0444;
      }
      goto L_089C0330;
    }
L_089C0330:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (32768u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_089C0344;
L_089C0344:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x089C0350u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x089C0350u) goto L_089C0350;
    return;
L_089C0350:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C0410;
      }
      goto L_089C0368;
    }
L_089C0368:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[17] - ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
        goto L_089C0380;
    }
    goto L_089C0380;
L_089C0380:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
        goto L_089C03A4;
    }
    goto L_089C0394;
L_089C0394:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_089C03B4;
      }
      goto L_089C03A4;
    }
L_089C03A4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    goto L_089C03B4;
L_089C03B4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0414;
      }
      goto L_089C03BC;
    }
L_089C03BC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
        goto L_089C03D4;
    }
    goto L_089C03D4;
L_089C03D4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
        goto L_089C03F8;
    }
    goto L_089C03E8;
L_089C03E8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_089C0408;
      }
      goto L_089C03F8;
    }
L_089C03F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    goto L_089C0408;
L_089C0408:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0414;
      }
      goto L_089C0410;
    }
L_089C0410:
    ctx.gpr[5] = (0u | 1u);
    goto L_089C0414;
L_089C0414:
    ctx.gpr[31] = (0x089C041Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 482u, 0x08A5A724u>(ctx, &aot_mem) && ctx.pc == 0x089C041Cu) goto L_089C041C;
    return;
L_089C041C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C0344;
      }
      goto L_089C0444;
    }
L_089C0444:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0478:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C04E8;
      }
      goto L_089C04B4;
    }
L_089C04B4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_089C04BC;
L_089C04BC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
        goto L_089C04DC;
    }
    goto L_089C04CC;
L_089C04CC:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C04E0;
      }
      goto L_089C04DC;
    }
L_089C04DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089C04E0;
L_089C04E0:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
        goto L_089C04BC;
    }
    goto L_089C04E8;
L_089C04E8:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C0518;
      }
      goto L_089C0508;
    }
L_089C0508:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089C0600;
      }
      goto L_089C0518;
    }
L_089C0518:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089C0528u);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C0528u) goto L_089C0528;
    return;
L_089C0528:
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_089C0548;
      }
      goto L_089C0538;
    }
L_089C0538:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C0544u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 305u, 0x08A59A50u>(ctx, &aot_mem) && ctx.pc == 0x089C0544u) goto L_089C0544;
    return;
L_089C0544:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089C0548;
L_089C0548:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x089C0578u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 814u, 0x08B03B6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0578u) goto L_089C0578;
    return;
L_089C0578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    goto L_089C0588;
L_089C0588:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_089C05B8;
    }
    goto L_089C05B8;
L_089C05B8:
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C05F8;
      }
      goto L_089C05C4;
    }
L_089C05C4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C05D4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 644u, 0x088A7D9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C05D4u) goto L_089C05D4;
    return;
L_089C05D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C05EC;
      }
      goto L_089C05DC;
    }
L_089C05DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C05ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 352u, 0x08A59CD8u>(ctx, &aot_mem) && ctx.pc == 0x089C05ECu) goto L_089C05EC;
    return;
L_089C05EC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_089C0588;
      }
      goto L_089C05F8;
    }
L_089C05F8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    goto L_089C0600;
L_089C0600:
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
L_089C0620:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089C066C;
      }
      goto L_089C0660;
    }
L_089C0660:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089C066C;
L_089C066C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_089C0684;
      }
      goto L_089C0678;
    }
L_089C0678:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089C0684;
L_089C0684:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (17280u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C06E0;
      }
      goto L_089C06AC;
    }
L_089C06AC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_089C06B4;
L_089C06B4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_089C06D4;
    }
    goto L_089C06C4;
L_089C06C4:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C06D8;
      }
      goto L_089C06D4;
    }
L_089C06D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_089C06D8;
L_089C06D8:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_089C06B4;
    }
    goto L_089C06E0;
L_089C06E0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089C0710;
      }
      goto L_089C0700;
    }
L_089C0700:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089C07EC;
      }
      goto L_089C0710;
    }
L_089C0710:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x089C0720u);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C0720u) goto L_089C0720;
    return;
L_089C0720:
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_089C0748;
      }
      goto L_089C0730;
    }
L_089C0730:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C0744u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 306u, 0x08A59A98u>(ctx, &aot_mem) && ctx.pc == 0x089C0744u) goto L_089C0744;
    return;
L_089C0744:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_089C0748;
L_089C0748:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x089C0778u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 814u, 0x08B03B6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0778u) goto L_089C0778;
    return;
L_089C0778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    goto L_089C0790;
L_089C0790:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_089C07C0;
    }
    goto L_089C07C0;
L_089C07C0:
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C07EC;
      }
      goto L_089C07CC;
    }
L_089C07CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C07D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 352u, 0x08A59CD8u>(ctx, &aot_mem) && ctx.pc == 0x089C07D8u) goto L_089C07D8;
    return;
L_089C07D8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_089C0790;
      }
      goto L_089C07EC;
    }
L_089C07EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0814:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C0838u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15980));
    goto L_089C0098;
L_089C0838:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C0898;
      }
      goto L_089C085C;
    }
L_089C085C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x089C0868u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 377u, 0x08A59EC4u>(ctx, &aot_mem) && ctx.pc == 0x089C0868u) goto L_089C0868;
    return;
L_089C0868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089C0874u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x089C0874u) goto L_089C0874;
    return;
L_089C0874:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C085C;
      }
      goto L_089C0898;
    }
L_089C0898:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C08AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C08C0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 742u, 0x08B035C8u>(ctx, &aot_mem) && ctx.pc == 0x089C08C0u) goto L_089C08C0;
    return;
L_089C08C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C08CC:
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
L_089C08F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0900:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0908:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0910:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C0920u);
    // nop
    ctx.pc = 0x08B0B8CCu;
    return;
L_089C0920:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C092C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28448)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0950;
      }
      goto L_089C0944;
    }
L_089C0944:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C0950u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15928));
    goto L_089C08CC;
L_089C0950:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C095C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-28428)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C09EC;
      }
      goto L_089C0978;
    }
L_089C0978:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15904));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[31] = (0x089C0990u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C08CC;
L_089C0990:
    ctx.gpr[31] = (0x089C0998u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C08CC;
L_089C0998:
    ctx.gpr[31] = (0x089C09A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C08CC;
L_089C09A0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C09ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15856));
    goto L_089C08CC;
L_089C09AC:
    ctx.gpr[31] = (0x089C09B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C08CC;
L_089C09B4:
    ctx.gpr[31] = (0x089C09BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C08CC;
L_089C09BC:
    ctx.gpr[31] = (0x089C09C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C08CC;
L_089C09C4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-28428), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089C09D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x089C09D8u) goto L_089C09D8;
    return;
L_089C09D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089C09E4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x089C09E4u) goto L_089C09E4;
    return;
L_089C09E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-28428), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089C09F0;
      }
      goto L_089C09EC;
    }
L_089C09EC:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C09F0;
L_089C09F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0A00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15904));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C0A2Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C08CC;
L_089C0A2C:
    ctx.gpr[31] = (0x089C0A34u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C08CC;
L_089C0A34:
    ctx.gpr[31] = (0x089C0A3Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C08CC;
L_089C0A3C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C0A48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15812));
    goto L_089C08CC;
L_089C0A48:
    ctx.gpr[31] = (0x089C0A50u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C08CC;
L_089C0A50:
    ctx.gpr[31] = (0x089C0A58u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C08CC;
L_089C0A58:
    ctx.gpr[31] = (0x089C0A60u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C08CC;
L_089C0A60:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C0A74u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 142u, 0x089D54BCu>(ctx, &aot_mem) && ctx.pc == 0x089C0A74u) goto L_089C0A74;
    return;
L_089C0A74:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C0A80u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 127u, 0x089D53ACu>(ctx, &aot_mem) && ctx.pc == 0x089C0A80u) goto L_089C0A80;
    return;
L_089C0A80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C0A8Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x089C0A8Cu) goto L_089C0A8C;
    return;
L_089C0A8C:
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
L_089C0AA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-28427)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089C0C48;
      }
      goto L_089C0AD4;
    }
L_089C0AD4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15904));
    ctx.gpr[31] = (0x089C0AE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C08CC;
L_089C0AE4:
    ctx.gpr[31] = (0x089C0AECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C08CC;
L_089C0AEC:
    ctx.gpr[31] = (0x089C0AF4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C08CC;
L_089C0AF4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C0B00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15768));
    goto L_089C08CC;
L_089C0B00:
    ctx.gpr[31] = (0x089C0B08u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C08CC;
L_089C0B08:
    ctx.gpr[31] = (0x089C0B10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C08CC;
L_089C0B10:
    ctx.gpr[31] = (0x089C0B18u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C08CC;
L_089C0B18:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28427), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0BA8;
      }
      goto L_089C0B40;
    }
L_089C0B40:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C0B4Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089C0B4Cu) goto L_089C0B4C;
    return;
L_089C0B4C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0B94;
      }
      goto L_089C0B58;
    }
L_089C0B58:
    ctx.gpr[31] = (0x089C0B60u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 689u, 0x089A2DC8u>(ctx, &aot_mem) && ctx.pc == 0x089C0B60u) goto L_089C0B60;
    return;
L_089C0B60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0B94;
      }
      goto L_089C0B68;
    }
L_089C0B68:
    ctx.gpr[31] = (0x089C0B70u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x089C0B70u) goto L_089C0B70;
    return;
L_089C0B70:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0B94;
      }
      goto L_089C0B78;
    }
L_089C0B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089C0B94u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C0B94u) goto L_089C0B94;
    return;
L_089C0B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C0B40;
      }
      goto L_089C0BA8;
    }
L_089C0BA8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0C2C;
      }
      goto L_089C0BC4;
    }
L_089C0BC4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C0BD0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089C0BD0u) goto L_089C0BD0;
    return;
L_089C0BD0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0C18;
      }
      goto L_089C0BDC;
    }
L_089C0BDC:
    ctx.gpr[31] = (0x089C0BE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 540u, 0x0889EAF0u>(ctx, &aot_mem) && ctx.pc == 0x089C0BE4u) goto L_089C0BE4;
    return;
L_089C0BE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0C18;
      }
      goto L_089C0BEC;
    }
L_089C0BEC:
    ctx.gpr[31] = (0x089C0BF4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x089C0BF4u) goto L_089C0BF4;
    return;
L_089C0BF4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0C18;
      }
      goto L_089C0BFC;
    }
L_089C0BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089C0C18u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C0C18u) goto L_089C0C18;
    return;
L_089C0C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C0BC4;
      }
      goto L_089C0C2C;
    }
L_089C0C2C:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28427), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C0C40u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x089C0C40u) goto L_089C0C40;
    return;
L_089C0C40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0C54;
      }
      goto L_089C0C48;
    }
L_089C0C48:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28427), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (0u | 0u);
    goto L_089C0C54;
L_089C0C54:
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
L_089C0C74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0C7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31740)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C0C94u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BAF4u;
    return;
L_089C0C94:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16632)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15728));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12604));
    ctx.gpr[31] = (0x089C0CBCu);
    ctx.gpr[7] = (2u << 16u);
    ctx.pc = 0x08B0BB64u;
    return;
L_089C0CBC:
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31744), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C0CD4u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB1Cu;
    return;
L_089C0CD4:
    ctx.gpr[31] = (0x089C0CDCu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BBA4u;
    return;
L_089C0CDC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0CEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C0D08u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_089C0C74;
L_089C0D08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C0D14u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089C092C;
L_089C0D14:
    ctx.gpr[31] = (0x089C0D1Cu);
    // nop
    ctx.pc = 0x08B0BB2Cu;
    return;
L_089C0D1C:
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-31740), ctx.gpr[2]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16632)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15716));
    ctx.gpr[31] = (0x089C0D4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3196));
    ctx.pc = 0x08B0BB64u;
    return;
L_089C0D4C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C0D5Cu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB1Cu;
    return;
L_089C0D5C:
    ctx.gpr[31] = (0x089C0D64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31740)));
    ctx.pc = 0x08B0BBA4u;
    return;
L_089C0D64:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0D7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C0DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 151u, 0x088E8C6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0DA8u) goto L_089C0DA8;
    return;
L_089C0DA8:
    ctx.gpr[31] = (0x089C0DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 215u, 0x088B9230u>(ctx, &aot_mem) && ctx.pc == 0x089C0DB0u) goto L_089C0DB0;
    return;
L_089C0DB0:
    ctx.gpr[31] = (0x089C0DB8u);
    // nop
    goto L_089C0908;
L_089C0DB8:
    ctx.gpr[31] = (0x089C0DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 216u, 0x088B9238u>(ctx, &aot_mem) && ctx.pc == 0x089C0DC0u) goto L_089C0DC0;
    return;
L_089C0DC0:
    ctx.gpr[31] = (0x089C0DC8u);
    // nop
    goto L_089C08F8;
L_089C0DC8:
    ctx.gpr[31] = (0x089C0DD0u);
    // nop
    goto L_089C0900;
L_089C0DD0:
    ctx.gpr[31] = (0x089C0DD8u);
    // nop
    goto L_089C1114;
L_089C0DD8:
    ctx.gpr[31] = (0x089C0DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 502u, 0x08A962FCu>(ctx, &aot_mem) && ctx.pc == 0x089C0DE0u) goto L_089C0DE0;
    return;
L_089C0DE0:
    ctx.gpr[31] = (0x089C0DE8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x089C0DE8u) goto L_089C0DE8;
    return;
L_089C0DE8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25440), 0u);
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-29195), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-29194), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-29196), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[21] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-25436), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089C0E30u);
    ctx.gpr[4] = (0u | 8u);
    ctx.pc = 0x08B0B794u;
    return;
L_089C0E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-29196), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C0E74;
      }
      goto L_089C0E48;
    }
L_089C0E48:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C0ECC;
      }
      goto L_089C0E54;
    }
L_089C0E54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0EB8;
      }
      goto L_089C0E5C;
    }
L_089C0E5C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25444), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25440), ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-29195), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-25436), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25492), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_089C0ED8;
      }
      goto L_089C0E74;
    }
L_089C0E74:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C0E9C;
      }
      goto L_089C0E80;
    }
L_089C0E80:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0ECC;
      }
      goto L_089C0E88;
    }
L_089C0E88:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25444), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25440), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25492), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_089C0ED8;
      }
      goto L_089C0E9C;
    }
L_089C0E9C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25444), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25440), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-29194), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-25436), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25492), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_089C0ED8;
      }
      goto L_089C0EB8;
    }
L_089C0EB8:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25444), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25440), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25492), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_089C0ED8;
      }
      goto L_089C0ECC;
    }
L_089C0ECC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25444), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25440), 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25492), static_cast<std::uint8_t>(0u));
    goto L_089C0ED8;
L_089C0ED8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25490), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x089C0EECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6064));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 175u, 0x089F95C4u>(ctx, &aot_mem) && ctx.pc == 0x089C0EECu) goto L_089C0EEC;
    return;
L_089C0EEC:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-29196), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-29194), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-25436), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0F20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C0F40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C0F40u) goto L_089C0F40;
    return;
L_089C0F40:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C0F58;
      }
      goto L_089C0F4C;
    }
L_089C0F4C:
    ctx.gpr[31] = (0x089C0F54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 150u, 0x08AD511Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0F54u) goto L_089C0F54;
    return;
L_089C0F54:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089C0F58;
L_089C0F58:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15700));
    ctx.gpr[31] = (0x089C0F74u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-31072));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 246u, 0x08AD579Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0F74u) goto L_089C0F74;
    return;
L_089C0F74:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089C0F8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15660));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 246u, 0x08AD579Cu>(ctx, &aot_mem) && ctx.pc == 0x089C0F8Cu) goto L_089C0F8C;
    return;
L_089C0F8C:
    ctx.gpr[31] = (0x089C0F94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 191u, 0x08AD5430u>(ctx, &aot_mem) && ctx.pc == 0x089C0F94u) goto L_089C0F94;
    return;
L_089C0F94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C0FA0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 152u, 0x08AD5144u>(ctx, &aot_mem) && ctx.pc == 0x089C0FA0u) goto L_089C0FA0;
    return;
L_089C0FA0:
    ctx.gpr[31] = (0x089C0FA8u);
    // nop
    ctx.pc = 0x08B0BB2Cu;
    return;
L_089C0FA8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16632)));
    ctx.gpr[31] = (0x089C0FB8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BB9Cu;
    return;
L_089C0FB8:
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
L_089C0FD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15616));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C0FECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(512));
    goto L_089C08CC;
L_089C0FEC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089C0FF8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089C0F20;
L_089C0FF8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1004:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C1028u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6064));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 180u, 0x089F95ECu>(ctx, &aot_mem) && ctx.pc == 0x089C1028u) goto L_089C1028;
    return;
L_089C1028:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C1054;
      }
      goto L_089C1034;
    }
L_089C1034:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089C1044;
      }
      goto L_089C103C;
    }
L_089C103C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C10FC;
      }
      goto L_089C1044;
    }
L_089C1044:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28468), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C10FC;
      }
      goto L_089C1054;
    }
L_089C1054:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C1070;
      }
      goto L_089C105C;
    }
L_089C105C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C103C;
      }
      goto L_089C1064;
    }
L_089C1064:
    ctx.gpr[4] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28468), 0u);
      if (branch_taken) {
          goto L_089C10FC;
      }
      goto L_089C1070;
    }
L_089C1070:
    ctx.gpr[31] = (0x089C1078u);
    ctx.gpr[4] = (0u | 1u);
    goto L_089C3858;
L_089C1078:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C10B0;
      }
      goto L_089C1088;
    }
L_089C1088:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C1094u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C1094u) goto L_089C1094;
    return;
L_089C1094:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C10AC;
      }
      goto L_089C10A0;
    }
L_089C10A0:
    ctx.gpr[31] = (0x089C10A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C10A8u) goto L_089C10A8;
    return;
L_089C10A8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C10AC;
L_089C10AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_089C10B0;
L_089C10B0:
    ctx.gpr[31] = (0x089C10B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 401u, 0x08913A68u>(ctx, &aot_mem) && ctx.pc == 0x089C10B8u) goto L_089C10B8;
    return;
L_089C10B8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C10EC;
      }
      goto L_089C10C4;
    }
L_089C10C4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C10D0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C10D0u) goto L_089C10D0;
    return;
L_089C10D0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C10E8;
      }
      goto L_089C10DC;
    }
L_089C10DC:
    ctx.gpr[31] = (0x089C10E4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C10E4u) goto L_089C10E4;
    return;
L_089C10E4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C10E8;
L_089C10E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_089C10EC;
L_089C10EC:
    ctx.gpr[31] = (0x089C10F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 436u, 0x08913CC8u>(ctx, &aot_mem) && ctx.pc == 0x089C10F4u) goto L_089C10F4;
    return;
L_089C10F4:
    ctx.gpr[31] = (0x089C10FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 32u, 0x08A542D4u>(ctx, &aot_mem) && ctx.pc == 0x089C10FCu) goto L_089C10FC;
    return;
L_089C10FC:
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
L_089C1114:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C111C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[10] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[31] = (0x089C1170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 163u, 0x0883CBF8u>(ctx, &aot_mem) && ctx.pc == 0x089C1170u) goto L_089C1170;
    return;
L_089C1170:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3428)));
    ctx.gpr[4] = (15374u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vrot(1u, 64u, 2u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7680));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16355u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 36409u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089C11E8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 276u, 0x08839298u>(ctx, &aot_mem) && ctx.pc == 0x089C11E8u) goto L_089C11E8;
    return;
L_089C11E8:
    ctx.gpr[31] = (0x089C11F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 517u, 0x08926EF4u>(ctx, &aot_mem) && ctx.pc == 0x089C11F0u) goto L_089C11F0;
    return;
L_089C11F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C1204u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 632u, 0x08873884u>(ctx, &aot_mem) && ctx.pc == 0x089C1204u) goto L_089C1204;
    return;
L_089C1204:
    ctx.gpr[31] = (0x089C120Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 570u, 0x089172D0u>(ctx, &aot_mem) && ctx.pc == 0x089C120Cu) goto L_089C120C;
    return;
L_089C120C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C122C;
      }
      goto L_089C1214;
    }
L_089C1214:
    ctx.gpr[31] = (0x089C121Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 864u, 0x08AD36C8u>(ctx, &aot_mem) && ctx.pc == 0x089C121Cu) goto L_089C121C;
    return;
L_089C121C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C1240;
      }
      goto L_089C1224;
    }
L_089C1224:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1284;
      }
      goto L_089C122C;
    }
L_089C122C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C1238u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15588));
    goto L_089C08CC;
L_089C1238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C1288;
      }
      goto L_089C1240;
    }
L_089C1240:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089C126Cu);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089C126Cu) goto L_089C126C;
    return;
L_089C126C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C1284u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 963u, 0x08AD3F98u>(ctx, &aot_mem) && ctx.pc == 0x089C1284u) goto L_089C1284;
    return;
L_089C1284:
    ctx.gpr[2] = (0u | 1u);
    goto L_089C1288;
L_089C1288:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C12B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[23] = (ctx.gpr[4] << 16u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 16u));
    ctx.gpr[22] = (ctx.gpr[5] << 16u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    ctx.gpr[21] = (ctx.gpr[6] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[20] = (ctx.gpr[7] << 16u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[19] = (ctx.gpr[8] << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[18] = (ctx.gpr[9] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[17] = (ctx.gpr[10] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3428)));
    ctx.gpr[4] = (15374u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vrot(1u, 64u, 2u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089C1358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 163u, 0x0883CBF8u>(ctx, &aot_mem) && ctx.pc == 0x089C1358u) goto L_089C1358;
    return;
L_089C1358:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7680));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16355u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 36409u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C137Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 276u, 0x08839298u>(ctx, &aot_mem) && ctx.pc == 0x089C137Cu) goto L_089C137C;
    return;
L_089C137C:
    ctx.gpr[31] = (0x089C1384u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 517u, 0x08926EF4u>(ctx, &aot_mem) && ctx.pc == 0x089C1384u) goto L_089C1384;
    return;
L_089C1384:
    ctx.gpr[31] = (0x089C138Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 570u, 0x089172D0u>(ctx, &aot_mem) && ctx.pc == 0x089C138Cu) goto L_089C138C;
    return;
L_089C138C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C139C;
      }
      goto L_089C1394;
    }
L_089C1394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C13FC;
      }
      goto L_089C139C;
    }
L_089C139C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089C13B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6008));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 632u, 0x08873884u>(ctx, &aot_mem) && ctx.pc == 0x089C13B0u) goto L_089C13B0;
    return;
L_089C13B0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089C13BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 267u, 0x088EDE1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C13BCu) goto L_089C13BC;
    return;
L_089C13BC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[31] = (0x089C13CCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089C13CCu) goto L_089C13CC;
    return;
L_089C13CC:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x089C13D8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089C13D8u) goto L_089C13D8;
    return;
L_089C13D8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C13F8u);
    ctx.gpr[10] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 548u, 0x08837860u>(ctx, &aot_mem) && ctx.pc == 0x089C13F8u) goto L_089C13F8;
    return;
L_089C13F8:
    ctx.gpr[2] = (0u | 1u);
    goto L_089C13FC;
L_089C13FC:
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
L_089C142C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C143Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 422u, 0x088366ACu>(ctx, &aot_mem) && ctx.pc == 0x089C143Cu) goto L_089C143C;
    return;
L_089C143C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C1464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 582u, 0x08AB34DCu>(ctx, &aot_mem) && ctx.pc == 0x089C1464u) goto L_089C1464;
    return;
L_089C1464:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C14A0;
      }
      goto L_089C146C;
    }
L_089C146C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27276)));
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31736)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C14A0;
      }
      goto L_089C1480;
    }
L_089C1480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27276)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-31736), ctx.gpr[4]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C14A8;
      }
      goto L_089C1498;
    }
L_089C1498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C14D0;
      }
      goto L_089C14A0;
    }
L_089C14A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C15D0;
      }
      goto L_089C14A8;
    }
L_089C14A8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C14B4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C14B4u) goto L_089C14B4;
    return;
L_089C14B4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C14CC;
      }
      goto L_089C14C0;
    }
L_089C14C0:
    ctx.gpr[31] = (0x089C14C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C14C8u) goto L_089C14C8;
    return;
L_089C14C8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C14CC;
L_089C14CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_089C14D0;
L_089C14D0:
    ctx.gpr[31] = (0x089C14D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 400u, 0x08913A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C14D8u) goto L_089C14D8;
    return;
L_089C14D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1550;
      }
      goto L_089C14E0;
    }
L_089C14E0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089C1518;
      }
      goto L_089C14EC;
    }
L_089C14EC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C14F8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C14F8u) goto L_089C14F8;
    return;
L_089C14F8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1510;
      }
      goto L_089C1504;
    }
L_089C1504:
    ctx.gpr[31] = (0x089C150Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C150Cu) goto L_089C150C;
    return;
L_089C150C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C1510;
L_089C1510:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2226u << 16u);
    goto L_089C1518;
L_089C1518:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C1524u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15556));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 430u, 0x08913C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1524u) goto L_089C1524;
    return;
L_089C1524:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1550;
      }
      goto L_089C152C;
    }
L_089C152C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28444)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C1568;
      }
      goto L_089C1548;
    }
L_089C1548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1558;
      }
      goto L_089C1550;
    }
L_089C1550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C15D0;
      }
      goto L_089C1558;
    }
L_089C1558:
    ctx.gpr[31] = (0x089C1560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 496u, 0x08AC74E4u>(ctx, &aot_mem) && ctx.pc == 0x089C1560u) goto L_089C1560;
    return;
L_089C1560:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C15C8;
      }
      goto L_089C1568;
    }
L_089C1568:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089C1588u);
    ctx.gpr[10] = (0u | 255u);
    goto L_089C111C;
L_089C1588:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C15D0;
      }
      goto L_089C1590;
    }
L_089C1590:
    ctx.gpr[31] = (0x089C1598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 863u, 0x08AD36C0u>(ctx, &aot_mem) && ctx.pc == 0x089C1598u) goto L_089C1598;
    return;
L_089C1598:
    ctx.gpr[31] = (0x089C15A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 864u, 0x08AD36C8u>(ctx, &aot_mem) && ctx.pc == 0x089C15A0u) goto L_089C15A0;
    return;
L_089C15A0:
    ctx.gpr[31] = (0x089C15A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 77u, 0x08A54554u>(ctx, &aot_mem) && ctx.pc == 0x089C15A8u) goto L_089C15A8;
    return;
L_089C15A8:
    ctx.gpr[31] = (0x089C15B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 201u, 0x08A4CCF8u>(ctx, &aot_mem) && ctx.pc == 0x089C15B0u) goto L_089C15B0;
    return;
L_089C15B0:
    ctx.gpr[31] = (0x089C15B8u);
    // nop
    goto L_089C3E60;
L_089C15B8:
    ctx.gpr[31] = (0x089C15C0u);
    // nop
    goto L_089C2FB0;
L_089C15C0:
    ctx.gpr[31] = (0x089C15C8u);
    ctx.gpr[4] = (0u | 1u);
    goto L_089C15E8;
L_089C15C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C15D0;
      }
      goto L_089C15D0;
    }
L_089C15D0:
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
L_089C15E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7680));
    ctx.gpr[18] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C1698;
      }
      goto L_089C161C;
    }
L_089C161C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089C1628u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 133u, 0x088ED0C8u>(ctx, &aot_mem) && ctx.pc == 0x089C1628u) goto L_089C1628;
    return;
L_089C1628:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C1698;
      }
      goto L_089C1634;
    }
L_089C1634:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28444)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C169C;
      }
      goto L_089C1648;
    }
L_089C1648:
    ctx.gpr[31] = (0x089C1650u);
    // nop
    ctx.pc = 0x08B0BBC4u;
    return;
L_089C1650:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089C1664u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_089C1664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-28444), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C169C;
      }
      goto L_089C1698;
    }
L_089C1698:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-28444), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089C169C;
L_089C169C:
    ctx.gpr[31] = (0x089C16A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 73u, 0x08A28964u>(ctx, &aot_mem) && ctx.pc == 0x089C16A4u) goto L_089C16A4;
    return;
L_089C16A4:
    ctx.gpr[31] = (0x089C16ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 200u, 0x08A4CCF0u>(ctx, &aot_mem) && ctx.pc == 0x089C16ACu) goto L_089C16AC;
    return;
L_089C16AC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C16D4;
      }
      goto L_089C16BC;
    }
L_089C16BC:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(27356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C1720;
      }
      goto L_089C16D4;
    }
L_089C16D4:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C16EC;
      }
      goto L_089C16E4;
    }
L_089C16E4:
    ctx.gpr[31] = (0x089C16ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x089C16ECu) goto L_089C16EC;
    return;
L_089C16EC:
    ctx.gpr[31] = (0x089C16F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20156)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 62u, 0x08950440u>(ctx, &aot_mem) && ctx.pc == 0x089C16F4u) goto L_089C16F4;
    return;
L_089C16F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C1710;
      }
      goto L_089C16FC;
    }
L_089C16FC:
    ctx.gpr[5] = (14979u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(27356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C1720;
      }
      goto L_089C1710;
    }
L_089C1710:
    ctx.gpr[5] = (14545u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(27356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089C1720;
L_089C1720:
    ctx.gpr[31] = (0x089C1728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 610u, 0x088735ECu>(ctx, &aot_mem) && ctx.pc == 0x089C1728u) goto L_089C1728;
    return;
L_089C1728:
    ctx.gpr[31] = (0x089C1730u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 568u, 0x089172B0u>(ctx, &aot_mem) && ctx.pc == 0x089C1730u) goto L_089C1730;
    return;
L_089C1730:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_089C174C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C175Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 6u, 0x088780ECu>(ctx, &aot_mem) && ctx.pc == 0x089C175Cu) goto L_089C175C;
    return;
L_089C175C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C183C;
      }
      goto L_089C1764;
    }
L_089C1764:
    ctx.gpr[31] = (0x089C176Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 128u, 0x0890CAC4u>(ctx, &aot_mem) && ctx.pc == 0x089C176Cu) goto L_089C176C;
    return;
L_089C176C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1828;
      }
      goto L_089C1774;
    }
L_089C1774:
    ctx.gpr[31] = (0x089C177Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 148u, 0x0890CD08u>(ctx, &aot_mem) && ctx.pc == 0x089C177Cu) goto L_089C177C;
    return;
L_089C177C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1814;
      }
      goto L_089C1784;
    }
L_089C1784:
    ctx.gpr[31] = (0x089C178Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 244u, 0x08A2563Cu>(ctx, &aot_mem) && ctx.pc == 0x089C178Cu) goto L_089C178C;
    return;
L_089C178C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1800;
      }
      goto L_089C1794;
    }
L_089C1794:
    ctx.gpr[31] = (0x089C179Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 241u, 0x08925A14u>(ctx, &aot_mem) && ctx.pc == 0x089C179Cu) goto L_089C179C;
    return;
L_089C179C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C17EC;
      }
      goto L_089C17A4;
    }
L_089C17A4:
    ctx.gpr[31] = (0x089C17ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 236u, 0x089259C0u>(ctx, &aot_mem) && ctx.pc == 0x089C17ACu) goto L_089C17AC;
    return;
L_089C17AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C17D8;
      }
      goto L_089C17B4;
    }
L_089C17B4:
    ctx.gpr[31] = (0x089C17BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 535u, 0x08AD6890u>(ctx, &aot_mem) && ctx.pc == 0x089C17BCu) goto L_089C17BC;
    return;
L_089C17BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C1850;
      }
      goto L_089C17C4;
    }
L_089C17C4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C17D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15320));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089C17D0u) goto L_089C17D0;
    return;
L_089C17D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C1854;
      }
      goto L_089C17D8;
    }
L_089C17D8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C17E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15360));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089C17E4u) goto L_089C17E4;
    return;
L_089C17E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C1854;
      }
      goto L_089C17EC;
    }
L_089C17EC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C17F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15400));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089C17F8u) goto L_089C17F8;
    return;
L_089C17F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C1854;
      }
      goto L_089C1800;
    }
L_089C1800:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C180Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15440));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089C180Cu) goto L_089C180C;
    return;
L_089C180C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C1854;
      }
      goto L_089C1814;
    }
L_089C1814:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C1820u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15476));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089C1820u) goto L_089C1820;
    return;
L_089C1820:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C1854;
      }
      goto L_089C1828;
    }
L_089C1828:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C1834u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15512));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089C1834u) goto L_089C1834;
    return;
L_089C1834:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C1854;
      }
      goto L_089C183C;
    }
L_089C183C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C1848u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15548));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089C1848u) goto L_089C1848;
    return;
L_089C1848:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C1854;
      }
      goto L_089C1850;
    }
L_089C1850:
    ctx.gpr[2] = (0u | 1u);
    goto L_089C1854;
L_089C1854:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1860:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2080));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C1888u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1888u) goto L_089C1888;
    return;
L_089C1888:
    ctx.gpr[31] = (0x089C1890u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 609u, 0x0891749Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1890u) goto L_089C1890;
    return;
L_089C1890:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C18B0;
      }
      goto L_089C1898;
    }
L_089C1898:
    ctx.gpr[31] = (0x089C18A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x089C18A0u) goto L_089C18A0;
    return;
L_089C18A0:
    ctx.gpr[31] = (0x089C18A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 113u, 0x08AD0914u>(ctx, &aot_mem) && ctx.pc == 0x089C18A8u) goto L_089C18A8;
    return;
L_089C18A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C18BC;
      }
      goto L_089C18B0;
    }
L_089C18B0:
    ctx.gpr[31] = (0x089C18B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x089C18B8u) goto L_089C18B8;
    return;
L_089C18B8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C18BC;
L_089C18BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C18D0:
    ctx.gpr[4] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28470)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C18DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28470), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28440));
      if (branch_taken) {
          goto L_089C1938;
      }
      goto L_089C1920;
    }
L_089C1920:
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28436)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C1940;
      }
      goto L_089C1930;
    }
L_089C1930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1950;
      }
      goto L_089C1938;
    }
L_089C1938:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089C1A9C;
      }
      goto L_089C1940;
    }
L_089C1940:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C194Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 63u, 0x08A0CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C194Cu) goto L_089C194C;
    return;
L_089C194C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089C1950;
L_089C1950:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C1A98;
      }
      goto L_089C1958;
    }
L_089C1958:
    ctx.gpr[31] = (0x089C1960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 769u, 0x089C7274u>(ctx, &aot_mem) && ctx.pc == 0x089C1960u) goto L_089C1960;
    return;
L_089C1960:
    ctx.gpr[20] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-21008));
      if (branch_taken) {
          goto L_089C1990;
      }
      goto L_089C196C;
    }
L_089C196C:
    ctx.gpr[31] = (0x089C1974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 628u, 0x08AB3850u>(ctx, &aot_mem) && ctx.pc == 0x089C1974u) goto L_089C1974;
    return;
L_089C1974:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(-32));
    ctx.gpr[31] = (0x089C1984u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1984u) goto L_089C1984;
    return;
L_089C1984:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C1990u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15284));
    goto L_089C08CC;
L_089C1990:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C19ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15256));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFB6BCu>(ctx, &aot_mem) && ctx.pc == 0x089C19ACu) goto L_089C19AC;
    return;
L_089C19AC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C19B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFB6BCu>(ctx, &aot_mem) && ctx.pc == 0x089C19B8u) goto L_089C19B8;
    return;
L_089C19B8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C19C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15228));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFB6BCu>(ctx, &aot_mem) && ctx.pc == 0x089C19C8u) goto L_089C19C8;
    return;
L_089C19C8:
    ctx.gpr[31] = (0x089C19D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC6FE4u>(ctx, &aot_mem) && ctx.pc == 0x089C19D0u) goto L_089C19D0;
    return;
L_089C19D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1A70;
      }
      goto L_089C19DC;
    }
L_089C19DC:
    ctx.gpr[31] = (0x089C19E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 444u, 0x08AC70DCu>(ctx, &aot_mem) && ctx.pc == 0x089C19E4u) goto L_089C19E4;
    return;
L_089C19E4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C19F0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x089C19F0u) goto L_089C19F0;
    return;
L_089C19F0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C1A00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x089C1A00u) goto L_089C1A00;
    return;
L_089C1A00:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C1A14u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC716Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1A14u) goto L_089C1A14;
    return;
L_089C1A14:
    ctx.gpr[31] = (0x089C1A1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 436u, 0x08AC702Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1A1Cu) goto L_089C1A1C;
    return;
L_089C1A1C:
    ctx.gpr[4] = (116u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089C1A3Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 559u, 0x0886AFC0u>(ctx, &aot_mem) && ctx.pc == 0x089C1A3Cu) goto L_089C1A3C;
    return;
L_089C1A3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-28436), ctx.gpr[2]);
    ctx.gpr[31] = (0x089C1A4Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 55u, 0x08A0CDD0u>(ctx, &aot_mem) && ctx.pc == 0x089C1A4Cu) goto L_089C1A4C;
    return;
L_089C1A4C:
    ctx.gpr[31] = (0x089C1A54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 82u, 0x08A0CF90u>(ctx, &aot_mem) && ctx.pc == 0x089C1A54u) goto L_089C1A54;
    return;
L_089C1A54:
    ctx.gpr[31] = (0x089C1A5Cu);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-28440), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 771u, 0x089C7298u>(ctx, &aot_mem) && ctx.pc == 0x089C1A5Cu) goto L_089C1A5C;
    return;
L_089C1A5C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C1A68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15220));
    goto L_089C08CC;
L_089C1A68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089C1A84;
      }
      goto L_089C1A70;
    }
L_089C1A70:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x089C1A80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15192));
    goto L_089C08CC;
L_089C1A80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089C1A84;
L_089C1A84:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[20];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089C1A98;
      }
      goto L_089C1A8C;
    }
L_089C1A8C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C1A98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1A98u) goto L_089C1A98;
    return;
L_089C1A98:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_089C1A9C;
L_089C1A9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1AC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28470), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C1AE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15284));
    goto L_089C08CC;
L_089C1AE4:
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28436)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1B1C;
      }
      goto L_089C1AF4;
    }
L_089C1AF4:
    ctx.gpr[31] = (0x089C1AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 628u, 0x08AB3850u>(ctx, &aot_mem) && ctx.pc == 0x089C1AFCu) goto L_089C1AFC;
    return;
L_089C1AFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28436)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[31] = (0x089C1B10u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x089C1B10u) goto L_089C1B10;
    return;
L_089C1B10:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-28436), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28440), 0u);
    goto L_089C1B1C;
L_089C1B1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1B2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C1B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089C1B40u) goto L_089C1B40;
    return;
L_089C1B40:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28404)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28408)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C1B58u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089C1B58u) goto L_089C1B58;
    return;
L_089C1B58:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28412)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-28426));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28412), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089C1BA0;
      }
      goto L_089C1B9C;
    }
L_089C1B9C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28412), 0u);
    goto L_089C1BA0;
L_089C1BA0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31732));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C1BBCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15172));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x089C1BBCu) goto L_089C1BBC;
    return;
L_089C1BBC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1BD0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1BE8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1BF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16448u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    ctx.gpr[17] = (2229u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[5] = (16000u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[5] = (17294u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[6] = (17299u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (16896u << 16u);
    ctx.gpr[8] = (17379u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[31] = (0x089C1CA0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089C1CA0u) goto L_089C1CA0;
    return;
L_089C1CA0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C1CC0u);
    ctx.gpr[8] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089C1CC0u) goto L_089C1CC0;
    return;
L_089C1CC0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C1CD0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x089C1CD0u) goto L_089C1CD0;
    return;
L_089C1CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17292u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[4] = (17297u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 32768u);
    ctx.gpr[4] = (17377u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 32768u);
    ctx.gpr[8] = (16872u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[31] = (0x089C1D30u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089C1D30u) goto L_089C1D30;
    return;
L_089C1D30:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C1D4Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089C1D4Cu) goto L_089C1D4C;
    return;
L_089C1D4C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C1D5Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x089C1D5Cu) goto L_089C1D5C;
    return;
L_089C1D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17293u << 16u);
    ctx.gpr[6] = (17297u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[26] / ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[28] / ctx.fpr[12];
    ctx.gpr[7] = (16880u << 16u);
    ctx.gpr[8] = (17377u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[31] = (0x089C1DB4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089C1DB4u) goto L_089C1DB4;
    return;
L_089C1DB4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[7] = (0u | 200u);
    ctx.gpr[31] = (0x089C1DD0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089C1DD0u) goto L_089C1DD0;
    return;
L_089C1DD0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C1DE0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x089C1DE0u) goto L_089C1DE0;
    return;
L_089C1DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[26] / ctx.fpr[15];
    ctx.gpr[5] = (17362u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[15] = ctx.fpr[28] / ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[30];
    ctx.gpr[31] = (0x089C1E28u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089C1E28u) goto L_089C1E28;
    return;
L_089C1E28:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 219u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 20u);
    ctx.gpr[31] = (0x089C1E44u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089C1E44u) goto L_089C1E44;
    return;
L_089C1E44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C1E54u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x089C1E54u) goto L_089C1E54;
    return;
L_089C1E54:
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
L_089C1E8C:
    ctx.gpr[5] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28432), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C1E98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-512));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C1ED0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA74u;
    return;
L_089C1ED0:
    ctx.gpr[31] = (0x089C1ED8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089C18DC;
L_089C1ED8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C1EECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15128));
    goto L_089C08CC;
L_089C1EEC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1896));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C1FCC;
      }
      goto L_089C1F00;
    }
L_089C1F00:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089C1F20u);
    ctx.gpr[10] = (0u | 255u);
    goto L_089C111C;
L_089C1F20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C1FC4;
      }
      goto L_089C1F28;
    }
L_089C1F28:
    ctx.gpr[31] = (0x089C1F30u);
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 863u, 0x08AD36C0u>(ctx, &aot_mem) && ctx.pc == 0x089C1F30u) goto L_089C1F30;
    return;
L_089C1F30:
    ctx.gpr[31] = (0x089C1F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 864u, 0x08AD36C8u>(ctx, &aot_mem) && ctx.pc == 0x089C1F38u) goto L_089C1F38;
    return;
L_089C1F38:
    ctx.gpr[31] = (0x089C1F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 77u, 0x08A54554u>(ctx, &aot_mem) && ctx.pc == 0x089C1F40u) goto L_089C1F40;
    return;
L_089C1F40:
    ctx.gpr[31] = (0x089C1F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 201u, 0x08A4CCF8u>(ctx, &aot_mem) && ctx.pc == 0x089C1F48u) goto L_089C1F48;
    return;
L_089C1F48:
    ctx.gpr[5] = (17392u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (17288u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089C1F70u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089C1F70u) goto L_089C1F70;
    return;
L_089C1F70:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C1F8Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089C1F8Cu) goto L_089C1F8C;
    return;
L_089C1F8C:
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x089C1F9Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089C1F9Cu) goto L_089C1F9C;
    return;
L_089C1F9C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C1FACu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 906u, 0x08AD3ABCu>(ctx, &aot_mem) && ctx.pc == 0x089C1FACu) goto L_089C1FAC;
    return;
L_089C1FAC:
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28432)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C1FD4;
      }
      goto L_089C1FBC;
    }
L_089C1FBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2238;
      }
      goto L_089C1FC4;
    }
L_089C1FC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2300;
      }
      goto L_089C1FCC;
    }
L_089C1FCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2300;
      }
      goto L_089C1FD4;
    }
L_089C1FD4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C1FECu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089C1FECu) goto L_089C1FEC;
    return;
L_089C1FEC:
    ctx.gpr[31] = (0x089C1FF4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x089C1FF4u) goto L_089C1FF4;
    return;
L_089C1FF4:
    ctx.gpr[31] = (0x089C1FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x089C1FFCu) goto L_089C1FFC;
    return;
L_089C1FFC:
    ctx.gpr[31] = (0x089C2004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x089C2004u) goto L_089C2004;
    return;
L_089C2004:
    ctx.gpr[31] = (0x089C200Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x089C200Cu) goto L_089C200C;
    return;
L_089C200C:
    ctx.gpr[31] = (0x089C2014u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2014u) goto L_089C2014;
    return;
L_089C2014:
    ctx.gpr[31] = (0x089C201Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55020u>(ctx, &aot_mem) && ctx.pc == 0x089C201Cu) goto L_089C201C;
    return;
L_089C201C:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[31] = (0x089C2028u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x089C2028u) goto L_089C2028;
    return;
L_089C2028:
    ctx.gpr[4] = (17352u << 16u);
    ctx.gpr[31] = (0x089C2034u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x089C2034u) goto L_089C2034;
    return;
L_089C2034:
    ctx.gpr[4] = (17224u << 16u);
    ctx.gpr[31] = (0x089C2040u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2040u) goto L_089C2040;
    return;
L_089C2040:
    ctx.gpr[31] = (0x089C2048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x089C2048u) goto L_089C2048;
    return;
L_089C2048:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x089C2064u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x089C2064u) goto L_089C2064;
    return;
L_089C2064:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28432)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089C20D8;
      }
      goto L_089C2070;
    }
L_089C2070:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089C20AC;
      }
      goto L_089C2080;
    }
L_089C2080:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089C208Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C208Cu) goto L_089C208C;
    return;
L_089C208C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C20A4;
      }
      goto L_089C2098;
    }
L_089C2098:
    ctx.gpr[31] = (0x089C20A0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C20A0u) goto L_089C20A0;
    return;
L_089C20A0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089C20A4;
L_089C20A4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2226u << 16u);
    goto L_089C20AC;
L_089C20AC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C20B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15100));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089C20B8u) goto L_089C20B8;
    return;
L_089C20B8:
    ctx.gpr[6] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C20D0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089C20D0u) goto L_089C20D0;
    return;
L_089C20D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2238;
      }
      goto L_089C20D8;
    }
L_089C20D8:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C214C;
      }
      goto L_089C20E0;
    }
L_089C20E0:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089C211C;
      }
      goto L_089C20F0;
    }
L_089C20F0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089C20FCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C20FCu) goto L_089C20FC;
    return;
L_089C20FC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2114;
      }
      goto L_089C2108;
    }
L_089C2108:
    ctx.gpr[31] = (0x089C2110u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C2110u) goto L_089C2110;
    return;
L_089C2110:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089C2114;
L_089C2114:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2226u << 16u);
    goto L_089C211C;
L_089C211C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C2128u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15092));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089C2128u) goto L_089C2128;
    return;
L_089C2128:
    ctx.gpr[6] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (17088u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C2144u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089C2144u) goto L_089C2144;
    return;
L_089C2144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2238;
      }
      goto L_089C214C;
    }
L_089C214C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C2238;
      }
      goto L_089C2158;
    }
L_089C2158:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(216));
      if (branch_taken) {
          goto L_089C2198;
      }
      goto L_089C2170;
    }
L_089C2170:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x089C217Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C217Cu) goto L_089C217C;
    return;
L_089C217C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2194;
      }
      goto L_089C2188;
    }
L_089C2188:
    ctx.gpr[31] = (0x089C2190u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C2190u) goto L_089C2190;
    return;
L_089C2190:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089C2194;
L_089C2194:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    goto L_089C2198;
L_089C2198:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C21A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15084));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089C21A8u) goto L_089C21A8;
    return;
L_089C21A8:
    ctx.gpr[6] = (17088u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089C21C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089C21C0u) goto L_089C21C0;
    return;
L_089C21C0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C21D0u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x089C21D0u) goto L_089C21D0;
    return;
L_089C21D0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089C2208;
      }
      goto L_089C21DC;
    }
L_089C21DC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x089C21E8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C21E8u) goto L_089C21E8;
    return;
L_089C21E8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2200;
      }
      goto L_089C21F4;
    }
L_089C21F4:
    ctx.gpr[31] = (0x089C21FCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C21FCu) goto L_089C21FC;
    return;
L_089C21FC:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089C2200;
L_089C2200:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    ctx.gpr[5] = (2226u << 16u);
    goto L_089C2208;
L_089C2208:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C2214u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15076));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089C2214u) goto L_089C2214;
    return;
L_089C2214:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C2220u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 329u, 0x08879E58u>(ctx, &aot_mem) && ctx.pc == 0x089C2220u) goto L_089C2220;
    return;
L_089C2220:
    ctx.gpr[6] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089C2238u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089C2238u) goto L_089C2238;
    return;
L_089C2238:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C22F0;
      }
      goto L_089C2240;
    }
L_089C2240:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28452)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C2284;
      }
      goto L_089C2258;
    }
L_089C2258:
    ctx.gpr[5] = (16688u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C2278;
      }
      goto L_089C2270;
    }
L_089C2270:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28452), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089C2278;
L_089C2278:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2290;
      }
      goto L_089C2284;
    }
L_089C2284:
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    goto L_089C2290;
L_089C2290:
    ctx.gpr[31] = (0x089C2298u);
    // nop
    goto L_089C1BF8;
L_089C2298:
    ctx.gpr[31] = (0x089C22A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x089C22A0u) goto L_089C22A0;
    return;
L_089C22A0:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089C22B0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x089C22B0u) goto L_089C22B0;
    return;
L_089C22B0:
    ctx.gpr[31] = (0x089C22B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x089C22B8u) goto L_089C22B8;
    return;
L_089C22B8:
    ctx.gpr[31] = (0x089C22C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x089C22C0u) goto L_089C22C0;
    return;
L_089C22C0:
    ctx.gpr[31] = (0x089C22C8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x089C22C8u) goto L_089C22C8;
    return;
L_089C22C8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(472));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C22E0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089C22E0u) goto L_089C22E0;
    return;
L_089C22E0:
    ctx.gpr[31] = (0x089C22E8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x089C22E8u) goto L_089C22E8;
    return;
L_089C22E8:
    ctx.gpr[31] = (0x089C22F0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x089C22F0u) goto L_089C22F0;
    return;
L_089C22F0:
    ctx.gpr[31] = (0x089C22F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54DCCu>(ctx, &aot_mem) && ctx.pc == 0x089C22F8u) goto L_089C22F8;
    return;
L_089C22F8:
    ctx.gpr[31] = (0x089C2300u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089C15E8;
L_089C2300:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2328:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C2358u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7060)));
    goto L_089C1BD0;
L_089C2358:
    ctx.gpr[31] = (0x089C2360u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089C18DC;
L_089C2360:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C2370u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15068));
    goto L_089C08CC;
L_089C2370:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089C2390u);
    ctx.gpr[10] = (0u | 255u);
    goto L_089C111C;
L_089C2390:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2498;
      }
      goto L_089C2398;
    }
L_089C2398:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C23A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15024));
    goto L_089C08CC;
L_089C23A4:
    ctx.gpr[31] = (0x089C23ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 863u, 0x08AD36C0u>(ctx, &aot_mem) && ctx.pc == 0x089C23ACu) goto L_089C23AC;
    return;
L_089C23AC:
    ctx.gpr[31] = (0x089C23B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 864u, 0x08AD36C8u>(ctx, &aot_mem) && ctx.pc == 0x089C23B4u) goto L_089C23B4;
    return;
L_089C23B4:
    ctx.gpr[31] = (0x089C23BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 77u, 0x08A54554u>(ctx, &aot_mem) && ctx.pc == 0x089C23BCu) goto L_089C23BC;
    return;
L_089C23BC:
    ctx.gpr[31] = (0x089C23C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 201u, 0x08A4CCF8u>(ctx, &aot_mem) && ctx.pc == 0x089C23C4u) goto L_089C23C4;
    return;
L_089C23C4:
    ctx.gpr[5] = (17392u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (17288u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089C23F4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089C23F4u) goto L_089C23F4;
    return;
L_089C23F4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C2410u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089C2410u) goto L_089C2410;
    return;
L_089C2410:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C241Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14984));
    goto L_089C08CC;
L_089C241C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089C2434u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089C2434u) goto L_089C2434;
    return;
L_089C2434:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C2450u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089C2450u) goto L_089C2450;
    return;
L_089C2450:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C2460u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x089C2460u) goto L_089C2460;
    return;
L_089C2460:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C24A0;
      }
      goto L_089C2474;
    }
L_089C2474:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2490u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 910u, 0x08AD3B10u>(ctx, &aot_mem) && ctx.pc == 0x089C2490u) goto L_089C2490;
    return;
L_089C2490:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C24AC;
      }
      goto L_089C2498;
    }
L_089C2498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C24E4;
      }
      goto L_089C24A0;
    }
L_089C24A0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C24ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14944));
    goto L_089C08CC;
L_089C24AC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C24B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14908));
    goto L_089C08CC;
L_089C24B8:
    ctx.gpr[31] = (0x089C24C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54DCCu>(ctx, &aot_mem) && ctx.pc == 0x089C24C0u) goto L_089C24C0;
    return;
L_089C24C0:
    ctx.gpr[31] = (0x089C24C8u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089C15E8;
L_089C24C8:
    ctx.gpr[31] = (0x089C24D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 628u, 0x08AB3850u>(ctx, &aot_mem) && ctx.pc == 0x089C24D0u) goto L_089C24D0;
    return;
L_089C24D0:
    ctx.gpr[31] = (0x089C24D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x089C24D8u) goto L_089C24D8;
    return;
L_089C24D8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C24E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14860));
    goto L_089C08CC;
L_089C24E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C250C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2514:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C252Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x089C252Cu) goto L_089C252C;
    return;
L_089C252C:
    ctx.gpr[8] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    goto L_089C2544;
L_089C2544:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_089C2544;
      }
      goto L_089C2568;
    }
L_089C2568:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7680));
    goto L_089C2578;
L_089C2578:
    ctx.gpr[31] = (0x089C2580u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x089C2580u) goto L_089C2580;
    return;
L_089C2580:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C25A0;
      }
      goto L_089C2590;
    }
L_089C2590:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089C25A4;
      }
      goto L_089C259C;
    }
L_089C259C:
    ctx.gpr[4] = (0u | 1u);
    goto L_089C25A0;
L_089C25A0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089C25A4;
L_089C25A4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2644;
      }
      goto L_089C25AC;
    }
L_089C25AC:
    ctx.gpr[31] = (0x089C25B4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x089C25B4u) goto L_089C25B4;
    return;
L_089C25B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2644;
      }
      goto L_089C25C0;
    }
L_089C25C0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C25D4;
      }
      goto L_089C25C8;
    }
L_089C25C8:
    ctx.gpr[31] = (0x089C25D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B314u>(ctx, &aot_mem) && ctx.pc == 0x089C25D0u) goto L_089C25D0;
    return;
L_089C25D0:
    ctx.gpr[17] = (0u | 0u);
    goto L_089C25D4;
L_089C25D4:
    ctx.gpr[31] = (0x089C25DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 514u, 0x08A96424u>(ctx, &aot_mem) && ctx.pc == 0x089C25DCu) goto L_089C25DC;
    return;
L_089C25DC:
    ctx.gpr[31] = (0x089C25E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 608u, 0x088735CCu>(ctx, &aot_mem) && ctx.pc == 0x089C25E4u) goto L_089C25E4;
    return;
L_089C25E4:
    ctx.gpr[31] = (0x089C25ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 610u, 0x088735ECu>(ctx, &aot_mem) && ctx.pc == 0x089C25ECu) goto L_089C25EC;
    return;
L_089C25EC:
    ctx.gpr[31] = (0x089C25F4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x089C25F4u) goto L_089C25F4;
    return;
L_089C25F4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C2614;
      }
      goto L_089C2604;
    }
L_089C2604:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089C2618;
      }
      goto L_089C2610;
    }
L_089C2610:
    ctx.gpr[4] = (0u | 1u);
    goto L_089C2614;
L_089C2614:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089C2618;
L_089C2618:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2634;
      }
      goto L_089C2620;
    }
L_089C2620:
    ctx.gpr[31] = (0x089C2628u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x089C2628u) goto L_089C2628;
    return;
L_089C2628:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C263C;
      }
      goto L_089C2634;
    }
L_089C2634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2644;
      }
      goto L_089C263C;
    }
L_089C263C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2578;
      }
      goto L_089C2644;
    }
L_089C2644:
    ctx.gpr[31] = (0x089C264Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x089C264Cu) goto L_089C264C;
    return;
L_089C264C:
    ctx.gpr[9] = (ctx.gpr[2] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    goto L_089C2664;
L_089C2664:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_089C2664;
      }
      goto L_089C2688;
    }
L_089C2688:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x089C2694u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x089C2694u) goto L_089C2694;
    return;
L_089C2694:
    ctx.gpr[9] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    goto L_089C26AC;
L_089C26AC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_089C26AC;
      }
      goto L_089C26D0;
    }
L_089C26D0:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C26E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C26F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C2728u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-28456), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 341u, 0x088B18E4u>(ctx, &aot_mem) && ctx.pc == 0x089C2728u) goto L_089C2728;
    return;
L_089C2728:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[21] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[30] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C2838;
      }
      goto L_089C274C;
    }
L_089C274C:
    ctx.gpr[31] = (0x089C2754u);
    ctx.gpr[4] = (0u | 2u);
    goto L_089C1E8C;
L_089C2754:
    ctx.gpr[19] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-14824));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C2770u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089C1E98;
L_089C2770:
    ctx.gpr[31] = (0x089C2778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 328u, 0x088B181Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2778u) goto L_089C2778;
    return;
L_089C2778:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-28456)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C27A0;
      }
      goto L_089C2784;
    }
L_089C2784:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1133), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (31u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-28456), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x089C2798u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31616));
    ctx.pc = 0x08B0BBF4u;
    return;
L_089C2798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2838;
      }
      goto L_089C27A0;
    }
L_089C27A0:
    ctx.gpr[4] = (15u << 16u);
    ctx.gpr[31] = (0x089C27ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16960));
    ctx.pc = 0x08B0BBF4u;
    return;
L_089C27AC:
    ctx.gpr[31] = (0x089C27B4u);
    ctx.gpr[4] = (0u | 3u);
    goto L_089C1E8C;
L_089C27B4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C27C8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089C1E98;
L_089C27C8:
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-31604));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28380)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C27E4u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0B8DCu;
    return;
L_089C27E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-28380), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2838;
      }
      goto L_089C2800;
    }
L_089C2800:
    ctx.gpr[31] = (0x089C2808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2808u) goto L_089C2808;
    return;
L_089C2808:
    ctx.gpr[31] = (0x089C2810u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08B0BBF4u;
    return;
L_089C2810:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C281Cu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0B8DCu;
    return;
L_089C281C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-28380), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2800;
      }
      goto L_089C2838;
    }
L_089C2838:
    ctx.gpr[31] = (0x089C2840u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089C1E8C;
L_089C2840:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C284Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14816));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089C284Cu) goto L_089C284C;
    return;
L_089C284C:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089C285Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2080));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C285Cu) goto L_089C285C;
    return;
L_089C285C:
    ctx.gpr[31] = (0x089C2864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 700u, 0x0891B1A4u>(ctx, &aot_mem) && ctx.pc == 0x089C2864u) goto L_089C2864;
    return;
L_089C2864:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C2870u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14796));
    goto L_089C08CC;
L_089C2870:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C287Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14776));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 334u, 0x08AD1480u>(ctx, &aot_mem) && ctx.pc == 0x089C287Cu) goto L_089C287C;
    return;
L_089C287C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C2888u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14760));
    goto L_089C08CC;
L_089C2888:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C28A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14740));
    goto L_089C1E98;
L_089C28A0:
    ctx.gpr[31] = (0x089C28A8u);
    // nop
    goto L_089C250C;
L_089C28A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(16756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C28C8;
      }
      goto L_089C28B4;
    }
L_089C28B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x089C28C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7060)));
    goto L_089C1BD0;
L_089C28C0:
    ctx.gpr[31] = (0x089C28C8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089C18DC;
L_089C28C8:
    ctx.gpr[31] = (0x089C28D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 720u, 0x0891B328u>(ctx, &aot_mem) && ctx.pc == 0x089C28D0u) goto L_089C28D0;
    return;
L_089C28D0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x089C28DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 219u, 0x088B5814u>(ctx, &aot_mem) && ctx.pc == 0x089C28DCu) goto L_089C28DC;
    return;
L_089C28DC:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-14724));
    goto L_089C28E8;
L_089C28E8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2908;
      }
      goto L_089C28F0;
    }
L_089C28F0:
    ctx.gpr[31] = (0x089C28F8u);
    // nop
    goto L_089C1B2C;
L_089C28F8:
    ctx.gpr[31] = (0x089C2900u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089C18DC;
L_089C2900:
    ctx.gpr[31] = (0x089C2908u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C08CC;
L_089C2908:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
    goto L_089C290C;
L_089C290C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089C2940;
      }
      goto L_089C2914;
    }
L_089C2914:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(16756)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089C2940;
      }
      goto L_089C2920;
    }
L_089C2920:
    ctx.gpr[31] = (0x089C2928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 131u, 0x089C4848u>(ctx, &aot_mem) && ctx.pc == 0x089C2928u) goto L_089C2928;
    return;
L_089C2928:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2938;
      }
      goto L_089C2930;
    }
L_089C2930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2940;
      }
      goto L_089C2938;
    }
L_089C2938:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
      if (branch_taken) {
          goto L_089C290C;
      }
      goto L_089C2940;
    }
L_089C2940:
    ctx.gpr[31] = (0x089C2948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 579u, 0x08A9688Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2948u) goto L_089C2948;
    return;
L_089C2948:
    ctx.gpr[31] = (0x089C2950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 529u, 0x08A964D8u>(ctx, &aot_mem) && ctx.pc == 0x089C2950u) goto L_089C2950;
    return;
L_089C2950:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089C295Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x08864AC0u>(ctx, &aot_mem) && ctx.pc == 0x089C295Cu) goto L_089C295C;
    return;
L_089C295C:
    ctx.gpr[31] = (0x089C2964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 148u, 0x08AD0B20u>(ctx, &aot_mem) && ctx.pc == 0x089C2964u) goto L_089C2964;
    return;
L_089C2964:
    ctx.gpr[31] = (0x089C296Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B314u>(ctx, &aot_mem) && ctx.pc == 0x089C296Cu) goto L_089C296C;
    return;
L_089C296C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(16756)));
      if (branch_taken) {
          goto L_089C2980;
      }
      goto L_089C2978;
    }
L_089C2978:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089C29B0;
      }
      goto L_089C2980;
    }
L_089C2980:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089C2990;
      }
      goto L_089C2988;
    }
L_089C2988:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1133), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_089C2990;
L_089C2990:
    ctx.gpr[31] = (0x089C2998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 171u, 0x08AD0C34u>(ctx, &aot_mem) && ctx.pc == 0x089C2998u) goto L_089C2998;
    return;
L_089C2998:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089C29A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x08864AC0u>(ctx, &aot_mem) && ctx.pc == 0x089C29A8u) goto L_089C29A8;
    return;
L_089C29A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(27772)));
      if (branch_taken) {
          goto L_089C28E8;
      }
      goto L_089C29B0;
    }
L_089C29B0:
    ctx.gpr[31] = (0x089C29B8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 91u, 0x088646C8u>(ctx, &aot_mem) && ctx.pc == 0x089C29B8u) goto L_089C29B8;
    return;
L_089C29B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C29E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C29FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 431u, 0x088368DCu>(ctx, &aot_mem) && ctx.pc == 0x089C29FCu) goto L_089C29FC;
    return;
L_089C29FC:
    ctx.gpr[31] = (0x089C2A04u);
    // nop
    goto L_089C142C;
L_089C2A04:
    ctx.gpr[31] = (0x089C2A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 111u, 0x088B46D8u>(ctx, &aot_mem) && ctx.pc == 0x089C2A0Cu) goto L_089C2A0C;
    return;
L_089C2A0C:
    ctx.gpr[31] = (0x089C2A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 201u, 0x08A4CCF8u>(ctx, &aot_mem) && ctx.pc == 0x089C2A14u) goto L_089C2A14;
    return;
L_089C2A14:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19544)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2A2C;
      }
      goto L_089C2A24;
    }
L_089C2A24:
    ctx.gpr[31] = (0x089C2A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 132u, 0x08B0092Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2A2Cu) goto L_089C2A2C;
    return;
L_089C2A2C:
    ctx.gpr[31] = (0x089C2A34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19544)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 164u, 0x088B4C68u>(ctx, &aot_mem) && ctx.pc == 0x089C2A34u) goto L_089C2A34;
    return;
L_089C2A34:
    ctx.gpr[31] = (0x089C2A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 281u, 0x08AA9DB0u>(ctx, &aot_mem) && ctx.pc == 0x089C2A3Cu) goto L_089C2A3C;
    return;
L_089C2A3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2A4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2A54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C2A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 685u, 0x08806CF4u>(ctx, &aot_mem) && ctx.pc == 0x089C2A6Cu) goto L_089C2A6C;
    return;
L_089C2A6C:
    ctx.gpr[31] = (0x089C2A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 224u, 0x08929D1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2A74u) goto L_089C2A74;
    return;
L_089C2A74:
    ctx.gpr[31] = (0x089C2A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 555u, 0x08AAB270u>(ctx, &aot_mem) && ctx.pc == 0x089C2A7Cu) goto L_089C2A7C;
    return;
L_089C2A7C:
    ctx.gpr[31] = (0x089C2A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 449u, 0x0892B710u>(ctx, &aot_mem) && ctx.pc == 0x089C2A84u) goto L_089C2A84;
    return;
L_089C2A84:
    ctx.gpr[31] = (0x089C2A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 252u, 0x08AE5468u>(ctx, &aot_mem) && ctx.pc == 0x089C2A8Cu) goto L_089C2A8C;
    return;
L_089C2A8C:
    ctx.gpr[31] = (0x089C2A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 186u, 0x08A89054u>(ctx, &aot_mem) && ctx.pc == 0x089C2A94u) goto L_089C2A94;
    return;
L_089C2A94:
    ctx.gpr[31] = (0x089C2A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 345u, 0x08AAA2B0u>(ctx, &aot_mem) && ctx.pc == 0x089C2A9Cu) goto L_089C2A9C;
    return;
L_089C2A9C:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C2AB4;
      }
      goto L_089C2AAC;
    }
L_089C2AAC:
    ctx.gpr[31] = (0x089C2AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x089C2AB4u) goto L_089C2AB4;
    return;
L_089C2AB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[31] = (0x089C2AC0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 50u, 0x08954344u>(ctx, &aot_mem) && ctx.pc == 0x089C2AC0u) goto L_089C2AC0;
    return;
L_089C2AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19544)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2AD4;
      }
      goto L_089C2ACC;
    }
L_089C2ACC:
    ctx.gpr[31] = (0x089C2AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 132u, 0x08B0092Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2AD4u) goto L_089C2AD4;
    return;
L_089C2AD4:
    ctx.gpr[31] = (0x089C2ADCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19544)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 164u, 0x088B4C68u>(ctx, &aot_mem) && ctx.pc == 0x089C2ADCu) goto L_089C2ADC;
    return;
L_089C2ADC:
    ctx.gpr[31] = (0x089C2AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 172u, 0x08934A40u>(ctx, &aot_mem) && ctx.pc == 0x089C2AE4u) goto L_089C2AE4;
    return;
L_089C2AE4:
    ctx.gpr[31] = (0x089C2AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 232u, 0x08934FB4u>(ctx, &aot_mem) && ctx.pc == 0x089C2AECu) goto L_089C2AEC;
    return;
L_089C2AEC:
    ctx.gpr[31] = (0x089C2AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 8u, 0x089FC08Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2AF4u) goto L_089C2AF4;
    return;
L_089C2AF4:
    ctx.gpr[31] = (0x089C2AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 703u, 0x0886BCF0u>(ctx, &aot_mem) && ctx.pc == 0x089C2AFCu) goto L_089C2AFC;
    return;
L_089C2AFC:
    ctx.gpr[31] = (0x089C2B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 504u, 0x08932794u>(ctx, &aot_mem) && ctx.pc == 0x089C2B04u) goto L_089C2B04;
    return;
L_089C2B04:
    ctx.gpr[31] = (0x089C2B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 328u, 0x08826030u>(ctx, &aot_mem) && ctx.pc == 0x089C2B0Cu) goto L_089C2B0C;
    return;
L_089C2B0C:
    ctx.gpr[31] = (0x089C2B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 119u, 0x089F8DE8u>(ctx, &aot_mem) && ctx.pc == 0x089C2B14u) goto L_089C2B14;
    return;
L_089C2B14:
    ctx.gpr[31] = (0x089C2B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 486u, 0x089FB0D0u>(ctx, &aot_mem) && ctx.pc == 0x089C2B1Cu) goto L_089C2B1C;
    return;
L_089C2B1C:
    ctx.gpr[31] = (0x089C2B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 606u, 0x0899B960u>(ctx, &aot_mem) && ctx.pc == 0x089C2B24u) goto L_089C2B24;
    return;
L_089C2B24:
    ctx.gpr[31] = (0x089C2B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 310u, 0x08A828F0u>(ctx, &aot_mem) && ctx.pc == 0x089C2B2Cu) goto L_089C2B2C;
    return;
L_089C2B2C:
    ctx.gpr[31] = (0x089C2B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 205u, 0x0886934Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2B34u) goto L_089C2B34;
    return;
L_089C2B34:
    ctx.gpr[31] = (0x089C2B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 378u, 0x08AE62B0u>(ctx, &aot_mem) && ctx.pc == 0x089C2B3Cu) goto L_089C2B3C;
    return;
L_089C2B3C:
    ctx.gpr[31] = (0x089C2B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 355u, 0x08AB9DB8u>(ctx, &aot_mem) && ctx.pc == 0x089C2B44u) goto L_089C2B44;
    return;
L_089C2B44:
    ctx.gpr[31] = (0x089C2B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 305u, 0x08AAA000u>(ctx, &aot_mem) && ctx.pc == 0x089C2B4Cu) goto L_089C2B4C;
    return;
L_089C2B4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2B60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C2B90u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089C2B90u) goto L_089C2B90;
    return;
L_089C2B90:
    ctx.gpr[18] = (0u | 8u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089C2BA0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089C2BA0u) goto L_089C2BA0;
    return;
L_089C2BA0:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x089C2BACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089C2BACu) goto L_089C2BAC;
    return;
L_089C2BAC:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089C2BB8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089C2BB8u) goto L_089C2BB8;
    return;
L_089C2BB8:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x089C2BC4u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x089C2BC4u) goto L_089C2BC4;
    return;
L_089C2BC4:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1668)));
    ctx.gpr[16] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(13216));
      if (branch_taken) {
          goto L_089C2BE0;
      }
      goto L_089C2BD8;
    }
L_089C2BD8:
    ctx.gpr[31] = (0x089C2BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 267u, 0x0882A8E0u>(ctx, &aot_mem) && ctx.pc == 0x089C2BE0u) goto L_089C2BE0;
    return;
L_089C2BE0:
    ctx.gpr[31] = (0x089C2BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 401u, 0x08A86330u>(ctx, &aot_mem) && ctx.pc == 0x089C2BE8u) goto L_089C2BE8;
    return;
L_089C2BE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2BFC;
      }
      goto L_089C2BF4;
    }
L_089C2BF4:
    ctx.gpr[31] = (0x089C2BFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 185u, 0x088ED6BCu>(ctx, &aot_mem) && ctx.pc == 0x089C2BFCu) goto L_089C2BFC;
    return;
L_089C2BFC:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2C08u);
    ctx.gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089C2C08u) goto L_089C2C08;
    return;
L_089C2C08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
      if (branch_taken) {
          goto L_089C2C50;
      }
      goto L_089C2C34;
    }
L_089C2C34:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089C2C50;
L_089C2C50:
    ctx.gpr[6] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C2C80;
      }
      goto L_089C2C5C;
    }
L_089C2C5C:
    ctx.gpr[6] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C2C80;
      }
      goto L_089C2C68;
    }
L_089C2C68:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[6] = (0u | 40u);
      if (branch_taken) {
          goto L_089C2C80;
      }
      goto L_089C2C70;
    }
L_089C2C70:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 46u);
      if (branch_taken) {
          goto L_089C2C80;
      }
      goto L_089C2C78;
    }
L_089C2C78:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C2C84;
      }
      goto L_089C2C80;
    }
L_089C2C80:
    ctx.gpr[5] = (0u | 1u);
    goto L_089C2C84;
L_089C2C84:
    ctx.gpr[4] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 16u);
      if (branch_taken) {
          goto L_089C2CA0;
      }
      goto L_089C2C90;
    }
L_089C2C90:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 29u);
      if (branch_taken) {
          goto L_089C2CA0;
      }
      goto L_089C2C98;
    }
L_089C2C98:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C2E00;
      }
      goto L_089C2CA0;
    }
L_089C2CA0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2E00;
      }
      goto L_089C2CA8;
    }
L_089C2CA8:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C2CC8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089C2CC8u) goto L_089C2CC8;
    return;
L_089C2CC8:
    ctx.gpr[5] = (17392u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[5] = (17288u << 16u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C2D48;
      }
      goto L_089C2CE4;
    }
L_089C2CE4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (49712u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089C2D04u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089C2D04u) goto L_089C2D04;
    return;
L_089C2D04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2D14u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x089C2D14u) goto L_089C2D14;
    return;
L_089C2D14:
    ctx.gpr[5] = (17305u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089C2D30u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089C2D30u) goto L_089C2D30;
    return;
L_089C2D30:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2D40u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x089C2D40u) goto L_089C2D40;
    return;
L_089C2D40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2DA4;
      }
      goto L_089C2D48;
    }
L_089C2D48:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (49812u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089C2D68u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089C2D68u) goto L_089C2D68;
    return;
L_089C2D68:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2D78u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x089C2D78u) goto L_089C2D78;
    return;
L_089C2D78:
    ctx.gpr[5] = (17325u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089C2D94u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089C2D94u) goto L_089C2D94;
    return;
L_089C2D94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2DA4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x089C2DA4u) goto L_089C2DA4;
    return;
L_089C2DA4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089C2DC4u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089C2DC4u) goto L_089C2DC4;
    return;
L_089C2DC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2DD4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x089C2DD4u) goto L_089C2DD4;
    return;
L_089C2DD4:
    ctx.gpr[5] = (17377u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089C2DF0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089C2DF0u) goto L_089C2DF0;
    return;
L_089C2DF0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2E00u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x089C2E00u) goto L_089C2E00;
    return;
L_089C2E00:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x089C2E0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 237u, 0x088BCFB0u>(ctx, &aot_mem) && ctx.pc == 0x089C2E0Cu) goto L_089C2E0C;
    return;
L_089C2E0C:
    ctx.gpr[31] = (0x089C2E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 80u, 0x08988940u>(ctx, &aot_mem) && ctx.pc == 0x089C2E14u) goto L_089C2E14;
    return;
L_089C2E14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1668)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C2E28;
      }
      goto L_089C2E20;
    }
L_089C2E20:
    ctx.gpr[31] = (0x089C2E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 267u, 0x0882A8E0u>(ctx, &aot_mem) && ctx.pc == 0x089C2E28u) goto L_089C2E28;
    return;
L_089C2E28:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x089C2E34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 335u, 0x08AC68FCu>(ctx, &aot_mem) && ctx.pc == 0x089C2E34u) goto L_089C2E34;
    return;
L_089C2E34:
    ctx.gpr[31] = (0x089C2E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 227u, 0x0887932Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2E3Cu) goto L_089C2E3C;
    return;
L_089C2E3C:
    ctx.gpr[31] = (0x089C2E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 156u, 0x089188F4u>(ctx, &aot_mem) && ctx.pc == 0x089C2E44u) goto L_089C2E44;
    return;
L_089C2E44:
    ctx.gpr[31] = (0x089C2E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 709u, 0x0893B97Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2E4Cu) goto L_089C2E4C;
    return;
L_089C2E4C:
    ctx.gpr[31] = (0x089C2E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 530u, 0x08A964E0u>(ctx, &aot_mem) && ctx.pc == 0x089C2E54u) goto L_089C2E54;
    return;
L_089C2E54:
    ctx.gpr[31] = (0x089C2E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54DCCu>(ctx, &aot_mem) && ctx.pc == 0x089C2E5Cu) goto L_089C2E5C;
    return;
L_089C2E5C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2E84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(305)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2FA0;
      }
      goto L_089C2EA4;
    }
L_089C2EA4:
    ctx.gpr[31] = (0x089C2EACu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 745u, 0x08ADED70u>(ctx, &aot_mem) && ctx.pc == 0x089C2EACu) goto L_089C2EAC;
    return;
L_089C2EAC:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-288));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C2EE4;
      }
      goto L_089C2ED0;
    }
L_089C2ED0:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (0u | 255u);
        goto L_089C2EE4;
    }
    goto L_089C2EE4;
L_089C2EE4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-288));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(255));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089C2F20;
      }
      goto L_089C2F10;
    }
L_089C2F10:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 255u);
        goto L_089C2F20;
    }
    goto L_089C2F20;
L_089C2F20:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089C2F44;
      }
      goto L_089C2F2C;
    }
L_089C2F2C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C2F44;
      }
      goto L_089C2F38;
    }
L_089C2F38:
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    goto L_089C2F44;
L_089C2F44:
    ctx.gpr[8] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089C2F60u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089C2F60u) goto L_089C2F60;
    return;
L_089C2F60:
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089C2F90u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089C2F90u) goto L_089C2F90;
    return;
L_089C2F90:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C2FA0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x089C2FA0u) goto L_089C2FA0;
    return;
L_089C2FA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2FB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C2FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 476u, 0x0898E624u>(ctx, &aot_mem) && ctx.pc == 0x089C2FC0u) goto L_089C2FC0;
    return;
L_089C2FC0:
    ctx.gpr[31] = (0x089C2FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 13u, 0x089C418Cu>(ctx, &aot_mem) && ctx.pc == 0x089C2FC8u) goto L_089C2FC8;
    return;
L_089C2FC8:
    ctx.gpr[31] = (0x089C2FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54DCCu>(ctx, &aot_mem) && ctx.pc == 0x089C2FD0u) goto L_089C2FD0;
    return;
L_089C2FD0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C2FDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(22) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C30D8;
      }
      goto L_089C2FF4;
    }
L_089C2FF4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-10696)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C300C:
    ctx.gpr[31] = (0x089C3014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 105u, 0x08AD089Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3014u) goto L_089C3014;
    return;
L_089C3014:
    ctx.gpr[31] = (0x089C301Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 636u, 0x089175ACu>(ctx, &aot_mem) && ctx.pc == 0x089C301Cu) goto L_089C301C;
    return;
L_089C301C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C302C;
      }
      goto L_089C3024;
    }
L_089C3024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C30DC;
      }
      goto L_089C302C;
    }
L_089C302C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C30DC;
      }
      goto L_089C3034;
    }
L_089C3034:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3428)));
    ctx.gpr[4] = (15374u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vrot(1u, 64u, 2u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7680));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (16355u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 36409u);
    ctx.gpr[31] = (0x089C3088u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 276u, 0x08839298u>(ctx, &aot_mem) && ctx.pc == 0x089C3088u) goto L_089C3088;
    return;
L_089C3088:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C30DC;
      }
      goto L_089C3090;
    }
L_089C3090:
    ctx.gpr[31] = (0x089C3098u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089C1860;
L_089C3098:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C30A8;
      }
      goto L_089C30A0;
    }
L_089C30A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C30DC;
      }
      goto L_089C30A8;
    }
L_089C30A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C30DC;
      }
      goto L_089C30B0;
    }
L_089C30B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C30DC;
      }
      goto L_089C30B8;
    }
L_089C30B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C30DC;
      }
      goto L_089C30C0;
    }
L_089C30C0:
    ctx.gpr[31] = (0x089C30C8u);
    ctx.gpr[16] = (0u | 0u);
    goto L_089C174C;
L_089C30C8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_089C30D0;
    }
    goto L_089C30D0;
L_089C30D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089C30DC;
      }
      goto L_089C30D8;
    }
L_089C30D8:
    ctx.gpr[2] = (0u | 2u);
    goto L_089C30DC;
L_089C30DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C30EC:
    ctx.gpr[4] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28446), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C30F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C3110u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14652));
    goto L_089C08CC;
L_089C3110:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3120:
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[0];
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C313C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-816));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(804), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(808), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C3154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 408u, 0x08935D4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3154u) goto L_089C3154;
    return;
L_089C3154:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2048), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (ctx.fcr31);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-3969));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    ctx.fcr31 = ctx.gpr[8] & 0x0181FFFFu;
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16636)));
    ctx.gpr[31] = (0x089C317Cu);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08B0BCECu;
    return;
L_089C317C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3190;
      }
      goto L_089C3184;
    }
L_089C3184:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3190u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14640));
    goto L_089C08CC;
L_089C3190:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C319Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14608));
    goto L_089C08CC;
L_089C319C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089C31ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14572));
    ctx.pc = 0x08B0B7DCu;
    return;
L_089C31AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089C31C8;
      }
      goto L_089C31B4;
    }
L_089C31B4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C31C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14564));
    goto L_089C08CC;
L_089C31C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C31C0;
      }
      goto L_089C31C8;
    }
L_089C31C8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C31D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14548));
    goto L_089C08CC;
L_089C31D4:
    ctx.gpr[31] = (0x089C31DCu);
    // nop
    ctx.pc = 0x08B0B7BCu;
    return;
L_089C31DC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C31ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14536));
    goto L_089C08CC;
L_089C31EC:
    ctx.gpr[4] = (ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3204;
      }
      goto L_089C31F8;
    }
L_089C31F8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3204u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14520));
    goto L_089C08CC;
L_089C3204:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C321C;
      }
      goto L_089C3210;
    }
L_089C3210:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C321Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14508));
    goto L_089C08CC;
L_089C321C:
    ctx.gpr[4] = (ctx.gpr[16] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3234;
      }
      goto L_089C3228;
    }
L_089C3228:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3234u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14496));
    goto L_089C08CC;
L_089C3234:
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C324C;
      }
      goto L_089C3240;
    }
L_089C3240:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C324Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14488));
    goto L_089C08CC;
L_089C324C:
    ctx.gpr[4] = (ctx.gpr[16] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3264;
      }
      goto L_089C3258;
    }
L_089C3258:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3264u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14476));
    goto L_089C08CC;
L_089C3264:
    ctx.gpr[4] = (ctx.gpr[16] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C327C;
      }
      goto L_089C3270;
    }
L_089C3270:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C327Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14464));
    goto L_089C08CC;
L_089C327C:
    ctx.gpr[31] = (0x089C3284u);
    ctx.gpr[4] = (0u | 32u);
    ctx.pc = 0x08B0B7C4u;
    return;
L_089C3284:
    ctx.gpr[31] = (0x089C328Cu);
    // nop
    ctx.pc = 0x08B0B7ACu;
    return;
L_089C328C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C32A8;
      }
      goto L_089C3294;
    }
L_089C3294:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C32A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14452));
    goto L_089C08CC;
L_089C32A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C32B4;
      }
      goto L_089C32A8;
    }
L_089C32A8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C32B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14432));
    goto L_089C08CC;
L_089C32B4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089C32C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14408));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 106u, 0x08A588E4u>(ctx, &aot_mem) && ctx.pc == 0x089C32C8u) goto L_089C32C8;
    return;
L_089C32C8:
    ctx.gpr[31] = (0x089C32D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 380u, 0x08A2D7F4u>(ctx, &aot_mem) && ctx.pc == 0x089C32D0u) goto L_089C32D0;
    return;
L_089C32D0:
    ctx.gpr[31] = (0x089C32D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 279u, 0x08AF55D8u>(ctx, &aot_mem) && ctx.pc == 0x089C32D8u) goto L_089C32D8;
    return;
L_089C32D8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x089C32F0u);
    ctx.gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 823u, 0x08AA3E4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C32F0u) goto L_089C32F0;
    return;
L_089C32F0:
    ctx.gpr[6] = (0u | 45056u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C3300u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 823u, 0x08AA3E4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3300u) goto L_089C3300;
    return;
L_089C3300:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[31] = (0x089C3310u);
    ctx.gpr[6] = (0u | 5120u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 823u, 0x08AA3E4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3310u) goto L_089C3310;
    return;
L_089C3310:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 56u);
    ctx.gpr[31] = (0x089C3320u);
    ctx.gpr[6] = (0u | 24576u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 823u, 0x08AA3E4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3320u) goto L_089C3320;
    return;
L_089C3320:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[31] = (0x089C3330u);
    ctx.gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 823u, 0x08AA3E4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3330u) goto L_089C3330;
    return;
L_089C3330:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[31] = (0x089C3340u);
    ctx.gpr[6] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 823u, 0x08AA3E4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3340u) goto L_089C3340;
    return;
L_089C3340:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[31] = (0x089C3350u);
    ctx.gpr[6] = (0u | 12288u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 823u, 0x08AA3E4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3350u) goto L_089C3350;
    return;
L_089C3350:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 112u);
    ctx.gpr[31] = (0x089C3360u);
    ctx.gpr[6] = (0u | 12288u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 823u, 0x08AA3E4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3360u) goto L_089C3360;
    return;
L_089C3360:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[31] = (0x089C3370u);
    ctx.gpr[6] = (0u | 5120u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 823u, 0x08AA3E4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3370u) goto L_089C3370;
    return;
L_089C3370:
    ctx.gpr[6] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 176u);
    ctx.gpr[31] = (0x089C3384u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8192));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 823u, 0x08AA3E4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3384u) goto L_089C3384;
    return;
L_089C3384:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 192u);
    ctx.gpr[31] = (0x089C3394u);
    ctx.gpr[6] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 823u, 0x08AA3E4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3394u) goto L_089C3394;
    return;
L_089C3394:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C33A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 127u, 0x089D53ACu>(ctx, &aot_mem) && ctx.pc == 0x089C33A8u) goto L_089C33A8;
    return;
L_089C33A8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[31] = (0x089C33BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2396));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 832u, 0x08AA3F08u>(ctx, &aot_mem) && ctx.pc == 0x089C33BCu) goto L_089C33BC;
    return;
L_089C33BC:
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C33CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2560));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 832u, 0x08AA3F08u>(ctx, &aot_mem) && ctx.pc == 0x089C33CCu) goto L_089C33CC;
    return;
L_089C33CC:
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C33DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2724));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 832u, 0x08AA3F08u>(ctx, &aot_mem) && ctx.pc == 0x089C33DCu) goto L_089C33DC;
    return;
L_089C33DC:
    ctx.gpr[31] = (0x089C33E4u);
    // nop
    ctx.pc = 0x08B0BB44u;
    return;
L_089C33E4:
    ctx.gpr[31] = (0x089C33ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 292u, 0x0894DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C33ECu) goto L_089C33EC;
    return;
L_089C33EC:
    ctx.gpr[31] = (0x089C33F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 488u, 0x08AC7474u>(ctx, &aot_mem) && ctx.pc == 0x089C33F4u) goto L_089C33F4;
    return;
L_089C33F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C3410;
      }
      goto L_089C3404;
    }
L_089C3404:
    ctx.gpr[31] = (0x089C340Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x089C340Cu) goto L_089C340C;
    return;
L_089C340C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_089C3410;
L_089C3410:
    ctx.gpr[31] = (0x089C3418u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 762u, 0x0894FF50u>(ctx, &aot_mem) && ctx.pc == 0x089C3418u) goto L_089C3418;
    return;
L_089C3418:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C3430;
      }
      goto L_089C3428;
    }
L_089C3428:
    ctx.gpr[31] = (0x089C3430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3430u) goto L_089C3430;
    return;
L_089C3430:
    ctx.gpr[31] = (0x089C3438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 489u, 0x08AFA284u>(ctx, &aot_mem) && ctx.pc == 0x089C3438u) goto L_089C3438;
    return;
L_089C3438:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C3450;
      }
      goto L_089C3448;
    }
L_089C3448:
    ctx.gpr[31] = (0x089C3450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x089C3450u) goto L_089C3450;
    return;
L_089C3450:
    ctx.gpr[31] = (0x089C3458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 92u, 0x08B0070Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3458u) goto L_089C3458;
    return;
L_089C3458:
    ctx.gpr[31] = (0x089C3460u);
    // nop
    goto L_089C0D7C;
L_089C3460:
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[31] = (0x089C346Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 579u, 0x08917350u>(ctx, &aot_mem) && ctx.pc == 0x089C346Cu) goto L_089C346C;
    return;
L_089C346C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C347C;
      }
      goto L_089C3474;
    }
L_089C3474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C3844;
      }
      goto L_089C347C;
    }
L_089C347C:
    ctx.gpr[31] = (0x089C3484u);
    // nop
    goto L_089C1004;
L_089C3484:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6256));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6192));
    ctx.gpr[31] = (0x089C34A0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6012));
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 306u, 0x088B16CCu>(ctx, &aot_mem) && ctx.pc == 0x089C34A0u) goto L_089C34A0;
    return;
L_089C34A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6012)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3814;
      }
      goto L_089C34AC;
    }
L_089C34AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C34EC;
      }
      goto L_089C34BC;
    }
L_089C34BC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C34C8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C34C8u) goto L_089C34C8;
    return;
L_089C34C8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C34E0;
      }
      goto L_089C34D4;
    }
L_089C34D4:
    ctx.gpr[31] = (0x089C34DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C34DCu) goto L_089C34DC;
    return;
L_089C34DC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089C34E0;
L_089C34E0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_089C34EC;
L_089C34EC:
    ctx.gpr[31] = (0x089C34F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 436u, 0x08913CC8u>(ctx, &aot_mem) && ctx.pc == 0x089C34F4u) goto L_089C34F4;
    return;
L_089C34F4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6012)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C35E4;
      }
      goto L_089C3508;
    }
L_089C3508:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C3548;
      }
      goto L_089C3518;
    }
L_089C3518:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C3524u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C3524u) goto L_089C3524;
    return;
L_089C3524:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C353C;
      }
      goto L_089C3530;
    }
L_089C3530:
    ctx.gpr[31] = (0x089C3538u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C3538u) goto L_089C3538;
    return;
L_089C3538:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089C353C;
L_089C353C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[16] = (2227u << 16u);
    goto L_089C3548;
L_089C3548:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C3560u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14388));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3560u) goto L_089C3560;
    return;
L_089C3560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C359C;
      }
      goto L_089C356C;
    }
L_089C356C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C3578u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C3578u) goto L_089C3578;
    return;
L_089C3578:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3590;
      }
      goto L_089C3584;
    }
L_089C3584:
    ctx.gpr[31] = (0x089C358Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C358Cu) goto L_089C358C;
    return;
L_089C358C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089C3590;
L_089C3590:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_089C359C;
L_089C359C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C35B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14380));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C35B8u) goto L_089C35B8;
    return;
L_089C35B8:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6768));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14372));
    ctx.gpr[31] = (0x089C35DCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6192));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x089C35DCu) goto L_089C35DC;
    return;
L_089C35DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089C36E0;
      }
      goto L_089C35E4;
    }
L_089C35E4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6012)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C36D4;
      }
      goto L_089C35F8;
    }
L_089C35F8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C3638;
      }
      goto L_089C3608;
    }
L_089C3608:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C3614u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C3614u) goto L_089C3614;
    return;
L_089C3614:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C362C;
      }
      goto L_089C3620;
    }
L_089C3620:
    ctx.gpr[31] = (0x089C3628u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C3628u) goto L_089C3628;
    return;
L_089C3628:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089C362C;
L_089C362C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[16] = (2227u << 16u);
    goto L_089C3638;
L_089C3638:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C3650u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14360));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3650u) goto L_089C3650;
    return;
L_089C3650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C368C;
      }
      goto L_089C365C;
    }
L_089C365C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C3668u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C3668u) goto L_089C3668;
    return;
L_089C3668:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3680;
      }
      goto L_089C3674;
    }
L_089C3674:
    ctx.gpr[31] = (0x089C367Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C367Cu) goto L_089C367C;
    return;
L_089C367C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089C3680;
L_089C3680:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_089C368C;
L_089C368C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C36A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14352));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C36A8u) goto L_089C36A8;
    return;
L_089C36A8:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6768));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14372));
    ctx.gpr[31] = (0x089C36CCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6192));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x089C36CCu) goto L_089C36CC;
    return;
L_089C36CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089C36E0;
      }
      goto L_089C36D4;
    }
L_089C36D4:
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6768), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    goto L_089C36E0;
L_089C36E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C37CC;
      }
      goto L_089C36E8;
    }
L_089C36E8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089C36F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 537u, 0x088B6FF0u>(ctx, &aot_mem) && ctx.pc == 0x089C36F4u) goto L_089C36F4;
    return;
L_089C36F4:
    ctx.gpr[31] = (0x089C36FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 542u, 0x08AB2F78u>(ctx, &aot_mem) && ctx.pc == 0x089C36FCu) goto L_089C36FC;
    return;
L_089C36FC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089C371Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 407u, 0x08A7F278u>(ctx, &aot_mem) && ctx.pc == 0x089C371Cu) goto L_089C371C;
    return;
L_089C371C:
    ctx.gpr[31] = (0x089C3724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 561u, 0x08AB327Cu>(ctx, &aot_mem) && ctx.pc == 0x089C3724u) goto L_089C3724;
    return;
L_089C3724:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14344));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6768));
    ctx.gpr[31] = (0x089C373Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089C08CC;
L_089C373C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089C3748u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 448u, 0x088B1F14u>(ctx, &aot_mem) && ctx.pc == 0x089C3748u) goto L_089C3748;
    return;
L_089C3748:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16760)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C37C4;
      }
      goto L_089C3760;
    }
L_089C3760:
    ctx.gpr[31] = (0x089C3768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 542u, 0x08AB2F78u>(ctx, &aot_mem) && ctx.pc == 0x089C3768u) goto L_089C3768;
    return;
L_089C3768:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x089C3788u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 407u, 0x08A7F278u>(ctx, &aot_mem) && ctx.pc == 0x089C3788u) goto L_089C3788;
    return;
L_089C3788:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089C37A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 561u, 0x08AB327Cu>(ctx, &aot_mem) && ctx.pc == 0x089C37A4u) goto L_089C37A4;
    return;
L_089C37A4:
    ctx.gpr[31] = (0x089C37ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 628u, 0x08AB3850u>(ctx, &aot_mem) && ctx.pc == 0x089C37ACu) goto L_089C37AC;
    return;
L_089C37AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16760)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C3760;
      }
      goto L_089C37C4;
    }
L_089C37C4:
    ctx.gpr[31] = (0x089C37CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 529u, 0x08AB2EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C37CCu) goto L_089C37CC;
    return;
L_089C37CC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C380C;
      }
      goto L_089C37DC;
    }
L_089C37DC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C37E8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C37E8u) goto L_089C37E8;
    return;
L_089C37E8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3800;
      }
      goto L_089C37F4;
    }
L_089C37F4:
    ctx.gpr[31] = (0x089C37FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C37FCu) goto L_089C37FC;
    return;
L_089C37FC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089C3800;
L_089C3800:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_089C380C;
L_089C380C:
    ctx.gpr[31] = (0x089C3814u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 401u, 0x08913A68u>(ctx, &aot_mem) && ctx.pc == 0x089C3814u) goto L_089C3814;
    return;
L_089C3814:
    ctx.gpr[31] = (0x089C381Cu);
    // nop
    goto L_089C0FD0;
L_089C381C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x089C3828u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 766u, 0x08A0B794u>(ctx, &aot_mem) && ctx.pc == 0x089C3828u) goto L_089C3828;
    return;
L_089C3828:
    ctx.gpr[31] = (0x089C3830u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089C3858;
L_089C3830:
    ctx.gpr[31] = (0x089C3838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 137u, 0x08AD0A90u>(ctx, &aot_mem) && ctx.pc == 0x089C3838u) goto L_089C3838;
    return;
L_089C3838:
    ctx.gpr[31] = (0x089C3840u);
    // nop
    goto L_089C26F0;
L_089C3840:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C3844;
L_089C3844:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(800)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(804)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(808)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C3888;
      }
      goto L_089C3874;
    }
L_089C3874:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-28455)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C389C;
      }
      goto L_089C3880;
    }
L_089C3880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C38A4;
      }
      goto L_089C3888;
    }
L_089C3888:
    ctx.gpr[31] = (0x089C3890u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089C1860;
L_089C3890:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-28455), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089C3E50;
      }
      goto L_089C389C;
    }
L_089C389C:
    ctx.gpr[31] = (0x089C38A4u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089C1860;
L_089C38A4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C38B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14316));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C38B0u) goto L_089C38B0;
    return;
L_089C38B0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C38BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14296));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C38BCu) goto L_089C38BC;
    return;
L_089C38BC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C38C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14276));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C38C8u) goto L_089C38C8;
    return;
L_089C38C8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C38D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14260));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C38D4u) goto L_089C38D4;
    return;
L_089C38D4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C38E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14236));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C38E0u) goto L_089C38E0;
    return;
L_089C38E0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C38ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14212));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C38ECu) goto L_089C38EC;
    return;
L_089C38EC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C38F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14192));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C38F8u) goto L_089C38F8;
    return;
L_089C38F8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3904u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14172));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3904u) goto L_089C3904;
    return;
L_089C3904:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3910u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14148));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3910u) goto L_089C3910;
    return;
L_089C3910:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C391Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14128));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C391Cu) goto L_089C391C;
    return;
L_089C391C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3928u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14104));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3928u) goto L_089C3928;
    return;
L_089C3928:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3934u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14084));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3934u) goto L_089C3934;
    return;
L_089C3934:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3940u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14060));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3940u) goto L_089C3940;
    return;
L_089C3940:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C394Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14040));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C394Cu) goto L_089C394C;
    return;
L_089C394C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3958u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14020));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3958u) goto L_089C3958;
    return;
L_089C3958:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3964u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14000));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3964u) goto L_089C3964;
    return;
L_089C3964:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3970u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13980));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3970u) goto L_089C3970;
    return;
L_089C3970:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C397Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13952));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C397Cu) goto L_089C397C;
    return;
L_089C397C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3988u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13924));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3988u) goto L_089C3988;
    return;
L_089C3988:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3994u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13900));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3994u) goto L_089C3994;
    return;
L_089C3994:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C39A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13872));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C39A0u) goto L_089C39A0;
    return;
L_089C39A0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C39ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13840));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C39ACu) goto L_089C39AC;
    return;
L_089C39AC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C39B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13808));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C39B8u) goto L_089C39B8;
    return;
L_089C39B8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C39C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13780));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C39C4u) goto L_089C39C4;
    return;
L_089C39C4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C39D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13748));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C39D0u) goto L_089C39D0;
    return;
L_089C39D0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C39DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13724));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C39DCu) goto L_089C39DC;
    return;
L_089C39DC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C39E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13704));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C39E8u) goto L_089C39E8;
    return;
L_089C39E8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C39F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13680));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C39F4u) goto L_089C39F4;
    return;
L_089C39F4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13660));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3A00u) goto L_089C3A00;
    return;
L_089C3A00:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13636));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3A0Cu) goto L_089C3A0C;
    return;
L_089C3A0C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13616));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3A18u) goto L_089C3A18;
    return;
L_089C3A18:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13596));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3A24u) goto L_089C3A24;
    return;
L_089C3A24:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13576));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3A30u) goto L_089C3A30;
    return;
L_089C3A30:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13556));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3A3Cu) goto L_089C3A3C;
    return;
L_089C3A3C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13540));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3A48u) goto L_089C3A48;
    return;
L_089C3A48:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13520));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3A54u) goto L_089C3A54;
    return;
L_089C3A54:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13500));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3A60u) goto L_089C3A60;
    return;
L_089C3A60:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13476));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3A6Cu) goto L_089C3A6C;
    return;
L_089C3A6C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13456));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3A78u) goto L_089C3A78;
    return;
L_089C3A78:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13436));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3A84u) goto L_089C3A84;
    return;
L_089C3A84:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13420));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3A90u) goto L_089C3A90;
    return;
L_089C3A90:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3A9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13396));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3A9Cu) goto L_089C3A9C;
    return;
L_089C3A9C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3AA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13376));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3AA8u) goto L_089C3AA8;
    return;
L_089C3AA8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3AB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13356));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3AB4u) goto L_089C3AB4;
    return;
L_089C3AB4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3AC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13328));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3AC0u) goto L_089C3AC0;
    return;
L_089C3AC0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3ACCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13300));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3ACCu) goto L_089C3ACC;
    return;
L_089C3ACC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3AD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13272));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3AD8u) goto L_089C3AD8;
    return;
L_089C3AD8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3AE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13244));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3AE4u) goto L_089C3AE4;
    return;
L_089C3AE4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3AF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13208));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3AF0u) goto L_089C3AF0;
    return;
L_089C3AF0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3AFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13172));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3AFCu) goto L_089C3AFC;
    return;
L_089C3AFC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13136));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3B08u) goto L_089C3B08;
    return;
L_089C3B08:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13104));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3B14u) goto L_089C3B14;
    return;
L_089C3B14:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13068));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3B20u) goto L_089C3B20;
    return;
L_089C3B20:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13032));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3B2Cu) goto L_089C3B2C;
    return;
L_089C3B2C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12996));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3B38u) goto L_089C3B38;
    return;
L_089C3B38:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12960));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3B44u) goto L_089C3B44;
    return;
L_089C3B44:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12932));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3B50u) goto L_089C3B50;
    return;
L_089C3B50:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12900));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3B5Cu) goto L_089C3B5C;
    return;
L_089C3B5C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12864));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3B68u) goto L_089C3B68;
    return;
L_089C3B68:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12828));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3B74u) goto L_089C3B74;
    return;
L_089C3B74:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12792));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3B80u) goto L_089C3B80;
    return;
L_089C3B80:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12760));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3B8Cu) goto L_089C3B8C;
    return;
L_089C3B8C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3B98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12732));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3B98u) goto L_089C3B98;
    return;
L_089C3B98:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3BA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12704));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3BA4u) goto L_089C3BA4;
    return;
L_089C3BA4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3BB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12672));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3BB0u) goto L_089C3BB0;
    return;
L_089C3BB0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3BBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12636));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3BBCu) goto L_089C3BBC;
    return;
L_089C3BBC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3BC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12608));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3BC8u) goto L_089C3BC8;
    return;
L_089C3BC8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3BD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12576));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3BD4u) goto L_089C3BD4;
    return;
L_089C3BD4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3BE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12540));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3BE0u) goto L_089C3BE0;
    return;
L_089C3BE0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3BECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12504));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3BECu) goto L_089C3BEC;
    return;
L_089C3BEC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3BF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12468));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3BF8u) goto L_089C3BF8;
    return;
L_089C3BF8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12436));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3C04u) goto L_089C3C04;
    return;
L_089C3C04:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12404));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3C10u) goto L_089C3C10;
    return;
L_089C3C10:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12368));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3C1Cu) goto L_089C3C1C;
    return;
L_089C3C1C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12332));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3C28u) goto L_089C3C28;
    return;
L_089C3C28:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12296));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3C34u) goto L_089C3C34;
    return;
L_089C3C34:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12260));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3C40u) goto L_089C3C40;
    return;
L_089C3C40:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12224));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3C4Cu) goto L_089C3C4C;
    return;
L_089C3C4C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12188));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3C58u) goto L_089C3C58;
    return;
L_089C3C58:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12156));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3C64u) goto L_089C3C64;
    return;
L_089C3C64:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12120));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3C70u) goto L_089C3C70;
    return;
L_089C3C70:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12084));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3C7Cu) goto L_089C3C7C;
    return;
L_089C3C7C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12048));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3C88u) goto L_089C3C88;
    return;
L_089C3C88:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3C94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12012));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3C94u) goto L_089C3C94;
    return;
L_089C3C94:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3CA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11984));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3CA0u) goto L_089C3CA0;
    return;
L_089C3CA0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3CACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11952));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3CACu) goto L_089C3CAC;
    return;
L_089C3CAC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3CB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11916));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3CB8u) goto L_089C3CB8;
    return;
L_089C3CB8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3CC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11880));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3CC4u) goto L_089C3CC4;
    return;
L_089C3CC4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3CD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11848));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3CD0u) goto L_089C3CD0;
    return;
L_089C3CD0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3CDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11812));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3CDCu) goto L_089C3CDC;
    return;
L_089C3CDC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3CE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11776));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3CE8u) goto L_089C3CE8;
    return;
L_089C3CE8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3CF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11740));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3CF4u) goto L_089C3CF4;
    return;
L_089C3CF4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11708));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3D00u) goto L_089C3D00;
    return;
L_089C3D00:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11676));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3D0Cu) goto L_089C3D0C;
    return;
L_089C3D0C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11640));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3D18u) goto L_089C3D18;
    return;
L_089C3D18:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11612));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3D24u) goto L_089C3D24;
    return;
L_089C3D24:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11584));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3D30u) goto L_089C3D30;
    return;
L_089C3D30:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11552));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3D3Cu) goto L_089C3D3C;
    return;
L_089C3D3C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11524));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3D48u) goto L_089C3D48;
    return;
L_089C3D48:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11492));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3D54u) goto L_089C3D54;
    return;
L_089C3D54:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11456));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3D60u) goto L_089C3D60;
    return;
L_089C3D60:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11420));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3D6Cu) goto L_089C3D6C;
    return;
L_089C3D6C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11384));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3D78u) goto L_089C3D78;
    return;
L_089C3D78:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11348));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3D84u) goto L_089C3D84;
    return;
L_089C3D84:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11320));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3D90u) goto L_089C3D90;
    return;
L_089C3D90:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3D9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11300));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3D9Cu) goto L_089C3D9C;
    return;
L_089C3D9C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3DA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11276));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3DA8u) goto L_089C3DA8;
    return;
L_089C3DA8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3DB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11256));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3DB4u) goto L_089C3DB4;
    return;
L_089C3DB4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3DC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11236));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3DC0u) goto L_089C3DC0;
    return;
L_089C3DC0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3DCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11216));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3DCCu) goto L_089C3DCC;
    return;
L_089C3DCC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3DD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11196));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3DD8u) goto L_089C3DD8;
    return;
L_089C3DD8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3DE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11176));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3DE4u) goto L_089C3DE4;
    return;
L_089C3DE4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3DF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11156));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3DF0u) goto L_089C3DF0;
    return;
L_089C3DF0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3DFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11136));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3DFCu) goto L_089C3DFC;
    return;
L_089C3DFC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11116));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3E08u) goto L_089C3E08;
    return;
L_089C3E08:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11096));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3E14u) goto L_089C3E14;
    return;
L_089C3E14:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11076));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3E20u) goto L_089C3E20;
    return;
L_089C3E20:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11056));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3E2Cu) goto L_089C3E2C;
    return;
L_089C3E2C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11036));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3E38u) goto L_089C3E38;
    return;
L_089C3E38:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11016));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3E44u) goto L_089C3E44;
    return;
L_089C3E44:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C3E50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10996));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 513u, 0x08872EE0u>(ctx, &aot_mem) && ctx.pc == 0x089C3E50u) goto L_089C3E50;
    return;
L_089C3E50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C3E60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-28470)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C3EB8;
      }
      goto L_089C3EA0;
    }
L_089C3EA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6920)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6888)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C3ED4;
      }
      goto L_089C3EB8;
    }
L_089C3EB8:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3439)));
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C3EE8;
      }
      goto L_089C3ECC;
    }
L_089C3ECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25496)));
      if (branch_taken) {
          goto L_089C3EDC;
      }
      goto L_089C3ED4;
    }
L_089C3ED4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 12u, 0x089C4158u>(ctx, &aot_mem); return;
      }
      goto L_089C3EDC;
    }
L_089C3EDC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 12u, 0x089C4158u>(ctx, &aot_mem); return;
      }
      goto L_089C3EE8;
    }
L_089C3EE8:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C3EF4u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089C18DC;
L_089C3EF4:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3439)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C3F08u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 132u, 0x089FD348u>(ctx, &aot_mem) && ctx.pc == 0x089C3F08u) goto L_089C3F08;
    return;
L_089C3F08:
    ctx.gpr[7] = (17392u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-25496)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 256u);
    ctx.gpr[21] = (2232u << 16u);
    ctx.gpr[7] = (17288u << 16u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(13216));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_089C3F3C;
    }
    goto L_089C3F3C;
L_089C3F3C:
    ctx.gpr[4] = (0u | 50u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_089C3F4C;
    }
    goto L_089C3F4C;
L_089C3F4C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3F64;
      }
      goto L_089C3F60;
    }
L_089C3F60:
    ctx.gpr[4] = (0u | 256u);
    goto L_089C3F64;
L_089C3F64:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(125)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C3F74;
      }
      goto L_089C3F70;
    }
L_089C3F70:
    ctx.gpr[19] = (0u | 0u);
    goto L_089C3F74;
L_089C3F74:
    ctx.gpr[5] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C3F98;
      }
      goto L_089C3F84;
    }
L_089C3F84:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 4u, 0x089C4094u>(ctx, &aot_mem); return;
      }
      goto L_089C3F98;
    }
L_089C3F98:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3436)));
    ctx.gpr[7] = (2227u << 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3437)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3438)));
    ctx.gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (0u | 256u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[19]);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.pc = 0x089C4000u; return;
}

void recomp_unit_0111(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0111_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_111(Runtime &runtime) {
    runtime.register_generated_unit(111u, 0x089C0000u, 16384u, &recomp_unit_0111, &recomp_unit_0111_entry);
    runtime.register_function(0x089C0000u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0008u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0010u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0020u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0098u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C00C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C00E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C00ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0108u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C011Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C012Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0174u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0184u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0190u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C01F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0200u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C020Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0214u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C021Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0228u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C022Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0234u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0258u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0278u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C02FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C030Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0330u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0344u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0350u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0368u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0380u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0394u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C03F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0408u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0410u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0414u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C041Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0444u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0478u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C04B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C04BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C04CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C04DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C04E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C04E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0508u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0518u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0528u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0538u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0544u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0548u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0578u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0588u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C05F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0600u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0620u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0660u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C066Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0678u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0684u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C06E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0700u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0710u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0720u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0730u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0744u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0748u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0778u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0790u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C07ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0814u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0838u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C085Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0868u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0874u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0898u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C08ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C08C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C08CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C08F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0900u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0908u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0910u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0920u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C092Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0944u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0950u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C095Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0978u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0990u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0998u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C09F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0A8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0AA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0AD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0AE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0AECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0AF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0B94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0BFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0C94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0CECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0D7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DE0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0DE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0E9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0EB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0ECCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0ED8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0EECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0F94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0FA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0FA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0FB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0FD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0FECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C0FF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1004u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1028u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1034u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C103Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1044u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1054u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C105Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1064u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1070u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1078u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1088u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1094u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C10FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1114u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C111Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1170u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C11F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1204u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C120Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1214u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C121Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1224u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C122Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1238u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1240u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C126Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1284u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1288u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C12B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1358u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C137Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1384u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C138Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1394u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C139Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C13B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C13BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C13CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C13D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C13F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C13FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C142Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C143Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1448u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1464u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C146Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1480u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1498u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C14F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1504u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C150Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1510u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1518u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1524u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C152Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1548u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1550u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1558u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1560u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1568u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1588u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1590u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1598u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C15E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C161Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1628u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1634u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1648u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1650u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1664u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1698u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C169Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C16FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1710u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1720u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1728u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1730u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C174Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C175Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1764u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C176Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1774u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C177Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1784u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C178Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1794u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C179Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C17F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1800u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C180Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1814u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1820u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1828u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1834u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C183Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1848u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1850u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1854u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1860u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1888u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1890u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1898u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C18DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1920u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1930u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1938u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1940u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C194Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1950u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1958u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1960u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C196Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1974u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1984u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1990u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C19F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1A9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1AC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1AE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1AF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1AFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1B9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1BF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1CA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1CC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1CD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1D5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1DB4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1DD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1DE0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1E98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1ED0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1ED8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1EECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1F9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FCCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C1FFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2004u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C200Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2014u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C201Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2028u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2034u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2040u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2048u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2064u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2070u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2080u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C208Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2098u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C20FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2108u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2110u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2114u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C211Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2128u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2144u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C214Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2158u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2170u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C217Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2188u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2190u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2194u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2198u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C21FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2200u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2208u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2214u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2220u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2238u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2240u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2258u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2270u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2278u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2284u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2290u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2298u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C22F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2300u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2328u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2358u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2360u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2370u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2390u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2398u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C23F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2410u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C241Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2434u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2450u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2460u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2474u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2490u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2498u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C24E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C250Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2514u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C252Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2544u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2568u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2578u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2580u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2590u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C259Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C25F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2604u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2610u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2614u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2618u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2620u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2628u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2634u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C263Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2644u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C264Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2664u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2688u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2694u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C26F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2728u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C274Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2754u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2770u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2778u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2784u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2798u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C27E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2800u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2808u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2810u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C281Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2838u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2840u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C284Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C285Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2864u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2870u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C287Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2888u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C28F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2900u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2908u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C290Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2914u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2920u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2928u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2930u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2938u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2940u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2948u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2950u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C295Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2964u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C296Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2978u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2980u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2988u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2990u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2998u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C29FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A24u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A6Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2A9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AB4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2ACCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2ADCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2AFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B24u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2B90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BE0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2BFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2C98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2CE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2D94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2DF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2E84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2ED0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2EE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2F90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C2FF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C300Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3014u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C301Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3024u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C302Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3034u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3088u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3090u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3098u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C30F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3110u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3120u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C313Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3154u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C317Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3184u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3190u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C319Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31C0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C31F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3204u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3210u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C321Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3228u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3234u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3240u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C324Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3258u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3264u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3270u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C327Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3284u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C328Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3294u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32B4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32D8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C32F0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3300u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3310u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3320u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3330u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3340u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3350u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3360u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3370u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3384u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3394u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C33F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3404u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C340Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3410u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3418u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3428u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3430u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3438u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3448u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3450u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3458u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3460u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C346Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3474u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C347Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3484u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C34F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3508u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3518u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3524u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3530u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3538u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C353Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3548u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3560u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C356Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3578u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3584u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C358Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3590u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C359Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35E4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C35F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3608u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3614u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3620u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3628u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C362Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3638u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3650u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C365Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3668u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3674u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C367Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3680u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C368Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36A8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C36FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C371Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3724u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C373Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3748u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3760u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3768u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3788u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37CCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C37FCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3800u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C380Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3814u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C381Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3828u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3830u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3838u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3840u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3844u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3858u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3874u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3880u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3888u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3890u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C389Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38A4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38B0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38BCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38C8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38D4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38E0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38ECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C38F8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3904u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3910u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C391Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3928u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3934u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3940u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C394Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3958u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3964u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3970u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C397Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3988u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3994u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39A0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39ACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39B8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39C4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39D0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39DCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39E8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C39F4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A24u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A6Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3A9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AB4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3ACCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3AFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B5Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B68u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B80u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B8Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3B98u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BA4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BB0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BBCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BC8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BD4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BE0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BECu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3BF8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C04u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C10u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C1Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C28u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C34u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C40u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C58u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C7Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C88u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3C94u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CACu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CC4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CD0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3CF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D00u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D0Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D18u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D24u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D30u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D48u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D54u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D6Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D78u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D90u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3D9Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DA8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DB4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DC0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DCCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DD8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DE4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DF0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3DFCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E14u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E20u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E2Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E38u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E44u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E50u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3E60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EA0u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EB8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3ECCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3ED4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EDCu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EE8u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3EF4u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F08u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F3Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F4Cu, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F60u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F64u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F70u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F74u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F84u, &recomp_unit_0111, "recomp_unit_0111");
    runtime.register_function(0x089C3F98u, &recomp_unit_0111, "recomp_unit_0111");
}
} // namespace psprecomp
