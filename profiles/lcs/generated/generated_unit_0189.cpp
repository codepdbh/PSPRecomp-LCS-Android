#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0189[4095] = {
    1, 0, 0, 0, 2, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8,
    0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30,
    0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 33, 0, 0, 0,
    34, 0, 0, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40,
    0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0,
    45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0,
    79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 90, 0,
    91, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 98, 0, 99, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110,
    0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 113, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 123,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130,
    0, 131, 132, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 135, 136, 0, 0, 0, 0, 137, 138, 0, 0, 0, 0, 139, 0, 0, 0, 140,
    0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148,
    0, 149, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 154, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 157, 158, 159, 0, 0, 160,
    0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 174, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 181, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0,
    0, 0, 189, 0, 190, 0, 0, 191, 0, 0, 192, 0, 193, 0, 0, 0, 0, 194, 195, 0, 0, 0, 0, 0, 0, 0, 196, 197, 0, 0, 198, 0,
    199, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 210, 211, 0, 0, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0,
    219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 0, 0, 0, 234, 235, 236, 0, 0, 237, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 242, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 250,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 253, 0, 0, 254, 0, 255, 0, 256, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269,
    0, 0, 270, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0,
    0, 0, 276, 0, 277, 0, 278, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 281, 282, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 285, 0, 0,
    0, 0, 286, 0, 287, 0, 288, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 293, 0, 294, 295, 0,
    0, 296, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0,
    307, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 318, 319, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 325, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0,
    0, 0, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 0, 337, 0, 338, 0, 339, 0, 0, 340, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 350, 0, 0, 0, 351,
    0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 358, 359, 0, 360, 0, 361,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 368, 0, 369, 0, 0, 0,
    370, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0,
    0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0,
    0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 396, 0, 0, 397, 0, 0, 0, 398, 0, 399,
    0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0,
    0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 412, 0, 0, 0, 413, 0, 414, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418,
    0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0,
    0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 0,
    433, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0,
    0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 448, 0, 449,
    0, 450, 0, 451, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 455, 456, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0,
    0, 460, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 465, 0, 466, 0, 467, 468, 0, 469, 0, 0, 0, 0, 0,
    470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 476, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0,
    0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 482, 0, 0, 483, 0, 484, 485, 0, 486, 0, 487, 0, 0, 0, 0, 488, 0, 0,
    0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0,
    0, 495, 0, 496, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 502, 0, 0, 503, 0, 0, 0, 0,
    0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 508, 509, 0, 510, 0, 511, 0, 0, 0, 0, 512, 0, 0,
    0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 515, 516, 0, 517, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0,
    0, 521, 0, 522, 523, 0, 0, 524, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 529, 530, 0, 0, 531,
    0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0, 540, 0, 541, 0, 0, 542,
    0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 545, 546, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 552, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555,
    0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 562, 0, 0, 563, 0, 0,
    0, 564, 0, 0, 565, 0, 566, 0, 0, 567, 0, 0, 0, 0, 568, 0, 569, 570, 0, 571, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 574,
    0, 575, 576, 0, 0, 0, 577, 578, 0, 579, 0, 580, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 585, 0, 586, 0, 0, 0, 0,
    587, 0, 0, 588, 0, 589, 590, 0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 593, 0, 0, 594, 0, 595, 0, 0, 0, 596, 0, 0, 597, 0, 0,
    0, 598, 0, 599, 0, 0, 600, 0, 601, 0, 0, 602, 0, 0, 0, 603, 0, 0, 604, 0, 605, 606, 0, 607, 0, 0, 608, 0, 0, 609, 0, 0,
    0, 610, 0, 0, 611, 0, 612, 613, 0, 0, 0, 0, 614, 0, 0, 0, 615, 0, 616, 0, 617, 0, 0, 618, 0, 619, 620, 0, 621, 622, 0, 623,
    0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 0, 0, 627, 0,
    0, 628, 0, 0, 629, 0, 630, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0,
    634, 0, 635, 0, 636, 0, 637, 0, 638, 0, 0, 0, 0, 639, 640, 0, 641, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0, 0, 0, 647, 0,
    0, 0, 648, 0, 649, 0, 650, 0, 0, 651, 0, 652, 653, 0, 654, 0, 655, 0, 0, 656, 0, 657, 0, 658, 0, 659, 0, 0, 0, 0, 0, 660,
    0, 0, 661, 662, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 669, 0, 0, 670, 0, 671, 672, 0, 0, 0, 0, 0, 0,
    0, 673, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 676, 0, 677, 0, 678, 0, 679, 0, 0, 680, 0, 0, 681, 0, 682, 683, 0, 0, 0, 0,
    0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0,
    0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0,
    0, 693, 0, 0, 0, 694, 0, 695, 0, 696, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 701, 0,
    702, 703, 0, 0, 704, 0, 0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 0,
    710, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 715, 0,
    716, 0, 0, 717, 0, 718, 0, 719, 0, 0, 0, 720, 0, 0, 721, 0, 0, 722, 0, 0, 723, 0, 724, 0, 0, 725, 0, 726, 0, 0, 0, 727,
    0, 0, 728, 0, 0, 0, 729, 0, 0, 730, 0, 0, 731, 0, 732, 0, 0, 733, 0, 734, 0, 735, 0, 736, 0, 737, 0, 738, 0, 0, 0, 0,
    0, 0, 739, 0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 743, 744, 0, 745, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0,
    0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 753,
    0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0,
    757, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 0, 0, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0,
    0, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0, 0, 0, 765, 0, 0, 766, 0, 0, 767, 0, 768, 0, 0, 769, 0, 0, 0, 0, 0, 0, 770,
    0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 773, 0, 774, 0, 0, 0, 0, 0, 775, 0, 0, 776, 777, 0, 778, 0, 779, 0, 0,
    0, 0, 780, 0, 781, 0, 0, 0, 782, 0, 0, 783, 0, 784, 0, 0, 0, 785, 0, 786, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    790, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 793, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 797, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 799, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 802, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 806, 0, 0, 0, 0, 0,
    807, 0, 0, 808, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 814, 0, 815, 0, 816, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 818, 0, 0, 0, 819,
    0, 820, 0, 0, 821, 0, 0, 822, 0, 823, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 826,
    0, 0, 0, 0, 0, 0, 827, 828, 0, 829, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 0, 831, 832, 0, 833, 0,
    0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 835, 836, 0, 837, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 841, 0, 0, 842, 0, 0, 843, 0, 844, 845, 0, 0,
    0, 0, 0, 0, 0, 846, 0, 0, 0, 847, 0, 0, 0, 848, 0, 0, 849, 0, 850, 0, 851, 0, 852, 0, 0, 853, 0, 0, 854, 0, 855, 856,
    0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 860, 0, 0, 0, 861,
    0, 0, 0, 862, 0, 0, 863, 0, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 866, 0, 0, 867, 0, 868, 0, 0, 0, 0, 0,
    0, 869, 870, 0, 871, 0, 872, 0, 0, 873, 0, 0, 0, 0, 0, 0, 0, 0, 874, 0, 0, 875, 0, 0, 876, 0, 877, 0, 0, 0, 0, 0,
    0, 878, 879, 0, 880, 0, 0, 0, 0, 0, 0, 881, 0, 0, 882, 0, 0, 0, 883, 0, 0, 0, 884, 0, 885, 0, 0, 0, 886, 0, 0, 0,
    0, 887, 888, 0, 889, 890, 0, 891, 0, 0, 892, 0, 0, 0, 893, 0, 894, 0, 0, 895, 0, 0, 0, 896, 0, 0, 0, 897, 0, 898, 0, 0,
    0, 0, 899, 0, 0, 0, 0, 900, 0, 901, 0, 0, 0, 902, 0, 903, 0, 0, 0, 0, 904, 0, 905, 0, 0, 0, 906, 0, 907, 908, 0, 0,
    909, 0, 0, 0, 910, 0, 911, 0, 0, 0, 0, 912, 0, 913, 0, 0, 0, 914, 0, 915, 916, 0, 0, 917, 0, 0, 0, 0, 918, 0, 0, 0,
    0, 919, 0, 920, 0, 0, 0, 0, 921, 0, 0, 922, 0, 0, 0, 923, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 924, 0, 0, 0, 0, 0, 0, 0, 0, 0, 925, 0, 0, 0, 926, 0, 0, 0, 927, 0, 0, 0, 0, 0, 928, 929, 0, 0, 930, 0,
    931, 0, 0, 932, 0, 933, 0, 0, 934, 0, 935, 0, 936, 0, 937, 0, 938, 0, 0, 939, 0, 940, 0, 941, 0, 942, 0, 943, 0, 0, 944,
};
void recomp_unit_0189_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AF8000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0189[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AF8000;
    case 2u: goto L_08AF8010;
    case 3u: goto L_08AF8014;
    case 4u: goto L_08AF8020;
    case 5u: goto L_08AF8040;
    case 6u: goto L_08AF8054;
    case 7u: goto L_08AF8060;
    case 8u: goto L_08AF807C;
    case 9u: goto L_08AF8084;
    case 10u: goto L_08AF8094;
    case 11u: goto L_08AF80B0;
    case 12u: goto L_08AF80E0;
    case 13u: goto L_08AF80EC;
    case 14u: goto L_08AF80FC;
    case 15u: goto L_08AF8110;
    case 16u: goto L_08AF8124;
    case 17u: goto L_08AF8140;
    case 18u: goto L_08AF8164;
    case 19u: goto L_08AF8174;
    case 20u: goto L_08AF8180;
    case 21u: goto L_08AF819C;
    case 22u: goto L_08AF81AC;
    case 23u: goto L_08AF81BC;
    case 24u: goto L_08AF81D8;
    case 25u: goto L_08AF81E0;
    case 26u: goto L_08AF822C;
    case 27u: goto L_08AF8240;
    case 28u: goto L_08AF8250;
    case 29u: goto L_08AF826C;
    case 30u: goto L_08AF827C;
    case 31u: goto L_08AF829C;
    case 32u: goto L_08AF82EC;
    case 33u: goto L_08AF82F0;
    case 34u: goto L_08AF8300;
    case 35u: goto L_08AF830C;
    case 36u: goto L_08AF8310;
    case 37u: goto L_08AF8390;
    case 38u: goto L_08AF83DC;
    case 39u: goto L_08AF83F0;
    case 40u: goto L_08AF847C;
    case 41u: goto L_08AF848C;
    case 42u: goto L_08AF84D0;
    case 43u: goto L_08AF84DC;
    case 44u: goto L_08AF84F8;
    case 45u: goto L_08AF8500;
    case 46u: goto L_08AF8508;
    case 47u: goto L_08AF8524;
    case 48u: goto L_08AF8534;
    case 49u: goto L_08AF854C;
    case 50u: goto L_08AF8554;
    case 51u: goto L_08AF8560;
    case 52u: goto L_08AF8590;
    case 53u: goto L_08AF85A8;
    case 54u: goto L_08AF85B0;
    case 55u: goto L_08AF85BC;
    case 56u: goto L_08AF85CC;
    case 57u: goto L_08AF85D4;
    case 58u: goto L_08AF85DC;
    case 59u: goto L_08AF85E8;
    case 60u: goto L_08AF8608;
    case 61u: goto L_08AF8610;
    case 62u: goto L_08AF8628;
    case 63u: goto L_08AF8630;
    case 64u: goto L_08AF8650;
    case 65u: goto L_08AF8658;
    case 66u: goto L_08AF8660;
    case 67u: goto L_08AF8688;
    case 68u: goto L_08AF8690;
    case 69u: goto L_08AF869C;
    case 70u: goto L_08AF86C4;
    case 71u: goto L_08AF86CC;
    case 72u: goto L_08AF86D8;
    case 73u: goto L_08AF8720;
    case 74u: goto L_08AF8728;
    case 75u: goto L_08AF872C;
    case 76u: goto L_08AF873C;
    case 77u: goto L_08AF875C;
    case 78u: goto L_08AF8778;
    case 79u: goto L_08AF8780;
    case 80u: goto L_08AF878C;
    case 81u: goto L_08AF87CC;
    case 82u: goto L_08AF87D4;
    case 83u: goto L_08AF87D8;
    case 84u: goto L_08AF87E8;
    case 85u: goto L_08AF8838;
    case 86u: goto L_08AF8840;
    case 87u: goto L_08AF8844;
    case 88u: goto L_08AF8854;
    case 89u: goto L_08AF8874;
    case 90u: goto L_08AF8878;
    case 91u: goto L_08AF8880;
    case 92u: goto L_08AF8888;
    case 93u: goto L_08AF8890;
    case 94u: goto L_08AF88C0;
    case 95u: goto L_08AF88C8;
    case 96u: goto L_08AF88CC;
    case 97u: goto L_08AF88DC;
    case 98u: goto L_08AF890C;
    case 99u: goto L_08AF8914;
    case 100u: goto L_08AF8918;
    case 101u: goto L_08AF8928;
    case 102u: goto L_08AF8950;
    case 103u: goto L_08AF8958;
    case 104u: goto L_08AF8964;
    case 105u: goto L_08AF8974;
    case 106u: goto L_08AF8980;
    case 107u: goto L_08AF89B8;
    case 108u: goto L_08AF89C4;
    case 109u: goto L_08AF89DC;
    case 110u: goto L_08AF89FC;
    case 111u: goto L_08AF8A04;
    case 112u: goto L_08AF8A0C;
    case 113u: goto L_08AF8A28;
    case 114u: goto L_08AF8A2C;
    case 115u: goto L_08AF8A48;
    case 116u: goto L_08AF8A9C;
    case 117u: goto L_08AF8AA4;
    case 118u: goto L_08AF8AAC;
    case 119u: goto L_08AF8AB8;
    case 120u: goto L_08AF8AC0;
    case 121u: goto L_08AF8AF0;
    case 122u: goto L_08AF8AF8;
    case 123u: goto L_08AF8AFC;
    case 124u: goto L_08AF8B10;
    case 125u: goto L_08AF8B2C;
    case 126u: goto L_08AF8B40;
    case 127u: goto L_08AF8B4C;
    case 128u: goto L_08AF8B64;
    case 129u: goto L_08AF8B70;
    case 130u: goto L_08AF8B7C;
    case 131u: goto L_08AF8B84;
    case 132u: goto L_08AF8B88;
    case 133u: goto L_08AF8B9C;
    case 134u: goto L_08AF8BA4;
    case 135u: goto L_08AF8BBC;
    case 136u: goto L_08AF8BC0;
    case 137u: goto L_08AF8BD4;
    case 138u: goto L_08AF8BD8;
    case 139u: goto L_08AF8BEC;
    case 140u: goto L_08AF8BFC;
    case 141u: goto L_08AF8C08;
    case 142u: goto L_08AF8C20;
    case 143u: goto L_08AF8C34;
    case 144u: goto L_08AF8C3C;
    case 145u: goto L_08AF8C4C;
    case 146u: goto L_08AF8C64;
    case 147u: goto L_08AF8C70;
    case 148u: goto L_08AF8C7C;
    case 149u: goto L_08AF8C84;
    case 150u: goto L_08AF8C90;
    case 151u: goto L_08AF8C9C;
    case 152u: goto L_08AF8CA4;
    case 153u: goto L_08AF8CB8;
    case 154u: goto L_08AF8CBC;
    case 155u: goto L_08AF8CC4;
    case 156u: goto L_08AF8CD0;
    case 157u: goto L_08AF8CE8;
    case 158u: goto L_08AF8CEC;
    case 159u: goto L_08AF8CF0;
    case 160u: goto L_08AF8CFC;
    case 161u: goto L_08AF8D08;
    case 162u: goto L_08AF8D14;
    case 163u: goto L_08AF8D20;
    case 164u: goto L_08AF8D2C;
    case 165u: goto L_08AF8D38;
    case 166u: goto L_08AF8D44;
    case 167u: goto L_08AF8D54;
    case 168u: goto L_08AF8D5C;
    case 169u: goto L_08AF8D80;
    case 170u: goto L_08AF8D88;
    case 171u: goto L_08AF8D90;
    case 172u: goto L_08AF8D98;
    case 173u: goto L_08AF8DA0;
    case 174u: goto L_08AF8DAC;
    case 175u: goto L_08AF8DB8;
    case 176u: goto L_08AF8DC0;
    case 177u: goto L_08AF8DCC;
    case 178u: goto L_08AF8DD8;
    case 179u: goto L_08AF8DE0;
    case 180u: goto L_08AF8DE8;
    case 181u: goto L_08AF8DF8;
    case 182u: goto L_08AF8E08;
    case 183u: goto L_08AF8E28;
    case 184u: goto L_08AF8E38;
    case 185u: goto L_08AF8E48;
    case 186u: goto L_08AF8E54;
    case 187u: goto L_08AF8E68;
    case 188u: goto L_08AF8E78;
    case 189u: goto L_08AF8E88;
    case 190u: goto L_08AF8E90;
    case 191u: goto L_08AF8E9C;
    case 192u: goto L_08AF8EA8;
    case 193u: goto L_08AF8EB0;
    case 194u: goto L_08AF8EC4;
    case 195u: goto L_08AF8EC8;
    case 196u: goto L_08AF8EE8;
    case 197u: goto L_08AF8EEC;
    case 198u: goto L_08AF8EF8;
    case 199u: goto L_08AF8F00;
    case 200u: goto L_08AF8F0C;
    case 201u: goto L_08AF8F18;
    case 202u: goto L_08AF8F30;
    case 203u: goto L_08AF8F3C;
    case 204u: goto L_08AF8F44;
    case 205u: goto L_08AF8F4C;
    case 206u: goto L_08AF8F60;
    case 207u: goto L_08AF8F68;
    case 208u: goto L_08AF8F70;
    case 209u: goto L_08AF8F88;
    case 210u: goto L_08AF8F98;
    case 211u: goto L_08AF8F9C;
    case 212u: goto L_08AF8FAC;
    case 213u: goto L_08AF8FB4;
    case 214u: goto L_08AF8FC0;
    case 215u: goto L_08AF8FC8;
    case 216u: goto L_08AF8FD4;
    case 217u: goto L_08AF8FF0;
    case 218u: goto L_08AF8FF8;
    case 219u: goto L_08AF9000;
    case 220u: goto L_08AF900C;
    case 221u: goto L_08AF901C;
    case 222u: goto L_08AF9030;
    case 223u: goto L_08AF903C;
    case 224u: goto L_08AF9058;
    case 225u: goto L_08AF9060;
    case 226u: goto L_08AF9088;
    case 227u: goto L_08AF9094;
    case 228u: goto L_08AF90A8;
    case 229u: goto L_08AF90B0;
    case 230u: goto L_08AF90B8;
    case 231u: goto L_08AF90C4;
    case 232u: goto L_08AF90D0;
    case 233u: goto L_08AF90FC;
    case 234u: goto L_08AF9118;
    case 235u: goto L_08AF911C;
    case 236u: goto L_08AF9120;
    case 237u: goto L_08AF912C;
    case 238u: goto L_08AF9134;
    case 239u: goto L_08AF913C;
    case 240u: goto L_08AF9160;
    case 241u: goto L_08AF9168;
    case 242u: goto L_08AF9174;
    case 243u: goto L_08AF9180;
    case 244u: goto L_08AF91A4;
    case 245u: goto L_08AF91B0;
    case 246u: goto L_08AF91CC;
    case 247u: goto L_08AF91D0;
    case 248u: goto L_08AF91D8;
    case 249u: goto L_08AF91F0;
    case 250u: goto L_08AF91FC;
    case 251u: goto L_08AF9224;
    case 252u: goto L_08AF922C;
    case 253u: goto L_08AF9238;
    case 254u: goto L_08AF9244;
    case 255u: goto L_08AF924C;
    case 256u: goto L_08AF9254;
    case 257u: goto L_08AF9260;
    case 258u: goto L_08AF9270;
    case 259u: goto L_08AF92A0;
    case 260u: goto L_08AF92A8;
    case 261u: goto L_08AF92C4;
    case 262u: goto L_08AF92DC;
    case 263u: goto L_08AF92E8;
    case 264u: goto L_08AF9324;
    case 265u: goto L_08AF9344;
    case 266u: goto L_08AF934C;
    case 267u: goto L_08AF9354;
    case 268u: goto L_08AF9360;
    case 269u: goto L_08AF937C;
    case 270u: goto L_08AF9388;
    case 271u: goto L_08AF938C;
    case 272u: goto L_08AF93A4;
    case 273u: goto L_08AF93AC;
    case 274u: goto L_08AF93B8;
    case 275u: goto L_08AF93EC;
    case 276u: goto L_08AF9408;
    case 277u: goto L_08AF9410;
    case 278u: goto L_08AF9418;
    case 279u: goto L_08AF9424;
    case 280u: goto L_08AF9438;
    case 281u: goto L_08AF9444;
    case 282u: goto L_08AF9448;
    case 283u: goto L_08AF9460;
    case 284u: goto L_08AF9468;
    case 285u: goto L_08AF9474;
    case 286u: goto L_08AF9488;
    case 287u: goto L_08AF9490;
    case 288u: goto L_08AF9498;
    case 289u: goto L_08AF94A0;
    case 290u: goto L_08AF94B0;
    case 291u: goto L_08AF94D8;
    case 292u: goto L_08AF94E0;
    case 293u: goto L_08AF94EC;
    case 294u: goto L_08AF94F4;
    case 295u: goto L_08AF94F8;
    case 296u: goto L_08AF9504;
    case 297u: goto L_08AF9510;
    case 298u: goto L_08AF9518;
    case 299u: goto L_08AF9554;
    case 300u: goto L_08AF9570;
    case 301u: goto L_08AF9588;
    case 302u: goto L_08AF95A4;
    case 303u: goto L_08AF95B4;
    case 304u: goto L_08AF95CC;
    case 305u: goto L_08AF95DC;
    case 306u: goto L_08AF95EC;
    case 307u: goto L_08AF9600;
    case 308u: goto L_08AF9604;
    case 309u: goto L_08AF9624;
    case 310u: goto L_08AF9634;
    case 311u: goto L_08AF9644;
    case 312u: goto L_08AF9668;
    case 313u: goto L_08AF9680;
    case 314u: goto L_08AF9694;
    case 315u: goto L_08AF96A0;
    case 316u: goto L_08AF96BC;
    case 317u: goto L_08AF96C8;
    case 318u: goto L_08AF96D0;
    case 319u: goto L_08AF96D4;
    case 320u: goto L_08AF96E0;
    case 321u: goto L_08AF96EC;
    case 322u: goto L_08AF9700;
    case 323u: goto L_08AF971C;
    case 324u: goto L_08AF9728;
    case 325u: goto L_08AF9730;
    case 326u: goto L_08AF9734;
    case 327u: goto L_08AF9740;
    case 328u: goto L_08AF974C;
    case 329u: goto L_08AF9760;
    case 330u: goto L_08AF9774;
    case 331u: goto L_08AF978C;
    case 332u: goto L_08AF9794;
    case 333u: goto L_08AF979C;
    case 334u: goto L_08AF97B0;
    case 335u: goto L_08AF97B8;
    case 336u: goto L_08AF97C0;
    case 337u: goto L_08AF97D8;
    case 338u: goto L_08AF97E0;
    case 339u: goto L_08AF97E8;
    case 340u: goto L_08AF97F4;
    case 341u: goto L_08AF9800;
    case 342u: goto L_08AF981C;
    case 343u: goto L_08AF9824;
    case 344u: goto L_08AF982C;
    case 345u: goto L_08AF9834;
    case 346u: goto L_08AF983C;
    case 347u: goto L_08AF984C;
    case 348u: goto L_08AF985C;
    case 349u: goto L_08AF9864;
    case 350u: goto L_08AF986C;
    case 351u: goto L_08AF987C;
    case 352u: goto L_08AF9884;
    case 353u: goto L_08AF98A0;
    case 354u: goto L_08AF98BC;
    case 355u: goto L_08AF98C4;
    case 356u: goto L_08AF98D4;
    case 357u: goto L_08AF98E0;
    case 358u: goto L_08AF98E8;
    case 359u: goto L_08AF98EC;
    case 360u: goto L_08AF98F4;
    case 361u: goto L_08AF98FC;
    case 362u: goto L_08AF9910;
    case 363u: goto L_08AF9928;
    case 364u: goto L_08AF9930;
    case 365u: goto L_08AF9944;
    case 366u: goto L_08AF994C;
    case 367u: goto L_08AF995C;
    case 368u: goto L_08AF9968;
    case 369u: goto L_08AF9970;
    case 370u: goto L_08AF9980;
    case 371u: goto L_08AF9988;
    case 372u: goto L_08AF9994;
    case 373u: goto L_08AF99AC;
    case 374u: goto L_08AF99B4;
    case 375u: goto L_08AF99BC;
    case 376u: goto L_08AF99E4;
    case 377u: goto L_08AF9A08;
    case 378u: goto L_08AF9A2C;
    case 379u: goto L_08AF9A54;
    case 380u: goto L_08AF9A80;
    case 381u: goto L_08AF9AA4;
    case 382u: goto L_08AF9AB4;
    case 383u: goto L_08AF9ABC;
    case 384u: goto L_08AF9ACC;
    case 385u: goto L_08AF9AD8;
    case 386u: goto L_08AF9AE0;
    case 387u: goto L_08AF9B0C;
    case 388u: goto L_08AF9B38;
    case 389u: goto L_08AF9B48;
    case 390u: goto L_08AF9B68;
    case 391u: goto L_08AF9B70;
    case 392u: goto L_08AF9B8C;
    case 393u: goto L_08AF9BB0;
    case 394u: goto L_08AF9BC0;
    case 395u: goto L_08AF9BD0;
    case 396u: goto L_08AF9BD8;
    case 397u: goto L_08AF9BE4;
    case 398u: goto L_08AF9BF4;
    case 399u: goto L_08AF9BFC;
    case 400u: goto L_08AF9C04;
    case 401u: goto L_08AF9C3C;
    case 402u: goto L_08AF9C50;
    case 403u: goto L_08AF9C6C;
    case 404u: goto L_08AF9C74;
    case 405u: goto L_08AF9C88;
    case 406u: goto L_08AF9C9C;
    case 407u: goto L_08AF9CB0;
    case 408u: goto L_08AF9CC4;
    case 409u: goto L_08AF9CD8;
    case 410u: goto L_08AF9CE0;
    case 411u: goto L_08AF9D00;
    case 412u: goto L_08AF9D10;
    case 413u: goto L_08AF9D20;
    case 414u: goto L_08AF9D28;
    case 415u: goto L_08AF9D2C;
    case 416u: goto L_08AF9D34;
    case 417u: goto L_08AF9D58;
    case 418u: goto L_08AF9D7C;
    case 419u: goto L_08AF9D8C;
    case 420u: goto L_08AF9DB4;
    case 421u: goto L_08AF9DC4;
    case 422u: goto L_08AF9DEC;
    case 423u: goto L_08AF9E10;
    case 424u: goto L_08AF9E38;
    case 425u: goto L_08AF9E40;
    case 426u: goto L_08AF9E48;
    case 427u: goto L_08AF9E50;
    case 428u: goto L_08AF9E58;
    case 429u: goto L_08AF9E60;
    case 430u: goto L_08AF9E68;
    case 431u: goto L_08AF9E70;
    case 432u: goto L_08AF9E78;
    case 433u: goto L_08AF9E80;
    case 434u: goto L_08AF9E98;
    case 435u: goto L_08AF9EA4;
    case 436u: goto L_08AF9EC8;
    case 437u: goto L_08AF9ED4;
    case 438u: goto L_08AF9F48;
    case 439u: goto L_08AF9FC8;
    case 440u: goto L_08AF9FD0;
    case 441u: goto L_08AF9FF4;
    case 442u: goto L_08AFA018;
    case 443u: goto L_08AFA020;
    case 444u: goto L_08AFA030;
    case 445u: goto L_08AFA038;
    case 446u: goto L_08AFA05C;
    case 447u: goto L_08AFA06C;
    case 448u: goto L_08AFA074;
    case 449u: goto L_08AFA07C;
    case 450u: goto L_08AFA084;
    case 451u: goto L_08AFA08C;
    case 452u: goto L_08AFA094;
    case 453u: goto L_08AFA0A0;
    case 454u: goto L_08AFA0AC;
    case 455u: goto L_08AFA0C0;
    case 456u: goto L_08AFA0C4;
    case 457u: goto L_08AFA0CC;
    case 458u: goto L_08AFA0D4;
    case 459u: goto L_08AFA0F0;
    case 460u: goto L_08AFA104;
    case 461u: goto L_08AFA10C;
    case 462u: goto L_08AFA114;
    case 463u: goto L_08AFA138;
    case 464u: goto L_08AFA140;
    case 465u: goto L_08AFA14C;
    case 466u: goto L_08AFA154;
    case 467u: goto L_08AFA15C;
    case 468u: goto L_08AFA160;
    case 469u: goto L_08AFA168;
    case 470u: goto L_08AFA180;
    case 471u: goto L_08AFA188;
    case 472u: goto L_08AFA1A8;
    case 473u: goto L_08AFA1B4;
    case 474u: goto L_08AFA1C0;
    case 475u: goto L_08AFA1CC;
    case 476u: goto L_08AFA1D4;
    case 477u: goto L_08AFA1E0;
    case 478u: goto L_08AFA1E8;
    case 479u: goto L_08AFA204;
    case 480u: goto L_08AFA220;
    case 481u: goto L_08AFA228;
    case 482u: goto L_08AFA238;
    case 483u: goto L_08AFA244;
    case 484u: goto L_08AFA24C;
    case 485u: goto L_08AFA250;
    case 486u: goto L_08AFA258;
    case 487u: goto L_08AFA260;
    case 488u: goto L_08AFA274;
    case 489u: goto L_08AFA284;
    case 490u: goto L_08AFA2A0;
    case 491u: goto L_08AFA2A8;
    case 492u: goto L_08AFA2BC;
    case 493u: goto L_08AFA2E0;
    case 494u: goto L_08AFA2F0;
    case 495u: goto L_08AFA304;
    case 496u: goto L_08AFA30C;
    case 497u: goto L_08AFA318;
    case 498u: goto L_08AFA328;
    case 499u: goto L_08AFA340;
    case 500u: goto L_08AFA34C;
    case 501u: goto L_08AFA358;
    case 502u: goto L_08AFA360;
    case 503u: goto L_08AFA36C;
    case 504u: goto L_08AFA388;
    case 505u: goto L_08AFA3A0;
    case 506u: goto L_08AFA3A8;
    case 507u: goto L_08AFA3C0;
    case 508u: goto L_08AFA3CC;
    case 509u: goto L_08AFA3D0;
    case 510u: goto L_08AFA3D8;
    case 511u: goto L_08AFA3E0;
    case 512u: goto L_08AFA3F4;
    case 513u: goto L_08AFA410;
    case 514u: goto L_08AFA424;
    case 515u: goto L_08AFA434;
    case 516u: goto L_08AFA438;
    case 517u: goto L_08AFA440;
    case 518u: goto L_08AFA448;
    case 519u: goto L_08AFA45C;
    case 520u: goto L_08AFA478;
    case 521u: goto L_08AFA484;
    case 522u: goto L_08AFA48C;
    case 523u: goto L_08AFA490;
    case 524u: goto L_08AFA49C;
    case 525u: goto L_08AFA4A8;
    case 526u: goto L_08AFA4BC;
    case 527u: goto L_08AFA4D8;
    case 528u: goto L_08AFA4E4;
    case 529u: goto L_08AFA4EC;
    case 530u: goto L_08AFA4F0;
    case 531u: goto L_08AFA4FC;
    case 532u: goto L_08AFA508;
    case 533u: goto L_08AFA51C;
    case 534u: goto L_08AFA558;
    case 535u: goto L_08AFA580;
    case 536u: goto L_08AFA5A8;
    case 537u: goto L_08AFA5B8;
    case 538u: goto L_08AFA5D0;
    case 539u: goto L_08AFA5DC;
    case 540u: goto L_08AFA5E8;
    case 541u: goto L_08AFA5F0;
    case 542u: goto L_08AFA5FC;
    case 543u: goto L_08AFA618;
    case 544u: goto L_08AFA624;
    case 545u: goto L_08AFA62C;
    case 546u: goto L_08AFA630;
    case 547u: goto L_08AFA63C;
    case 548u: goto L_08AFA648;
    case 549u: goto L_08AFA65C;
    case 550u: goto L_08AFA6A8;
    case 551u: goto L_08AFA6B8;
    case 552u: goto L_08AFA6C4;
    case 553u: goto L_08AFA6CC;
    case 554u: goto L_08AFA6E4;
    case 555u: goto L_08AFA6FC;
    case 556u: goto L_08AFA710;
    case 557u: goto L_08AFA720;
    case 558u: goto L_08AFA730;
    case 559u: goto L_08AFA73C;
    case 560u: goto L_08AFA750;
    case 561u: goto L_08AFA758;
    case 562u: goto L_08AFA768;
    case 563u: goto L_08AFA774;
    case 564u: goto L_08AFA784;
    case 565u: goto L_08AFA790;
    case 566u: goto L_08AFA798;
    case 567u: goto L_08AFA7A4;
    case 568u: goto L_08AFA7B8;
    case 569u: goto L_08AFA7C0;
    case 570u: goto L_08AFA7C4;
    case 571u: goto L_08AFA7CC;
    case 572u: goto L_08AFA7DC;
    case 573u: goto L_08AFA7E8;
    case 574u: goto L_08AFA7FC;
    case 575u: goto L_08AFA804;
    case 576u: goto L_08AFA808;
    case 577u: goto L_08AFA818;
    case 578u: goto L_08AFA81C;
    case 579u: goto L_08AFA824;
    case 580u: goto L_08AFA82C;
    case 581u: goto L_08AFA834;
    case 582u: goto L_08AFA864;
    case 583u: goto L_08AFA8C8;
    case 584u: goto L_08AFA8D8;
    case 585u: goto L_08AFA8E4;
    case 586u: goto L_08AFA8EC;
    case 587u: goto L_08AFA900;
    case 588u: goto L_08AFA90C;
    case 589u: goto L_08AFA914;
    case 590u: goto L_08AFA918;
    case 591u: goto L_08AFA928;
    case 592u: goto L_08AFA934;
    case 593u: goto L_08AFA944;
    case 594u: goto L_08AFA950;
    case 595u: goto L_08AFA958;
    case 596u: goto L_08AFA968;
    case 597u: goto L_08AFA974;
    case 598u: goto L_08AFA984;
    case 599u: goto L_08AFA98C;
    case 600u: goto L_08AFA998;
    case 601u: goto L_08AFA9A0;
    case 602u: goto L_08AFA9AC;
    case 603u: goto L_08AFA9BC;
    case 604u: goto L_08AFA9C8;
    case 605u: goto L_08AFA9D0;
    case 606u: goto L_08AFA9D4;
    case 607u: goto L_08AFA9DC;
    case 608u: goto L_08AFA9E8;
    case 609u: goto L_08AFA9F4;
    case 610u: goto L_08AFAA04;
    case 611u: goto L_08AFAA10;
    case 612u: goto L_08AFAA18;
    case 613u: goto L_08AFAA1C;
    case 614u: goto L_08AFAA30;
    case 615u: goto L_08AFAA40;
    case 616u: goto L_08AFAA48;
    case 617u: goto L_08AFAA50;
    case 618u: goto L_08AFAA5C;
    case 619u: goto L_08AFAA64;
    case 620u: goto L_08AFAA68;
    case 621u: goto L_08AFAA70;
    case 622u: goto L_08AFAA74;
    case 623u: goto L_08AFAA7C;
    case 624u: goto L_08AFAA84;
    case 625u: goto L_08AFAAD0;
    case 626u: goto L_08AFAAE0;
    case 627u: goto L_08AFAAF8;
    case 628u: goto L_08AFAB04;
    case 629u: goto L_08AFAB10;
    case 630u: goto L_08AFAB18;
    case 631u: goto L_08AFAB24;
    case 632u: goto L_08AFAB54;
    case 633u: goto L_08AFAB70;
    case 634u: goto L_08AFAB80;
    case 635u: goto L_08AFAB88;
    case 636u: goto L_08AFAB90;
    case 637u: goto L_08AFAB98;
    case 638u: goto L_08AFABA0;
    case 639u: goto L_08AFABB4;
    case 640u: goto L_08AFABB8;
    case 641u: goto L_08AFABC0;
    case 642u: goto L_08AFABC8;
    case 643u: goto L_08AFABD0;
    case 644u: goto L_08AFABD8;
    case 645u: goto L_08AFABE0;
    case 646u: goto L_08AFABE8;
    case 647u: goto L_08AFABF8;
    case 648u: goto L_08AFAC08;
    case 649u: goto L_08AFAC10;
    case 650u: goto L_08AFAC18;
    case 651u: goto L_08AFAC24;
    case 652u: goto L_08AFAC2C;
    case 653u: goto L_08AFAC30;
    case 654u: goto L_08AFAC38;
    case 655u: goto L_08AFAC40;
    case 656u: goto L_08AFAC4C;
    case 657u: goto L_08AFAC54;
    case 658u: goto L_08AFAC5C;
    case 659u: goto L_08AFAC64;
    case 660u: goto L_08AFAC7C;
    case 661u: goto L_08AFAC88;
    case 662u: goto L_08AFAC8C;
    case 663u: goto L_08AFAC94;
    case 664u: goto L_08AFAC9C;
    case 665u: goto L_08AFACC4;
    case 666u: goto L_08AFAD10;
    case 667u: goto L_08AFAD30;
    case 668u: goto L_08AFAD40;
    case 669u: goto L_08AFAD4C;
    case 670u: goto L_08AFAD58;
    case 671u: goto L_08AFAD60;
    case 672u: goto L_08AFAD64;
    case 673u: goto L_08AFAD84;
    case 674u: goto L_08AFAD94;
    case 675u: goto L_08AFADA4;
    case 676u: goto L_08AFADB0;
    case 677u: goto L_08AFADB8;
    case 678u: goto L_08AFADC0;
    case 679u: goto L_08AFADC8;
    case 680u: goto L_08AFADD4;
    case 681u: goto L_08AFADE0;
    case 682u: goto L_08AFADE8;
    case 683u: goto L_08AFADEC;
    case 684u: goto L_08AFAE08;
    case 685u: goto L_08AFAE2C;
    case 686u: goto L_08AFAE60;
    case 687u: goto L_08AFAE70;
    case 688u: goto L_08AFAE88;
    case 689u: goto L_08AFAEA0;
    case 690u: goto L_08AFAEC0;
    case 691u: goto L_08AFAED4;
    case 692u: goto L_08AFAEF0;
    case 693u: goto L_08AFAF04;
    case 694u: goto L_08AFAF14;
    case 695u: goto L_08AFAF1C;
    case 696u: goto L_08AFAF24;
    case 697u: goto L_08AFAF30;
    case 698u: goto L_08AFAF38;
    case 699u: goto L_08AFAF50;
    case 700u: goto L_08AFAF6C;
    case 701u: goto L_08AFAF78;
    case 702u: goto L_08AFAF80;
    case 703u: goto L_08AFAF84;
    case 704u: goto L_08AFAF90;
    case 705u: goto L_08AFAF9C;
    case 706u: goto L_08AFAFB0;
    case 707u: goto L_08AFAFC4;
    case 708u: goto L_08AFAFEC;
    case 709u: goto L_08AFAFF4;
    case 710u: goto L_08AFB000;
    case 711u: goto L_08AFB01C;
    case 712u: goto L_08AFB03C;
    case 713u: goto L_08AFB058;
    case 714u: goto L_08AFB068;
    case 715u: goto L_08AFB078;
    case 716u: goto L_08AFB080;
    case 717u: goto L_08AFB08C;
    case 718u: goto L_08AFB094;
    case 719u: goto L_08AFB09C;
    case 720u: goto L_08AFB0AC;
    case 721u: goto L_08AFB0B8;
    case 722u: goto L_08AFB0C4;
    case 723u: goto L_08AFB0D0;
    case 724u: goto L_08AFB0D8;
    case 725u: goto L_08AFB0E4;
    case 726u: goto L_08AFB0EC;
    case 727u: goto L_08AFB0FC;
    case 728u: goto L_08AFB108;
    case 729u: goto L_08AFB118;
    case 730u: goto L_08AFB124;
    case 731u: goto L_08AFB130;
    case 732u: goto L_08AFB138;
    case 733u: goto L_08AFB144;
    case 734u: goto L_08AFB14C;
    case 735u: goto L_08AFB154;
    case 736u: goto L_08AFB15C;
    case 737u: goto L_08AFB164;
    case 738u: goto L_08AFB16C;
    case 739u: goto L_08AFB188;
    case 740u: goto L_08AFB194;
    case 741u: goto L_08AFB1A4;
    case 742u: goto L_08AFB1B0;
    case 743u: goto L_08AFB1B8;
    case 744u: goto L_08AFB1BC;
    case 745u: goto L_08AFB1C4;
    case 746u: goto L_08AFB1CC;
    case 747u: goto L_08AFB1E0;
    case 748u: goto L_08AFB1F4;
    case 749u: goto L_08AFB204;
    case 750u: goto L_08AFB234;
    case 751u: goto L_08AFB24C;
    case 752u: goto L_08AFB268;
    case 753u: goto L_08AFB27C;
    case 754u: goto L_08AFB28C;
    case 755u: goto L_08AFB2CC;
    case 756u: goto L_08AFB2E8;
    case 757u: goto L_08AFB300;
    case 758u: goto L_08AFB320;
    case 759u: goto L_08AFB32C;
    case 760u: goto L_08AFB344;
    case 761u: goto L_08AFB350;
    case 762u: goto L_08AFB368;
    case 763u: goto L_08AFB38C;
    case 764u: goto L_08AFB39C;
    case 765u: goto L_08AFB3B4;
    case 766u: goto L_08AFB3C0;
    case 767u: goto L_08AFB3CC;
    case 768u: goto L_08AFB3D4;
    case 769u: goto L_08AFB3E0;
    case 770u: goto L_08AFB3FC;
    case 771u: goto L_08AFB414;
    case 772u: goto L_08AFB428;
    case 773u: goto L_08AFB434;
    case 774u: goto L_08AFB43C;
    case 775u: goto L_08AFB454;
    case 776u: goto L_08AFB460;
    case 777u: goto L_08AFB464;
    case 778u: goto L_08AFB46C;
    case 779u: goto L_08AFB474;
    case 780u: goto L_08AFB488;
    case 781u: goto L_08AFB490;
    case 782u: goto L_08AFB4A0;
    case 783u: goto L_08AFB4AC;
    case 784u: goto L_08AFB4B4;
    case 785u: goto L_08AFB4C4;
    case 786u: goto L_08AFB4CC;
    case 787u: goto L_08AFB4E8;
    case 788u: goto L_08AFB54C;
    case 789u: goto L_08AFB554;
    case 790u: goto L_08AFB580;
    case 791u: goto L_08AFB594;
    case 792u: goto L_08AFB5CC;
    case 793u: goto L_08AFB5D0;
    case 794u: goto L_08AFB5D8;
    case 795u: goto L_08AFB640;
    case 796u: goto L_08AFB664;
    case 797u: goto L_08AFB66C;
    case 798u: goto L_08AFB698;
    case 799u: goto L_08AFB6B4;
    case 800u: goto L_08AFB6BC;
    case 801u: goto L_08AFB6E0;
    case 802u: goto L_08AFB708;
    case 803u: goto L_08AFB724;
    case 804u: goto L_08AFB73C;
    case 805u: goto L_08AFB75C;
    case 806u: goto L_08AFB768;
    case 807u: goto L_08AFB780;
    case 808u: goto L_08AFB78C;
    case 809u: goto L_08AFB7A0;
    case 810u: goto L_08AFB7C4;
    case 811u: goto L_08AFB7E0;
    case 812u: goto L_08AFB7E8;
    case 813u: goto L_08AFB828;
    case 814u: goto L_08AFB830;
    case 815u: goto L_08AFB838;
    case 816u: goto L_08AFB840;
    case 817u: goto L_08AFB85C;
    case 818u: goto L_08AFB86C;
    case 819u: goto L_08AFB87C;
    case 820u: goto L_08AFB884;
    case 821u: goto L_08AFB890;
    case 822u: goto L_08AFB89C;
    case 823u: goto L_08AFB8A4;
    case 824u: goto L_08AFB8B0;
    case 825u: goto L_08AFB8DC;
    case 826u: goto L_08AFB8FC;
    case 827u: goto L_08AFB918;
    case 828u: goto L_08AFB91C;
    case 829u: goto L_08AFB924;
    case 830u: goto L_08AFB944;
    case 831u: goto L_08AFB96C;
    case 832u: goto L_08AFB970;
    case 833u: goto L_08AFB978;
    case 834u: goto L_08AFB998;
    case 835u: goto L_08AFB9AC;
    case 836u: goto L_08AFB9B0;
    case 837u: goto L_08AFB9B8;
    case 838u: goto L_08AFB9D4;
    case 839u: goto L_08AFBA20;
    case 840u: goto L_08AFBA40;
    case 841u: goto L_08AFBA50;
    case 842u: goto L_08AFBA5C;
    case 843u: goto L_08AFBA68;
    case 844u: goto L_08AFBA70;
    case 845u: goto L_08AFBA74;
    case 846u: goto L_08AFBA94;
    case 847u: goto L_08AFBAA4;
    case 848u: goto L_08AFBAB4;
    case 849u: goto L_08AFBAC0;
    case 850u: goto L_08AFBAC8;
    case 851u: goto L_08AFBAD0;
    case 852u: goto L_08AFBAD8;
    case 853u: goto L_08AFBAE4;
    case 854u: goto L_08AFBAF0;
    case 855u: goto L_08AFBAF8;
    case 856u: goto L_08AFBAFC;
    case 857u: goto L_08AFBB18;
    case 858u: goto L_08AFBB3C;
    case 859u: goto L_08AFBB64;
    case 860u: goto L_08AFBB6C;
    case 861u: goto L_08AFBB7C;
    case 862u: goto L_08AFBB8C;
    case 863u: goto L_08AFBB98;
    case 864u: goto L_08AFBBA4;
    case 865u: goto L_08AFBBC8;
    case 866u: goto L_08AFBBD4;
    case 867u: goto L_08AFBBE0;
    case 868u: goto L_08AFBBE8;
    case 869u: goto L_08AFBC04;
    case 870u: goto L_08AFBC08;
    case 871u: goto L_08AFBC10;
    case 872u: goto L_08AFBC18;
    case 873u: goto L_08AFBC24;
    case 874u: goto L_08AFBC48;
    case 875u: goto L_08AFBC54;
    case 876u: goto L_08AFBC60;
    case 877u: goto L_08AFBC68;
    case 878u: goto L_08AFBC84;
    case 879u: goto L_08AFBC88;
    case 880u: goto L_08AFBC90;
    case 881u: goto L_08AFBCAC;
    case 882u: goto L_08AFBCB8;
    case 883u: goto L_08AFBCC8;
    case 884u: goto L_08AFBCD8;
    case 885u: goto L_08AFBCE0;
    case 886u: goto L_08AFBCF0;
    case 887u: goto L_08AFBD04;
    case 888u: goto L_08AFBD08;
    case 889u: goto L_08AFBD10;
    case 890u: goto L_08AFBD14;
    case 891u: goto L_08AFBD1C;
    case 892u: goto L_08AFBD28;
    case 893u: goto L_08AFBD38;
    case 894u: goto L_08AFBD40;
    case 895u: goto L_08AFBD4C;
    case 896u: goto L_08AFBD5C;
    case 897u: goto L_08AFBD6C;
    case 898u: goto L_08AFBD74;
    case 899u: goto L_08AFBD88;
    case 900u: goto L_08AFBD9C;
    case 901u: goto L_08AFBDA4;
    case 902u: goto L_08AFBDB4;
    case 903u: goto L_08AFBDBC;
    case 904u: goto L_08AFBDD0;
    case 905u: goto L_08AFBDD8;
    case 906u: goto L_08AFBDE8;
    case 907u: goto L_08AFBDF0;
    case 908u: goto L_08AFBDF4;
    case 909u: goto L_08AFBE00;
    case 910u: goto L_08AFBE10;
    case 911u: goto L_08AFBE18;
    case 912u: goto L_08AFBE2C;
    case 913u: goto L_08AFBE34;
    case 914u: goto L_08AFBE44;
    case 915u: goto L_08AFBE4C;
    case 916u: goto L_08AFBE50;
    case 917u: goto L_08AFBE5C;
    case 918u: goto L_08AFBE70;
    case 919u: goto L_08AFBE84;
    case 920u: goto L_08AFBE8C;
    case 921u: goto L_08AFBEA0;
    case 922u: goto L_08AFBEAC;
    case 923u: goto L_08AFBEBC;
    case 924u: goto L_08AFBF08;
    case 925u: goto L_08AFBF30;
    case 926u: goto L_08AFBF40;
    case 927u: goto L_08AFBF50;
    case 928u: goto L_08AFBF68;
    case 929u: goto L_08AFBF6C;
    case 930u: goto L_08AFBF78;
    case 931u: goto L_08AFBF80;
    case 932u: goto L_08AFBF8C;
    case 933u: goto L_08AFBF94;
    case 934u: goto L_08AFBFA0;
    case 935u: goto L_08AFBFA8;
    case 936u: goto L_08AFBFB0;
    case 937u: goto L_08AFBFB8;
    case 938u: goto L_08AFBFC0;
    case 939u: goto L_08AFBFCC;
    case 940u: goto L_08AFBFD4;
    case 941u: goto L_08AFBFDC;
    case 942u: goto L_08AFBFE4;
    case 943u: goto L_08AFBFEC;
    case 944u: goto L_08AFBFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AF8000:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 854u, 0x08AF7FF4u>(ctx, &aot_mem); return;
      }
      goto L_08AF8010;
    }
L_08AF8010:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    goto L_08AF8014;
L_08AF8014:
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[10]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8020:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[15] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[15] + ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 112 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
        goto L_08AF8110;
    }
    goto L_08AF8040;
L_08AF8040:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.gpr[25] = (ctx.gpr[3] + static_cast<std::uint32_t>(112));
    ctx.gpr[24] = (static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.gpr[9] = (ctx.gpr[4] - ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AF8084;
      }
      goto L_08AF8054;
    }
L_08AF8054:
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[11] + 0u);
    ctx.gpr[6] = (0u + 0u);
    goto L_08AF8060;
L_08AF8060:
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (ctx.gpr[6] < static_cast<std::uint32_t>(112) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF8060;
      }
      goto L_08AF807C;
    }
L_08AF807C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(76));
    (void)rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 829u, 0x08AF7DCCu>(ctx, &aot_mem); return;
L_08AF8084:
    ctx.gpr[6] = (ctx.gpr[12] + ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[11] + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF80B0;
      }
      goto L_08AF8094;
    }
L_08AF8094:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF8094;
      }
      goto L_08AF80B0;
    }
L_08AF80B0:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(112));
    ctx.gpr[2] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[7] = (ctx.gpr[4] - ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[15] = (ctx.lo);
    ctx.gpr[11] = (ctx.gpr[15] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF80FC;
      }
      goto L_08AF80E0;
    }
L_08AF80E0:
    ctx.gpr[24] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    goto L_08AF80EC;
L_08AF80EC:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF80E0;
      }
      goto L_08AF80FC;
    }
L_08AF80FC:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(112));
    (void)rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 845u, 0x08AF7F38u>(ctx, &aot_mem); return;
L_08AF8110:
    ctx.gpr[6] = (ctx.gpr[11] + 0u);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AF8140;
      }
      goto L_08AF8124;
    }
L_08AF8124:
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[25] = (ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF8124;
      }
      goto L_08AF8140;
    }
L_08AF8140:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[15] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(112));
    ctx.gpr[10] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[14] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[14] + ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[8] + 0u);
    goto L_08AF8164;
L_08AF8164:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF81AC;
      }
      goto L_08AF8174;
    }
L_08AF8174:
    ctx.gpr[6] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF819C;
      }
      goto L_08AF8180;
    }
L_08AF8180:
    ctx.gpr[25] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[24] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[25]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF8180;
      }
      goto L_08AF819C;
    }
L_08AF819C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_08AF8164;
L_08AF81AC:
    ctx.gpr[5] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF8010;
      }
      goto L_08AF81BC;
    }
L_08AF81BC:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[7] < ctx.gpr[10] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF81BC;
      }
      goto L_08AF81D8;
    }
L_08AF81D8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    goto L_08AF8014;
L_08AF81E0:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(76));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + 0u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[25] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1800));
    ctx.gpr[17] = (ctx.gpr[3] + static_cast<std::uint32_t>(-2408));
    ctx.gpr[3] = (33026u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[13] = (ctx.gpr[25] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[6] + 0u);
    ctx.gpr[15] = (0u + 0u);
    ctx.gpr[11] = (ctx.gpr[25] + ctx.gpr[17]);
    ctx.gpr[24] = (ctx.gpr[3] | 1033u);
    ctx.gpr[14] = (ctx.gpr[6] + 0u);
    goto L_08AF822C;
L_08AF822C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (16u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] & ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(127));
      if (branch_taken) {
          goto L_08AF8500;
      }
      goto L_08AF8240;
    }
L_08AF8240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    rt.unsupported(0x08AF824Cu, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08AF8250;
    }
    goto L_08AF8250;
L_08AF8250:
    ctx.gpr[3] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[12] = (ctx.gpr[3] << 7u);
    ctx.gpr[10] = (ctx.gpr[12] - ctx.gpr[3]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF84F8;
      }
      goto L_08AF826C;
    }
L_08AF826C:
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AF82EC;
      }
      goto L_08AF827C;
    }
L_08AF827C:
    ctx.gpr[9] = (65519u << 16u);
    ctx.gpr[8] = (ctx.gpr[9] | 65535u);
    ctx.gpr[12] = (ctx.gpr[6] & ctx.gpr[8]);
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[12] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_08AF847C;
      }
      goto L_08AF829C;
    }
L_08AF829C:
    ctx.gpr[2] = (65534u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(52)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(44)));
    ctx.gpr[2] = (ctx.gpr[2] | 65535u);
    ctx.gpr[2] = (ctx.gpr[12] & ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(40), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(44), ctx.gpr[10]);
    goto L_08AF82EC;
L_08AF82EC:
    ctx.gpr[4] = (ctx.gpr[25] + ctx.gpr[17]);
    goto L_08AF82F0;
L_08AF82F0:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (ctx.gpr[3] & 256u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08AF8310;
    }
    goto L_08AF8300;
L_08AF8300:
    ctx.gpr[9] = (ctx.gpr[3] & 512u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08AF83F0;
    }
    goto L_08AF830C;
L_08AF830C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08AF8310;
L_08AF8310:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[12] = (ctx.gpr[15] << 2u);
    ctx.gpr[6] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.gpr[2] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.gpr[7] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 6u));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[8]);
    ctx.gpr[3] = (ctx.hi);
    ctx.gpr[8] = (ctx.gpr[3] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 6u));
    ctx.gpr[2] = (ctx.gpr[7] - ctx.gpr[10]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[9] >> 20u);
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 12u));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[5] >> 20u);
    ctx.gpr[3] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 12u));
    goto L_08AF8390;
L_08AF8390:
    ctx.gpr[5] = (ctx.gpr[12] + ctx.gpr[16]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(32767));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-32768));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[10]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? ctx.gpr[6] : ctx.gpr[4]);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[9]) < -32768 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[6] : ctx.gpr[2]);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < -32768 ? 1u : 0u);
    if (ctx.gpr[12] != 0u) ctx.gpr[9] = (ctx.gpr[3]);
    if (ctx.gpr[4] != 0u) ctx.gpr[8] = (ctx.gpr[3]);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[15]) < 28 ? 1u : 0u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08AF822C;
      }
      goto L_08AF83DC;
    }
L_08AF83DC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF83F0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[12] = (ctx.gpr[15] << 2u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (ctx.gpr[12] + ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.gpr[4] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[8] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 6u));
    ctx.gpr[4] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[3] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (ctx.gpr[3] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 6u));
    ctx.gpr[2] = (ctx.gpr[6] - ctx.gpr[10]);
    ctx.gpr[3] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[5] = (ctx.gpr[10] >> 20u);
    ctx.gpr[7] = (ctx.gpr[3] + ctx.gpr[5]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 12u));
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 31u));
    ctx.gpr[8] = (ctx.gpr[4] >> 20u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 12u));
    goto L_08AF8390;
L_08AF847C:
    ctx.gpr[3] = (2u << 16u);
    ctx.gpr[10] = (ctx.gpr[12] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[8] = (4u << 16u);
      if (branch_taken) {
          goto L_08AF84D0;
      }
      goto L_08AF848C;
    }
L_08AF848C:
    ctx.gpr[10] = (65533u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(52)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(40)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(44)));
    ctx.gpr[3] = (ctx.gpr[10] | 65535u);
    ctx.gpr[10] = (ctx.gpr[12] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    goto L_08AF82EC;
L_08AF84D0:
    ctx.gpr[9] = (ctx.gpr[12] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[25] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AF82F0;
      }
      goto L_08AF84DC;
    }
L_08AF84DC:
    ctx.gpr[4] = (65531u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[4] | 65535u);
    ctx.gpr[6] = (ctx.gpr[12] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    goto L_08AF82EC;
L_08AF84F8:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(56), 0u);
    goto L_08AF826C;
L_08AF8500:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(56), ctx.gpr[12]);
    goto L_08AF82EC;
L_08AF8508:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-1152)));
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08AF8554;
      }
      goto L_08AF8524;
    }
L_08AF8524:
    ctx.gpr[5] = (32834u << 16u);
    ctx.gpr[3] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 5u);
      if (branch_taken) {
          goto L_08AF8554;
      }
      goto L_08AF8534;
    }
L_08AF8534:
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[7] = (32834u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1088));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[2] = (ctx.gpr[7] | 5u);
      if (branch_taken) {
          goto L_08AF8554;
      }
      goto L_08AF854C;
    }
L_08AF854C:
    ctx.gpr[31] = (0x08AF8554u);
    // nop
    ctx.pc = 0x08B0B9FCu;
    return;
L_08AF8554:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8560:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[2] = (32834u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-1152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[2] | 257u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF85E8;
      }
      goto L_08AF8590;
    }
L_08AF8590:
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1088));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[31] = (0x08AF85A8u);
    ctx.gpr[8] = (0u | 44100u);
    ctx.pc = 0x08B0B9A4u;
    return;
L_08AF85A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[3] = (ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AF85E8;
      }
      goto L_08AF85B0;
    }
L_08AF85B0:
    ctx.gpr[16] = (0u + 0u);
    ctx.gpr[19] = (ctx.gpr[17] + 0u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-1152)));
    goto L_08AF85BC;
L_08AF85BC:
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1088));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(4096));
      if (branch_taken) {
          goto L_08AF8608;
      }
      goto L_08AF85CC;
    }
L_08AF85CC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    goto L_08AF85D4;
L_08AF85D4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-1152)));
      if (branch_taken) {
          goto L_08AF85BC;
      }
      goto L_08AF85DC;
    }
L_08AF85DC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-1152), ctx.gpr[5]);
    ctx.gpr[3] = (0u + 0u);
    goto L_08AF85E8;
L_08AF85E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8608:
    ctx.gpr[31] = (0x08AF8610u);
    // nop
    ctx.pc = 0x08B0BA04u;
    return;
L_08AF8610:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-1152)));
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1088));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(24512));
      if (branch_taken) {
          goto L_08AF85CC;
      }
      goto L_08AF8628;
    }
L_08AF8628:
    ctx.gpr[31] = (0x08AF8630u);
    // nop
    ctx.pc = 0x08B0BA14u;
    return;
L_08AF8630:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1152)));
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1088));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[8] = (0u + 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF85CC;
      }
      goto L_08AF8650;
    }
L_08AF8650:
    ctx.gpr[31] = (0x08AF8658u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0B9ACu;
    return;
L_08AF8658:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    goto L_08AF85D4;
L_08AF8660:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1152)));
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1088));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08AF8690;
      }
      goto L_08AF8688;
    }
L_08AF8688:
    ctx.gpr[31] = (0x08AF8690u);
    // nop
    ctx.pc = 0x08B0B9D4u;
    return;
L_08AF8690:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF869C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1152)));
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1088));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08AF86CC;
      }
      goto L_08AF86C4;
    }
L_08AF86C4:
    ctx.gpr[31] = (0x08AF86CCu);
    // nop
    ctx.pc = 0x08B0B9F4u;
    return;
L_08AF86CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF86D8:
    ctx.gpr[14] = (2232u << 16u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(-1152)));
    ctx.gpr[9] = (ctx.gpr[6] + 0u);
    ctx.gpr[10] = (ctx.gpr[4] + 0u);
    ctx.gpr[12] = (2232u << 16u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[7] + 0u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[11] = (32834u << 16u);
    ctx.gpr[4] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1088));
    ctx.gpr[7] = (ctx.gpr[9] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[9] = (ctx.gpr[8] + 0u);
    ctx.gpr[5] = (ctx.gpr[10] + 0u);
    ctx.gpr[6] = (ctx.gpr[3] + 0u);
    ctx.gpr[8] = (ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[12] = (ctx.gpr[11] | 256u);
      if (branch_taken) {
          goto L_08AF872C;
      }
      goto L_08AF8720;
    }
L_08AF8720:
    ctx.gpr[31] = (0x08AF8728u);
    // nop
    ctx.pc = 0x08B0B9ACu;
    return;
L_08AF8728:
    ctx.gpr[12] = (ctx.gpr[2] + 0u);
    goto L_08AF872C;
L_08AF872C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[12] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF873C:
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-1152)));
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08AF8780;
      }
      goto L_08AF875C;
    }
L_08AF875C:
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[8] = (32834u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    ctx.gpr[6] = (ctx.gpr[7] + 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1088));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[8] | 18u);
      if (branch_taken) {
          goto L_08AF8780;
      }
      goto L_08AF8778;
    }
L_08AF8778:
    ctx.gpr[31] = (0x08AF8780u);
    // nop
    ctx.pc = 0x08B0BA04u;
    return;
L_08AF8780:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF878C:
    ctx.gpr[11] = (2232u << 16u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-1152)));
    ctx.gpr[8] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[6] + 0u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[10] = (32834u << 16u);
    ctx.gpr[9] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[7] + 0u);
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1088));
    ctx.gpr[5] = (ctx.gpr[2] + 0u);
    ctx.gpr[7] = (ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[11] = (ctx.gpr[10] | 256u);
      if (branch_taken) {
          goto L_08AF87D8;
      }
      goto L_08AF87CC;
    }
L_08AF87CC:
    ctx.gpr[31] = (0x08AF87D4u);
    // nop
    ctx.pc = 0x08B0B9E4u;
    return;
L_08AF87D4:
    ctx.gpr[11] = (ctx.gpr[2] + 0u);
    goto L_08AF87D8;
L_08AF87D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[11] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF87E8:
    ctx.gpr[24] = (2232u << 16u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(-1152)));
    ctx.gpr[12] = (ctx.gpr[5] + 0u);
    ctx.gpr[10] = (ctx.gpr[6] + 0u);
    ctx.gpr[14] = (ctx.gpr[4] + 0u);
    ctx.gpr[2] = (ctx.gpr[7] + 0u);
    ctx.gpr[3] = (ctx.gpr[8] + 0u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[11] = (32834u << 16u);
    ctx.gpr[15] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[12] + 0u);
    ctx.gpr[7] = (ctx.gpr[10] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[10] = (ctx.gpr[9] + 0u);
    ctx.gpr[4] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1088));
    ctx.gpr[5] = (ctx.gpr[14] + 0u);
    ctx.gpr[8] = (ctx.gpr[2] + 0u);
    ctx.gpr[9] = (ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[12] = (ctx.gpr[11] | 256u);
      if (branch_taken) {
          goto L_08AF8844;
      }
      goto L_08AF8838;
    }
L_08AF8838:
    ctx.gpr[31] = (0x08AF8840u);
    // nop
    ctx.pc = 0x08B0B984u;
    return;
L_08AF8840:
    ctx.gpr[12] = (ctx.gpr[2] + 0u);
    goto L_08AF8844;
L_08AF8844:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[12] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8854:
    ctx.gpr[3] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1152)));
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08AF8880;
      }
      goto L_08AF8874;
    }
L_08AF8874:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08AF8878;
L_08AF8878:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8880:
    ctx.gpr[31] = (0x08AF8888u);
    // nop
    ctx.pc = 0x08B0B9C4u;
    return;
L_08AF8888:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08AF8878;
L_08AF8890:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-1152)));
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[7] + 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1088));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08AF88CC;
      }
      goto L_08AF88C0;
    }
L_08AF88C0:
    ctx.gpr[31] = (0x08AF88C8u);
    // nop
    ctx.pc = 0x08B0BA24u;
    return;
L_08AF88C8:
    ctx.gpr[7] = (ctx.gpr[2] + 0u);
    goto L_08AF88CC;
L_08AF88CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF88DC:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-1152)));
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[7] + 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1088));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08AF8918;
      }
      goto L_08AF890C;
    }
L_08AF890C:
    ctx.gpr[31] = (0x08AF8914u);
    // nop
    ctx.pc = 0x08B0BA1Cu;
    return;
L_08AF8914:
    ctx.gpr[7] = (ctx.gpr[2] + 0u);
    goto L_08AF8918;
L_08AF8918:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8928:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1152)));
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1088));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08AF8958;
      }
      goto L_08AF8950;
    }
L_08AF8950:
    ctx.gpr[31] = (0x08AF8958u);
    // nop
    ctx.pc = 0x08B0B99Cu;
    return;
L_08AF8958:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8964:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF8974u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(256));
    goto L_08AF8560;
L_08AF8974:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8980:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[7] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[17] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    ctx.gpr[16] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF89B8u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1));
    goto L_08AF8A48;
L_08AF89B8:
    ctx.gpr[3] = (32768u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[6] = (ctx.gpr[3] | 264u);
      if (branch_taken) {
          goto L_08AF8A2C;
      }
      goto L_08AF89C4;
    }
L_08AF89C4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[2] = (ctx.gpr[6] & 15u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[5] | 4u);
      if (branch_taken) {
          goto L_08AF8A2C;
      }
      goto L_08AF89DC;
    }
L_08AF89DC:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1)));
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.gpr[3] = (ctx.gpr[9] & 32u);
    ctx.gpr[5] = (ctx.gpr[17] + 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[6] = (ctx.gpr[8] | 4u);
      if (branch_taken) {
          goto L_08AF8A2C;
      }
      goto L_08AF89FC;
    }
L_08AF89FC:
    ctx.gpr[31] = (0x08AF8A04u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AF8B10;
L_08AF8A04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[6] = (ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AF8A2C;
      }
      goto L_08AF8A0C;
    }
L_08AF8A0C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (rt.memory().aot_load_word_left(ctx.gpr[10] + static_cast<std::uint32_t>(3), ctx.gpr[3]));
    ctx.gpr[3] = (rt.memory().aot_load_word_right(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]));
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(15), ctx.gpr[3]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AF8A2C;
      }
      goto L_08AF8A28;
    }
L_08AF8A28:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_08AF8A2C;
L_08AF8A2C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8A48:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[2] = (2114u << 16u);
    ctx.gpr[25] = (ctx.gpr[12] << 8u);
    ctx.gpr[11] = (ctx.gpr[25] | ctx.gpr[10]);
    ctx.gpr[14] = (ctx.gpr[2] | 4229u);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[11]) * static_cast<std::uint64_t>(ctx.gpr[14]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[14] = (32768u << 16u);
    ctx.gpr[13] = (ctx.gpr[4] + 0u);
    ctx.gpr[9] = (ctx.gpr[4] + 0u);
    ctx.gpr[15] = (ctx.hi);
    ctx.gpr[24] = (ctx.gpr[11] - ctx.gpr[15]);
    ctx.gpr[3] = (ctx.gpr[24] >> 1u);
    ctx.gpr[25] = (ctx.gpr[15] + ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[25] >> 4u);
    ctx.gpr[24] = (ctx.gpr[2] << 5u);
    ctx.gpr[15] = (ctx.gpr[24] - ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[11] - ctx.gpr[15]);
    ctx.gpr[2] = (ctx.gpr[3] & 65535u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[11] = (ctx.gpr[14] | 264u);
      if (branch_taken) {
          goto L_08AF8AFC;
      }
      goto L_08AF8A9C;
    }
L_08AF8A9C:
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
        goto L_08AF8AA4;
    }
    goto L_08AF8AA4;
L_08AF8AA4:
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
        goto L_08AF8AAC;
    }
    goto L_08AF8AAC;
L_08AF8AAC:
    ctx.gpr[4] = (ctx.gpr[10] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF8AF0;
      }
      goto L_08AF8AB8;
    }
L_08AF8AB8:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
        goto L_08AF8AF0;
    }
    goto L_08AF8AC0;
L_08AF8AC0:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(2)));
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3)));
    ctx.gpr[15] = (ctx.gpr[3] << 24u);
    ctx.gpr[24] = (ctx.gpr[14] << 16u);
    ctx.gpr[5] = (ctx.gpr[15] | ctx.gpr[24]);
    ctx.gpr[13] = (ctx.gpr[11] << 8u);
    ctx.gpr[10] = (ctx.gpr[5] | ctx.gpr[13]);
    ctx.gpr[6] = (ctx.gpr[10] | ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    goto L_08AF8AF0;
L_08AF8AF0:
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
        goto L_08AF8AF8;
    }
    goto L_08AF8AF8;
L_08AF8AF8:
    ctx.gpr[11] = (0u + 0u);
    goto L_08AF8AFC;
L_08AF8AFC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[11] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8B10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-896));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[14] = (ctx.gpr[4] + 0u);
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1280));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(784), ctx.gpr[31]);
    goto L_08AF8B2C;
L_08AF8B2C:
    ctx.gpr[25] = (ctx.gpr[6] & 3u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[25]);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (ctx.gpr[25] << 3u);
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    goto L_08AF8B40;
L_08AF8B40:
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AF8B64;
      }
      goto L_08AF8B4C;
    }
L_08AF8B4C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08AF8B64;
L_08AF8B64:
    ctx.gpr[3] = ((ctx.gpr[2] >> 30u) & 0x00000003u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[10] = ((ctx.gpr[2] >> 29u) & 0x00000001u);
      if (branch_taken) {
          goto L_08AF9060;
      }
      goto L_08AF8B70;
    }
L_08AF8B70:
    ctx.gpr[8] = (ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(788), static_cast<std::uint16_t>(ctx.gpr[10]));
      if (branch_taken) {
          goto L_08AF8BFC;
      }
      goto L_08AF8B7C;
    }
L_08AF8B7C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(0));
      if (branch_taken) {
          goto L_08AF90B8;
      }
      goto L_08AF8B84;
    }
L_08AF8B84:
    ctx.gpr[20] = (ctx.gpr[15] + static_cast<std::uint32_t>(108));
    goto L_08AF8B88;
L_08AF8B88:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[15];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-4), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF8B88;
      }
      goto L_08AF8B9C;
    }
L_08AF8B9C:
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(144));
    goto L_08AF8BA4;
L_08AF8BA4:
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(144));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(304), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[20];
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF8BA4;
      }
      goto L_08AF8BBC;
    }
L_08AF8BBC:
    ctx.gpr[20] = (ctx.gpr[15] + static_cast<std::uint32_t>(16));
    goto L_08AF8BC0;
L_08AF8BC0:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[15];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-4), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF8BC0;
      }
      goto L_08AF8BD4;
    }
L_08AF8BD4:
    ctx.gpr[20] = (ctx.gpr[15] + static_cast<std::uint32_t>(64));
    goto L_08AF8BD8;
L_08AF8BD8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[15];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(280), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AF8BD8;
      }
      goto L_08AF8BEC;
    }
L_08AF8BEC:
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-188));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(636), static_cast<std::uint16_t>(ctx.gpr[11]));
    goto L_08AF8CEC;
L_08AF8BFC:
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(14));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AF8C20;
      }
      goto L_08AF8C08;
    }
L_08AF8C08:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08AF8C20;
L_08AF8C20:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(860), ctx.gpr[2]);
    ctx.gpr[20] = ((ctx.gpr[2] >> 28u) & 0x0000000Fu);
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(760));
    ctx.gpr[8] = (ctx.gpr[15] + static_cast<std::uint32_t>(-4));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[15]);
    goto L_08AF8C34;
L_08AF8C34:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[20];
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF8C7C;
      }
      goto L_08AF8C3C;
    }
L_08AF8C3C:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(9))))));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AF8C64;
      }
      goto L_08AF8C4C;
    }
L_08AF8C4C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08AF8C64;
L_08AF8C64:
    ctx.gpr[2] = (ctx.gpr[2] >> 29u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[10] = ((ctx.gpr[10] & ~0x00007E00u) | ((ctx.gpr[2] & 0x0000003Fu) << 9u));
      if (branch_taken) {
          goto L_08AF8C34;
      }
      goto L_08AF8C70;
    }
L_08AF8C70:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[10]));
    goto L_08AF8C34;
L_08AF8C7C:
    ctx.gpr[31] = (0x08AF8C84u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(760));
    goto L_08AF8FD4;
L_08AF8C84:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(0));
      if (branch_taken) {
          goto L_08AF90B8;
      }
      goto L_08AF8C90;
    }
L_08AF8C90:
    ctx.gpr[13] = ((ctx.gpr[13] >> 18u) & 0x0000001Fu);
    ctx.gpr[31] = (0x08AF8C9Cu);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(257));
    goto L_08AF8EC8;
L_08AF8C9C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(860)));
      if (branch_taken) {
          goto L_08AF90B8;
      }
      goto L_08AF8CA4;
    }
L_08AF8CA4:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(61)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[15] = ((ctx.gpr[15] & ~0x0000003Eu) | ((ctx.gpr[9] & 0x0000001Fu) << 1u));
      if (branch_taken) {
          goto L_08AF8CBC;
      }
      goto L_08AF8CB8;
    }
L_08AF8CB8:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(60))))));
    goto L_08AF8CBC;
L_08AF8CBC:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[11];
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08AF8CA4;
      }
      goto L_08AF8CC4;
    }
L_08AF8CC4:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(636));
    ctx.gpr[31] = (0x08AF8CD0u);
    ctx.gpr[13] = ((ctx.gpr[13] >> 23u) & 0x0000001Fu);
    goto L_08AF8EC4;
L_08AF8CD0:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(60))))));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[15] = ((ctx.gpr[15] & ~0x0000003Eu) | ((ctx.gpr[9] & 0x0000001Fu) << 1u));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(124))))));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[11];
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08AF8CD0;
      }
      goto L_08AF8CE8;
    }
L_08AF8CE8:
    ctx.gpr[15] = ((ctx.gpr[15] & ~0x0000003Eu) | ((0u & 0x0000001Fu) << 1u));
    goto L_08AF8CEC;
L_08AF8CEC:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    goto L_08AF8CF0;
L_08AF8CF0:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    ctx.gpr[31] = (0x08AF8CFCu);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(2));
    goto L_08AF8E68;
L_08AF8CFC:
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(638));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[10] = ([](std::uint32_t value) { value = ((value >> 1u) & 0x55555555u) | ((value & 0x55555555u) << 1u); value = ((value >> 2u) & 0x33333333u) | ((value & 0x33333333u) << 2u); value = ((value >> 4u) & 0x0F0F0F0Fu) | ((value & 0x0F0F0F0Fu) << 4u); value = ((value >> 8u) & 0x00FF00FFu) | ((value & 0x00FF00FFu) << 8u); return (value >> 16u) | (value << 16u); }(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AF8D80;
      }
      goto L_08AF8D08;
    }
L_08AF8D08:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 4u));
    ctx.gpr[31] = (0x08AF8D14u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(666)));
      if (branch_taken) {
          goto L_08AF8DAC;
      }
      goto L_08AF8D14;
    }
L_08AF8D14:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(636))))));
    ctx.gpr[31] = (0x08AF8D20u);
    ctx.gpr[1] = (ctx.gpr[4] - ctx.gpr[20]);
    goto L_08AF8E28;
L_08AF8D20:
    ctx.gpr[20] = (ctx.gpr[5] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(std::countl_zero(ctx.gpr[2])));
      if (branch_taken) {
          goto L_08AF90C4;
      }
      goto L_08AF8D2C;
    }
L_08AF8D2C:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-30));
    ctx.gpr[31] = (0x08AF8D38u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF8D90;
      }
      goto L_08AF8D38;
    }
L_08AF8D38:
    ctx.gpr[10] = (ctx.gpr[14] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF90B8;
      }
      goto L_08AF8D44;
    }
L_08AF8D44:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-1)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[1] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08AF8CF0;
      }
      goto L_08AF8D54;
    }
L_08AF8D54:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AF8D44;
L_08AF8D5C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    ctx.gpr[2] = (ctx.gpr[2] >> (ctx.gpr[10] & 31u));
    jump_target = ctx.gpr[31];
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8D80:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF90C4;
      }
      goto L_08AF8D88;
    }
L_08AF8D88:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AF8CF0;
L_08AF8D90:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[10]);
      if (branch_taken) {
          goto L_08AF90B8;
      }
      goto L_08AF8D98;
    }
L_08AF8D98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AF8D5C;
      }
      goto L_08AF8DA0;
    }
L_08AF8DA0:
    ctx.gpr[2] = (ctx.gpr[2] >> (ctx.gpr[10] & 31u));
    jump_target = ctx.gpr[31];
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8DAC:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 28u));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[10];
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[10]);
      if (branch_taken) {
          goto L_08AF8DCC;
      }
      goto L_08AF8DB8;
    }
L_08AF8DB8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AF8D5C;
      }
      goto L_08AF8DC0;
    }
L_08AF8DC0:
    ctx.gpr[2] = (ctx.gpr[2] >> (ctx.gpr[10] & 31u));
    jump_target = ctx.gpr[31];
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8DCC:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(788))))));
      if (branch_taken) {
          goto L_08AF90B8;
      }
      goto L_08AF8DD8;
    }
L_08AF8DD8:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08AF8B40;
      }
      goto L_08AF8DE0;
    }
L_08AF8DE0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[14]);
      if (branch_taken) {
          goto L_08AF8DF8;
      }
      goto L_08AF8DE8;
    }
L_08AF8DE8:
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(39));
    ctx.gpr[9] = (ctx.gpr[25] >> 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08AF8DF8;
L_08AF8DF8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(784)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8E08:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((0u & 0x0000FFFFu) << 0u));
    goto L_08AF8E38;
L_08AF8E28:
    ctx.gpr[2] = (ctx.gpr[24] >> (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[10] & 31u));
      if (branch_taken) {
          goto L_08AF8E08;
      }
      goto L_08AF8E38;
    }
L_08AF8E38:
    ctx.gpr[2] = ([](std::uint32_t value) { value = ((value >> 1u) & 0x55555555u) | ((value & 0x55555555u) << 1u); value = ((value >> 2u) & 0x33333333u) | ((value & 0x33333333u) << 2u); value = ((value >> 4u) & 0x0F0F0F0Fu) | ((value & 0x0F0F0F0Fu) << 4u); value = ((value >> 8u) & 0x00FF00FFu) | ((value & 0x00FF00FFu) << 8u); return (value >> 16u) | (value << 16u); }(ctx.gpr[2]));
    ctx.gpr[10] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF8E88;
      }
      goto L_08AF8E48;
    }
L_08AF8E48:
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(58))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8E54:
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[8]);
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[10]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(60))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8E68:
    ctx.gpr[2] = (ctx.gpr[24] >> (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[12]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[12] & 31u));
      if (branch_taken) {
          goto L_08AF8E08;
      }
      goto L_08AF8E78;
    }
L_08AF8E78:
    ctx.gpr[2] = ([](std::uint32_t value) { value = ((value >> 1u) & 0x55555555u) | ((value & 0x55555555u) << 1u); value = ((value >> 2u) & 0x33333333u) | ((value & 0x33333333u) << 2u); value = ((value >> 4u) & 0x0F0F0F0Fu) | ((value & 0x0F0F0F0Fu) << 4u); value = ((value >> 8u) & 0x00FF00FFu) | ((value & 0x00FF00FFu) << 8u); return (value >> 16u) | (value << 16u); }(ctx.gpr[2]));
    ctx.gpr[10] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF8E48;
      }
      goto L_08AF8E88;
    }
L_08AF8E88:
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(30)));
      if (branch_taken) {
          goto L_08AF8EB0;
      }
      goto L_08AF8E90;
    }
L_08AF8E90:
    ctx.gpr[10] = (ctx.gpr[24] >> (ctx.gpr[25] & 31u));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x00000001u) | ((ctx.gpr[10] & 0x00000001u) << 0u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(1));
    goto L_08AF8E9C;
L_08AF8E9C:
    ctx.gpr[3] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AF8E54;
      }
      goto L_08AF8EA8;
    }
L_08AF8EA8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    goto L_08AF8E88;
L_08AF8EB0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(-31));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x00000001u) | ((ctx.gpr[24] & 0x00000001u) << 0u));
    goto L_08AF8E9C;
L_08AF8EC4:
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_08AF8EC8;
L_08AF8EC8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[1] = (0u + 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(7));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[11] = (ctx.gpr[20] + 0u);
    ctx.hi = ctx.gpr[31];
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(760))))));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), 0u);
    goto L_08AF8EE8;
L_08AF8EE8:
    ctx.gpr[8] = (ctx.gpr[1] & 511u);
    goto L_08AF8EEC;
L_08AF8EEC:
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[13]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(790)));
      if (branch_taken) {
          goto L_08AF8FC8;
      }
      goto L_08AF8EF8;
    }
L_08AF8EF8:
    ctx.gpr[31] = (0x08AF8F00u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(762));
    goto L_08AF8E68;
L_08AF8F00:
    ctx.gpr[8] = (ctx.gpr[2] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? ctx.gpr[8] : ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AF8F44;
      }
      goto L_08AF8F0C;
    }
L_08AF8F0C:
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AF8F30;
      }
      goto L_08AF8F18;
    }
L_08AF8F18:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08AF8F30;
L_08AF8F30:
    { const bool signed_ok = ctx.execute_signed_sub(10u, 0u, 10u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08AF8F30u, 0x000A5022u); return; } }
    ctx.gpr[2] = (ctx.gpr[2] >> (ctx.gpr[10] & 31u));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[2]);
    goto L_08AF8F3C;
L_08AF8F3C:
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[8]);
    goto L_08AF8EE8;
L_08AF8F44:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[10] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF8F60;
      }
      goto L_08AF8F4C;
    }
L_08AF8F4C:
    ctx.gpr[1] = ((ctx.gpr[1] & ~0x00007E00u) | ((ctx.gpr[2] & 0x0000003Fu) << 9u));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[1]));
    ctx.gpr[1] = (ctx.gpr[1] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != 0u) ctx.gpr[11] = (ctx.gpr[10]);
    goto L_08AF8EE8;
L_08AF8F60:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[1]) <= 0;
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF90B8;
      }
      goto L_08AF8F68;
    }
L_08AF8F68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08AF8F88;
      }
      goto L_08AF8F70;
    }
L_08AF8F70:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08AF8F88;
L_08AF8F88:
    ctx.gpr[2] = (ctx.gpr[2] >> 30u);
    ctx.gpr[8] = (ctx.gpr[1] & 511u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[1];
    ctx.gpr[8] = (ctx.gpr[2] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AF8F3C;
      }
      goto L_08AF8F98;
    }
L_08AF8F98:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[1]);
    goto L_08AF8F9C;
L_08AF8F9C:
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[1]));
    ctx.gpr[1] = (ctx.gpr[1] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[1] != ctx.gpr[8];
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF8F9C;
      }
      goto L_08AF8FAC;
    }
L_08AF8FAC:
    ctx.gpr[8] = (ctx.gpr[1] & 511u);
    goto L_08AF8EEC;
L_08AF8FB4:
    ctx.gpr[2] = (ctx.gpr[1] >> (ctx.gpr[8] & 31u));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AF90B8;
      }
      goto L_08AF8FC0;
    }
L_08AF8FC0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[1]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8FC8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[31] = (ctx.hi);
      if (branch_taken) {
          goto L_08AF90B8;
      }
      goto L_08AF8FD4;
    }
L_08AF8FD4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[8] = (0u + 0u);
    ctx.gpr[13] = (ctx.gpr[20] + 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[9] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), 0u);
    goto L_08AF8FF0;
L_08AF8FF0:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[13];
    ctx.gpr[12] = (ctx.gpr[13] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF8FB4;
      }
      goto L_08AF8FF8;
    }
L_08AF8FF8:
    ctx.gpr[1] = (ctx.gpr[1] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(60))))));
    goto L_08AF9000;
L_08AF9000:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[12];
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF901C;
      }
      goto L_08AF900C;
    }
L_08AF900C:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[3]) > static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[3] : ctx.gpr[2]);
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[3] : ctx.gpr[2]);
    goto L_08AF9000;
L_08AF901C:
    ctx.gpr[12] = (ctx.gpr[2] >> 9u);
    ctx.gpr[2] = (ctx.gpr[2] & 511u);
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[12];
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF8FF0;
      }
      goto L_08AF9030;
    }
L_08AF9030:
    ctx.gpr[10] = (ctx.gpr[8] - ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[12] + 0u);
      if (branch_taken) {
          goto L_08AF9058;
      }
      goto L_08AF903C;
    }
L_08AF903C:
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[1]));
    ctx.gpr[1] = (std::rotr(ctx.gpr[1], static_cast<int>(ctx.gpr[10] & 31u)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[13] - ctx.gpr[1]);
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[1]);
    ctx.gpr[10] = (ctx.gpr[9] - ctx.gpr[10]);
    goto L_08AF9058;
L_08AF9058:
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(-2), static_cast<std::uint16_t>(ctx.gpr[10]));
    goto L_08AF8FF0;
L_08AF9060:
    { const bool signed_ok = ctx.execute_signed_sub(8u, 0u, 25u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08AF9060u, 0x00194022u); return; } }
    ctx.gpr[8] = (ctx.gpr[8] >> 3u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(7), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]));
    ctx.gpr[3] = (ctx.gpr[8] & 65535u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (~(ctx.gpr[8] | 0u));
      if (branch_taken) {
          goto L_08AF90C4;
      }
      goto L_08AF9088;
    }
L_08AF9088:
    ctx.gpr[9] = (std::rotr(ctx.gpr[9], 16));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AF90B8;
      }
      goto L_08AF9094;
    }
L_08AF9094:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08AF9094;
      }
      goto L_08AF90A8;
    }
L_08AF90A8:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AF8DE0;
      }
      goto L_08AF90B0;
    }
L_08AF90B0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08AF8B2C;
L_08AF90B8:
    ctx.gpr[2] = (32768u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 264u);
    goto L_08AF8DF8;
L_08AF90C4:
    ctx.gpr[2] = (32768u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 260u);
    goto L_08AF8DF8;
L_08AF90D0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(10240));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(9216));
    ctx.gpr[7] = (ctx.gpr[3] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[6] << 16u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (ctx.gpr[10] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF912C;
      }
      goto L_08AF90FC;
    }
L_08AF90FC:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[12] = (ctx.gpr[9] + static_cast<std::uint32_t>(9216));
    ctx.gpr[11] = (ctx.gpr[12] & 65535u);
    ctx.gpr[6] = (ctx.gpr[11] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[3] = (ctx.gpr[8] | ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AF9120;
      }
      goto L_08AF9118;
    }
L_08AF9118:
    ctx.gpr[13] = (2232u << 16u);
    goto L_08AF911C;
L_08AF911C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(2568)));
    goto L_08AF9120;
L_08AF9120:
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF912C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[3] = (ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08AF9120;
      }
      goto L_08AF9134;
    }
L_08AF9134:
    ctx.gpr[13] = (2232u << 16u);
    goto L_08AF911C;
L_08AF913C:
    ctx.gpr[7] = (16u << 16u);
    ctx.gpr[9] = (65535u << 16u);
    ctx.gpr[2] = (ctx.gpr[9] | 10240u);
    ctx.gpr[8] = (ctx.gpr[7] | 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[6] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF9168;
      }
      goto L_08AF9160;
    }
L_08AF9160:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[11] = (0u | 65535u);
      if (branch_taken) {
          goto L_08AF9174;
      }
      goto L_08AF9168;
    }
L_08AF9168:
    ctx.gpr[3] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2568)));
    ctx.gpr[11] = (0u | 65535u);
    goto L_08AF9174;
L_08AF9174:
    ctx.gpr[10] = (ctx.gpr[11] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
        goto L_08AF91A4;
    }
    goto L_08AF9180;
L_08AF9180:
    ctx.gpr[24] = (65535u << 16u);
    ctx.gpr[14] = (ctx.gpr[5] + ctx.gpr[24]);
    ctx.gpr[15] = (ctx.gpr[14] >> 10u);
    ctx.gpr[12] = (ctx.gpr[15] + static_cast<std::uint32_t>(-10240));
    ctx.gpr[13] = (ctx.gpr[14] & 1023u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.gpr[5] = (ctx.gpr[13] + static_cast<std::uint32_t>(-9216));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08AF91A4;
L_08AF91A4:
    ctx.gpr[25] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[25]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF91B0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[4] = (ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08AF91D8;
      }
      goto L_08AF91CC;
    }
L_08AF91CC:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08AF91D0;
L_08AF91D0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF91D8:
    ctx.gpr[6] = (ctx.gpr[3] + static_cast<std::uint32_t>(62));
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] < static_cast<std::uint32_t>(51) ? 1u : 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[3] & 127u);
      if (branch_taken) {
          goto L_08AF91FC;
      }
      goto L_08AF91F0;
    }
L_08AF91F0:
    ctx.gpr[3] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2564)));
    goto L_08AF91CC;
L_08AF91FC:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[13] = (ctx.gpr[4] & ctx.gpr[14]);
    ctx.gpr[10] = (ctx.gpr[13] << 6u);
    ctx.gpr[11] = (ctx.gpr[12] & 63u);
    ctx.gpr[4] = (ctx.gpr[10] | ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[9] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF91FC;
      }
      goto L_08AF9224;
    }
L_08AF9224:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08AF91D0;
L_08AF922C:
    ctx.gpr[10] = (ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF92DC;
      }
      goto L_08AF9238;
    }
L_08AF9238:
    ctx.gpr[3] = (ctx.gpr[5] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    if (ctx.gpr[3] == 0u) {
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
        goto L_08AF9254;
    }
    goto L_08AF9244;
L_08AF9244:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AF924C;
L_08AF924C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9254:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(2048));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF9270;
      }
      goto L_08AF9260;
    }
L_08AF9260:
    ctx.gpr[3] = (ctx.gpr[3] << 5u);
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF9260;
      }
      goto L_08AF9270;
    }
L_08AF9270:
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(7));
    ctx.gpr[14] = (ctx.gpr[15] - ctx.gpr[7]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[13] << (ctx.gpr[14] & 31u));
    ctx.gpr[12] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[11];
    ctx.gpr[6] = (ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AF92C4;
      }
      goto L_08AF92A0;
    }
L_08AF92A0:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AF92A8;
L_08AF92A8:
    ctx.gpr[25] = (ctx.gpr[5] & 63u);
    ctx.gpr[24] = (ctx.gpr[25] | ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
      if (branch_taken) {
          goto L_08AF92A8;
      }
      goto L_08AF92C4;
    }
L_08AF92C4:
    ctx.gpr[11] = (ctx.gpr[9] >> 1u);
    ctx.gpr[8] = (ctx.gpr[5] & ctx.gpr[11]);
    ctx.gpr[7] = (~(0u | ctx.gpr[9]));
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AF924C;
L_08AF92DC:
    ctx.gpr[3] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2564)));
    goto L_08AF9238;
L_08AF92E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + 0u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[3] = (0u + 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF9344;
      }
      goto L_08AF9324;
    }
L_08AF9324:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9344:
    ctx.gpr[31] = (0x08AF934Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08AF91B0;
L_08AF934C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AF93AC;
      }
      goto L_08AF9354;
    }
L_08AF9354:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AF9360u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[29]);
    goto L_08AF913C;
L_08AF9360:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[3] - ctx.gpr[29]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF93AC;
      }
      goto L_08AF937C;
    }
L_08AF937C:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08AF93A4;
      }
      goto L_08AF9388;
    }
L_08AF9388:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AF938C;
L_08AF938C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF938C;
      }
      goto L_08AF93A4;
    }
L_08AF93A4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AF9344;
L_08AF93AC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[3] = (ctx.gpr[18] + 0u);
    goto L_08AF9324;
L_08AF93B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[2] = (0u + 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF9408;
      }
      goto L_08AF93EC;
    }
L_08AF93EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9408:
    ctx.gpr[31] = (0x08AF9410u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08AF90D0;
L_08AF9410:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AF9468;
      }
      goto L_08AF9418;
    }
L_08AF9418:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AF9424u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[29]);
    goto L_08AF922C;
L_08AF9424:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[3] - ctx.gpr[29]);
    ctx.gpr[2] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AF9468;
      }
      goto L_08AF9438;
    }
L_08AF9438:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[3] = (ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08AF9460;
      }
      goto L_08AF9444;
    }
L_08AF9444:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AF9448;
L_08AF9448:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF9448;
      }
      goto L_08AF9460;
    }
L_08AF9460:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AF9408;
L_08AF9468:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[18] + 0u);
    goto L_08AF93EC;
L_08AF9474:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AF9488;
L_08AF9488:
    ctx.gpr[31] = (0x08AF9490u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08AF91B0;
L_08AF9490:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AF94A0;
      }
      goto L_08AF9498;
    }
L_08AF9498:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08AF9488;
L_08AF94A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF94B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    ctx.gpr[16] = (ctx.gpr[4] + 0u);
    ctx.gpr[7] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(30));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[6] = (ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08AF9504;
      }
      goto L_08AF94D8;
    }
L_08AF94D8:
    ctx.gpr[31] = (0x08AF94E0u);
    // nop
    ctx.pc = 0x08B0B5D4u;
    return;
L_08AF94E0:
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(30));
      if (branch_taken) {
          goto L_08AF94F4;
      }
      goto L_08AF94EC;
    }
L_08AF94EC:
    ctx.gpr[31] = (0x08AF94F4u);
    // nop
    ctx.pc = 0x08B0B5E4u;
    return;
L_08AF94F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AF94F8;
L_08AF94F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9504:
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08AF9510u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(30));
    ctx.pc = 0x08B0B5DCu;
    return;
L_08AF9510:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AF94F8;
L_08AF9518:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] << 24u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5696));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF95B4;
      }
      goto L_08AF9554;
    }
L_08AF9554:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AF9570u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 803u, 0x08AA3CA4u>(ctx, &aot_mem) && ctx.pc == 0x08AF9570u) goto L_08AF9570;
    return;
L_08AF9570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
      if (branch_taken) {
          goto L_08AF95DC;
      }
      goto L_08AF9588;
    }
L_08AF9588:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[31] = (0x08AF95A4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 704u, 0x08AA34C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF95A4u) goto L_08AF95A4;
    return;
L_08AF95A4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
      if (branch_taken) {
          goto L_08AF95DC;
      }
      goto L_08AF95B4;
    }
L_08AF95B4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[31] = (0x08AF95CCu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08AF95CCu) goto L_08AF95CC;
    return;
L_08AF95CC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    goto L_08AF95DC;
L_08AF95DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9604;
      }
      goto L_08AF95EC;
    }
L_08AF95EC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[6]);
    ctx.gpr[31] = (0x08AF9600u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08AF9600u) goto L_08AF9600;
    return;
L_08AF9600:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AF9604;
L_08AF9604:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9624:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AF9644;
      }
      goto L_08AF9634;
    }
L_08AF9634:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AF9694;
      }
      goto L_08AF9644;
    }
L_08AF9644:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AF9668u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08AF9668u) goto L_08AF9668;
    return;
L_08AF9668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AF9680u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AF9680u) goto L_08AF9680;
    return;
L_08AF9680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08AF9694;
L_08AF9694:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF96A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF96BCu);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AF96BCu) goto L_08AF96BC;
    return;
L_08AF96BC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF96D4;
      }
      goto L_08AF96C8;
    }
L_08AF96C8:
    ctx.gpr[31] = (0x08AF96D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 12u, 0x0883C0DCu>(ctx, &aot_mem) && ctx.pc == 0x08AF96D0u) goto L_08AF96D0;
    return;
L_08AF96D0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AF96D4;
L_08AF96D4:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08AF96E0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 261u, 0x08A2956Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF96E0u) goto L_08AF96E0;
    return;
L_08AF96E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[31] = (0x08AF96ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 259u, 0x08A29554u>(ctx, &aot_mem) && ctx.pc == 0x08AF96ECu) goto L_08AF96EC;
    return;
L_08AF96EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9700:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF971Cu);
    ctx.gpr[4] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AF971Cu) goto L_08AF971C;
    return;
L_08AF971C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9734;
      }
      goto L_08AF9728;
    }
L_08AF9728:
    ctx.gpr[31] = (0x08AF9730u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 458u, 0x08A8E328u>(ctx, &aot_mem) && ctx.pc == 0x08AF9730u) goto L_08AF9730;
    return;
L_08AF9730:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AF9734;
L_08AF9734:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08AF9740u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-20996), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 261u, 0x08A2956Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF9740u) goto L_08AF9740;
    return;
L_08AF9740:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20996)));
    ctx.gpr[31] = (0x08AF974Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 259u, 0x08A29554u>(ctx, &aot_mem) && ctx.pc == 0x08AF974Cu) goto L_08AF974C;
    return;
L_08AF974C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9760:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9774:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF9794;
      }
      goto L_08AF978C;
    }
L_08AF978C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AF9794;
      }
      goto L_08AF9794;
    }
L_08AF9794:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF979C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF97B8;
      }
      goto L_08AF97B0;
    }
L_08AF97B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF97B8;
      }
      goto L_08AF97B8;
    }
L_08AF97B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF97C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF97E0;
      }
      goto L_08AF97D8;
    }
L_08AF97D8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AF97E0;
      }
      goto L_08AF97E0;
    }
L_08AF97E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF97E8:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF97F4:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9800:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF981C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9824:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF982C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9834:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF983C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF984Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08AF984Cu) goto L_08AF984C;
    return;
L_08AF984C:
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF985C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9864:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF986C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[2] = (ctx.gpr[4] & 512u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF987C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9884:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF98A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AF98FC;
      }
      goto L_08AF98BC;
    }
L_08AF98BC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08AF98EC;
      }
      goto L_08AF98C4;
    }
L_08AF98C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08AF98EC;
      }
      goto L_08AF98D4;
    }
L_08AF98D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08AF98EC;
    }
    goto L_08AF98E0;
L_08AF98E0:
    ctx.gpr[31] = (0x08AF98E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08AF98E8u) goto L_08AF98E8;
    return;
L_08AF98E8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08AF98EC;
L_08AF98EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF98FC;
      }
      goto L_08AF98F4;
    }
L_08AF98F4:
    ctx.gpr[31] = (0x08AF98FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AF98FCu) goto L_08AF98FC;
    return;
L_08AF98FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9910:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-20992)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13672));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08AF9928;
L_08AF9928:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF995C;
      }
      goto L_08AF9930;
    }
L_08AF9930:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AF9944u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 772u, 0x089C30F8u>(ctx, &aot_mem) && ctx.pc == 0x08AF9944u) goto L_08AF9944;
    return;
L_08AF9944:
    ctx.gpr[31] = (0x08AF994Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 228u, 0x08AECB74u>(ctx, &aot_mem) && ctx.pc == 0x08AF994Cu) goto L_08AF994C;
    return;
L_08AF994C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (2230u << 16u);
    goto L_08AF995C;
L_08AF995C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AF9968u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AF9968u) goto L_08AF9968;
    return;
L_08AF9968:
    ctx.gpr[31] = (0x08AF9970u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AF9970u) goto L_08AF9970;
    return;
L_08AF9970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[7] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AF9988;
      }
      goto L_08AF9980;
    }
L_08AF9980:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-20992)));
      if (branch_taken) {
          goto L_08AF9928;
      }
      goto L_08AF9988;
    }
L_08AF9988:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9994:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF99B4;
      }
      goto L_08AF99AC;
    }
L_08AF99AC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08AF99B4;
      }
      goto L_08AF99B4;
    }
L_08AF99B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF99BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF99E4:
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9A08:
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9A2C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9A54:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9A80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[0])) && ctx.fpr[13] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08AF9ABC;
      }
      goto L_08AF9AA4;
    }
L_08AF9AA4:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) && ctx.fpr[12] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF9ABC;
      }
      goto L_08AF9AB4;
    }
L_08AF9AB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9ACC;
      }
      goto L_08AF9ABC;
    }
L_08AF9ABC:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08AF9ACCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF9ACCu) goto L_08AF9ACC;
    return;
L_08AF9ACC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9AD8:
    jump_target = ctx.gpr[31];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9AE0:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9B0C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9B38:
    ctx.fpr[0] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[12]));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9B48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9B68:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9B70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9B8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[0])) && ctx.fpr[13] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AF9BC0;
      }
      goto L_08AF9BB0;
    }
L_08AF9BB0:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) && ctx.fpr[12] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF9BD8;
      }
      goto L_08AF9BC0;
    }
L_08AF9BC0:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08AF9BD0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF9BD0u) goto L_08AF9BD0;
    return;
L_08AF9BD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9BD8;
      }
      goto L_08AF9BD8;
    }
L_08AF9BD8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9BE4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9BF4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9BFC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9C04:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF9C50;
      }
      goto L_08AF9C3C;
    }
L_08AF9C3C:
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AF9C6C;
      }
      goto L_08AF9C50;
    }
L_08AF9C50:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[2] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    goto L_08AF9C6C;
L_08AF9C6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 4u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 6u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 8u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 12u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9CD8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9CE0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & 31u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[2] = (ctx.gpr[4] & 496u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] >> 4u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9D28;
      }
      goto L_08AF9D20;
    }
L_08AF9D20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF9D2C;
      }
      goto L_08AF9D28;
    }
L_08AF9D28:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AF9D2C;
L_08AF9D2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9D34:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 12u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9D58:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 14u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[2] = (ctx.gpr[4] & 16384u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9D8C:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (65535u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32767));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 15u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[2] = (ctx.gpr[4] & 32768u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9DC4:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (65534u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 17u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9DEC:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9E10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9E38:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9E40:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9E48:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9E50:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9E58:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9E60:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9E68:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(266), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9E70:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(296)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9E78:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9E80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF9E98u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF9E98u) goto L_08AF9E98;
    return;
L_08AF9E98:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9EA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF9EC8u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08AF9EC8u) goto L_08AF9EC8;
    return;
L_08AF9EC8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9ED4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9F48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9FC8:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9FD0:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(160))))));
    ctx.gpr[2] = (ctx.gpr[4] ^ 82u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9FF4:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(160))))));
    ctx.gpr[2] = (ctx.gpr[4] ^ 70u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA018:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA020:
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA030:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA038:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA05C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[2] = (ctx.gpr[4] & 32u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA06C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA074:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA07C:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA084:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA08C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA094:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFA0C4;
      }
      goto L_08AFA0A0;
    }
L_08AFA0A0:
    ctx.gpr[7] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AFA0C4;
      }
      goto L_08AFA0AC;
    }
L_08AFA0AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFA0C4;
      }
      goto L_08AFA0C0;
    }
L_08AFA0C0:
    ctx.gpr[6] = (0u | 1u);
    goto L_08AFA0C4;
L_08AFA0C4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA0CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA0D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFA0F0u);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08AFA0F0u) goto L_08AFA0F0;
    return;
L_08AFA0F0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA104:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1560)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA10C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA114:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFA168;
      }
      goto L_08AFA138;
    }
L_08AFA138:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFA168;
      }
      goto L_08AFA140;
    }
L_08AFA140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA160;
      }
      goto L_08AFA14C;
    }
L_08AFA14C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA15C;
      }
      goto L_08AFA154;
    }
L_08AFA154:
    ctx.gpr[31] = (0x08AFA15Cu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08AFA15Cu) goto L_08AFA15C;
    return;
L_08AFA15C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_08AFA160;
L_08AFA160:
    ctx.gpr[31] = (0x08AFA168u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA168u) goto L_08AFA168;
    return;
L_08AFA168:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA180:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA188:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA1A8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA1B4:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7768)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA1C0:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7767)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA1CC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA1D4:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-24108));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA1E0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA1E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA204:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFA260;
      }
      goto L_08AFA220;
    }
L_08AFA220:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08AFA250;
      }
      goto L_08AFA228;
    }
L_08AFA228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08AFA250;
      }
      goto L_08AFA238;
    }
L_08AFA238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08AFA250;
    }
    goto L_08AFA244;
L_08AFA244:
    ctx.gpr[31] = (0x08AFA24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08AFA24Cu) goto L_08AFA24C;
    return;
L_08AFA24C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08AFA250;
L_08AFA250:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA260;
      }
      goto L_08AFA258;
    }
L_08AFA258:
    ctx.gpr[31] = (0x08AFA260u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFA260u) goto L_08AFA260;
    return;
L_08AFA260:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[2] = (ctx.gpr[4] & 14u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] >> 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA284:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20652)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA2A8;
      }
      goto L_08AFA2A0;
    }
L_08AFA2A0:
    ctx.gpr[31] = (0x08AFA2A8u);
    // nop
    goto L_08AFA45C;
L_08AFA2A8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA2BC:
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA2E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA30C;
      }
      goto L_08AFA2F0;
    }
L_08AFA2F0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9668));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFA30C;
      }
      goto L_08AFA304;
    }
L_08AFA304:
    ctx.gpr[31] = (0x08AFA30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFA30Cu) goto L_08AFA30C;
    return;
L_08AFA30C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA360;
      }
      goto L_08AFA328;
    }
L_08AFA328:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9652));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-20648), 0u);
      if (branch_taken) {
          goto L_08AFA34C;
      }
      goto L_08AFA340;
    }
L_08AFA340:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFA34C;
L_08AFA34C:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA360;
      }
      goto L_08AFA358;
    }
L_08AFA358:
    ctx.gpr[31] = (0x08AFA360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFA360u) goto L_08AFA360;
    return;
L_08AFA360:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA36C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFA3E0;
      }
      goto L_08AFA388;
    }
L_08AFA388:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9636));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08AFA3A0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 48u, 0x088B8370u>(ctx, &aot_mem) && ctx.pc == 0x08AFA3A0u) goto L_08AFA3A0;
    return;
L_08AFA3A0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08AFA3D0;
      }
      goto L_08AFA3A8;
    }
L_08AFA3A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9652));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-20648), 0u);
      if (branch_taken) {
          goto L_08AFA3CC;
      }
      goto L_08AFA3C0;
    }
L_08AFA3C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AFA3CC;
L_08AFA3CC:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08AFA3D0;
L_08AFA3D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA3E0;
      }
      goto L_08AFA3D8;
    }
L_08AFA3D8:
    ctx.gpr[31] = (0x08AFA3E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFA3E0u) goto L_08AFA3E0;
    return;
L_08AFA3E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA3F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFA448;
      }
      goto L_08AFA410;
    }
L_08AFA410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08AFA438;
    }
    goto L_08AFA424;
L_08AFA424:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AFA434u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA434u) goto L_08AFA434;
    return;
L_08AFA434:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08AFA438;
L_08AFA438:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA448;
      }
      goto L_08AFA440;
    }
L_08AFA440:
    ctx.gpr[31] = (0x08AFA448u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFA448u) goto L_08AFA448;
    return;
L_08AFA448:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA45C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFA478u);
    ctx.gpr[4] = (0u | 3188u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA478u) goto L_08AFA478;
    return;
L_08AFA478:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA490;
      }
      goto L_08AFA484;
    }
L_08AFA484:
    ctx.gpr[31] = (0x08AFA48Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 344u, 0x08A09688u>(ctx, &aot_mem) && ctx.pc == 0x08AFA48Cu) goto L_08AFA48C;
    return;
L_08AFA48C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AFA490;
L_08AFA490:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08AFA49Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-20652), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 261u, 0x08A2956Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA49Cu) goto L_08AFA49C;
    return;
L_08AFA49C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[31] = (0x08AFA4A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 259u, 0x08A29554u>(ctx, &aot_mem) && ctx.pc == 0x08AFA4A8u) goto L_08AFA4A8;
    return;
L_08AFA4A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA4BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFA4D8u);
    ctx.gpr[4] = (0u | 260u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA4D8u) goto L_08AFA4D8;
    return;
L_08AFA4D8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA4F0;
      }
      goto L_08AFA4E4;
    }
L_08AFA4E4:
    ctx.gpr[31] = (0x08AFA4ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 485u, 0x0882BCC4u>(ctx, &aot_mem) && ctx.pc == 0x08AFA4ECu) goto L_08AFA4EC;
    return;
L_08AFA4EC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AFA4F0;
L_08AFA4F0:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08AFA4FCu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-20648), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 261u, 0x08A2956Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA4FCu) goto L_08AFA4FC;
    return;
L_08AFA4FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20648)));
    ctx.gpr[31] = (0x08AFA508u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 259u, 0x08A29554u>(ctx, &aot_mem) && ctx.pc == 0x08AFA508u) goto L_08AFA508;
    return;
L_08AFA508:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA51C:
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA558:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA580:
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
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA5A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA5F0;
      }
      goto L_08AFA5B8;
    }
L_08AFA5B8:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9620));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-20628), 0u);
      if (branch_taken) {
          goto L_08AFA5DC;
      }
      goto L_08AFA5D0;
    }
L_08AFA5D0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFA5DC;
L_08AFA5DC:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA5F0;
      }
      goto L_08AFA5E8;
    }
L_08AFA5E8:
    ctx.gpr[31] = (0x08AFA5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFA5F0u) goto L_08AFA5F0;
    return;
L_08AFA5F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA5FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFA618u);
    ctx.gpr[4] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AFA618u) goto L_08AFA618;
    return;
L_08AFA618:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA630;
      }
      goto L_08AFA624;
    }
L_08AFA624:
    ctx.gpr[31] = (0x08AFA62Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 1u, 0x08838004u>(ctx, &aot_mem) && ctx.pc == 0x08AFA62Cu) goto L_08AFA62C;
    return;
L_08AFA62C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AFA630;
L_08AFA630:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08AFA63Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-20628), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 261u, 0x08A2956Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFA63Cu) goto L_08AFA63C;
    return;
L_08AFA63C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20628)));
    ctx.gpr[31] = (0x08AFA648u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 259u, 0x08A29554u>(ctx, &aot_mem) && ctx.pc == 0x08AFA648u) goto L_08AFA648;
    return;
L_08AFA648:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA65C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 3u));
    ctx.gpr[9] = (ctx.gpr[9] >> 29u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AFA6B8;
      }
      goto L_08AFA6A8;
    }
L_08AFA6A8:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AFA6C4;
      }
      goto L_08AFA6B8;
    }
L_08AFA6B8:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_08AFA6C4;
L_08AFA6C4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFA720;
      }
      goto L_08AFA6CC;
    }
L_08AFA6CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AFA6E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFA6E4u) goto L_08AFA6E4;
    return;
L_08AFA6E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08AFA720;
      }
      goto L_08AFA6FC;
    }
L_08AFA6FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AFA710u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08AF9910;
L_08AFA710:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08AFA720;
L_08AFA720:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFA758;
      }
      goto L_08AFA730;
    }
L_08AFA730:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
        goto L_08AFA750;
    }
    goto L_08AFA73C;
L_08AFA73C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    goto L_08AFA750;
L_08AFA750:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AFA730;
      }
      goto L_08AFA758;
    }
L_08AFA758:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AFA790;
      }
      goto L_08AFA768;
    }
L_08AFA768:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA784;
      }
      goto L_08AFA774;
    }
L_08AFA774:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFA784;
L_08AFA784:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFA7C4;
      }
      goto L_08AFA790;
    }
L_08AFA790:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFA7C0;
      }
      goto L_08AFA798;
    }
L_08AFA798:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08AFA7B8;
    }
    goto L_08AFA7A4;
L_08AFA7A4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08AFA7B8;
L_08AFA7B8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AFA798;
      }
      goto L_08AFA7C0;
    }
L_08AFA7C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFA7C4;
L_08AFA7C4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA808;
      }
      goto L_08AFA7CC;
    }
L_08AFA7CC:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFA808;
      }
      goto L_08AFA7DC;
    }
L_08AFA7DC:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
        goto L_08AFA7FC;
    }
    goto L_08AFA7E8;
L_08AFA7E8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08AFA7FC;
L_08AFA7FC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AFA7DC;
      }
      goto L_08AFA804;
    }
L_08AFA804:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFA808;
L_08AFA808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFA824;
      }
      goto L_08AFA818;
    }
L_08AFA818:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    goto L_08AFA81C;
L_08AFA81C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AFA81C;
      }
      goto L_08AFA824;
    }
L_08AFA824:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA834;
      }
      goto L_08AFA82C;
    }
L_08AFA82C:
    ctx.gpr[31] = (0x08AFA834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFA834u) goto L_08AFA834;
    return;
L_08AFA834:
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFA864:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (0u | 12u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[9] & 255u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFA8D8;
      }
      goto L_08AFA8C8;
    }
L_08AFA8C8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFA8E4;
      }
      goto L_08AFA8D8;
    }
L_08AFA8D8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_08AFA8E4;
L_08AFA8E4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFA918;
      }
      goto L_08AFA8EC;
    }
L_08AFA8EC:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x08AFA900u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFA900u) goto L_08AFA900;
    return;
L_08AFA900:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AFA918;
      }
      goto L_08AFA90C;
    }
L_08AFA90C:
    ctx.gpr[31] = (0x08AFA914u);
    // nop
    goto L_08AF9910;
L_08AFA914:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    goto L_08AFA918;
L_08AFA918:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFA958;
      }
      goto L_08AFA928;
    }
L_08AFA928:
    ctx.gpr[30] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
        goto L_08AFA950;
    }
    goto L_08AFA934;
L_08AFA934:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFA944u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08AF9624;
L_08AFA944:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    goto L_08AFA950;
L_08AFA950:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[17];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFA928;
      }
      goto L_08AFA958;
    }
L_08AFA958:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFA998;
      }
      goto L_08AFA968;
    }
L_08AFA968:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA98C;
      }
      goto L_08AFA974;
    }
L_08AFA974:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFA984u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AF9624;
L_08AFA984:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AFA98C;
L_08AFA98C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFA9D4;
      }
      goto L_08AFA998;
    }
L_08AFA998:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFA9D0;
      }
      goto L_08AFA9A0;
    }
L_08AFA9A0:
    ctx.gpr[30] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
        goto L_08AFA9C8;
    }
    goto L_08AFA9AC;
L_08AFA9AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFA9BCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08AF9624;
L_08AFA9BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08AFA9C8;
L_08AFA9C8:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFA9A0;
      }
      goto L_08AFA9D0;
    }
L_08AFA9D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFA9D4;
L_08AFA9D4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAA1C;
      }
      goto L_08AFA9DC;
    }
L_08AFA9DC:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFAA1C;
      }
      goto L_08AFA9E8;
    }
L_08AFA9E8:
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
        goto L_08AFAA10;
    }
    goto L_08AFA9F4;
L_08AFA9F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFAA04u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08AF9624;
L_08AFAA04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    goto L_08AFAA10;
L_08AFAA10:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFA9E8;
      }
      goto L_08AFAA18;
    }
L_08AFAA18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFAA1C;
L_08AFAA1C:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFAA74;
      }
      goto L_08AFAA30;
    }
L_08AFAA30:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21008));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(5696));
    goto L_08AFAA40;
L_08AFAA40:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
        goto L_08AFAA68;
    }
    goto L_08AFAA48;
L_08AFAA48:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
        goto L_08AFAA68;
    }
    goto L_08AFAA50;
L_08AFAA50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFAA64;
      }
      goto L_08AFAA5C;
    }
L_08AFAA5C:
    ctx.gpr[31] = (0x08AFAA64u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFAA64u) goto L_08AFAA64;
    return;
L_08AFAA64:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_08AFAA68;
L_08AFAA68:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AFAA40;
      }
      goto L_08AFAA70;
    }
L_08AFAA70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFAA74;
L_08AFAA74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAA84;
      }
      goto L_08AFAA7C;
    }
L_08AFAA7C:
    ctx.gpr[31] = (0x08AFAA84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFAA84u) goto L_08AFAA84;
    return;
L_08AFAA84:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
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
L_08AFAAD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAB18;
      }
      goto L_08AFAAE0;
    }
L_08AFAAE0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9604));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-20624), 0u);
      if (branch_taken) {
          goto L_08AFAB04;
      }
      goto L_08AFAAF8;
    }
L_08AFAAF8:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFAB04;
L_08AFAB04:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAB18;
      }
      goto L_08AFAB10;
    }
L_08AFAB10:
    ctx.gpr[31] = (0x08AFAB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFAB18u) goto L_08AFAB18;
    return;
L_08AFAB18:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFAB24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFAC9C;
      }
      goto L_08AFAB54;
    }
L_08AFAB54:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9588));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFAB98;
      }
      goto L_08AFAB70;
    }
L_08AFAB70:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFAB98;
      }
      goto L_08AFAB80;
    }
L_08AFAB80:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAB98;
      }
      goto L_08AFAB88;
    }
L_08AFAB88:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAB98;
      }
      goto L_08AFAB90;
    }
L_08AFAB90:
    ctx.gpr[31] = (0x08AFAB98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFAB98u) goto L_08AFAB98;
    return;
L_08AFAB98:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFABE0;
      }
      goto L_08AFABA0;
    }
L_08AFABA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFABC0;
      }
      goto L_08AFABB4;
    }
L_08AFABB4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08AFABB8;
L_08AFABB8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AFABB8;
      }
      goto L_08AFABC0;
    }
L_08AFABC0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFABE0;
      }
      goto L_08AFABC8;
    }
L_08AFABC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFABE0;
      }
      goto L_08AFABD0;
    }
L_08AFABD0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFABE0;
      }
      goto L_08AFABD8;
    }
L_08AFABD8:
    ctx.gpr[31] = (0x08AFABE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFABE0u) goto L_08AFABE0;
    return;
L_08AFABE0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAC5C;
      }
      goto L_08AFABE8;
    }
L_08AFABE8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFAC38;
      }
      goto L_08AFABF8;
    }
L_08AFABF8:
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-21008));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(5696));
    goto L_08AFAC08;
L_08AFAC08:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
        goto L_08AFAC30;
    }
    goto L_08AFAC10;
L_08AFAC10:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
        goto L_08AFAC30;
    }
    goto L_08AFAC18;
L_08AFAC18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFAC2C;
      }
      goto L_08AFAC24;
    }
L_08AFAC24:
    ctx.gpr[31] = (0x08AFAC2Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFAC2Cu) goto L_08AFAC2C;
    return;
L_08AFAC2C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_08AFAC30;
L_08AFAC30:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AFAC08;
      }
      goto L_08AFAC38;
    }
L_08AFAC38:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAC5C;
      }
      goto L_08AFAC40;
    }
L_08AFAC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAC5C;
      }
      goto L_08AFAC4C;
    }
L_08AFAC4C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAC5C;
      }
      goto L_08AFAC54;
    }
L_08AFAC54:
    ctx.gpr[31] = (0x08AFAC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFAC5Cu) goto L_08AFAC5C;
    return;
L_08AFAC5C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08AFAC8C;
      }
      goto L_08AFAC64;
    }
L_08AFAC64:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9604));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624), 0u);
      if (branch_taken) {
          goto L_08AFAC88;
      }
      goto L_08AFAC7C;
    }
L_08AFAC7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AFAC88;
L_08AFAC88:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_08AFAC8C;
L_08AFAC8C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAC9C;
      }
      goto L_08AFAC94;
    }
L_08AFAC94:
    ctx.gpr[31] = (0x08AFAC9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFAC9Cu) goto L_08AFAC9C;
    return;
L_08AFAC9C:
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
L_08AFACC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFAE08;
      }
      goto L_08AFAD10;
    }
L_08AFAD10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
      if (branch_taken) {
          goto L_08AFADC0;
      }
      goto L_08AFAD30;
    }
L_08AFAD30:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFAD64;
      }
      goto L_08AFAD40;
    }
L_08AFAD40:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[31] = (0x08AFAD4Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFAD4Cu) goto L_08AFAD4C;
    return;
L_08AFAD4C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFAD64;
      }
      goto L_08AFAD58;
    }
L_08AFAD58:
    ctx.gpr[31] = (0x08AFAD60u);
    // nop
    goto L_08AF9910;
L_08AFAD60:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08AFAD64;
L_08AFAD64:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFAD84u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AFAFB0;
L_08AFAD84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFADA4;
      }
      goto L_08AFAD94;
    }
L_08AFAD94:
    ctx.gpr[6] = (ctx.gpr[20] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AFADA4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFADA4u) goto L_08AFADA4;
    return;
L_08AFADA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFADEC;
      }
      goto L_08AFADB0;
    }
L_08AFADB0:
    ctx.gpr[31] = (0x08AFADB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFADB8u) goto L_08AFADB8;
    return;
L_08AFADB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFADEC;
      }
      goto L_08AFADC0;
    }
L_08AFADC0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFADEC;
      }
      goto L_08AFADC8;
    }
L_08AFADC8:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[31] = (0x08AFADD4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFADD4u) goto L_08AFADD4;
    return;
L_08AFADD4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AFADEC;
      }
      goto L_08AFADE0;
    }
L_08AFADE0:
    ctx.gpr[31] = (0x08AFADE8u);
    // nop
    goto L_08AF9910;
L_08AFADE8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08AFADEC;
L_08AFADEC:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08AFAE08;
L_08AFAE08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFAE2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-21008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AFAF1C;
      }
      goto L_08AFAE60;
    }
L_08AFAE60:
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5696));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFAED4;
      }
      goto L_08AFAE70;
    }
L_08AFAE70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AFAE88u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 803u, 0x08AA3CA4u>(ctx, &aot_mem) && ctx.pc == 0x08AFAE88u) goto L_08AFAE88;
    return;
L_08AFAE88:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AFAF04;
      }
      goto L_08AFAEA0;
    }
L_08AFAEA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AFAEC0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 704u, 0x08AA34C8u>(ctx, &aot_mem) && ctx.pc == 0x08AFAEC0u) goto L_08AFAEC0;
    return;
L_08AFAEC0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AFAF04;
      }
      goto L_08AFAED4;
    }
L_08AFAED4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[31] = (0x08AFAEF0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08AFAEF0u) goto L_08AFAEF0;
    return;
L_08AFAEF0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AFAF04;
L_08AFAF04:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AFAF14u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AFAF14u) goto L_08AFAF14;
    return;
L_08AFAF14:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AFAF38;
      }
      goto L_08AFAF1C;
    }
L_08AFAF1C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AFAF38;
      }
      goto L_08AFAF24;
    }
L_08AFAF24:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AFAF30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFAF30u) goto L_08AFAF30;
    return;
L_08AFAF30:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AFAF38;
L_08AFAF38:
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
L_08AFAF50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFAF6Cu);
    ctx.gpr[4] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AFAF6Cu) goto L_08AFAF6C;
    return;
L_08AFAF6C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAF84;
      }
      goto L_08AFAF78;
    }
L_08AFAF78:
    ctx.gpr[31] = (0x08AFAF80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 198u, 0x08838CECu>(ctx, &aot_mem) && ctx.pc == 0x08AFAF80u) goto L_08AFAF80;
    return;
L_08AFAF80:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AFAF84;
L_08AFAF84:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08AFAF90u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-20624), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 261u, 0x08A2956Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFAF90u) goto L_08AFAF90;
    return;
L_08AFAF90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20624)));
    ctx.gpr[31] = (0x08AFAF9Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 259u, 0x08A29554u>(ctx, &aot_mem) && ctx.pc == 0x08AFAF9Cu) goto L_08AFAF9C;
    return;
L_08AFAF9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFAFB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFAFC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AFAFF4;
      }
      goto L_08AFAFEC;
    }
L_08AFAFEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB03C;
      }
      goto L_08AFAFF4;
    }
L_08AFAFF4:
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AFB03C;
      }
      goto L_08AFB000;
    }
L_08AFB000:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x08AFB01Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AFB01Cu) goto L_08AFB01C;
    return;
L_08AFB01C:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFB000;
      }
      goto L_08AFB03C;
    }
L_08AFB03C:
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
L_08AFB058:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AFB080;
      }
      goto L_08AFB068;
    }
L_08AFB068:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13268));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFB080;
      }
      goto L_08AFB078;
    }
L_08AFB078:
    ctx.gpr[31] = (0x08AFB080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFB080u) goto L_08AFB080;
    return;
L_08AFB080:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB08C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB094:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB09C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AFB0D8;
      }
      goto L_08AFB0AC;
    }
L_08AFB0AC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-17236));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFB0C4;
      }
      goto L_08AFB0B8;
    }
L_08AFB0B8:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13268));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_08AFB0C4;
L_08AFB0C4:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB0D8;
      }
      goto L_08AFB0D0;
    }
L_08AFB0D0:
    ctx.gpr[31] = (0x08AFB0D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFB0D8u) goto L_08AFB0D8;
    return;
L_08AFB0D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB0E4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB0EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AFB138;
      }
      goto L_08AFB0FC;
    }
L_08AFB0FC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-20620));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFB124;
      }
      goto L_08AFB108;
    }
L_08AFB108:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-17236));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFB124;
      }
      goto L_08AFB118;
    }
L_08AFB118:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13268));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_08AFB124;
L_08AFB124:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB138;
      }
      goto L_08AFB130;
    }
L_08AFB130:
    ctx.gpr[31] = (0x08AFB138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFB138u) goto L_08AFB138;
    return;
L_08AFB138:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB144:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB14C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB154:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB15C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB164:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB16C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFB1CC;
      }
      goto L_08AFB188;
    }
L_08AFB188:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08AFB1BC;
      }
      goto L_08AFB194;
    }
L_08AFB194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08AFB1BC;
      }
      goto L_08AFB1A4;
    }
L_08AFB1A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08AFB1BC;
    }
    goto L_08AFB1B0;
L_08AFB1B0:
    ctx.gpr[31] = (0x08AFB1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08AFB1B8u) goto L_08AFB1B8;
    return;
L_08AFB1B8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08AFB1BC;
L_08AFB1BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB1CC;
      }
      goto L_08AFB1C4;
    }
L_08AFB1C4:
    ctx.gpr[31] = (0x08AFB1CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFB1CCu) goto L_08AFB1CC;
    return;
L_08AFB1CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB1E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AFB204;
      }
      goto L_08AFB1F4;
    }
L_08AFB1F4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AFB27C;
      }
      goto L_08AFB204;
    }
L_08AFB204:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AFB234u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08AFB234u) goto L_08AFB234;
    return;
L_08AFB234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AFB24Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AFB24Cu) goto L_08AFB24C;
    return;
L_08AFB24C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08AFB268u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AFB268u) goto L_08AFB268;
    return;
L_08AFB268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08AFB27C;
L_08AFB27C:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB28C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5696));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFB32C;
      }
      goto L_08AFB2CC;
    }
L_08AFB2CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AFB2E8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 803u, 0x08AA3CA4u>(ctx, &aot_mem) && ctx.pc == 0x08AFB2E8u) goto L_08AFB2E8;
    return;
L_08AFB2E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AFB350;
      }
      goto L_08AFB300;
    }
L_08AFB300:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AFB320u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 704u, 0x08AA34C8u>(ctx, &aot_mem) && ctx.pc == 0x08AFB320u) goto L_08AFB320;
    return;
L_08AFB320:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AFB350;
      }
      goto L_08AFB32C;
    }
L_08AFB32C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AFB344u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08AFB344u) goto L_08AFB344;
    return;
L_08AFB344:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AFB350;
L_08AFB350:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFB368u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AFB368u) goto L_08AFB368;
    return;
L_08AFB368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB38C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB3D4;
      }
      goto L_08AFB39C;
    }
L_08AFB39C:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9572));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-21000), 0u);
      if (branch_taken) {
          goto L_08AFB3C0;
      }
      goto L_08AFB3B4;
    }
L_08AFB3B4:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFB3C0;
L_08AFB3C0:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB3D4;
      }
      goto L_08AFB3CC;
    }
L_08AFB3CC:
    ctx.gpr[31] = (0x08AFB3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFB3D4u) goto L_08AFB3D4;
    return;
L_08AFB3D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB3E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFB474;
      }
      goto L_08AFB3FC;
    }
L_08AFB3FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9556));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB434;
      }
      goto L_08AFB414;
    }
L_08AFB414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFB434;
      }
      goto L_08AFB428;
    }
L_08AFB428:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AFB434u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFB434u) goto L_08AFB434;
    return;
L_08AFB434:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08AFB464;
      }
      goto L_08AFB43C;
    }
L_08AFB43C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9572));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000), 0u);
      if (branch_taken) {
          goto L_08AFB460;
      }
      goto L_08AFB454;
    }
L_08AFB454:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AFB460;
L_08AFB460:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08AFB464;
L_08AFB464:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB474;
      }
      goto L_08AFB46C;
    }
L_08AFB46C:
    ctx.gpr[31] = (0x08AFB474u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFB474u) goto L_08AFB474;
    return;
L_08AFB474:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB488:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB490:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08AFB4A0;
L_08AFB4A0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AFB4CC;
      }
      goto L_08AFB4AC;
    }
L_08AFB4AC:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB4C4;
      }
      goto L_08AFB4B4;
    }
L_08AFB4B4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFB4CC;
      }
      goto L_08AFB4C4;
    }
L_08AFB4C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFB54C;
      }
      goto L_08AFB4CC;
    }
L_08AFB4CC:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB4A0;
      }
      goto L_08AFB4E8;
    }
L_08AFB4E8:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] & 127u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] & 127u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08AFB54C;
L_08AFB54C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB554:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[8] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFB580u);
    ctx.gpr[16] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_08AFB5D8;
L_08AFB580:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB594:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 544u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB5D0;
      }
      goto L_08AFB5CC;
    }
L_08AFB5CC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08AFB5D0;
L_08AFB5D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB5D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB664;
      }
      goto L_08AFB640;
    }
L_08AFB640:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB640;
      }
      goto L_08AFB664;
    }
L_08AFB664:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB66C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 544u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[5] << 8u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 544u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB6B4:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB6BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFB6E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08AFB6E0u) goto L_08AFB6E0;
    return;
L_08AFB6E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5696));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFB768;
      }
      goto L_08AFB708;
    }
L_08AFB708:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AFB724u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 803u, 0x08AA3CA4u>(ctx, &aot_mem) && ctx.pc == 0x08AFB724u) goto L_08AFB724;
    return;
L_08AFB724:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AFB78C;
      }
      goto L_08AFB73C;
    }
L_08AFB73C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AFB75Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 704u, 0x08AA34C8u>(ctx, &aot_mem) && ctx.pc == 0x08AFB75Cu) goto L_08AFB75C;
    return;
L_08AFB75C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AFB78C;
      }
      goto L_08AFB768;
    }
L_08AFB768:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AFB780u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08AFB780u) goto L_08AFB780;
    return;
L_08AFB780:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AFB78C;
L_08AFB78C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AFB7A0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AFB7A0u) goto L_08AFB7A0;
    return;
L_08AFB7A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_08AFB7C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB7E0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB7E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB828:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB830:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB838:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB840:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1428));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB85C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB86C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[4] & ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB87C:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB890:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1724)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB89C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1724)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB8A4:
    ctx.gpr[2] = (2224u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-18268));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB8B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB8DC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AFB918;
      }
      goto L_08AFB8FC;
    }
L_08AFB8FC:
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFB91C;
      }
      goto L_08AFB918;
    }
L_08AFB918:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AFB91C;
L_08AFB91C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB924:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
      if (branch_taken) {
          goto L_08AFB96C;
      }
      goto L_08AFB944;
    }
L_08AFB944:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFB970;
      }
      goto L_08AFB96C;
    }
L_08AFB96C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AFB970;
L_08AFB970:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB978:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_08AFB9AC;
      }
      goto L_08AFB998;
    }
L_08AFB998:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFB9B0;
      }
      goto L_08AFB9AC;
    }
L_08AFB9AC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AFB9B0;
L_08AFB9B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB9B8:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
L_08AFB9D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFBB18;
      }
      goto L_08AFBA20;
    }
L_08AFBA20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
      if (branch_taken) {
          goto L_08AFBAD0;
      }
      goto L_08AFBA40;
    }
L_08AFBA40:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFBA74;
      }
      goto L_08AFBA50;
    }
L_08AFBA50:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[31] = (0x08AFBA5Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFBA5Cu) goto L_08AFBA5C;
    return;
L_08AFBA5C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFBA74;
      }
      goto L_08AFBA68;
    }
L_08AFBA68:
    ctx.gpr[31] = (0x08AFBA70u);
    // nop
    goto L_08AF9910;
L_08AFBA70:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08AFBA74;
L_08AFBA74:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFBA94u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AFBE5C;
L_08AFBA94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFBAB4;
      }
      goto L_08AFBAA4;
    }
L_08AFBAA4:
    ctx.gpr[6] = (ctx.gpr[20] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AFBAB4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFBAB4u) goto L_08AFBAB4;
    return;
L_08AFBAB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFBAFC;
      }
      goto L_08AFBAC0;
    }
L_08AFBAC0:
    ctx.gpr[31] = (0x08AFBAC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFBAC8u) goto L_08AFBAC8;
    return;
L_08AFBAC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBAFC;
      }
      goto L_08AFBAD0;
    }
L_08AFBAD0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFBAFC;
      }
      goto L_08AFBAD8;
    }
L_08AFBAD8:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[31] = (0x08AFBAE4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFBAE4u) goto L_08AFBAE4;
    return;
L_08AFBAE4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AFBAFC;
      }
      goto L_08AFBAF0;
    }
L_08AFBAF0:
    ctx.gpr[31] = (0x08AFBAF8u);
    // nop
    goto L_08AF9910;
L_08AFBAF8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08AFBAFC;
L_08AFBAFC:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08AFBB18;
L_08AFBB18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBB3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08AFBB64;
L_08AFBB64:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFBC90;
      }
      goto L_08AFBB6C;
    }
L_08AFBB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBC90;
      }
      goto L_08AFBB7C;
    }
L_08AFBB7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFBC10;
      }
      goto L_08AFBB8C;
    }
L_08AFBB8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBBC8;
      }
      goto L_08AFBB98;
    }
L_08AFBB98:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBBC8;
      }
      goto L_08AFBBA4;
    }
L_08AFBBA4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFBC08;
      }
      goto L_08AFBBC8;
    }
L_08AFBBC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[17] != ctx.gpr[5]) {
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
        goto L_08AFBBE8;
    }
    goto L_08AFBBD4;
L_08AFBBD4:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AFBBE0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AFBDA4;
L_08AFBBE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08AFBBE8;
L_08AFBBE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AFBC04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08AFBE00;
L_08AFBC04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFBC08;
L_08AFBC08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBC88;
      }
      goto L_08AFBC10;
    }
L_08AFBC10:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBC48;
      }
      goto L_08AFBC18;
    }
L_08AFBC18:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBC48;
      }
      goto L_08AFBC24;
    }
L_08AFBC24:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFBC88;
      }
      goto L_08AFBC48;
    }
L_08AFBC48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[17] != ctx.gpr[5]) {
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
        goto L_08AFBC68;
    }
    goto L_08AFBC54;
L_08AFBC54:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AFBC60u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AFBE00;
L_08AFBC60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08AFBC68;
L_08AFBC68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AFBC84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08AFBDA4;
L_08AFBC84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFBC88;
L_08AFBC88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBB64;
      }
      goto L_08AFBC90;
    }
L_08AFBC90:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
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
L_08AFBCAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBCE0;
      }
      goto L_08AFBCB8;
    }
L_08AFBCB8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBD14;
      }
      goto L_08AFBCC8;
    }
L_08AFBCC8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBCC8;
      }
      goto L_08AFBCD8;
    }
L_08AFBCD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBD14;
      }
      goto L_08AFBCE0;
    }
L_08AFBCE0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AFBD08;
      }
      goto L_08AFBCF0;
    }
L_08AFBCF0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFBCF0;
      }
      goto L_08AFBD04;
    }
L_08AFBD04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08AFBD08;
L_08AFBD08:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AFBD14;
      }
      goto L_08AFBD10;
    }
L_08AFBD10:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08AFBD14;
L_08AFBD14:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBD1C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBD40;
      }
      goto L_08AFBD28;
    }
L_08AFBD28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFBD40;
      }
      goto L_08AFBD38;
    }
L_08AFBD38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AFBD9C;
      }
      goto L_08AFBD40;
    }
L_08AFBD40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBD74;
      }
      goto L_08AFBD4C;
    }
L_08AFBD4C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBD6C;
      }
      goto L_08AFBD5C;
    }
L_08AFBD5C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBD5C;
      }
      goto L_08AFBD6C;
    }
L_08AFBD6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBD9C;
      }
      goto L_08AFBD74;
    }
L_08AFBD74:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AFBD9C;
      }
      goto L_08AFBD88;
    }
L_08AFBD88:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AFBD88;
      }
      goto L_08AFBD9C;
    }
L_08AFBD9C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBDA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AFBDBC;
      }
      goto L_08AFBDB4;
    }
L_08AFBDB4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AFBDBC;
L_08AFBDBC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AFBDD8;
      }
      goto L_08AFBDD0;
    }
L_08AFBDD0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFBDF4;
      }
      goto L_08AFBDD8;
    }
L_08AFBDD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AFBDF0;
      }
      goto L_08AFBDE8;
    }
L_08AFBDE8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFBDF4;
      }
      goto L_08AFBDF0;
    }
L_08AFBDF0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_08AFBDF4;
L_08AFBDF4:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBE00:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AFBE18;
      }
      goto L_08AFBE10;
    }
L_08AFBE10:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AFBE18;
L_08AFBE18:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AFBE34;
      }
      goto L_08AFBE2C;
    }
L_08AFBE2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFBE50;
      }
      goto L_08AFBE34;
    }
L_08AFBE34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AFBE4C;
      }
      goto L_08AFBE44;
    }
L_08AFBE44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFBE50;
      }
      goto L_08AFBE4C;
    }
L_08AFBE4C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_08AFBE50;
L_08AFBE50:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBE5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBE70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBE84:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBE8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBEA0:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBEAC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBEBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[4]);
    ctx.gpr[6] = (0u | 40u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFBF6C;
      }
      goto L_08AFBF08;
    }
L_08AFBF08:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08AFBF30u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 206u, 0x08AFCD7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFBF30u) goto L_08AFBF30;
    return;
L_08AFBF30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AFBF40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 206u, 0x08AFCD7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFBF40u) goto L_08AFBF40;
    return;
L_08AFBF40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08AFBF50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 206u, 0x08AFCD7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFBF50u) goto L_08AFBF50;
    return;
L_08AFBF50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08AFBF08;
      }
      goto L_08AFBF68;
    }
L_08AFBF68:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFBF6C;
L_08AFBF6C:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC014u>(ctx, &aot_mem); return;
      }
      goto L_08AFBF78;
    }
L_08AFBF78:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 2u, 0x08AFC008u>(ctx, &aot_mem); return;
      }
      goto L_08AFBF80;
    }
L_08AFBF80:
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AFBFB0;
      }
      goto L_08AFBF8C;
    }
L_08AFBF8C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFBFB0;
      }
      goto L_08AFBF94;
    }
L_08AFBF94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBFB0;
      }
      goto L_08AFBFA0;
    }
L_08AFBFA0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBFB0;
      }
      goto L_08AFBFA8;
    }
L_08AFBFA8:
    ctx.gpr[31] = (0x08AFBFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFBFB0u) goto L_08AFBFB0;
    return;
L_08AFBFB0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBFDC;
      }
      goto L_08AFBFB8;
    }
L_08AFBFB8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFBFDC;
      }
      goto L_08AFBFC0;
    }
L_08AFBFC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBFDC;
      }
      goto L_08AFBFCC;
    }
L_08AFBFCC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBFDC;
      }
      goto L_08AFBFD4;
    }
L_08AFBFD4:
    ctx.gpr[31] = (0x08AFBFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFBFDCu) goto L_08AFBFDC;
    return;
L_08AFBFDC:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
        (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 3u, 0x08AFC00Cu>(ctx, &aot_mem); return;
    }
    goto L_08AFBFE4;
L_08AFBFE4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 2u, 0x08AFC008u>(ctx, &aot_mem); return;
      }
      goto L_08AFBFEC;
    }
L_08AFBFEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
        (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 3u, 0x08AFC00Cu>(ctx, &aot_mem); return;
    }
    goto L_08AFBFF8;
L_08AFBFF8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
        (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 3u, 0x08AFC00Cu>(ctx, &aot_mem); return;
    }
    (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 1u, 0x08AFC000u>(ctx, &aot_mem); return;
}

void recomp_unit_0189(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0189_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_189(Runtime &runtime) {
    runtime.register_generated_unit(189u, 0x08AF8000u, 16384u, &recomp_unit_0189, &recomp_unit_0189_entry);
    runtime.register_function(0x08AF8000u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8010u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8014u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8020u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8040u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8054u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8060u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF807Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8084u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8094u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8110u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8124u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8140u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8164u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8174u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8180u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF819Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF81ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF81BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF81D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF81E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF822Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8240u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8250u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF826Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF827Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF829Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8300u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF830Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8310u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8390u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF83DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF83F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF847Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF848Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8500u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8508u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8524u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8534u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF854Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8554u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8560u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8590u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8608u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8610u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8628u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8630u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8650u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8658u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8660u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8688u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8690u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF869Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF86C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF86CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF86D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8720u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8728u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF872Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF873Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF875Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8778u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8780u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF878Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF87CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF87D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF87D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF87E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8838u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8840u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8844u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8854u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8874u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8878u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8880u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8888u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8890u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF890Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8914u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8918u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8928u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8950u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8958u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8964u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8974u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8980u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A0Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8A9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8AA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8AACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8AB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8AC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8AF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8AF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8AFCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BBCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BD4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BFCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CBCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CFCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D14u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D44u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DCCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8EA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8EB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8EC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8EC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8EE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8EECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8EF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F00u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F0Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F44u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FD4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9000u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF900Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF901Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9030u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF903Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9058u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9060u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9088u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9094u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9118u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF911Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9120u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF912Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9134u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF913Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9160u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9168u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9174u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9180u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF91A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF91B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF91CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF91D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF91D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF91F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF91FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9224u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF922Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9238u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9244u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF924Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9254u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9260u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9270u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9324u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9344u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF934Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9354u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9360u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF937Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9388u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF938Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF93A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF93ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF93B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF93ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9408u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9410u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9418u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9424u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9438u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9444u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9448u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9460u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9468u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9474u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9488u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9490u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9498u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9504u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9510u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9518u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9554u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9570u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9588u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9600u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9604u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9624u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9634u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9644u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9668u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9680u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9694u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF96A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF96BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF96C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF96D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF96D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF96E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF96ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9700u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF971Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9728u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9730u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9734u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9740u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF974Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9760u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9774u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF978Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9794u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF979Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9800u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF981Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9824u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF982Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9834u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF983Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF984Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF985Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9864u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF986Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF987Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9884u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9910u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9928u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9930u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9944u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF994Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF995Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9968u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9970u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9980u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9988u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9994u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF99ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF99B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF99BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF99E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9ABCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9ACCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B0Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B8Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BE4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BFCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9CB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9CC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9CD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9CE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D00u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D58u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9D8Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9DB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9DC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9DECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E58u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9E98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9EA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9EC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9ED4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9FC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9FD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9FF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA018u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA020u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA030u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA038u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA05Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA06Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA074u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA07Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA084u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA08Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA094u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA104u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA10Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA114u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA138u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA140u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA14Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA154u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA15Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA160u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA168u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA180u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA188u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA204u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA220u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA228u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA238u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA244u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA24Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA250u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA258u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA260u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA274u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA284u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA304u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA30Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA318u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA328u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA340u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA34Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA358u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA360u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA36Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA388u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA410u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA424u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA434u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA438u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA440u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA448u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA45Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA478u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA484u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA48Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA490u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA49Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA508u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA51Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA558u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA580u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA5FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA618u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA624u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA62Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA630u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA63Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA648u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA65Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA6A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA6B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA6C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA6CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA6E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA6FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA710u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA720u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA730u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA73Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA750u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA758u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA768u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA774u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA784u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA790u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA798u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA804u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA808u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA818u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA81Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA824u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA82Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA834u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA864u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA900u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA90Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA914u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA918u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA928u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA934u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA944u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA950u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA958u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA968u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA974u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA984u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA98Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA998u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA1Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAAD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAAE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAAF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC8Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFACC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD58u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFADA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFADB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFADB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFADC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFADC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFADD4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFADE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFADE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFADECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAED4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF14u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF1Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB000u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB01Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB03Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB058u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB068u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB078u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB080u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB08Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB094u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB09Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB108u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB118u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB124u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB130u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB138u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB144u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB14Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB154u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB15Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB164u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB16Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB188u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB194u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB1F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB204u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB234u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB24Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB268u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB27Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB28Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB2CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB2E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB300u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB320u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB32Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB344u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB350u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB368u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB38Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB39Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB3B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB3C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB3CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB3D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB3E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB3FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB414u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB428u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB434u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB43Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB454u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB460u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB464u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB46Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB474u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB488u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB490u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB54Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB554u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB580u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB594u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB5CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB5D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB5D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB640u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB664u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB66Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB698u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB6B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB6BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB6E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB708u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB724u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB73Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB75Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB768u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB780u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB78Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB7A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB7C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB7E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB7E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB828u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB830u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB838u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB840u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB85Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB86Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB87Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB884u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB890u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB89Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB8A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB8B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB8DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB8FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB918u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB91Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB924u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB944u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB96Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB970u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB978u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB998u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB9ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB9B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB9B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB9D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAE4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAFCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB8Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBD4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD14u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD1Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDBCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE00u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE44u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE8Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEBCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF8Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFCCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFD4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFDCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFE4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFF8u, &recomp_unit_0189, "recomp_unit_0189");
}
} // namespace psprecomp
