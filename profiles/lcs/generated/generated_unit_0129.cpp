#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0129[4085] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 9, 10, 11, 0, 0, 0, 12,
    13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0,
    27, 28, 29, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0,
    42, 0, 43, 0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0,
    0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0,
    0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 95, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0,
    100, 0, 101, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 115, 0,
    116, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 127, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 131, 0, 132, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 141,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 144, 0, 0, 145, 146, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149,
    0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 154, 155, 156, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 161,
    0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 169,
    0, 170, 0, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 177, 178, 179, 0, 0, 180, 0, 181, 0, 0, 182,
    0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0,
    192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 205, 206, 0, 207, 0, 0,
    0, 0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 215, 216, 0, 217, 0, 0, 218, 0, 219, 0, 0,
    220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 231, 232, 0, 233, 0, 0, 0, 0, 234,
    0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240,
    0, 0, 0, 241, 242, 243, 0, 244, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 249, 0, 250, 0, 0, 251, 0,
    252, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 255, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0,
    0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 263, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 268,
    0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 275, 0, 0,
    0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 282, 0, 283, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0,
    288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 293, 294, 0, 295,
    0, 296, 0, 0, 0, 0, 297, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 305, 306, 0, 0, 0, 307, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 316, 317, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 320, 321, 0, 0, 322, 0, 0, 0,
    0, 323, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 329, 0, 0,
    0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 339, 0, 340, 0, 0, 341, 0, 0, 342, 0,
    343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 352, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0,
    355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0,
    0, 0, 363, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0,
    0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0,
    0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 380, 0, 381, 0, 382, 0, 383, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0,
    0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 391, 0, 0,
    0, 0, 392, 0, 0, 393, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 405, 0, 406, 0, 0, 407, 0, 0,
    0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419,
    0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 426, 0,
    427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0,
    0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 436, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0,
    441, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 445, 0, 446, 0, 0, 0, 447, 0, 448, 0, 0, 0, 449, 0, 450, 0, 451,
    0, 0, 452, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 459, 0,
    460, 0, 461, 0, 462, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 468, 0, 469, 0, 470, 0,
    471, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 476, 0, 477, 0, 0, 0, 478, 0, 0, 479, 0, 0,
    0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 487,
    0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0,
    495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 500, 0, 0, 0, 501,
    0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 508, 0,
    0, 509, 0, 510, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 516,
    0, 517, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0,
    531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0,
    539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0,
    0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 551, 0, 0,
    0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 556, 0, 557, 0, 0,
    0, 558, 0, 559, 0, 0, 0, 0, 560, 0, 561, 0, 562, 0, 563, 0, 0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 0, 0, 0, 0, 569, 0,
    0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 575, 576, 577, 0, 0, 0, 578, 0, 579, 0, 580, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 0,
    0, 586, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0,
    0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0,
    0, 600, 0, 0, 601, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0,
    606, 0, 0, 0, 0, 607, 0, 608, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 612, 613, 614, 0, 615, 0, 0, 0, 0, 0,
    0, 0, 616, 0, 0, 0, 617, 0, 618, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 626, 0, 0, 627, 0, 0, 0,
    0, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 631, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 636,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 639, 640, 0,
    0, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644,
    0, 0, 0, 645, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 650, 0, 651, 0, 652, 0, 0, 0, 0, 653, 0, 0, 0, 654, 0,
    0, 655, 0, 0, 656, 0, 0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 663, 0,
    0, 664, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 672,
    0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    677, 0, 0, 678, 0, 0, 0, 0, 679, 680, 0, 681, 0, 0, 682, 0, 0, 0, 0, 683, 684, 0, 685, 0, 0, 686, 0, 0, 0, 0, 687, 688,
    0, 689, 0, 0, 690, 0, 0, 0, 0, 691, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 695,
    0, 696, 0, 697, 0, 0, 0, 698, 0, 699, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 702,
    0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 705, 0, 706, 0, 0, 707, 708, 0, 709, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 712, 0, 713, 0, 0, 0, 714, 0, 715, 0, 0, 0, 716, 0, 717, 0, 718, 0, 719, 0,
    0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 722, 0, 0, 0, 0, 723, 724, 0, 725, 0, 0, 726,
    0, 0, 0, 0, 727, 728, 0, 729, 0, 0, 730, 0, 0, 0, 0, 731, 0, 0, 732, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0,
    0, 0, 0, 0, 0, 735, 0, 736, 0, 737, 0, 0, 738, 0, 0, 739, 0, 0, 0, 0, 740, 0, 741, 0, 0, 742, 0, 0, 743, 0, 744, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 746, 0, 747, 0, 748, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    750, 0, 0, 0, 751, 0, 752, 0, 0, 0, 753, 0, 754, 0, 0, 0, 755, 0, 756, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 768, 0, 769, 0, 0, 0, 770, 0, 771, 0, 0, 0, 772, 0, 773, 0,
    0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 0,
    0, 779, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 782, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0,
    0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 788, 0,
    0, 0, 789, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 791, 792, 793, 0, 794, 0, 0, 0, 0, 0, 795, 0, 796, 0, 797, 0, 0, 0,
    798, 0, 0, 0, 799, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 0, 802, 0, 0, 0, 803, 0, 0, 0, 804, 0, 0, 0, 805, 0,
    0, 0, 806, 807, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0,
    0, 811, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 814, 0, 0, 0, 815, 0, 0, 816, 0, 0, 0, 0, 0, 0,
    0, 0, 817, 818, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 822, 0, 823, 0, 0, 0,
    0, 824, 0, 0, 825, 826, 0, 827, 0, 828, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 0, 831,
    0, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 834, 0, 835, 0, 0, 0, 0, 836, 837, 0, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 839,
    0, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 841, 0, 0, 842, 0, 843, 0, 0, 0, 844, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 845, 0, 0, 0, 846, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 848, 849, 0, 0, 0, 850, 0, 0, 0, 0, 0, 851, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 853, 0, 0, 0, 0, 854, 0, 855, 0,
    0, 0, 0, 856, 0, 0, 0, 0, 0, 857, 0, 0, 0, 0, 858, 0, 0, 0, 0, 0, 859,
};
void recomp_unit_0129_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A08000u;
        entry_id = (entry_delta < 16340u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0129[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A08000;
    case 2u: goto L_08A08014;
    case 3u: goto L_08A08040;
    case 4u: goto L_08A08058;
    case 5u: goto L_08A08068;
    case 6u: goto L_08A0806C;
    case 7u: goto L_08A080C0;
    case 8u: goto L_08A080D4;
    case 9u: goto L_08A080E4;
    case 10u: goto L_08A080E8;
    case 11u: goto L_08A080EC;
    case 12u: goto L_08A080FC;
    case 13u: goto L_08A08100;
    case 14u: goto L_08A08110;
    case 15u: goto L_08A08118;
    case 16u: goto L_08A08138;
    case 17u: goto L_08A08150;
    case 18u: goto L_08A08160;
    case 19u: goto L_08A08168;
    case 20u: goto L_08A08178;
    case 21u: goto L_08A08180;
    case 22u: goto L_08A081A4;
    case 23u: goto L_08A081AC;
    case 24u: goto L_08A081C4;
    case 25u: goto L_08A081E0;
    case 26u: goto L_08A081EC;
    case 27u: goto L_08A08200;
    case 28u: goto L_08A08204;
    case 29u: goto L_08A08208;
    case 30u: goto L_08A08210;
    case 31u: goto L_08A08218;
    case 32u: goto L_08A08224;
    case 33u: goto L_08A0822C;
    case 34u: goto L_08A08234;
    case 35u: goto L_08A0823C;
    case 36u: goto L_08A08250;
    case 37u: goto L_08A08258;
    case 38u: goto L_08A08260;
    case 39u: goto L_08A08268;
    case 40u: goto L_08A08270;
    case 41u: goto L_08A08278;
    case 42u: goto L_08A08280;
    case 43u: goto L_08A08288;
    case 44u: goto L_08A08294;
    case 45u: goto L_08A0829C;
    case 46u: goto L_08A082A4;
    case 47u: goto L_08A082AC;
    case 48u: goto L_08A082D0;
    case 49u: goto L_08A082E0;
    case 50u: goto L_08A0833C;
    case 51u: goto L_08A08340;
    case 52u: goto L_08A08398;
    case 53u: goto L_08A083A4;
    case 54u: goto L_08A083E0;
    case 55u: goto L_08A08408;
    case 56u: goto L_08A08414;
    case 57u: goto L_08A08420;
    case 58u: goto L_08A08434;
    case 59u: goto L_08A0843C;
    case 60u: goto L_08A08444;
    case 61u: goto L_08A0844C;
    case 62u: goto L_08A08454;
    case 63u: goto L_08A08464;
    case 64u: goto L_08A08478;
    case 65u: goto L_08A08488;
    case 66u: goto L_08A08494;
    case 67u: goto L_08A084A8;
    case 68u: goto L_08A084B4;
    case 69u: goto L_08A084BC;
    case 70u: goto L_08A084F8;
    case 71u: goto L_08A08500;
    case 72u: goto L_08A0851C;
    case 73u: goto L_08A0852C;
    case 74u: goto L_08A08538;
    case 75u: goto L_08A0854C;
    case 76u: goto L_08A08558;
    case 77u: goto L_08A08560;
    case 78u: goto L_08A08580;
    case 79u: goto L_08A08588;
    case 80u: goto L_08A0859C;
    case 81u: goto L_08A085AC;
    case 82u: goto L_08A085B8;
    case 83u: goto L_08A085CC;
    case 84u: goto L_08A085D8;
    case 85u: goto L_08A085E0;
    case 86u: goto L_08A08600;
    case 87u: goto L_08A08618;
    case 88u: goto L_08A08640;
    case 89u: goto L_08A08664;
    case 90u: goto L_08A0866C;
    case 91u: goto L_08A08678;
    case 92u: goto L_08A0868C;
    case 93u: goto L_08A0869C;
    case 94u: goto L_08A086AC;
    case 95u: goto L_08A086B0;
    case 96u: goto L_08A086B4;
    case 97u: goto L_08A086BC;
    case 98u: goto L_08A086E0;
    case 99u: goto L_08A086F0;
    case 100u: goto L_08A08700;
    case 101u: goto L_08A08708;
    case 102u: goto L_08A08710;
    case 103u: goto L_08A08724;
    case 104u: goto L_08A08734;
    case 105u: goto L_08A08740;
    case 106u: goto L_08A08754;
    case 107u: goto L_08A08760;
    case 108u: goto L_08A08768;
    case 109u: goto L_08A08784;
    case 110u: goto L_08A0879C;
    case 111u: goto L_08A087C4;
    case 112u: goto L_08A087D4;
    case 113u: goto L_08A087E4;
    case 114u: goto L_08A087F0;
    case 115u: goto L_08A087F8;
    case 116u: goto L_08A08800;
    case 117u: goto L_08A08808;
    case 118u: goto L_08A0881C;
    case 119u: goto L_08A0882C;
    case 120u: goto L_08A08838;
    case 121u: goto L_08A0884C;
    case 122u: goto L_08A08858;
    case 123u: goto L_08A08860;
    case 124u: goto L_08A08880;
    case 125u: goto L_08A0889C;
    case 126u: goto L_08A088B4;
    case 127u: goto L_08A088BC;
    case 128u: goto L_08A088C0;
    case 129u: goto L_08A088E0;
    case 130u: goto L_08A088E8;
    case 131u: goto L_08A088EC;
    case 132u: goto L_08A088F4;
    case 133u: goto L_08A08918;
    case 134u: goto L_08A0893C;
    case 135u: goto L_08A08954;
    case 136u: goto L_08A0895C;
    case 137u: goto L_08A089B4;
    case 138u: goto L_08A089BC;
    case 139u: goto L_08A089D8;
    case 140u: goto L_08A089F0;
    case 141u: goto L_08A089FC;
    case 142u: goto L_08A08A0C;
    case 143u: goto L_08A08A28;
    case 144u: goto L_08A08A2C;
    case 145u: goto L_08A08A38;
    case 146u: goto L_08A08A3C;
    case 147u: goto L_08A08A44;
    case 148u: goto L_08A08A50;
    case 149u: goto L_08A08A7C;
    case 150u: goto L_08A08A88;
    case 151u: goto L_08A08A9C;
    case 152u: goto L_08A08AA8;
    case 153u: goto L_08A08AB4;
    case 154u: goto L_08A08ABC;
    case 155u: goto L_08A08AC0;
    case 156u: goto L_08A08AC4;
    case 157u: goto L_08A08AD0;
    case 158u: goto L_08A08AD8;
    case 159u: goto L_08A08AE4;
    case 160u: goto L_08A08AF4;
    case 161u: goto L_08A08AFC;
    case 162u: goto L_08A08B0C;
    case 163u: goto L_08A08B24;
    case 164u: goto L_08A08B38;
    case 165u: goto L_08A08B4C;
    case 166u: goto L_08A08B5C;
    case 167u: goto L_08A08B68;
    case 168u: goto L_08A08B74;
    case 169u: goto L_08A08B7C;
    case 170u: goto L_08A08B84;
    case 171u: goto L_08A08B90;
    case 172u: goto L_08A08B98;
    case 173u: goto L_08A08BA0;
    case 174u: goto L_08A08BB4;
    case 175u: goto L_08A08BC0;
    case 176u: goto L_08A08BCC;
    case 177u: goto L_08A08BD4;
    case 178u: goto L_08A08BD8;
    case 179u: goto L_08A08BDC;
    case 180u: goto L_08A08BE8;
    case 181u: goto L_08A08BF0;
    case 182u: goto L_08A08BFC;
    case 183u: goto L_08A08C0C;
    case 184u: goto L_08A08C14;
    case 185u: goto L_08A08C20;
    case 186u: goto L_08A08C38;
    case 187u: goto L_08A08C48;
    case 188u: goto L_08A08C50;
    case 189u: goto L_08A08C60;
    case 190u: goto L_08A08C70;
    case 191u: goto L_08A08C78;
    case 192u: goto L_08A08C80;
    case 193u: goto L_08A08C90;
    case 194u: goto L_08A08CA0;
    case 195u: goto L_08A08CB0;
    case 196u: goto L_08A08CB4;
    case 197u: goto L_08A08CC4;
    case 198u: goto L_08A08CD8;
    case 199u: goto L_08A08CE4;
    case 200u: goto L_08A08D04;
    case 201u: goto L_08A08D3C;
    case 202u: goto L_08A08D4C;
    case 203u: goto L_08A08D58;
    case 204u: goto L_08A08D64;
    case 205u: goto L_08A08D68;
    case 206u: goto L_08A08D6C;
    case 207u: goto L_08A08D74;
    case 208u: goto L_08A08D88;
    case 209u: goto L_08A08D90;
    case 210u: goto L_08A08D9C;
    case 211u: goto L_08A08DA4;
    case 212u: goto L_08A08DB4;
    case 213u: goto L_08A08DC0;
    case 214u: goto L_08A08DCC;
    case 215u: goto L_08A08DD4;
    case 216u: goto L_08A08DD8;
    case 217u: goto L_08A08DE0;
    case 218u: goto L_08A08DEC;
    case 219u: goto L_08A08DF4;
    case 220u: goto L_08A08E00;
    case 221u: goto L_08A08E10;
    case 222u: goto L_08A08E2C;
    case 223u: goto L_08A08E58;
    case 224u: goto L_08A08E70;
    case 225u: goto L_08A08E9C;
    case 226u: goto L_08A08EA8;
    case 227u: goto L_08A08EB0;
    case 228u: goto L_08A08EC0;
    case 229u: goto L_08A08ECC;
    case 230u: goto L_08A08ED8;
    case 231u: goto L_08A08EDC;
    case 232u: goto L_08A08EE0;
    case 233u: goto L_08A08EE8;
    case 234u: goto L_08A08EFC;
    case 235u: goto L_08A08F04;
    case 236u: goto L_08A08F14;
    case 237u: goto L_08A08F1C;
    case 238u: goto L_08A08F58;
    case 239u: goto L_08A08F6C;
    case 240u: goto L_08A08F7C;
    case 241u: goto L_08A08F8C;
    case 242u: goto L_08A08F90;
    case 243u: goto L_08A08F94;
    case 244u: goto L_08A08F9C;
    case 245u: goto L_08A08FAC;
    case 246u: goto L_08A08FB4;
    case 247u: goto L_08A08FCC;
    case 248u: goto L_08A08FD4;
    case 249u: goto L_08A08FE4;
    case 250u: goto L_08A08FEC;
    case 251u: goto L_08A08FF8;
    case 252u: goto L_08A09000;
    case 253u: goto L_08A09018;
    case 254u: goto L_08A09020;
    case 255u: goto L_08A09030;
    case 256u: goto L_08A09038;
    case 257u: goto L_08A09048;
    case 258u: goto L_08A09064;
    case 259u: goto L_08A09070;
    case 260u: goto L_08A09084;
    case 261u: goto L_08A09094;
    case 262u: goto L_08A090A4;
    case 263u: goto L_08A090A8;
    case 264u: goto L_08A090AC;
    case 265u: goto L_08A090B4;
    case 266u: goto L_08A090E4;
    case 267u: goto L_08A090F4;
    case 268u: goto L_08A090FC;
    case 269u: goto L_08A0911C;
    case 270u: goto L_08A09124;
    case 271u: goto L_08A09138;
    case 272u: goto L_08A09140;
    case 273u: goto L_08A09164;
    case 274u: goto L_08A0916C;
    case 275u: goto L_08A09174;
    case 276u: goto L_08A09188;
    case 277u: goto L_08A091AC;
    case 278u: goto L_08A091E8;
    case 279u: goto L_08A09200;
    case 280u: goto L_08A0921C;
    case 281u: goto L_08A09224;
    case 282u: goto L_08A0922C;
    case 283u: goto L_08A09234;
    case 284u: goto L_08A09240;
    case 285u: goto L_08A09248;
    case 286u: goto L_08A09260;
    case 287u: goto L_08A09278;
    case 288u: goto L_08A09280;
    case 289u: goto L_08A0928C;
    case 290u: goto L_08A092CC;
    case 291u: goto L_08A092DC;
    case 292u: goto L_08A092EC;
    case 293u: goto L_08A092F0;
    case 294u: goto L_08A092F4;
    case 295u: goto L_08A092FC;
    case 296u: goto L_08A09304;
    case 297u: goto L_08A09318;
    case 298u: goto L_08A09320;
    case 299u: goto L_08A09328;
    case 300u: goto L_08A09358;
    case 301u: goto L_08A09364;
    case 302u: goto L_08A09398;
    case 303u: goto L_08A093A8;
    case 304u: goto L_08A093B8;
    case 305u: goto L_08A093BC;
    case 306u: goto L_08A093C0;
    case 307u: goto L_08A093D0;
    case 308u: goto L_08A093D4;
    case 309u: goto L_08A093E4;
    case 310u: goto L_08A09408;
    case 311u: goto L_08A09448;
    case 312u: goto L_08A09454;
    case 313u: goto L_08A09488;
    case 314u: goto L_08A09498;
    case 315u: goto L_08A094A8;
    case 316u: goto L_08A094AC;
    case 317u: goto L_08A094B0;
    case 318u: goto L_08A094C0;
    case 319u: goto L_08A094CC;
    case 320u: goto L_08A094E0;
    case 321u: goto L_08A094E4;
    case 322u: goto L_08A094F0;
    case 323u: goto L_08A09504;
    case 324u: goto L_08A09508;
    case 325u: goto L_08A09518;
    case 326u: goto L_08A09544;
    case 327u: goto L_08A09568;
    case 328u: goto L_08A09570;
    case 329u: goto L_08A09574;
    case 330u: goto L_08A09594;
    case 331u: goto L_08A0959C;
    case 332u: goto L_08A095AC;
    case 333u: goto L_08A095E0;
    case 334u: goto L_08A095EC;
    case 335u: goto L_08A09610;
    case 336u: goto L_08A0962C;
    case 337u: goto L_08A09640;
    case 338u: goto L_08A0964C;
    case 339u: goto L_08A09658;
    case 340u: goto L_08A09660;
    case 341u: goto L_08A0966C;
    case 342u: goto L_08A09678;
    case 343u: goto L_08A09680;
    case 344u: goto L_08A09688;
    case 345u: goto L_08A09740;
    case 346u: goto L_08A09758;
    case 347u: goto L_08A09770;
    case 348u: goto L_08A09800;
    case 349u: goto L_08A09808;
    case 350u: goto L_08A0983C;
    case 351u: goto L_08A09844;
    case 352u: goto L_08A0984C;
    case 353u: goto L_08A09864;
    case 354u: goto L_08A0986C;
    case 355u: goto L_08A09880;
    case 356u: goto L_08A09890;
    case 357u: goto L_08A098A8;
    case 358u: goto L_08A098B0;
    case 359u: goto L_08A098B8;
    case 360u: goto L_08A098CC;
    case 361u: goto L_08A098DC;
    case 362u: goto L_08A098F4;
    case 363u: goto L_08A09908;
    case 364u: goto L_08A09918;
    case 365u: goto L_08A09920;
    case 366u: goto L_08A09934;
    case 367u: goto L_08A09944;
    case 368u: goto L_08A0995C;
    case 369u: goto L_08A0996C;
    case 370u: goto L_08A09974;
    case 371u: goto L_08A09990;
    case 372u: goto L_08A099A0;
    case 373u: goto L_08A099B8;
    case 374u: goto L_08A099D4;
    case 375u: goto L_08A099DC;
    case 376u: goto L_08A099F8;
    case 377u: goto L_08A09A08;
    case 378u: goto L_08A09A20;
    case 379u: goto L_08A09A2C;
    case 380u: goto L_08A09A34;
    case 381u: goto L_08A09A3C;
    case 382u: goto L_08A09A44;
    case 383u: goto L_08A09A4C;
    case 384u: goto L_08A09A54;
    case 385u: goto L_08A09A6C;
    case 386u: goto L_08A09A90;
    case 387u: goto L_08A09AB4;
    case 388u: goto L_08A09AC4;
    case 389u: goto L_08A09AD8;
    case 390u: goto L_08A09AE8;
    case 391u: goto L_08A09AF4;
    case 392u: goto L_08A09B08;
    case 393u: goto L_08A09B14;
    case 394u: goto L_08A09B1C;
    case 395u: goto L_08A09B2C;
    case 396u: goto L_08A09B38;
    case 397u: goto L_08A09B44;
    case 398u: goto L_08A09B80;
    case 399u: goto L_08A09BC4;
    case 400u: goto L_08A09BD8;
    case 401u: goto L_08A09C18;
    case 402u: goto L_08A09C24;
    case 403u: goto L_08A09C4C;
    case 404u: goto L_08A09C54;
    case 405u: goto L_08A09C60;
    case 406u: goto L_08A09C68;
    case 407u: goto L_08A09C74;
    case 408u: goto L_08A09C8C;
    case 409u: goto L_08A09CAC;
    case 410u: goto L_08A09CB8;
    case 411u: goto L_08A09CC4;
    case 412u: goto L_08A09CD8;
    case 413u: goto L_08A09CF4;
    case 414u: goto L_08A09D10;
    case 415u: goto L_08A09D20;
    case 416u: goto L_08A09D2C;
    case 417u: goto L_08A09D34;
    case 418u: goto L_08A09D5C;
    case 419u: goto L_08A09D7C;
    case 420u: goto L_08A09D84;
    case 421u: goto L_08A09DA4;
    case 422u: goto L_08A09DBC;
    case 423u: goto L_08A09DCC;
    case 424u: goto L_08A09DD8;
    case 425u: goto L_08A09DEC;
    case 426u: goto L_08A09DF8;
    case 427u: goto L_08A09E00;
    case 428u: goto L_08A09E10;
    case 429u: goto L_08A09E2C;
    case 430u: goto L_08A09E40;
    case 431u: goto L_08A09E64;
    case 432u: goto L_08A09E78;
    case 433u: goto L_08A09E88;
    case 434u: goto L_08A09E94;
    case 435u: goto L_08A09EA8;
    case 436u: goto L_08A09EB4;
    case 437u: goto L_08A09EBC;
    case 438u: goto L_08A09ECC;
    case 439u: goto L_08A09EE4;
    case 440u: goto L_08A09EEC;
    case 441u: goto L_08A09F00;
    case 442u: goto L_08A09F10;
    case 443u: goto L_08A09F1C;
    case 444u: goto L_08A09F30;
    case 445u: goto L_08A09F3C;
    case 446u: goto L_08A09F44;
    case 447u: goto L_08A09F54;
    case 448u: goto L_08A09F5C;
    case 449u: goto L_08A09F6C;
    case 450u: goto L_08A09F74;
    case 451u: goto L_08A09F7C;
    case 452u: goto L_08A09F88;
    case 453u: goto L_08A09F90;
    case 454u: goto L_08A09FA8;
    case 455u: goto L_08A09FBC;
    case 456u: goto L_08A09FCC;
    case 457u: goto L_08A09FD8;
    case 458u: goto L_08A09FEC;
    case 459u: goto L_08A09FF8;
    case 460u: goto L_08A0A000;
    case 461u: goto L_08A0A008;
    case 462u: goto L_08A0A010;
    case 463u: goto L_08A0A018;
    case 464u: goto L_08A0A02C;
    case 465u: goto L_08A0A03C;
    case 466u: goto L_08A0A048;
    case 467u: goto L_08A0A05C;
    case 468u: goto L_08A0A068;
    case 469u: goto L_08A0A070;
    case 470u: goto L_08A0A078;
    case 471u: goto L_08A0A080;
    case 472u: goto L_08A0A094;
    case 473u: goto L_08A0A0A4;
    case 474u: goto L_08A0A0B0;
    case 475u: goto L_08A0A0C4;
    case 476u: goto L_08A0A0D0;
    case 477u: goto L_08A0A0D8;
    case 478u: goto L_08A0A0E8;
    case 479u: goto L_08A0A0F4;
    case 480u: goto L_08A0A10C;
    case 481u: goto L_08A0A114;
    case 482u: goto L_08A0A134;
    case 483u: goto L_08A0A13C;
    case 484u: goto L_08A0A144;
    case 485u: goto L_08A0A154;
    case 486u: goto L_08A0A16C;
    case 487u: goto L_08A0A17C;
    case 488u: goto L_08A0A188;
    case 489u: goto L_08A0A19C;
    case 490u: goto L_08A0A1A8;
    case 491u: goto L_08A0A1BC;
    case 492u: goto L_08A0A1D4;
    case 493u: goto L_08A0A1DC;
    case 494u: goto L_08A0A1E4;
    case 495u: goto L_08A0A200;
    case 496u: goto L_08A0A210;
    case 497u: goto L_08A0A248;
    case 498u: goto L_08A0A258;
    case 499u: goto L_08A0A264;
    case 500u: goto L_08A0A26C;
    case 501u: goto L_08A0A27C;
    case 502u: goto L_08A0A28C;
    case 503u: goto L_08A0A2A0;
    case 504u: goto L_08A0A2B8;
    case 505u: goto L_08A0A2C4;
    case 506u: goto L_08A0A2D8;
    case 507u: goto L_08A0A2E4;
    case 508u: goto L_08A0A2F8;
    case 509u: goto L_08A0A304;
    case 510u: goto L_08A0A30C;
    case 511u: goto L_08A0A310;
    case 512u: goto L_08A0A330;
    case 513u: goto L_08A0A34C;
    case 514u: goto L_08A0A35C;
    case 515u: goto L_08A0A36C;
    case 516u: goto L_08A0A37C;
    case 517u: goto L_08A0A384;
    case 518u: goto L_08A0A38C;
    case 519u: goto L_08A0A3A0;
    case 520u: goto L_08A0A3B0;
    case 521u: goto L_08A0A3BC;
    case 522u: goto L_08A0A3D0;
    case 523u: goto L_08A0A3DC;
    case 524u: goto L_08A0A3E4;
    case 525u: goto L_08A0A420;
    case 526u: goto L_08A0A428;
    case 527u: goto L_08A0A444;
    case 528u: goto L_08A0A454;
    case 529u: goto L_08A0A460;
    case 530u: goto L_08A0A474;
    case 531u: goto L_08A0A480;
    case 532u: goto L_08A0A488;
    case 533u: goto L_08A0A4A8;
    case 534u: goto L_08A0A4B0;
    case 535u: goto L_08A0A4C4;
    case 536u: goto L_08A0A4D4;
    case 537u: goto L_08A0A4E0;
    case 538u: goto L_08A0A4F4;
    case 539u: goto L_08A0A500;
    case 540u: goto L_08A0A508;
    case 541u: goto L_08A0A534;
    case 542u: goto L_08A0A54C;
    case 543u: goto L_08A0A56C;
    case 544u: goto L_08A0A588;
    case 545u: goto L_08A0A594;
    case 546u: goto L_08A0A5A0;
    case 547u: goto L_08A0A5AC;
    case 548u: goto L_08A0A5B8;
    case 549u: goto L_08A0A5C0;
    case 550u: goto L_08A0A5D8;
    case 551u: goto L_08A0A5F4;
    case 552u: goto L_08A0A60C;
    case 553u: goto L_08A0A620;
    case 554u: goto L_08A0A650;
    case 555u: goto L_08A0A660;
    case 556u: goto L_08A0A66C;
    case 557u: goto L_08A0A674;
    case 558u: goto L_08A0A684;
    case 559u: goto L_08A0A68C;
    case 560u: goto L_08A0A6A0;
    case 561u: goto L_08A0A6A8;
    case 562u: goto L_08A0A6B0;
    case 563u: goto L_08A0A6B8;
    case 564u: goto L_08A0A6C4;
    case 565u: goto L_08A0A6CC;
    case 566u: goto L_08A0A6D4;
    case 567u: goto L_08A0A6DC;
    case 568u: goto L_08A0A6E4;
    case 569u: goto L_08A0A6F8;
    case 570u: goto L_08A0A704;
    case 571u: goto L_08A0A70C;
    case 572u: goto L_08A0A744;
    case 573u: goto L_08A0A78C;
    case 574u: goto L_08A0A79C;
    case 575u: goto L_08A0A7AC;
    case 576u: goto L_08A0A7B0;
    case 577u: goto L_08A0A7B4;
    case 578u: goto L_08A0A7C4;
    case 579u: goto L_08A0A7CC;
    case 580u: goto L_08A0A7D4;
    case 581u: goto L_08A0A7D8;
    case 582u: goto L_08A0A828;
    case 583u: goto L_08A0A84C;
    case 584u: goto L_08A0A864;
    case 585u: goto L_08A0A870;
    case 586u: goto L_08A0A884;
    case 587u: goto L_08A0A890;
    case 588u: goto L_08A0A8CC;
    case 589u: goto L_08A0A8E8;
    case 590u: goto L_08A0A8F0;
    case 591u: goto L_08A0A904;
    case 592u: goto L_08A0A944;
    case 593u: goto L_08A0A974;
    case 594u: goto L_08A0A99C;
    case 595u: goto L_08A0A9A4;
    case 596u: goto L_08A0A9BC;
    case 597u: goto L_08A0A9C8;
    case 598u: goto L_08A0A9E0;
    case 599u: goto L_08A0A9EC;
    case 600u: goto L_08A0AA04;
    case 601u: goto L_08A0AA10;
    case 602u: goto L_08A0AA24;
    case 603u: goto L_08A0AA2C;
    case 604u: goto L_08A0AA5C;
    case 605u: goto L_08A0AA6C;
    case 606u: goto L_08A0AA80;
    case 607u: goto L_08A0AA94;
    case 608u: goto L_08A0AA9C;
    case 609u: goto L_08A0AAA4;
    case 610u: goto L_08A0AAB8;
    case 611u: goto L_08A0AAC8;
    case 612u: goto L_08A0AAD8;
    case 613u: goto L_08A0AADC;
    case 614u: goto L_08A0AAE0;
    case 615u: goto L_08A0AAE8;
    case 616u: goto L_08A0AB08;
    case 617u: goto L_08A0AB18;
    case 618u: goto L_08A0AB20;
    case 619u: goto L_08A0AB30;
    case 620u: goto L_08A0AB40;
    case 621u: goto L_08A0AB50;
    case 622u: goto L_08A0AB60;
    case 623u: goto L_08A0ABB8;
    case 624u: goto L_08A0ABC8;
    case 625u: goto L_08A0ABD8;
    case 626u: goto L_08A0ABE4;
    case 627u: goto L_08A0ABF0;
    case 628u: goto L_08A0AC0C;
    case 629u: goto L_08A0AC18;
    case 630u: goto L_08A0AC24;
    case 631u: goto L_08A0AC2C;
    case 632u: goto L_08A0AC3C;
    case 633u: goto L_08A0AC4C;
    case 634u: goto L_08A0AC5C;
    case 635u: goto L_08A0AC6C;
    case 636u: goto L_08A0AC7C;
    case 637u: goto L_08A0ACC8;
    case 638u: goto L_08A0ACE4;
    case 639u: goto L_08A0ACF4;
    case 640u: goto L_08A0ACF8;
    case 641u: goto L_08A0AD1C;
    case 642u: goto L_08A0AD24;
    case 643u: goto L_08A0AD50;
    case 644u: goto L_08A0AD7C;
    case 645u: goto L_08A0AD8C;
    case 646u: goto L_08A0AD94;
    case 647u: goto L_08A0ADA4;
    case 648u: goto L_08A0ADB8;
    case 649u: goto L_08A0AE2C;
    case 650u: goto L_08A0AE44;
    case 651u: goto L_08A0AE4C;
    case 652u: goto L_08A0AE54;
    case 653u: goto L_08A0AE68;
    case 654u: goto L_08A0AE78;
    case 655u: goto L_08A0AE84;
    case 656u: goto L_08A0AE90;
    case 657u: goto L_08A0AE9C;
    case 658u: goto L_08A0AEB8;
    case 659u: goto L_08A0AEC0;
    case 660u: goto L_08A0AEC8;
    case 661u: goto L_08A0AEDC;
    case 662u: goto L_08A0AEEC;
    case 663u: goto L_08A0AEF8;
    case 664u: goto L_08A0AF04;
    case 665u: goto L_08A0AF10;
    case 666u: goto L_08A0AF28;
    case 667u: goto L_08A0AF34;
    case 668u: goto L_08A0AF40;
    case 669u: goto L_08A0AF48;
    case 670u: goto L_08A0AF58;
    case 671u: goto L_08A0AF6C;
    case 672u: goto L_08A0AF7C;
    case 673u: goto L_08A0AF88;
    case 674u: goto L_08A0AF9C;
    case 675u: goto L_08A0AFA8;
    case 676u: goto L_08A0AFC8;
    case 677u: goto L_08A0B000;
    case 678u: goto L_08A0B00C;
    case 679u: goto L_08A0B020;
    case 680u: goto L_08A0B024;
    case 681u: goto L_08A0B02C;
    case 682u: goto L_08A0B038;
    case 683u: goto L_08A0B04C;
    case 684u: goto L_08A0B050;
    case 685u: goto L_08A0B058;
    case 686u: goto L_08A0B064;
    case 687u: goto L_08A0B078;
    case 688u: goto L_08A0B07C;
    case 689u: goto L_08A0B084;
    case 690u: goto L_08A0B090;
    case 691u: goto L_08A0B0A4;
    case 692u: goto L_08A0B0B0;
    case 693u: goto L_08A0B0BC;
    case 694u: goto L_08A0B0E0;
    case 695u: goto L_08A0B0FC;
    case 696u: goto L_08A0B104;
    case 697u: goto L_08A0B10C;
    case 698u: goto L_08A0B11C;
    case 699u: goto L_08A0B124;
    case 700u: goto L_08A0B12C;
    case 701u: goto L_08A0B170;
    case 702u: goto L_08A0B17C;
    case 703u: goto L_08A0B190;
    case 704u: goto L_08A0B1DC;
    case 705u: goto L_08A0B21C;
    case 706u: goto L_08A0B224;
    case 707u: goto L_08A0B230;
    case 708u: goto L_08A0B234;
    case 709u: goto L_08A0B23C;
    case 710u: goto L_08A0B244;
    case 711u: goto L_08A0B2A4;
    case 712u: goto L_08A0B2B0;
    case 713u: goto L_08A0B2B8;
    case 714u: goto L_08A0B2C8;
    case 715u: goto L_08A0B2D0;
    case 716u: goto L_08A0B2E0;
    case 717u: goto L_08A0B2E8;
    case 718u: goto L_08A0B2F0;
    case 719u: goto L_08A0B2F8;
    case 720u: goto L_08A0B318;
    case 721u: goto L_08A0B344;
    case 722u: goto L_08A0B350;
    case 723u: goto L_08A0B364;
    case 724u: goto L_08A0B368;
    case 725u: goto L_08A0B370;
    case 726u: goto L_08A0B37C;
    case 727u: goto L_08A0B390;
    case 728u: goto L_08A0B394;
    case 729u: goto L_08A0B39C;
    case 730u: goto L_08A0B3A8;
    case 731u: goto L_08A0B3BC;
    case 732u: goto L_08A0B3C8;
    case 733u: goto L_08A0B3D4;
    case 734u: goto L_08A0B3F8;
    case 735u: goto L_08A0B414;
    case 736u: goto L_08A0B41C;
    case 737u: goto L_08A0B424;
    case 738u: goto L_08A0B430;
    case 739u: goto L_08A0B43C;
    case 740u: goto L_08A0B450;
    case 741u: goto L_08A0B458;
    case 742u: goto L_08A0B464;
    case 743u: goto L_08A0B470;
    case 744u: goto L_08A0B478;
    case 745u: goto L_08A0B4BC;
    case 746u: goto L_08A0B4C4;
    case 747u: goto L_08A0B4CC;
    case 748u: goto L_08A0B4D4;
    case 749u: goto L_08A0B4DC;
    case 750u: goto L_08A0B580;
    case 751u: goto L_08A0B590;
    case 752u: goto L_08A0B598;
    case 753u: goto L_08A0B5A8;
    case 754u: goto L_08A0B5B0;
    case 755u: goto L_08A0B5C0;
    case 756u: goto L_08A0B5C8;
    case 757u: goto L_08A0B5D8;
    case 758u: goto L_08A0B630;
    case 759u: goto L_08A0B638;
    case 760u: goto L_08A0B640;
    case 761u: goto L_08A0B65C;
    case 762u: goto L_08A0B70C;
    case 763u: goto L_08A0B72C;
    case 764u: goto L_08A0B748;
    case 765u: goto L_08A0B768;
    case 766u: goto L_08A0B794;
    case 767u: goto L_08A0B7B0;
    case 768u: goto L_08A0B7C0;
    case 769u: goto L_08A0B7C8;
    case 770u: goto L_08A0B7D8;
    case 771u: goto L_08A0B7E0;
    case 772u: goto L_08A0B7F0;
    case 773u: goto L_08A0B7F8;
    case 774u: goto L_08A0B808;
    case 775u: goto L_08A0B830;
    case 776u: goto L_08A0B844;
    case 777u: goto L_08A0B858;
    case 778u: goto L_08A0B874;
    case 779u: goto L_08A0B884;
    case 780u: goto L_08A0B898;
    case 781u: goto L_08A0B8B0;
    case 782u: goto L_08A0B8C4;
    case 783u: goto L_08A0B8D0;
    case 784u: goto L_08A0B8F4;
    case 785u: goto L_08A0B910;
    case 786u: goto L_08A0B9BC;
    case 787u: goto L_08A0B9E8;
    case 788u: goto L_08A0B9F8;
    case 789u: goto L_08A0BA08;
    case 790u: goto L_08A0BA20;
    case 791u: goto L_08A0BA38;
    case 792u: goto L_08A0BA3C;
    case 793u: goto L_08A0BA40;
    case 794u: goto L_08A0BA48;
    case 795u: goto L_08A0BA60;
    case 796u: goto L_08A0BA68;
    case 797u: goto L_08A0BA70;
    case 798u: goto L_08A0BA80;
    case 799u: goto L_08A0BA90;
    case 800u: goto L_08A0BAA0;
    case 801u: goto L_08A0BAB0;
    case 802u: goto L_08A0BAC8;
    case 803u: goto L_08A0BAD8;
    case 804u: goto L_08A0BAE8;
    case 805u: goto L_08A0BAF8;
    case 806u: goto L_08A0BB08;
    case 807u: goto L_08A0BB0C;
    case 808u: goto L_08A0BB28;
    case 809u: goto L_08A0BB3C;
    case 810u: goto L_08A0BB64;
    case 811u: goto L_08A0BB84;
    case 812u: goto L_08A0BB98;
    case 813u: goto L_08A0BBB4;
    case 814u: goto L_08A0BBC8;
    case 815u: goto L_08A0BBD8;
    case 816u: goto L_08A0BBE4;
    case 817u: goto L_08A0BC08;
    case 818u: goto L_08A0BC0C;
    case 819u: goto L_08A0BC1C;
    case 820u: goto L_08A0BC38;
    case 821u: goto L_08A0BC54;
    case 822u: goto L_08A0BC68;
    case 823u: goto L_08A0BC70;
    case 824u: goto L_08A0BC84;
    case 825u: goto L_08A0BC90;
    case 826u: goto L_08A0BC94;
    case 827u: goto L_08A0BC9C;
    case 828u: goto L_08A0BCA4;
    case 829u: goto L_08A0BCB8;
    case 830u: goto L_08A0BCD4;
    case 831u: goto L_08A0BCFC;
    case 832u: goto L_08A0BD14;
    case 833u: goto L_08A0BD24;
    case 834u: goto L_08A0BD2C;
    case 835u: goto L_08A0BD34;
    case 836u: goto L_08A0BD48;
    case 837u: goto L_08A0BD4C;
    case 838u: goto L_08A0BD6C;
    case 839u: goto L_08A0BD7C;
    case 840u: goto L_08A0BD8C;
    case 841u: goto L_08A0BE34;
    case 842u: goto L_08A0BE40;
    case 843u: goto L_08A0BE48;
    case 844u: goto L_08A0BE58;
    case 845u: goto L_08A0BE88;
    case 846u: goto L_08A0BE98;
    case 847u: goto L_08A0BEA4;
    case 848u: goto L_08A0BEC8;
    case 849u: goto L_08A0BECC;
    case 850u: goto L_08A0BEDC;
    case 851u: goto L_08A0BEF4;
    case 852u: goto L_08A0BF48;
    case 853u: goto L_08A0BF5C;
    case 854u: goto L_08A0BF70;
    case 855u: goto L_08A0BF78;
    case 856u: goto L_08A0BF8C;
    case 857u: goto L_08A0BFA4;
    case 858u: goto L_08A0BFB8;
    case 859u: goto L_08A0BFD0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A08000:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
      if (branch_taken) {
          goto L_08A08058;
      }
      goto L_08A08014;
    }
L_08A08014:
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2248));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 51 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08058;
      }
      goto L_08A08040;
    }
L_08A08040:
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2100), 0u);
    goto L_08A08058;
L_08A08058:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A08110;
      }
      goto L_08A08068;
    }
L_08A08068:
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
    goto L_08A0806C;
L_08A0806C:
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2122));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A080E8;
      }
      goto L_08A080C0;
    }
L_08A080C0:
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A080E8;
      }
      goto L_08A080D4;
    }
L_08A080D4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[9];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A080EC;
      }
      goto L_08A080E4;
    }
L_08A080E4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A080E8;
L_08A080E8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A080EC;
L_08A080EC:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08100;
      }
      goto L_08A080FC;
    }
L_08A080FC:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A08100;
L_08A08100:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
      if (branch_taken) {
          goto L_08A0806C;
      }
      goto L_08A08110;
    }
L_08A08110:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
      if (branch_taken) {
          goto L_08A08150;
      }
      goto L_08A08118;
    }
L_08A08118:
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A08150;
      }
      goto L_08A08138;
    }
L_08A08138:
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2100), 0u);
    goto L_08A08150;
L_08A08150:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 789u, 0x08A07FF0u>(ctx, &aot_mem); return;
      }
      goto L_08A08160;
    }
L_08A08160:
    ctx.gpr[31] = (0x08A08168u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0A870;
L_08A08168:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A08180;
      }
      goto L_08A08178;
    }
L_08A08178:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A081A4;
      }
      goto L_08A08180;
    }
L_08A08180:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_08A081A4;
L_08A081A4:
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x08A081ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A081ACu) goto L_08A081AC;
    return;
L_08A081AC:
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
L_08A081C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A08200;
      }
      goto L_08A081E0;
    }
L_08A081E0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08A08204;
    }
    goto L_08A081EC;
L_08A081EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2209u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26624));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A08208;
      }
      goto L_08A08200;
    }
L_08A08200:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A08204;
L_08A08204:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A08208;
L_08A08208:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0822C;
      }
      goto L_08A08210;
    }
L_08A08210:
    ctx.gpr[31] = (0x08A08218u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA94u;
    return;
L_08A08218:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08250;
      }
      goto L_08A08224;
    }
L_08A08224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_08A08234;
      }
      goto L_08A0822C;
    }
L_08A0822C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A082D0;
      }
      goto L_08A08234;
    }
L_08A08234:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08250;
      }
      goto L_08A0823C;
    }
L_08A0823C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26616));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A08288;
      }
      goto L_08A08250;
    }
L_08A08250:
    ctx.gpr[31] = (0x08A08258u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A09320;
L_08A08258:
    ctx.gpr[31] = (0x08A08260u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 633u, 0x08973F88u>(ctx, &aot_mem) && ctx.pc == 0x08A08260u) goto L_08A08260;
    return;
L_08A08260:
    ctx.gpr[31] = (0x08A08268u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0962C;
L_08A08268:
    ctx.gpr[31] = (0x08A08270u);
    // nop
    ctx.pc = 0x08B0B684u;
    return;
L_08A08270:
    ctx.gpr[31] = (0x08A08278u);
    // nop
    ctx.pc = 0x08B0B6DCu;
    return;
L_08A08278:
    ctx.gpr[31] = (0x08A08280u);
    // nop
    ctx.pc = 0x08B0B714u;
    return;
L_08A08280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0829C;
      }
      goto L_08A08288;
    }
L_08A08288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A08294u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BAF4u;
    return;
L_08A08294:
    ctx.gpr[31] = (0x08A0829Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0BB4Cu;
    return;
L_08A0829C:
    ctx.gpr[31] = (0x08A082A4u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BA7Cu;
    return;
L_08A082A4:
    ctx.gpr[31] = (0x08A082ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 385u, 0x08A2D838u>(ctx, &aot_mem) && ctx.pc == 0x08A082ACu) goto L_08A082AC;
    return;
L_08A082AC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-14888), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14968));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14968)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A082D0;
L_08A082D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A082E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[4] = (0u << 4u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2100), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2112));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08398;
      }
      goto L_08A0833C;
    }
L_08A0833C:
    ctx.gpr[5] = (0u | 255u);
    goto L_08A08340;
L_08A08340:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 255u);
      if (branch_taken) {
          goto L_08A08340;
      }
      goto L_08A08398;
    }
L_08A08398:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A083A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0928C;
L_08A083A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[31] = (0x08A083E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0928C;
L_08A083E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A08408u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(125));
    goto L_08A0A890;
L_08A08408:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08454;
      }
      goto L_08A08414;
    }
L_08A08414:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08454;
      }
      goto L_08A08420;
    }
L_08A08420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25460));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A08454;
      }
      goto L_08A08434;
    }
L_08A08434:
    ctx.gpr[31] = (0x08A0843Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0962C;
L_08A0843C:
    ctx.gpr[31] = (0x08A08444u);
    ctx.gpr[4] = (0u | 13620u);
    ctx.pc = 0x08B0B604u;
    return;
L_08A08444:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A08464;
      }
      goto L_08A0844C;
    }
L_08A0844C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A084BC;
      }
      goto L_08A08454;
    }
L_08A08454:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3164), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A08600;
      }
      goto L_08A08464;
    }
L_08A08464:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x08A08478u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A08478u) goto L_08A08478;
    return;
L_08A08478:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A08488u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A08488u) goto L_08A08488;
    return;
L_08A08488:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A08494u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A5D8;
L_08A08494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A084B4;
      }
      goto L_08A084A8;
    }
L_08A084A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A084B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A084B4u) goto L_08A084B4;
    return;
L_08A084B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A08600;
      }
      goto L_08A084BC;
    }
L_08A084BC:
    ctx.gpr[6] = (2208u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(32164));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (15u << 16u);
    ctx.gpr[9] = (31u << 16u);
    ctx.gpr[11] = (8u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 4096u);
    ctx.gpr[10] = (0u | 3u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16960));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-31616));
    ctx.gpr[31] = (0x08A084F8u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-24288));
    ctx.pc = 0x08B0B634u;
    return;
L_08A084F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A08560;
      }
      goto L_08A08500;
    }
L_08A08500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08A0851Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A0851Cu) goto L_08A0851C;
    return;
L_08A0851C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0852Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A0852Cu) goto L_08A0852C;
    return;
L_08A0852C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A08538u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A5D8;
L_08A08538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A08558;
      }
      goto L_08A0854C;
    }
L_08A0854C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08A08558u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08558u) goto L_08A08558;
    return;
L_08A08558:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A08600;
      }
      goto L_08A08560;
    }
L_08A08560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 8192u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[8] = (0u | 8192u);
    ctx.gpr[31] = (0x08A08580u);
    ctx.gpr[9] = (0u | 136u);
    ctx.pc = 0x08B0B624u;
    return;
L_08A08580:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A085E0;
      }
      goto L_08A08588;
    }
L_08A08588:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(124));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08A0859Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A0859Cu) goto L_08A0859C;
    return;
L_08A0859C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A085ACu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A085ACu) goto L_08A085AC;
    return;
L_08A085AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A085B8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A5D8;
L_08A085B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A085D8;
      }
      goto L_08A085CC;
    }
L_08A085CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08A085D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A085D8u) goto L_08A085D8;
    return;
L_08A085D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A08600;
      }
      goto L_08A085E0;
    }
L_08A085E0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14944));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14944)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[2] = (0u | 1u);
    goto L_08A08600;
L_08A08600:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08618:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A086F0;
      }
      goto L_08A08640;
    }
L_08A08640:
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A0866C;
      }
      goto L_08A08664;
    }
L_08A08664:
    ctx.gpr[31] = (0x08A0866Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0866Cu) goto L_08A0866C;
    return;
L_08A0866C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08A08678u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    goto L_08A0928C;
L_08A08678:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A086B0;
      }
      goto L_08A0868C;
    }
L_08A0868C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08A086B4;
    }
    goto L_08A0869C;
L_08A0869C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A086B4;
      }
      goto L_08A086AC;
    }
L_08A086AC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A086B0;
L_08A086B0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A086B4;
L_08A086B4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A086E0;
      }
      goto L_08A086BC;
    }
L_08A086BC:
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(27780), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A086F0;
      }
      goto L_08A086E0;
    }
L_08A086E0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08640;
      }
      goto L_08A086F0;
    }
L_08A086F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A08700u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 757u, 0x08A07CC8u>(ctx, &aot_mem) && ctx.pc == 0x08A08700u) goto L_08A08700;
    return;
L_08A08700:
    ctx.gpr[31] = (0x08A08708u);
    // nop
    ctx.pc = 0x08B0B664u;
    return;
L_08A08708:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A08768;
      }
      goto L_08A08710;
    }
L_08A08710:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A08724u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A08724u) goto L_08A08724;
    return;
L_08A08724:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A08734u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A08734u) goto L_08A08734;
    return;
L_08A08734:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A08740u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A5D8;
L_08A08740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A08760;
      }
      goto L_08A08754;
    }
L_08A08754:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A08760u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08760u) goto L_08A08760;
    return;
L_08A08760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08784;
      }
      goto L_08A08768;
    }
L_08A08768:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14960));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14960)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A08784;
L_08A08784:
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
L_08A0879C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A087C4u);
    ctx.gpr[6] = (0u | 1064u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A087C4u) goto L_08A087C4;
    return;
L_08A087C4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2100));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A087D4u);
    ctx.gpr[6] = (0u | 1064u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A087D4u) goto L_08A087D4;
    return;
L_08A087D4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1156));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A087E4u);
    ctx.gpr[6] = (0u | 938u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A087E4u) goto L_08A087E4;
    return;
L_08A087E4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[31] = (0x08A087F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A09200;
L_08A087F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08880;
      }
      goto L_08A087F8;
    }
L_08A087F8:
    ctx.gpr[31] = (0x08A08800u);
    // nop
    ctx.pc = 0x08B0B664u;
    return;
L_08A08800:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A08860;
      }
      goto L_08A08808;
    }
L_08A08808:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(232));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A0881Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A0881Cu) goto L_08A0881C;
    return;
L_08A0881C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0882Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A0882Cu) goto L_08A0882C;
    return;
L_08A0882C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A08838u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A5D8;
L_08A08838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A08858;
      }
      goto L_08A0884C;
    }
L_08A0884C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A08858u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08858u) goto L_08A08858;
    return;
L_08A08858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0889C;
      }
      goto L_08A08860;
    }
L_08A08860:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14952));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14952)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A0889C;
      }
      goto L_08A08880;
    }
L_08A08880:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14968));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14968)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A0889C;
L_08A0889C:
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
L_08A088B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08A088C0;
      }
      goto L_08A088BC;
    }
L_08A088BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    goto L_08A088C0;
L_08A088C0:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A088E8;
      }
      goto L_08A088E0;
    }
L_08A088E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A088EC;
      }
      goto L_08A088E8;
    }
L_08A088E8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A088EC;
L_08A088EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A088F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A08918u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08A0A84C;
L_08A08918:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A089B4;
      }
      goto L_08A0893C;
    }
L_08A0893C:
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(2104));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A08954u);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = 0x08B0B614u;
    return;
L_08A08954:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A089B4;
      }
      goto L_08A0895C;
    }
L_08A0895C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2100), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    goto L_08A089B4;
L_08A089B4:
    ctx.gpr[31] = (0x08A089BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0A870;
L_08A089BC:
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
L_08A089D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A08A2C;
      }
      goto L_08A089F0;
    }
L_08A089F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A089FCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A0A54C;
L_08A089FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A08A28;
      }
      goto L_08A08A0C;
    }
L_08A08A0C:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-14936));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-14936)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    goto L_08A08A28;
L_08A08A28:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08A08A2C;
L_08A08A2C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08A3C;
      }
      goto L_08A08A38;
    }
L_08A08A38:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3164), static_cast<std::uint8_t>(0u));
    goto L_08A08A3C;
L_08A08A3C:
    ctx.gpr[31] = (0x08A08A44u);
    // nop
    goto L_08A0A330;
L_08A08A44:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08A50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A08A7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 285u, 0x08AF9474u>(ctx, &aot_mem) && ctx.pc == 0x08A08A7Cu) goto L_08A08A7C;
    return;
L_08A08A7C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A08AFC;
      }
      goto L_08A08A88;
    }
L_08A08A88:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[19] = (2226u << 16u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(264));
      if (branch_taken) {
          goto L_08A08AC4;
      }
      goto L_08A08A9C;
    }
L_08A08A9C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A08AA8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A08AA8u) goto L_08A08AA8;
    return;
L_08A08AA8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08AC0;
      }
      goto L_08A08AB4;
    }
L_08A08AB4:
    ctx.gpr[31] = (0x08A08ABCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A08ABCu) goto L_08A08ABC;
    return;
L_08A08ABC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A08AC0;
L_08A08AC0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_08A08AC4;
L_08A08AC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A08AD0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A08AD0u) goto L_08A08AD0;
    return;
L_08A08AD0:
    ctx.gpr[31] = (0x08A08AD8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x08A08AD8u) goto L_08A08AD8;
    return;
L_08A08AD8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A08AE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A08AE4u) goto L_08A08AE4;
    return;
L_08A08AE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A08AF4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A08AF4u) goto L_08A08AF4;
    return;
L_08A08AF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08CE4;
      }
      goto L_08A08AFC;
    }
L_08A08AFC:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A08B0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08A08B0Cu) goto L_08A08B0C;
    return;
L_08A08B0C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A08B24u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A08B24u) goto L_08A08B24;
    return;
L_08A08B24:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A08B38u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 263u, 0x08AF92E8u>(ctx, &aot_mem) && ctx.pc == 0x08A08B38u) goto L_08A08B38;
    return;
L_08A08B38:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 32u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08A08B4C;
L_08A08B4C:
    ctx.gpr[8] = (0u | 8u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
        goto L_08A08B5C;
    }
    goto L_08A08B5C;
L_08A08B5C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08B90;
      }
      goto L_08A08B68;
    }
L_08A08B68:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A08B84;
      }
      goto L_08A08B74;
    }
L_08A08B74:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08B84;
      }
      goto L_08A08B7C;
    }
L_08A08B7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A08B90;
      }
      goto L_08A08B84;
    }
L_08A08B84:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A08B4C;
      }
      goto L_08A08B90;
    }
L_08A08B90:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08C14;
      }
      goto L_08A08B98;
    }
L_08A08B98:
    ctx.gpr[31] = (0x08A08BA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08BA0u) goto L_08A08BA0;
    return;
L_08A08BA0:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2226u << 16u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(264));
      if (branch_taken) {
          goto L_08A08BDC;
      }
      goto L_08A08BB4;
    }
L_08A08BB4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A08BC0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A08BC0u) goto L_08A08BC0;
    return;
L_08A08BC0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08BD8;
      }
      goto L_08A08BCC;
    }
L_08A08BCC:
    ctx.gpr[31] = (0x08A08BD4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A08BD4u) goto L_08A08BD4;
    return;
L_08A08BD4:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A08BD8;
L_08A08BD8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    goto L_08A08BDC;
L_08A08BDC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A08BE8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A08BE8u) goto L_08A08BE8;
    return;
L_08A08BE8:
    ctx.gpr[31] = (0x08A08BF0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x08A08BF0u) goto L_08A08BF0;
    return;
L_08A08BF0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A08BFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A08BFCu) goto L_08A08BFC;
    return;
L_08A08BFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A08C0Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A08C0Cu) goto L_08A08C0C;
    return;
L_08A08C0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08CE4;
      }
      goto L_08A08C14;
    }
L_08A08C14:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A08C20u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08A08C20u) goto L_08A08C20;
    return;
L_08A08C20:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A08C38u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A08C38u) goto L_08A08C38;
    return;
L_08A08C38:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A08C48u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 324u, 0x08913330u>(ctx, &aot_mem) && ctx.pc == 0x08A08C48u) goto L_08A08C48;
    return;
L_08A08C48:
    ctx.gpr[31] = (0x08A08C50u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x08A08C50u) goto L_08A08C50;
    return;
L_08A08C50:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08A08C60u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A08C60u) goto L_08A08C60;
    return;
L_08A08C60:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A08C70u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A08C70u) goto L_08A08C70;
    return;
L_08A08C70:
    ctx.gpr[31] = (0x08A08C78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08C78u) goto L_08A08C78;
    return;
L_08A08C78:
    ctx.gpr[31] = (0x08A08C80u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08C80u) goto L_08A08C80;
    return;
L_08A08C80:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08CB4;
      }
      goto L_08A08C90;
    }
L_08A08C90:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08A08CA0u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 298u, 0x08AF9518u>(ctx, &aot_mem) && ctx.pc == 0x08A08CA0u) goto L_08A08CA0;
    return;
L_08A08CA0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A08CB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFB6BCu>(ctx, &aot_mem) && ctx.pc == 0x08A08CB0u) goto L_08A08CB0;
    return;
L_08A08CB0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08A08CB4;
L_08A08CB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A08CC4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A08CC4u) goto L_08A08CC4;
    return;
L_08A08CC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A08CE4;
      }
      goto L_08A08CD8;
    }
L_08A08CD8:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A08CE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08CE4u) goto L_08A08CE4;
    return;
L_08A08CE4:
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
L_08A08D04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1156));
    goto L_08A08D3C;
L_08A08D3C:
    ctx.gpr[11] = (ctx.gpr[7] | 0u);
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[8];
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A08D68;
      }
      goto L_08A08D4C;
    }
L_08A08D4C:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[3] != ctx.gpr[9]) {
    ctx.gpr[11] = (ctx.gpr[2] & 255u);
        goto L_08A08D6C;
    }
    goto L_08A08D58;
L_08A08D58:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
    ctx.gpr[11] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08A08D6C;
      }
      goto L_08A08D64;
    }
L_08A08D64:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A08D68;
L_08A08D68:
    ctx.gpr[11] = (ctx.gpr[2] & 255u);
    goto L_08A08D6C;
L_08A08D6C:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08D90;
      }
      goto L_08A08D74;
    }
L_08A08D74:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(134));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(134));
      if (branch_taken) {
          goto L_08A08D3C;
      }
      goto L_08A08D88;
    }
L_08A08D88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08DA4;
      }
      goto L_08A08D90;
    }
L_08A08D90:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1162));
    ctx.gpr[31] = (0x08A08D9Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A08A50;
L_08A08D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08E10;
      }
      goto L_08A08DA4;
    }
L_08A08DA4:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A08DE0;
      }
      goto L_08A08DB4;
    }
L_08A08DB4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A08DC0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A08DC0u) goto L_08A08DC0;
    return;
L_08A08DC0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08DD8;
      }
      goto L_08A08DCC;
    }
L_08A08DCC:
    ctx.gpr[31] = (0x08A08DD4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A08DD4u) goto L_08A08DD4;
    return;
L_08A08DD4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08A08DD8;
L_08A08DD8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2226u << 16u);
    goto L_08A08DE0;
L_08A08DE0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A08DECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(264));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A08DECu) goto L_08A08DEC;
    return;
L_08A08DEC:
    ctx.gpr[31] = (0x08A08DF4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 293u, 0x08913158u>(ctx, &aot_mem) && ctx.pc == 0x08A08DF4u) goto L_08A08DF4;
    return;
L_08A08DF4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A08E00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A08E00u) goto L_08A08E00;
    return;
L_08A08E00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A08E10u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A08E10u) goto L_08A08E10;
    return;
L_08A08E10:
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
L_08A08E2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A08E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A08E58u) goto L_08A08E58;
    return;
L_08A08E58:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14876)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14880)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A08E70u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A08E70u) goto L_08A08E70;
    return;
L_08A08E70:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1156));
    goto L_08A08E9C;
L_08A08E9C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1162))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08EB0;
      }
      goto L_08A08EA8;
    }
L_08A08EA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A08EE8;
      }
      goto L_08A08EB0;
    }
L_08A08EB0:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[9];
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A08EDC;
      }
      goto L_08A08EC0;
    }
L_08A08EC0:
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[2] != ctx.gpr[10]) {
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
        goto L_08A08EE0;
    }
    goto L_08A08ECC;
L_08A08ECC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[11];
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
      if (branch_taken) {
          goto L_08A08EE0;
      }
      goto L_08A08ED8;
    }
L_08A08ED8:
    ctx.gpr[8] = (0u | 1u);
    goto L_08A08EDC;
L_08A08EDC:
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
    goto L_08A08EE0;
L_08A08EE0:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08F04;
      }
      goto L_08A08EE8;
    }
L_08A08EE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(134));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(134));
      if (branch_taken) {
          goto L_08A08E9C;
      }
      goto L_08A08EFC;
    }
L_08A08EFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
      if (branch_taken) {
          goto L_08A08F1C;
      }
      goto L_08A08F04;
    }
L_08A08F04:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1162));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A08F14u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A08A50;
L_08A08F14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09048;
      }
      goto L_08A08F1C;
    }
L_08A08F1C:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1156));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1162));
    ctx.gpr[31] = (0x08A08F58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0928C;
L_08A08F58:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A08F90;
      }
      goto L_08A08F6C;
    }
L_08A08F6C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_08A08F94;
    }
    goto L_08A08F7C;
L_08A08F7C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A08F94;
      }
      goto L_08A08F8C;
    }
L_08A08F8C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A08F90;
L_08A08F90:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08A08F94;
L_08A08F94:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08FEC;
      }
      goto L_08A08F9C;
    }
L_08A08F9C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A08FACu);
    ctx.gpr[6] = (0u | 128u);
    ctx.pc = 0x08B0B754u;
    return;
L_08A08FAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A09038;
      }
      goto L_08A08FB4;
    }
L_08A08FB4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2226u << 16u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A08FCCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08A08FCCu) goto L_08A08FCC;
    return;
L_08A08FCC:
    ctx.gpr[31] = (0x08A08FD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A08FD4u) goto L_08A08FD4;
    return;
L_08A08FD4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A08FE4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A08FE4u) goto L_08A08FE4;
    return;
L_08A08FE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09048;
      }
      goto L_08A08FEC;
    }
L_08A08FEC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A08FF8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B67Cu;
    return;
L_08A08FF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A09038;
      }
      goto L_08A09000;
    }
L_08A09000:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2226u << 16u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A09018u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08A09018u) goto L_08A09018;
    return;
L_08A09018:
    ctx.gpr[31] = (0x08A09020u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A09020u) goto L_08A09020;
    return;
L_08A09020:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A09030u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A09030u) goto L_08A09030;
    return;
L_08A09030:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09048;
      }
      goto L_08A09038;
    }
L_08A09038:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A09048u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A08A50;
L_08A09048:
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
L_08A09064:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1156));
    goto L_08A09070;
L_08A09070:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A090A8;
      }
      goto L_08A09084;
    }
L_08A09084:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[9] != ctx.gpr[10]) {
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
        goto L_08A090AC;
    }
    goto L_08A09094;
L_08A09094:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08A090AC;
      }
      goto L_08A090A4;
    }
L_08A090A4:
    ctx.gpr[7] = (0u | 1u);
    goto L_08A090A8;
L_08A090A8:
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_08A090AC;
L_08A090AC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 255u);
      if (branch_taken) {
          goto L_08A090E4;
      }
      goto L_08A090B4;
    }
L_08A090B4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    goto L_08A090E4;
L_08A090E4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(134));
      if (branch_taken) {
          goto L_08A09070;
      }
      goto L_08A090F4;
    }
L_08A090F4:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A090FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A09138;
      }
      goto L_08A0911C;
    }
L_08A0911C:
    ctx.gpr[31] = (0x08A09124u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0A84C;
L_08A09124:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 17u);
      if (branch_taken) {
          goto L_08A09140;
      }
      goto L_08A09138;
    }
L_08A09138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09174;
      }
      goto L_08A09140;
    }
L_08A09140:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A09140;
      }
      goto L_08A09164;
    }
L_08A09164:
    ctx.gpr[31] = (0x08A0916Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0A870;
L_08A0916C:
    ctx.gpr[31] = (0x08A09174u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0AA2C;
L_08A09174:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09188:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A091ACu);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    goto L_08A0A84C;
L_08A091AC:
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A091E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0A870;
L_08A091E8:
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
L_08A09200:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A09224;
      }
      goto L_08A0921C;
    }
L_08A0921C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    goto L_08A09224;
L_08A09224:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A09248;
      }
      goto L_08A0922C;
    }
L_08A0922C:
    ctx.gpr[31] = (0x08A09234u);
    // nop
    ctx.pc = 0x08B0B5ECu;
    return;
L_08A09234:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A09248;
      }
      goto L_08A09240;
    }
L_08A09240:
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    goto L_08A09248;
L_08A09248:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09260:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-14888)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09280;
      }
      goto L_08A09278;
    }
L_08A09278:
    ctx.gpr[31] = (0x08A09280u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3166));
    ctx.pc = 0x08B0B70Cu;
    return;
L_08A09280:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0928C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(3166));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A092F0;
      }
      goto L_08A092CC;
    }
L_08A092CC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
        goto L_08A092F4;
    }
    goto L_08A092DC;
L_08A092DC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A092F4;
      }
      goto L_08A092EC;
    }
L_08A092EC:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A092F0;
L_08A092F0:
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    goto L_08A092F4;
L_08A092F4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09304;
      }
      goto L_08A092FC;
    }
L_08A092FC:
    ctx.gpr[31] = (0x08A09304u);
    // nop
    goto L_08A09260;
L_08A09304:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09318:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09320:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(3172));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09328:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 0u);
    goto L_08A09358;
L_08A09358:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A09364u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A088B4;
L_08A09364:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A093BC;
      }
      goto L_08A09398;
    }
L_08A09398:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08A093C0;
    }
    goto L_08A093A8;
L_08A093A8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A093C0;
      }
      goto L_08A093B8;
    }
L_08A093B8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A093BC;
L_08A093BC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A093C0;
L_08A093C0:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A093D4;
      }
      goto L_08A093D0;
    }
L_08A093D0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A093D4;
L_08A093D4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A09358;
      }
      goto L_08A093E4;
    }
L_08A093E4:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08A09408:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (0u | 0u);
    goto L_08A09448;
L_08A09448:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A09454u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A088B4;
L_08A09454:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A094AC;
      }
      goto L_08A09488;
    }
L_08A09488:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08A094B0;
    }
    goto L_08A09498;
L_08A09498:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A094B0;
      }
      goto L_08A094A8;
    }
L_08A094A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A094AC;
L_08A094AC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A094B0;
L_08A094B0:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09508;
      }
      goto L_08A094C0;
    }
L_08A094C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A094CCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A088B4;
L_08A094CC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A094E4;
      }
      goto L_08A094E0;
    }
L_08A094E0:
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    goto L_08A094E4;
L_08A094E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A094F0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A088B4;
L_08A094F0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A09508;
      }
      goto L_08A09504;
    }
L_08A09504:
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    goto L_08A09508;
L_08A09508:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A09448;
      }
      goto L_08A09518;
    }
L_08A09518:
    ctx.gpr[2] = (ctx.gpr[21] + ctx.gpr[22]);
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
L_08A09544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A09570;
      }
      goto L_08A09568;
    }
L_08A09568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09610;
      }
      goto L_08A09570;
    }
L_08A09570:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A09574;
L_08A09574:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A09574;
      }
      goto L_08A09594;
    }
L_08A09594:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 5u);
    goto L_08A0959C;
L_08A0959C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08A095ACu);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(114)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A095ACu) goto L_08A095AC;
    return;
L_08A095AC:
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(114)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08A0959C;
      }
      goto L_08A095E0;
    }
L_08A095E0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    goto L_08A095EC;
L_08A095EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(114)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A095EC;
      }
      goto L_08A09610;
    }
L_08A09610:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0962C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A0966C;
      }
      goto L_08A09640;
    }
L_08A09640:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A0964Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = 0x08B0B60Cu;
    return;
L_08A0964C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A09658u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.pc = 0x08B0B644u;
    return;
L_08A09658:
    ctx.gpr[31] = (0x08A09660u);
    // nop
    ctx.pc = 0x08B0B61Cu;
    return;
L_08A09660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    goto L_08A0966C;
L_08A0966C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09678:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3184), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09680:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3184)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09688:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8604));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14872)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14872));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[17] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(22272));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 152u);
    ctx.gpr[31] = (0x08A09740u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09740u) goto L_08A09740;
    return;
L_08A09740:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1156));
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22360));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08A09758u);
    ctx.gpr[6] = (0u | 134u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09758u) goto L_08A09758;
    return;
L_08A09758:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2096), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2100));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 152u);
    ctx.gpr[31] = (0x08A09770u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09770u) goto L_08A09770;
    return;
L_08A09770:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3166), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3167), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3168), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3169), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3170), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3171), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3172), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3176), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3177), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3178), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3179), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3180), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3181), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3176));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(3182), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08A09800:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09808:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0983Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08B0BAF4u;
    return;
L_08A0983C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A09A6C;
      }
      goto L_08A09844;
    }
L_08A09844:
    ctx.gpr[31] = (0x08A0984Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0BB4Cu;
    return;
L_08A0984C:
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A09864u);
    ctx.gpr[4] = (2u << 16u);
    ctx.pc = 0x08B0B71Cu;
    return;
L_08A09864:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A098A8;
      }
      goto L_08A0986C;
    }
L_08A0986C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(280));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08A09880u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A09880u) goto L_08A09880;
    return;
L_08A09880:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A09890u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09890u) goto L_08A09890;
    return;
L_08A09890:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-14968));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A09A4C;
      }
      goto L_08A098A8;
    }
L_08A098A8:
    ctx.gpr[31] = (0x08A098B0u);
    // nop
    ctx.pc = 0x08B0B6FCu;
    return;
L_08A098B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A098F4;
      }
      goto L_08A098B8;
    }
L_08A098B8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(316));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08A098CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A098CCu) goto L_08A098CC;
    return;
L_08A098CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A098DCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A098DCu) goto L_08A098DC;
    return;
L_08A098DC:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-14968));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A09A44;
      }
      goto L_08A098F4;
    }
L_08A098F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08A09908u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08A09908u) goto L_08A09908;
    return;
L_08A09908:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (0u | 6144u);
    ctx.gpr[31] = (0x08A09918u);
    ctx.gpr[5] = (0u | 48u);
    ctx.pc = 0x08B0B68Cu;
    return;
L_08A09918:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0995C;
      }
      goto L_08A09920;
    }
L_08A09920:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08A09934u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A09934u) goto L_08A09934;
    return;
L_08A09934:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A09944u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09944u) goto L_08A09944;
    return;
L_08A09944:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-14968));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A09A3C;
      }
      goto L_08A0995C;
    }
L_08A0995C:
    ctx.gpr[4] = (2208u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0996Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31988));
    ctx.pc = 0x08B0B65Cu;
    return;
L_08A0996C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A099B8;
      }
      goto L_08A09974;
    }
L_08A09974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(420));
    ctx.gpr[31] = (0x08A09990u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A09990u) goto L_08A09990;
    return;
L_08A09990:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A099A0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A099A0u) goto L_08A099A0;
    return;
L_08A099A0:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-14968));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A09A34;
      }
      goto L_08A099B8;
    }
L_08A099B8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A099D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(476));
    ctx.pc = 0x08B0BAD4u;
    return;
L_08A099D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2096), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A09A20;
      }
      goto L_08A099DC;
    }
L_08A099DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(496));
    ctx.gpr[31] = (0x08A099F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A099F8u) goto L_08A099F8;
    return;
L_08A099F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A09A08u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09A08u) goto L_08A09A08;
    return;
L_08A09A08:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-14968));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A09A34;
      }
      goto L_08A09A20;
    }
L_08A09A20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[31] = (0x08A09A2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0A1BC;
L_08A09A2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09A6C;
      }
      goto L_08A09A34;
    }
L_08A09A34:
    ctx.gpr[31] = (0x08A09A3Cu);
    // nop
    ctx.pc = 0x08B0B684u;
    return;
L_08A09A3C:
    ctx.gpr[31] = (0x08A09A44u);
    // nop
    ctx.pc = 0x08B0B6DCu;
    return;
L_08A09A44:
    ctx.gpr[31] = (0x08A09A4Cu);
    // nop
    ctx.pc = 0x08B0B714u;
    return;
L_08A09A4C:
    ctx.gpr[31] = (0x08A09A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 385u, 0x08A2D838u>(ctx, &aot_mem) && ctx.pc == 0x08A09A54u) goto L_08A09A54;
    return;
L_08A09A54:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-14888), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-14968)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08A09A6C;
L_08A09A6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09A90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A09AB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(528));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 757u, 0x08A07CC8u>(ctx, &aot_mem) && ctx.pc == 0x08A09AB4u) goto L_08A09AB4;
    return;
L_08A09AB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09B1C;
      }
      goto L_08A09AC4;
    }
L_08A09AC4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(564));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A09AD8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A09AD8u) goto L_08A09AD8;
    return;
L_08A09AD8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A09AE8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A09AE8u) goto L_08A09AE8;
    return;
L_08A09AE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A09AF4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A5D8;
L_08A09AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A09B14;
      }
      goto L_08A09B08;
    }
L_08A09B08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A09B14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09B14u) goto L_08A09B14;
    return;
L_08A09B14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09C74;
      }
      goto L_08A09B1C;
    }
L_08A09B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09C74;
      }
      goto L_08A09B2C;
    }
L_08A09B2C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A09B38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(592));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 757u, 0x08A07CC8u>(ctx, &aot_mem) && ctx.pc == 0x08A09B38u) goto L_08A09B38;
    return;
L_08A09B38:
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(104));
    goto L_08A09B44;
L_08A09B44:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(114));
    goto L_08A09B80;
L_08A09B80:
    ctx.gpr[9] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A09B80;
      }
      goto L_08A09BC4;
    }
L_08A09BC4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(152));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_08A09B44;
      }
      goto L_08A09BD8;
    }
L_08A09BD8:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x08A09C18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A09260;
L_08A09C18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09C54;
      }
      goto L_08A09C24;
    }
L_08A09C24:
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3164), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14936));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14936)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[31] = (0x08A09C4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A082E0;
L_08A09C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09C74;
      }
      goto L_08A09C54;
    }
L_08A09C54:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A09C60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(624));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 757u, 0x08A07CC8u>(ctx, &aot_mem) && ctx.pc == 0x08A09C60u) goto L_08A09C60;
    return;
L_08A09C60:
    ctx.gpr[31] = (0x08A09C68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0A330;
L_08A09C68:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A09C74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(636));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 757u, 0x08A07CC8u>(ctx, &aot_mem) && ctx.pc == 0x08A09C74u) goto L_08A09C74;
    return;
L_08A09C74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09C8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[8] = (0u | 5u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14896));
    goto L_08A09CAC;
L_08A09CAC:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A09D10;
      }
      goto L_08A09CB8;
    }
L_08A09CB8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08A09CD8;
      }
      goto L_08A09CC4;
    }
L_08A09CC4:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-14896)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A09D10;
      }
      goto L_08A09CD8;
    }
L_08A09CD8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A09CF4u);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    goto L_08A0A54C;
L_08A09CF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (0u | 5u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (2229u << 16u);
    goto L_08A09D10;
L_08A09D10:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_08A09CAC;
      }
      goto L_08A09D20;
    }
L_08A09D20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09D2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09D34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A09D7C;
      }
      goto L_08A09D5C;
    }
L_08A09D5C:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14936));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-14936)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08A09D7C;
L_08A09D7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09D84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09E00;
      }
      goto L_08A09DA4;
    }
L_08A09DA4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(648));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A09DBCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A09DBCu) goto L_08A09DBC;
    return;
L_08A09DBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A09DCCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A09DCCu) goto L_08A09DCC;
    return;
L_08A09DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A09DD8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A0A5D8;
L_08A09DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A09DF8;
      }
      goto L_08A09DEC;
    }
L_08A09DEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A09DF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09DF8u) goto L_08A09DF8;
    return;
L_08A09DF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09E2C;
      }
      goto L_08A09E00;
    }
L_08A09E00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09E2C;
      }
      goto L_08A09E10;
    }
L_08A09E10:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14904));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14904)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A09E2C;
L_08A09E2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09E40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-752));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(732), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A09EBC;
      }
      goto L_08A09E64;
    }
L_08A09E64:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(676));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A09E78u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A09E78u) goto L_08A09E78;
    return;
L_08A09E78:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A09E88u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A09E88u) goto L_08A09E88;
    return;
L_08A09E88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A09E94u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A5D8;
L_08A09E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A09EB4;
      }
      goto L_08A09EA8;
    }
L_08A09EA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A09EB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09EB4u) goto L_08A09EB4;
    return;
L_08A09EB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A0F4;
      }
      goto L_08A09EBC;
    }
L_08A09EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A0F4;
      }
      goto L_08A09ECC;
    }
L_08A09ECC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (0u | 672u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(696));
    ctx.gpr[31] = (0x08A09EE4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.pc = 0x08B0B674u;
    return;
L_08A09EE4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A09F44;
      }
      goto L_08A09EEC;
    }
L_08A09EEC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(708));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(700));
    ctx.gpr[31] = (0x08A09F00u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A09F00u) goto L_08A09F00;
    return;
L_08A09F00:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A09F10u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A09F10u) goto L_08A09F10;
    return;
L_08A09F10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A09F1Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A5D8;
L_08A09F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A09F3C;
      }
      goto L_08A09F30;
    }
L_08A09F30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[31] = (0x08A09F3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09F3Cu) goto L_08A09F3C;
    return;
L_08A09F3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A0F4;
      }
      goto L_08A09F44;
    }
L_08A09F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[17] = (0u | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
        goto L_08A09F54;
    }
    goto L_08A09F54;
L_08A09F54:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09F88;
      }
      goto L_08A09F5C;
    }
L_08A09F5C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A09F6Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 371u, 0x08AED4A0u>(ctx, &aot_mem) && ctx.pc == 0x08A09F6Cu) goto L_08A09F6C;
    return;
L_08A09F6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A09F7C;
      }
      goto L_08A09F74;
    }
L_08A09F74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09F88;
      }
      goto L_08A09F7C;
    }
L_08A09F7C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A09F5C;
      }
      goto L_08A09F88;
    }
L_08A09F88:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A070;
      }
      goto L_08A09F90;
    }
L_08A09F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A008;
      }
      goto L_08A09FA8;
    }
L_08A09FA8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(740));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(708));
    ctx.gpr[31] = (0x08A09FBCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A09FBCu) goto L_08A09FBC;
    return;
L_08A09FBC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A09FCCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A09FCCu) goto L_08A09FCC;
    return;
L_08A09FCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A09FD8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A5D8;
L_08A09FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A09FF8;
      }
      goto L_08A09FEC;
    }
L_08A09FEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.gpr[31] = (0x08A09FF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09FF8u) goto L_08A09FF8;
    return;
L_08A09FF8:
    ctx.gpr[31] = (0x08A0A000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A081C4;
L_08A0A000:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A0F4;
      }
      goto L_08A0A008;
    }
L_08A0A008:
    ctx.gpr[31] = (0x08A0A010u);
    // nop
    ctx.pc = 0x08B0B64Cu;
    return;
L_08A0A010:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0A068;
      }
      goto L_08A0A018;
    }
L_08A0A018:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(776));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(716));
    ctx.gpr[31] = (0x08A0A02Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A0A02Cu) goto L_08A0A02C;
    return;
L_08A0A02C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0A03Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A0A03Cu) goto L_08A0A03C;
    return;
L_08A0A03C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A048u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A5D8;
L_08A0A048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0A068;
      }
      goto L_08A0A05C;
    }
L_08A0A05C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.gpr[31] = (0x08A0A068u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A068u) goto L_08A0A068;
    return;
L_08A0A068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A0F4;
      }
      goto L_08A0A070;
    }
L_08A0A070:
    ctx.gpr[31] = (0x08A0A078u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0B66Cu;
    return;
L_08A0A078:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0A0D8;
      }
      goto L_08A0A080;
    }
L_08A0A080:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(812));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(724));
    ctx.gpr[31] = (0x08A0A094u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A0A094u) goto L_08A0A094;
    return;
L_08A0A094:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0A0A4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A0A0A4u) goto L_08A0A0A4;
    return;
L_08A0A0A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A0B0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A5D8;
L_08A0A0B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0A0D0;
      }
      goto L_08A0A0C4;
    }
L_08A0A0C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    ctx.gpr[31] = (0x08A0A0D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A0D0u) goto L_08A0A0D0;
    return;
L_08A0A0D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A0F4;
      }
      goto L_08A0A0D8;
    }
L_08A0A0D8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14920));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14920)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08A0A0E8;
L_08A0A0E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A0A0F4;
L_08A0A0F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(732)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A10C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A114:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A144;
      }
      goto L_08A0A134;
    }
L_08A0A134:
    ctx.gpr[31] = (0x08A0A13Cu);
    // nop
    goto L_08A0A1BC;
L_08A0A13C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A1A8;
      }
      goto L_08A0A144;
    }
L_08A0A144:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A1A8;
      }
      goto L_08A0A154;
    }
L_08A0A154:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A0A16Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A0A16Cu) goto L_08A0A16C;
    return;
L_08A0A16C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0A17Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A0A17Cu) goto L_08A0A17C;
    return;
L_08A0A17C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A0A188u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A0A5D8;
L_08A0A188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0A1A8;
      }
      goto L_08A0A19C;
    }
L_08A0A19C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08A0A1A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A1A8u) goto L_08A0A1A8;
    return;
L_08A0A1A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A1BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0A1D4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08A0A210;
L_08A0A1D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A1E4;
      }
      goto L_08A0A1DC;
    }
L_08A0A1DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A200;
      }
      goto L_08A0A1E4;
    }
L_08A0A1E4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14928));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14928)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A0A200;
L_08A0A200:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A210:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A0A248u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A0A248u) goto L_08A0A248;
    return;
L_08A0A248:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A258u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A258u) goto L_08A0A258;
    return;
L_08A0A258:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[31] = (0x08A0A264u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0B654u;
    return;
L_08A0A264:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A0A30C;
      }
      goto L_08A0A26C;
    }
L_08A0A26C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(840));
    ctx.gpr[31] = (0x08A0A27Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A0A27Cu) goto L_08A0A27C;
    return;
L_08A0A27C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0A28Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A0A28Cu) goto L_08A0A28C;
    return;
L_08A0A28C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A0A2A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A0A2A0u) goto L_08A0A2A0;
    return;
L_08A0A2A0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A2B8u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 747u, 0x08AFB1E0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A2B8u) goto L_08A0A2B8;
    return;
L_08A0A2B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0A2C4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A0A5D8;
L_08A0A2C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0A2E4;
      }
      goto L_08A0A2D8;
    }
L_08A0A2D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A0A2E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A2E4u) goto L_08A0A2E4;
    return;
L_08A0A2E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0A304;
      }
      goto L_08A0A2F8;
    }
L_08A0A2F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08A0A304u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A304u) goto L_08A0A304;
    return;
L_08A0A304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0A310;
      }
      goto L_08A0A30C;
    }
L_08A0A30C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A0A310;
L_08A0A310:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A330:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0A34Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A0962C;
L_08A0A34C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A0A35Cu);
    ctx.gpr[6] = (0u | 1064u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A0A35Cu) goto L_08A0A35C;
    return;
L_08A0A35C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2100));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A0A36Cu);
    ctx.gpr[6] = (0u | 1064u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A0A36Cu) goto L_08A0A36C;
    return;
L_08A0A36C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1156));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A0A37Cu);
    ctx.gpr[6] = (0u | 938u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A0A37Cu) goto L_08A0A37C;
    return;
L_08A0A37C:
    ctx.gpr[31] = (0x08A0A384u);
    ctx.gpr[4] = (0u | 13620u);
    ctx.pc = 0x08B0B604u;
    return;
L_08A0A384:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0A3E4;
      }
      goto L_08A0A38C;
    }
L_08A0A38C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A0A3A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A0A3A0u) goto L_08A0A3A0;
    return;
L_08A0A3A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0A3B0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A0A3B0u) goto L_08A0A3B0;
    return;
L_08A0A3B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A3BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A5D8;
L_08A0A3BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0A3DC;
      }
      goto L_08A0A3D0;
    }
L_08A0A3D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08A0A3DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A3DCu) goto L_08A0A3DC;
    return;
L_08A0A3DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0A534;
      }
      goto L_08A0A3E4;
    }
L_08A0A3E4:
    ctx.gpr[6] = (2208u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(32028));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (15u << 16u);
    ctx.gpr[9] = (31u << 16u);
    ctx.gpr[11] = (8u << 16u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 4096u);
    ctx.gpr[10] = (0u | 3u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16960));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-31616));
    ctx.gpr[31] = (0x08A0A420u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-24288));
    ctx.pc = 0x08B0B634u;
    return;
L_08A0A420:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0A488;
      }
      goto L_08A0A428;
    }
L_08A0A428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08A0A444u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A0A444u) goto L_08A0A444;
    return;
L_08A0A444:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0A454u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A0A454u) goto L_08A0A454;
    return;
L_08A0A454:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A460u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A5D8;
L_08A0A460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0A480;
      }
      goto L_08A0A474;
    }
L_08A0A474:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A0A480u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A480u) goto L_08A0A480;
    return;
L_08A0A480:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0A534;
      }
      goto L_08A0A488;
    }
L_08A0A488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 8192u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[8] = (0u | 8192u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A0A4A8u);
    ctx.gpr[10] = (0u | 0u);
    ctx.pc = 0x08B0B624u;
    return;
L_08A0A4A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0A508;
      }
      goto L_08A0A4B0;
    }
L_08A0A4B0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(124));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A0A4C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A0A4C4u) goto L_08A0A4C4;
    return;
L_08A0A4C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0A4D4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A0A4D4u) goto L_08A0A4D4;
    return;
L_08A0A4D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A4E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A5D8;
L_08A0A4E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0A500;
      }
      goto L_08A0A4F4;
    }
L_08A0A4F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08A0A500u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A500u) goto L_08A0A500;
    return;
L_08A0A500:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0A534;
      }
      goto L_08A0A508;
    }
L_08A0A508:
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14936));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14936)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    goto L_08A0A534;
L_08A0A534:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A54C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0A56Cu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08A0A84C;
L_08A0A56C:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A0A5A0;
      }
      goto L_08A0A588;
    }
L_08A0A588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A0A5A0;
      }
      goto L_08A0A594;
    }
L_08A0A594:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2100), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          goto L_08A0A5B8;
      }
      goto L_08A0A5A0;
    }
L_08A0A5A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08A0A5ACu);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(2104));
    ctx.pc = 0x08B0B63Cu;
    return;
L_08A0A5AC:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2100), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    goto L_08A0A5B8;
L_08A0A5B8:
    ctx.gpr[31] = (0x08A0A5C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0A870;
L_08A0A5C0:
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
L_08A0A5D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0A5F4u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08A081C4;
L_08A0A5F4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A0A60Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A60Cu) goto L_08A0A60C;
    return;
L_08A0A60C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A620:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0A650u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0A84C;
L_08A0A650:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(2104));
    goto L_08A0A660;
L_08A0A660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2100)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A674;
      }
      goto L_08A0A66C;
    }
L_08A0A66C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A0A68C;
      }
      goto L_08A0A674;
    }
L_08A0A674:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A684u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 371u, 0x08AED4A0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A684u) goto L_08A0A684;
    return;
L_08A0A684:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A6A8;
      }
      goto L_08A0A68C;
    }
L_08A0A68C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(152));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_08A0A660;
      }
      goto L_08A0A6A0;
    }
L_08A0A6A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A6B0;
      }
      goto L_08A0A6A8;
    }
L_08A0A6A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A0A828;
      }
      goto L_08A0A6B0;
    }
L_08A0A6B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A0A6CC;
      }
      goto L_08A0A6B8;
    }
L_08A0A6B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A6F8;
      }
      goto L_08A0A6C4;
    }
L_08A0A6C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_08A0A6DC;
      }
      goto L_08A0A6CC;
    }
L_08A0A6CC:
    ctx.gpr[31] = (0x08A0A6D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0A870;
L_08A0A6D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A0A828;
      }
      goto L_08A0A6DC;
    }
L_08A0A6DC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A6F8;
      }
      goto L_08A0A6E4;
    }
L_08A0A6E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26616));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
      if (branch_taken) {
          goto L_08A0A7D8;
      }
      goto L_08A0A6F8;
    }
L_08A0A6F8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08A0A704u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0B67Cu;
    return;
L_08A0A704:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A0A7D4;
      }
      goto L_08A0A70C;
    }
L_08A0A70C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x08A0A744u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0928C;
L_08A0A744:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(22));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0A7B0;
      }
      goto L_08A0A78C;
    }
L_08A0A78C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
        goto L_08A0A7B4;
    }
    goto L_08A0A79C;
L_08A0A79C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A0A7B4;
      }
      goto L_08A0A7AC;
    }
L_08A0A7AC:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A0A7B0;
L_08A0A7B0:
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_08A0A7B4;
L_08A0A7B4:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A7D4;
      }
      goto L_08A0A7C4;
    }
L_08A0A7C4:
    ctx.gpr[31] = (0x08A0A7CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0A870;
L_08A0A7CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A0A828;
      }
      goto L_08A0A7D4;
    }
L_08A0A7D4:
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    goto L_08A0A7D8;
L_08A0A7D8:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2100), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2104));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A0A828;
L_08A0A828:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A84C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0A864u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB6Cu;
    return;
L_08A0A864:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A870:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0A884u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BB54u;
    return;
L_08A0A884:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A890:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0A8CCu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A0A8CCu) goto L_08A0A8CC;
    return;
L_08A0A8CC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14860)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14864)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14852)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14856)));
    goto L_08A0A8E8;
L_08A0A8E8:
    ctx.gpr[31] = (0x08A0A8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A0A8F0u) goto L_08A0A8F0;
    return;
L_08A0A8F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A0A904u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A0A904u) goto L_08A0A904;
    return;
L_08A0A904:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[22] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A8E8;
      }
      goto L_08A0A944;
    }
L_08A0A944:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A0A974u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(868));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 757u, 0x08A07CC8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A974u) goto L_08A0A974;
    return;
L_08A0A974:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A99C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A9BC;
      }
      goto L_08A0A9A4;
    }
L_08A0A9A4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A0AA24;
      }
      goto L_08A0A9BC;
    }
L_08A0A9BC:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A0A9E0;
      }
      goto L_08A0A9C8;
    }
L_08A0A9C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A0AA24;
      }
      goto L_08A0A9E0;
    }
L_08A0A9E0:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A0AA04;
      }
      goto L_08A0A9EC;
    }
L_08A0A9EC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A0AA24;
      }
      goto L_08A0AA04;
    }
L_08A0AA04:
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A0AA24;
      }
      goto L_08A0AA10;
    }
L_08A0AA10:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A0AA24;
L_08A0AA24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0AA2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0AA5Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A0A84C;
L_08A0AA5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[23] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_08A0AC2C;
      }
      goto L_08A0AA6C;
    }
L_08A0AA6C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[22] = (2229u << 16u);
    goto L_08A0AA80;
L_08A0AA80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A0AA9C;
      }
      goto L_08A0AA94;
    }
L_08A0AA94:
    ctx.gpr[31] = (0x08A0AA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AA9Cu) goto L_08A0AA9C;
    return;
L_08A0AA9C:
    ctx.gpr[31] = (0x08A0AAA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20652)));
    goto L_08A0928C;
L_08A0AAA4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0AADC;
      }
      goto L_08A0AAB8;
    }
L_08A0AAB8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_08A0AAE0;
    }
    goto L_08A0AAC8;
L_08A0AAC8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A0AAE0;
      }
      goto L_08A0AAD8;
    }
L_08A0AAD8:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A0AADC;
L_08A0AADC:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08A0AAE0;
L_08A0AAE0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0AB08;
      }
      goto L_08A0AAE8;
    }
L_08A0AAE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27780)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27776)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08A0AB08;
L_08A0AB08:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A0AA80;
      }
      goto L_08A0AB18;
    }
L_08A0AB18:
    ctx.gpr[31] = (0x08A0AB20u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 87u, 0x088A84ACu>(ctx, &aot_mem) && ctx.pc == 0x08A0AB20u) goto L_08A0AB20;
    return;
L_08A0AB20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AB30u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AB30u) goto L_08A0AB30;
    return;
L_08A0AB30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AB40u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 89u, 0x088A84BCu>(ctx, &aot_mem) && ctx.pc == 0x08A0AB40u) goto L_08A0AB40;
    return;
L_08A0AB40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AB50u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 93u, 0x088A84DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0AB50u) goto L_08A0AB50;
    return;
L_08A0AB50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AB60u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 91u, 0x088A84CCu>(ctx, &aot_mem) && ctx.pc == 0x08A0AB60u) goto L_08A0AB60;
    return;
L_08A0AB60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(54)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(110), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(122), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(37)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0ABB8u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 95u, 0x088A84ECu>(ctx, &aot_mem) && ctx.pc == 0x08A0ABB8u) goto L_08A0ABB8;
    return;
L_08A0ABB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0ABC8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x08A0ABC8u) goto L_08A0ABC8;
    return;
L_08A0ABC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0ABD8u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ABD8u) goto L_08A0ABD8;
    return;
L_08A0ABD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A0ABE4;
L_08A0ABE4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0ABF0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 288u, 0x088A9408u>(ctx, &aot_mem) && ctx.pc == 0x08A0ABF0u) goto L_08A0ABF0;
    return;
L_08A0ABF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0ABE4;
      }
      goto L_08A0AC0C;
    }
L_08A0AC0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A0AD1C;
      }
      goto L_08A0AC18;
    }
L_08A0AC18:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A0AC24u);
    ctx.gpr[5] = (0u | 136u);
    ctx.pc = 0x08B0B62Cu;
    return;
L_08A0AC24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0AD1C;
      }
      goto L_08A0AC2C;
    }
L_08A0AC2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AC3Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 84u, 0x088A8494u>(ctx, &aot_mem) && ctx.pc == 0x08A0AC3Cu) goto L_08A0AC3C;
    return;
L_08A0AC3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AC4Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 82u, 0x088A8484u>(ctx, &aot_mem) && ctx.pc == 0x08A0AC4Cu) goto L_08A0AC4C;
    return;
L_08A0AC4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AC5Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 88u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AC5Cu) goto L_08A0AC5C;
    return;
L_08A0AC5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AC6Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 92u, 0x088A84D4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AC6Cu) goto L_08A0AC6C;
    return;
L_08A0AC6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AC7Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84C4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AC7Cu) goto L_08A0AC7C;
    return;
L_08A0AC7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(110)));
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(113)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0ACC8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 94u, 0x088A84E4u>(ctx, &aot_mem) && ctx.pc == 0x08A0ACC8u) goto L_08A0ACC8;
    return;
L_08A0ACC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(122)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0ACE4u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(123)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 96u, 0x088A84F4u>(ctx, &aot_mem) && ctx.pc == 0x08A0ACE4u) goto L_08A0ACE4;
    return;
L_08A0ACE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0ACF4u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 98u, 0x088A8504u>(ctx, &aot_mem) && ctx.pc == 0x08A0ACF4u) goto L_08A0ACF4;
    return;
L_08A0ACF4:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A0ACF8;
L_08A0ACF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(114)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0ACF8;
      }
      goto L_08A0AD1C;
    }
L_08A0AD1C:
    ctx.gpr[31] = (0x08A0AD24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0A870;
L_08A0AD24:
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
L_08A0AD50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0AF48;
      }
      goto L_08A0AD7C;
    }
L_08A0AD7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A0AD8Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0B724u;
    return;
L_08A0AD8C:
    ctx.gpr[31] = (0x08A0AD94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A0AD94u) goto L_08A0AD94;
    return;
L_08A0AD94:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0ADA4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A0ADA4u) goto L_08A0ADA4;
    return;
L_08A0ADA4:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A0ADB8u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A0ADB8u) goto L_08A0ADB8;
    return;
L_08A0ADB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(125))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(126))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(128))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(129))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(130))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(131))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(132))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(928));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(49))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(53))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(54))))));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(55))))));
    ctx.gpr[31] = (0x08A0AE2Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 757u, 0x08A07CC8u>(ctx, &aot_mem) && ctx.pc == 0x08A0AE2Cu) goto L_08A0AE2C;
    return;
L_08A0AE2C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A0AEB8;
      }
      goto L_08A0AE44;
    }
L_08A0AE44:
    ctx.gpr[31] = (0x08A0AE4Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B694u;
    return;
L_08A0AE4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0AE9C;
      }
      goto L_08A0AE54;
    }
L_08A0AE54:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(968));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x08A0AE68u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A0AE68u) goto L_08A0AE68;
    return;
L_08A0AE68:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A0AE78u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A0AE78u) goto L_08A0AE78;
    return;
L_08A0AE78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0AE84u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A0A5D8;
L_08A0AE84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0AE9C;
      }
      goto L_08A0AE90;
    }
L_08A0AE90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A0AE9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AE9Cu) goto L_08A0AE9C;
    return;
L_08A0AE9C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14920));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14920)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A0AF28;
      }
      goto L_08A0AEB8;
    }
L_08A0AEB8:
    ctx.gpr[31] = (0x08A0AEC0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    ctx.pc = 0x08B0B64Cu;
    return;
L_08A0AEC0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0AF10;
      }
      goto L_08A0AEC8;
    }
L_08A0AEC8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(776));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A0AEDCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A0AEDCu) goto L_08A0AEDC;
    return;
L_08A0AEDC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A0AEECu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A0AEECu) goto L_08A0AEEC;
    return;
L_08A0AEEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0AEF8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A0A5D8;
L_08A0AEF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0AF10;
      }
      goto L_08A0AF04;
    }
L_08A0AF04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08A0AF10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AF10u) goto L_08A0AF10;
    return;
L_08A0AF10:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14912));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14912)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08A0AF28;
L_08A0AF28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0AF40;
      }
      goto L_08A0AF34;
    }
L_08A0AF34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08A0AF40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AF40u) goto L_08A0AF40;
    return;
L_08A0AF40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0AFA8;
      }
      goto L_08A0AF48;
    }
L_08A0AF48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0AFA8;
      }
      goto L_08A0AF58;
    }
L_08A0AF58:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08A0AF6Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08A0AF6Cu) goto L_08A0AF6C;
    return;
L_08A0AF6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0AF7Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08A0AF7Cu) goto L_08A0AF7C;
    return;
L_08A0AF7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0AF88u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A5D8;
L_08A0AF88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0AFA8;
      }
      goto L_08A0AF9C;
    }
L_08A0AF9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08A0AFA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AFA8u) goto L_08A0AFA8;
    return;
L_08A0AFA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0AFC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A0B020;
      }
      goto L_08A0B000;
    }
L_08A0B000:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A0B024;
    }
    goto L_08A0B00C;
L_08A0B00C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21168));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B104;
      }
      goto L_08A0B020;
    }
L_08A0B020:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    goto L_08A0B024;
L_08A0B024:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A0B050;
    }
    goto L_08A0B02C;
L_08A0B02C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A0B050;
    }
    goto L_08A0B038;
L_08A0B038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25212));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B104;
      }
      goto L_08A0B04C;
    }
L_08A0B04C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    goto L_08A0B050;
L_08A0B050:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A0B07C;
    }
    goto L_08A0B058;
L_08A0B058:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A0B07C;
    }
    goto L_08A0B064;
L_08A0B064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25024));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B104;
      }
      goto L_08A0B078;
    }
L_08A0B078:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    goto L_08A0B07C;
L_08A0B07C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B0A4;
      }
      goto L_08A0B084;
    }
L_08A0B084:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B0A4;
      }
      goto L_08A0B090;
    }
L_08A0B090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24308));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B104;
      }
      goto L_08A0B0A4;
    }
L_08A0B0A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0B0B0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A0A620;
L_08A0B0B0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A0B0FC;
      }
      goto L_08A0B0BC;
    }
L_08A0B0BC:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2100));
      if (branch_taken) {
          goto L_08A0B2F0;
      }
      goto L_08A0B0E0;
    }
L_08A0B0E0:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(1000)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B0FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B2F8;
      }
      goto L_08A0B104;
    }
L_08A0B104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B2F8;
      }
      goto L_08A0B10C;
    }
L_08A0B10C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08A0B12C;
      }
      goto L_08A0B11C;
    }
L_08A0B11C:
    ctx.gpr[31] = (0x08A0B124u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0A870;
L_08A0B124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B2F8;
      }
      goto L_08A0B12C;
    }
L_08A0B12C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (0u | 136u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), 0u);
      if (branch_taken) {
          goto L_08A0B1DC;
      }
      goto L_08A0B170;
    }
L_08A0B170:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A0B190;
      }
      goto L_08A0B17C;
    }
L_08A0B17C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A0B17C;
      }
      goto L_08A0B190;
    }
L_08A0B190:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    goto L_08A0B1DC;
L_08A0B1DC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A0B21Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A09064;
L_08A0B21C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B11C;
      }
      goto L_08A0B224;
    }
L_08A0B224:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A0B234;
      }
      goto L_08A0B230;
    }
L_08A0B230:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A0B234;
L_08A0B234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B11C;
      }
      goto L_08A0B23C;
    }
L_08A0B23C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B11C;
      }
      goto L_08A0B244;
    }
L_08A0B244:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A0B11C;
      }
      goto L_08A0B2A4;
    }
L_08A0B2A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A0B2B8;
      }
      goto L_08A0B2B0;
    }
L_08A0B2B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A0B11C;
      }
      goto L_08A0B2B8;
    }
L_08A0B2B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A0B2D0;
      }
      goto L_08A0B2C8;
    }
L_08A0B2C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B11C;
      }
      goto L_08A0B2D0;
    }
L_08A0B2D0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B2E8;
      }
      goto L_08A0B2E0;
    }
L_08A0B2E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B11C;
      }
      goto L_08A0B2E8;
    }
L_08A0B2E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B11C;
      }
      goto L_08A0B2F0;
    }
L_08A0B2F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B11C;
      }
      goto L_08A0B2F8;
    }
L_08A0B2F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A0B364;
      }
      goto L_08A0B344;
    }
L_08A0B344:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
        goto L_08A0B368;
    }
    goto L_08A0B350;
L_08A0B350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21168));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B41C;
      }
      goto L_08A0B364;
    }
L_08A0B364:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
    goto L_08A0B368;
L_08A0B368:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
        goto L_08A0B394;
    }
    goto L_08A0B370;
L_08A0B370:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
        goto L_08A0B394;
    }
    goto L_08A0B37C;
L_08A0B37C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25212));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B41C;
      }
      goto L_08A0B390;
    }
L_08A0B390:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
    goto L_08A0B394;
L_08A0B394:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B3BC;
      }
      goto L_08A0B39C;
    }
L_08A0B39C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B3BC;
      }
      goto L_08A0B3A8;
    }
L_08A0B3A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24308));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B41C;
      }
      goto L_08A0B3BC;
    }
L_08A0B3BC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0B3C8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A0A620;
L_08A0B3C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A0B414;
      }
      goto L_08A0B3D4;
    }
L_08A0B3D4:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2100));
      if (branch_taken) {
          goto L_08A0B4CC;
      }
      goto L_08A0B3F8;
    }
L_08A0B3F8:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(1040)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B640;
      }
      goto L_08A0B41C;
    }
L_08A0B41C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B640;
      }
      goto L_08A0B424;
    }
L_08A0B424:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B464;
      }
      goto L_08A0B430;
    }
L_08A0B430:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B464;
      }
      goto L_08A0B43C;
    }
L_08A0B43C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25300));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B464;
      }
      goto L_08A0B450;
    }
L_08A0B450:
    ctx.gpr[31] = (0x08A0B458u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A09328;
L_08A0B458:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 7 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_08A0B478;
    }
    goto L_08A0B464;
L_08A0B464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08A0B470u);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08B0B63Cu;
    return;
L_08A0B470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B4CC;
      }
      goto L_08A0B478;
    }
L_08A0B478:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A0B4BCu);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = 0x08B0B614u;
    return;
L_08A0B4BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A0B4CC;
      }
      goto L_08A0B4C4;
    }
L_08A0B4C4:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A0B4CC;
L_08A0B4CC:
    ctx.gpr[31] = (0x08A0B4D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A0A870;
L_08A0B4D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B640;
      }
      goto L_08A0B4DC;
    }
L_08A0B4DC:
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(22));
    ctx.gpr[31] = (0x08A0B580u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A09064;
L_08A0B580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A0B590u);
    ctx.gpr[5] = (0u | 136u);
    ctx.pc = 0x08B0B62Cu;
    return;
L_08A0B590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B4CC;
      }
      goto L_08A0B598;
    }
L_08A0B598:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A0B5B0;
      }
      goto L_08A0B5A8;
    }
L_08A0B5A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A0B4CC;
      }
      goto L_08A0B5B0;
    }
L_08A0B5B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A0B5C8;
      }
      goto L_08A0B5C0;
    }
L_08A0B5C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B4CC;
      }
      goto L_08A0B5C8;
    }
L_08A0B5C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 255u);
      if (branch_taken) {
          goto L_08A0B630;
      }
      goto L_08A0B5D8;
    }
L_08A0B5D8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A0B630u);
    ctx.gpr[5] = (0u | 136u);
    ctx.pc = 0x08B0B62Cu;
    return;
L_08A0B630:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A0B4CC;
      }
      goto L_08A0B638;
    }
L_08A0B638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B4CC;
      }
      goto L_08A0B640;
    }
L_08A0B640:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B65C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14812)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 14571u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14816)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-14788)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-14808), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[9] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[9] + static_cast<std::uint32_t>(21824));
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-14800), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-14804), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (15744u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[2] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-14796), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-14792), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0B70Cu);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-14784), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 232u, 0x08A7D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08A0B70Cu) goto L_08A0B70C;
    return;
L_08A0B70C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8588));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A0B72Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14780));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x08A0B72Cu) goto L_08A0B72C;
    return;
L_08A0B72C:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 36u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21880));
    ctx.gpr[31] = (0x08A0B748u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1080));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AEF4u>(ctx, &aot_mem) && ctx.pc == 0x08A0B748u) goto L_08A0B748;
    return;
L_08A0B748:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B768:
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
L_08A0B794:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26216)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0B7C0;
      }
      goto L_08A0B7B0;
    }
L_08A0B7B0:
    ctx.gpr[5] = (72u << 16u);
    ctx.gpr[4] = (0u | 4587u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21504));
      if (branch_taken) {
          goto L_08A0B808;
      }
      goto L_08A0B7C0;
    }
L_08A0B7C0:
    ctx.gpr[31] = (0x08A0B7C8u);
    // nop
    ctx.pc = 0x08B0BC24u;
    return;
L_08A0B7C8:
    ctx.gpr[4] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B7F0;
      }
      goto L_08A0B7D8;
    }
L_08A0B7D8:
    ctx.gpr[31] = (0x08A0B7E0u);
    // nop
    ctx.pc = 0x08B0BC24u;
    return;
L_08A0B7E0:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] >> 10u);
      if (branch_taken) {
          goto L_08A0B808;
      }
      goto L_08A0B7F0;
    }
L_08A0B7F0:
    ctx.gpr[31] = (0x08A0B7F8u);
    // nop
    ctx.pc = 0x08B0BC24u;
    return;
L_08A0B7F8:
    ctx.gpr[4] = (6u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(14336));
    ctx.gpr[5] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] >> 10u);
    goto L_08A0B808;
L_08A0B808:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A0B830u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1096));
    ctx.pc = 0x08B0BBECu;
    return;
L_08A0B830:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A0B844u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BADCu;
    return;
L_08A0B844:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A0B858u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA324Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B858u) goto L_08A0B858;
    return;
L_08A0B858:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A0B874u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1112));
    goto L_08A0B768;
L_08A0B874:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B884:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0B898u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 670u, 0x08AA3224u>(ctx, &aot_mem) && ctx.pc == 0x08A0B898u) goto L_08A0B898;
    return;
L_08A0B898:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B8B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0B8C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    goto L_08A0B884;
L_08A0B8C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B8D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0B8F4u);
    ctx.gpr[6] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A0B8F4u) goto L_08A0B8F4;
    return;
L_08A0B8F4:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B910:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(50)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(51)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(53)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(60))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(62))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(78), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(66)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B9BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0BB0C;
      }
      goto L_08A0B9E8;
    }
L_08A0B9E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BB0C;
      }
      goto L_08A0B9F8;
    }
L_08A0B9F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BB0C;
      }
      goto L_08A0BA08;
    }
L_08A0BA08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0BA3C;
      }
      goto L_08A0BA20;
    }
L_08A0BA20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A0BA40;
      }
      goto L_08A0BA38;
    }
L_08A0BA38:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A0BA3C;
L_08A0BA3C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A0BA40;
L_08A0BA40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BB0C;
      }
      goto L_08A0BA48;
    }
L_08A0BA48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A0BB0C;
      }
      goto L_08A0BA60;
    }
L_08A0BA60:
    ctx.gpr[31] = (0x08A0BA68u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 558u, 0x08927438u>(ctx, &aot_mem) && ctx.pc == 0x08A0BA68u) goto L_08A0BA68;
    return;
L_08A0BA68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BB0C;
      }
      goto L_08A0BA70;
    }
L_08A0BA70:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BB0C;
      }
      goto L_08A0BA80;
    }
L_08A0BA80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(66)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BB0C;
      }
      goto L_08A0BA90;
    }
L_08A0BA90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(67)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(67)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BB0C;
      }
      goto L_08A0BAA0;
    }
L_08A0BAA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BB0C;
      }
      goto L_08A0BAB0;
    }
L_08A0BAB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A0BB0C;
      }
      goto L_08A0BAC8;
    }
L_08A0BAC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(76))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(76))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BB0C;
      }
      goto L_08A0BAD8;
    }
L_08A0BAD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(78))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(78))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BB0C;
      }
      goto L_08A0BAE8;
    }
L_08A0BAE8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BB0C;
      }
      goto L_08A0BAF8;
    }
L_08A0BAF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(69)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BB0C;
      }
      goto L_08A0BB08;
    }
L_08A0BB08:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A0BB0C;
L_08A0BB0C:
    ctx.gpr[2] = (ctx.gpr[18] & 255u);
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
L_08A0BB28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0BB3Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 659u, 0x08AC3DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A0BB3Cu) goto L_08A0BB3C;
    return;
L_08A0BB3C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15820));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BB64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0BB84u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 659u, 0x08AC3DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A0BB84u) goto L_08A0BB84;
    return;
L_08A0BB84:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15820));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A0BB98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x08A0BB98u) goto L_08A0BB98;
    return;
L_08A0BB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A0BBB4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0BBB4u) goto L_08A0BBB4;
    return;
L_08A0BBB4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A0BBC8u);
    ctx.gpr[4] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08A0BBC8u) goto L_08A0BBC8;
    return;
L_08A0BBC8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[31] = (0x08A0BBD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08A0BBD8u) goto L_08A0BBD8;
    return;
L_08A0BBD8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A0BC0C;
      }
      goto L_08A0BBE4;
    }
L_08A0BBE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A0BC08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0B910;
L_08A0BC08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0BC0C;
L_08A0BC0C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0BC1Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 131u, 0x08AC5034u>(ctx, &aot_mem) && ctx.pc == 0x08A0BC1Cu) goto L_08A0BC1C;
    return;
L_08A0BC1C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08A0BC38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0BCA4;
      }
      goto L_08A0BC54;
    }
L_08A0BC54:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15820));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A0BC68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 13u, 0x08A0C3ACu>(ctx, &aot_mem) && ctx.pc == 0x08A0BC68u) goto L_08A0BC68;
    return;
L_08A0BC68:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A0BC94;
      }
      goto L_08A0BC70;
    }
L_08A0BC70:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8492));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A0BC84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 99u, 0x08AC4CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A0BC84u) goto L_08A0BC84;
    return;
L_08A0BC84:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0BC90u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 668u, 0x08AC3F40u>(ctx, &aot_mem) && ctx.pc == 0x08A0BC90u) goto L_08A0BC90;
    return;
L_08A0BC90:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08A0BC94;
L_08A0BC94:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BCA4;
      }
      goto L_08A0BC9C;
    }
L_08A0BC9C:
    ctx.gpr[31] = (0x08A0BCA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08A0BCA4u) goto L_08A0BCA4;
    return;
L_08A0BCA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BCB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0BCD4u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 20u, 0x08AC42F8u>(ctx, &aot_mem) && ctx.pc == 0x08A0BCD4u) goto L_08A0BCD4;
    return;
L_08A0BCD4:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BD2C;
      }
      goto L_08A0BCFC;
    }
L_08A0BCFC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[31] = (0x08A0BD14u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A0BD14u) goto L_08A0BD14;
    return;
L_08A0BD14:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A0BD34;
      }
      goto L_08A0BD24;
    }
L_08A0BD24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BE34;
      }
      goto L_08A0BD2C;
    }
L_08A0BD2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BE48;
      }
      goto L_08A0BD34;
    }
L_08A0BD34:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (2277u << 16u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21984));
      if (branch_taken) {
          goto L_08A0BD8C;
      }
      goto L_08A0BD48;
    }
L_08A0BD48:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    goto L_08A0BD4C;
L_08A0BD4C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BD8C;
      }
      goto L_08A0BD6C;
    }
L_08A0BD6C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BD8C;
      }
      goto L_08A0BD7C;
    }
L_08A0BD7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A0BD4C;
      }
      goto L_08A0BD8C;
    }
L_08A0BD8C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(50)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(51)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(53)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(60))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(62))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A0BE48;
      }
      goto L_08A0BE34;
    }
L_08A0BE34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0BE48;
      }
      goto L_08A0BE40;
    }
L_08A0BE40:
    ctx.gpr[31] = (0x08A0BE48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 13u, 0x08A0C3ACu>(ctx, &aot_mem) && ctx.pc == 0x08A0BE48u) goto L_08A0BE48;
    return;
L_08A0BE48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BE58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0BE88u);
    ctx.gpr[4] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08A0BE88u) goto L_08A0BE88;
    return;
L_08A0BE88:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[31] = (0x08A0BE98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08A0BE98u) goto L_08A0BE98;
    return;
L_08A0BE98:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A0BECC;
      }
      goto L_08A0BEA4;
    }
L_08A0BEA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A0BEC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0B910;
L_08A0BEC8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0BECC;
L_08A0BECC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0BEDCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 131u, 0x08AC5034u>(ctx, &aot_mem) && ctx.pc == 0x08A0BEDCu) goto L_08A0BEDC;
    return;
L_08A0BEDC:
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
L_08A0BEF4:
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
          goto L_08A0BF78;
      }
      goto L_08A0BF48;
    }
L_08A0BF48:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0BF5Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A0BF5Cu) goto L_08A0BF5C;
    return;
L_08A0BF5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A0BF70u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 37u, 0x08A0C574u>(ctx, &aot_mem) && ctx.pc == 0x08A0BF70u) goto L_08A0BF70;
    return;
L_08A0BF70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A0BFB8;
      }
      goto L_08A0BF78;
    }
L_08A0BF78:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0BF8Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A0BF8Cu) goto L_08A0BF8C;
    return;
L_08A0BF8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[31] = (0x08A0BFA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 114u, 0x08AC4E74u>(ctx, &aot_mem) && ctx.pc == 0x08A0BFA4u) goto L_08A0BFA4;
    return;
L_08A0BFA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0BFB8u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 16u, 0x08A0C444u>(ctx, &aot_mem) && ctx.pc == 0x08A0BFB8u) goto L_08A0BFB8;
    return;
L_08A0BFB8:
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
L_08A0BFD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] & 1u);
    ctx.pc = 0x08A0C000u; return;
}

void recomp_unit_0129(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0129_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_129(Runtime &runtime) {
    runtime.register_generated_unit(129u, 0x08A08000u, 16384u, &recomp_unit_0129, &recomp_unit_0129_entry);
    runtime.register_function(0x08A08000u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08014u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08040u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08058u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08068u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0806Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A080C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A080D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A080E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A080E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A080ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A080FCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08100u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08110u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08118u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08138u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08150u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08160u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08168u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08178u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08180u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08200u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08204u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08208u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08210u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08218u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08224u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0822Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08234u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0823Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08250u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08258u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08260u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08268u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08270u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08278u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08280u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08288u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08294u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0829Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A082A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A082ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A082D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A082E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0833Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08340u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08398u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A083A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A083E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08408u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08414u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08420u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08434u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0843Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08444u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0844Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08454u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08464u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08478u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08488u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08494u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A084A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A084B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A084BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A084F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08500u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0851Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0852Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08538u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0854Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08558u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08560u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08580u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08588u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0859Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A085ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A085B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A085CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A085D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A085E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08600u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08618u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08640u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08664u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0866Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08678u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0868Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0869Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A086ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A086B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A086B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A086BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A086E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A086F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08700u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08708u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08710u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08724u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08734u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08740u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08754u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08760u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08768u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08784u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0879Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A087C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A087D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A087E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A087F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A087F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08800u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08808u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0881Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0882Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08838u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0884Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08858u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08860u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08880u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0889Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08918u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0893Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08954u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0895Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A089B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A089BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A089D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A089F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A089FCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A28u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A38u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A44u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A88u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AA8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08ABCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AC4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AD0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AFCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B38u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B4Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B5Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B68u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B74u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B90u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B98u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BCCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BD4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BDCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BE8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BF0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BFCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C20u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C38u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C48u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C60u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C70u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C78u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C80u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C90u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CB0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CC4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D04u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D4Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D58u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D64u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D68u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D74u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D88u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D90u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08DA4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08DB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08DC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08DCCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08DD4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08DD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08DE0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08DECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08DF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E00u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E10u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E58u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E70u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EA8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EB0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08ECCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08ED8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EDCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EE0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EE8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EFCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F04u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F58u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F8Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F90u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F94u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FCCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FD4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09000u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09018u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09020u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09030u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09038u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09048u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09064u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09070u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09084u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09094u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090FCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0911Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09124u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09138u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09140u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09164u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0916Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09174u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09188u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A091ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A091E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09200u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0921Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09224u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0922Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09234u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09240u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09248u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09260u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09278u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09280u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0928Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A092CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A092DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A092ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A092F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A092F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A092FCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09304u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09318u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09320u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09328u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09358u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09364u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09398u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09408u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09448u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09454u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09488u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09498u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09504u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09508u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09518u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09544u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09568u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09570u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09574u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09594u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0959Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A095ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A095E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A095ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09610u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0962Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09640u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0964Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09658u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09660u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0966Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09678u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09680u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09688u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09740u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09758u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09770u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09800u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09808u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0983Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09844u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0984Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09864u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0986Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09880u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09890u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A098A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A098B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A098B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A098CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A098DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A098F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09908u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09918u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09920u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09934u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09944u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0995Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0996Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09974u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09990u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A099A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A099B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A099D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A099DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A099F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A08u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A20u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A34u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A44u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A4Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A54u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A90u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09AB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09AC4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09AD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09AE8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09AF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B08u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B38u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B44u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B80u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09BC4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09BD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C18u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C4Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C54u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C60u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C68u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C74u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C8Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09CACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09CB8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09CC4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09CD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09CF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D10u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D20u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D34u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D5Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DA4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DBCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DCCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E00u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E10u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E40u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E64u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E78u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E88u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E94u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09EA8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09EB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09EBCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09ECCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09EE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09EECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F00u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F10u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F30u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F44u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F54u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F5Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F74u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F88u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F90u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09FA8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09FBCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09FCCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09FD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09FECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09FF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A000u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A008u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A010u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A018u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A02Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A03Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A048u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A05Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A068u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A070u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A078u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A080u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A094u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A10Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A114u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A134u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A13Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A144u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A154u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A16Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A17Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A188u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A19Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A200u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A210u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A248u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A258u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A264u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A26Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A27Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A28Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A2A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A2B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A2C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A2D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A2E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A2F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A304u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A30Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A310u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A330u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A34Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A35Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A36Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A37Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A384u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A38Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A420u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A428u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A444u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A454u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A460u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A474u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A480u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A488u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A4A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A4B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A4C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A4D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A4E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A4F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A500u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A508u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A534u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A54Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A56Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A588u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A594u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A60Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A620u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A650u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A660u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A66Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A674u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A684u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A68Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A6A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A6A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A6B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A6B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A6C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A6CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A6D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A6DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A6E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A6F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A704u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A70Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A744u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A78Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A79Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A828u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A84Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A864u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A870u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A884u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A890u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A8CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A8E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A8F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A904u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A944u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A974u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A99Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA04u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA10u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA5Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA80u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA94u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AAA4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AAB8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AAC8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AAD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AADCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AAE0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AAE8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB08u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB18u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB20u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB30u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB40u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB60u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ABB8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ABC8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ABD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ABE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ABF0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC18u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC4Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC5Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ACC8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ACE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ACF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ACF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD8Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD94u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ADA4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ADB8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE44u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE4Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE54u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE68u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE78u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE90u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AEB8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AEC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AEC8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AEDCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AEECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AEF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF04u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF10u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF28u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF34u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF40u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF48u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF58u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF88u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AFA8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AFC8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B000u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B00Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B020u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B024u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B02Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B038u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B04Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B050u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B058u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B064u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B078u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B07Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B084u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B090u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B0A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B0B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B0BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B0E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B0FCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B104u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B10Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B11Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B124u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B12Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B170u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B17Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B190u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B1DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B21Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B224u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B230u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B234u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B23Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B244u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B2A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B2B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B2B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B2C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B2D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B2E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B2E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B2F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B2F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B318u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B344u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B350u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B364u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B368u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B370u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B37Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B390u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B394u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B39Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B3A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B3BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B3C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B3D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B3F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B414u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B41Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B424u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B430u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B43Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B450u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B458u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B464u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B470u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B478u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B4BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B4C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B4CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B4D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B4DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B580u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B590u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B598u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B5A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B5B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B5C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B5C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B5D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B630u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B638u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B640u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B65Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B70Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B72Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B748u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B768u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B794u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B7B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B7C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B7C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B7D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B7E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B7F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B7F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B808u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B830u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B844u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B858u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B874u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B884u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B898u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B8B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B8C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B8D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B8F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B910u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B9BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B9E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B9F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BA08u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BA20u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BA38u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BA3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BA40u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BA48u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BA60u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BA68u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BA70u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BA80u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BA90u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BAA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BAB0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BAC8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BAD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BAE8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BAF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB08u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB28u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB64u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB98u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BBB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BBC8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BBD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BBE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC08u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC38u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC54u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC68u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC70u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC90u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC94u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BCA4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BCB8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BCD4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BCFCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD34u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD48u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD4Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD8Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE34u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE40u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE48u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE58u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE88u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE98u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BEA4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BEC8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BECCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BEDCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BEF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF48u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF5Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF70u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF78u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF8Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BFA4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BFB8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BFD0u, &recomp_unit_0129, "recomp_unit_0129");
}
} // namespace psprecomp
