#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0112[4082] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0,
    0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 11, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 17,
    18, 19, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 25, 26, 27, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0, 35, 36, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0,
    0, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 47, 48, 0, 49, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61,
    62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 73, 0, 74, 0, 0, 0, 0, 75, 0, 76, 0,
    77, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85,
    0, 86, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 96, 97, 0,
    98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 0, 104, 0, 105, 106, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0,
    0, 0, 110, 0, 0, 0, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0,
    0, 0, 118, 0, 119, 120, 0, 121, 0, 0, 122, 0, 0, 123, 0, 124, 125, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0,
    0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132,
    0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 0,
    0, 141, 0, 0, 142, 0, 143, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 0, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 160, 0, 161,
    0, 0, 0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0, 169, 0, 170, 0, 171, 0, 172,
    0, 0, 0, 0, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 180, 181, 0, 0, 182, 0,
    0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 0, 0, 190, 0, 191, 0, 192, 0, 0,
    0, 0, 0, 193, 0, 194, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0,
    0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 211,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216,
    0, 217, 0, 218, 0, 0, 219, 0, 0, 220, 221, 0, 222, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 235,
    0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 247, 0,
    248, 0, 0, 0, 249, 0, 250, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0,
    0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0,
    0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 270, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0,
    0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 279, 280, 0,
    0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286,
    0, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0, 0, 290, 0, 291, 0, 292, 0, 293, 0, 0, 0, 294, 0, 295, 0, 0, 296, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0,
    0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 309,
    0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0,
    0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 326, 0, 327, 0, 0, 0, 328, 329, 0, 0, 0, 0,
    0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 342,
    0, 343, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 350, 0, 351, 0, 0, 0, 0, 0, 0,
    0, 352, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 358, 0, 359,
    0, 0, 0, 0, 360, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0,
    0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 0, 379, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0,
    0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 391, 0, 392, 0, 393, 0, 0, 0, 394, 0, 0, 395, 0, 396, 397,
    0, 398, 0, 399, 0, 0, 400, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0,
    408, 0, 0, 409, 0, 410, 0, 411, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 418, 0, 0,
    419, 0, 0, 420, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 423, 424, 0, 0, 0, 0, 0, 0, 425, 0, 426, 427, 0, 0, 428, 0, 0, 0,
    0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    431, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0,
    439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0,
    0, 445, 0, 446, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0,
    0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0,
    0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 465, 0, 0, 0,
    466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 472, 0, 473, 0, 0, 474, 0, 0, 475, 0, 476, 0, 477, 0, 0,
    478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 485, 0, 0, 486,
    0, 0, 487, 0, 0, 488, 0, 489, 0, 490, 0, 0, 491, 0, 492, 0, 0, 493, 0, 494, 0, 495, 0, 0, 496, 0, 497, 0, 498, 0, 0, 0,
    0, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 505,
    0, 0, 506, 0, 0, 0, 507, 0, 0, 508, 509, 0, 0, 510, 511, 0, 0, 0, 512, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 521, 0, 0,
    522, 0, 523, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 527, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0,
    534, 0, 0, 535, 0, 536, 0, 0, 0, 537, 0, 538, 0, 539, 0, 0, 540, 0, 541, 0, 542, 0, 543, 0, 544, 0, 0, 0, 545, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0,
    0, 0, 550, 0, 551, 0, 552, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 557, 0, 0, 558, 0,
    559, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 563, 0, 0, 0, 0, 0, 564, 0,
    0, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 569,
    0, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 572, 0, 0, 0, 0, 0, 0, 573, 574, 0, 0, 0, 0, 0, 0, 575, 0, 576, 577, 0, 0,
    578, 0, 579, 0, 0, 0, 580, 0, 0, 581, 582, 0, 583, 0, 584, 0, 0, 585, 0, 0, 586, 0, 0, 587, 0, 588, 0, 589, 0, 590, 0, 0,
    591, 0, 592, 0, 593, 0, 594, 0, 0, 0, 595, 596, 0, 597, 0, 0, 0, 598, 0, 599, 0, 600, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0,
    0, 602, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 606, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 612, 613, 0, 0, 0, 0, 614, 0, 0,
    0, 615, 0, 0, 616, 0, 0, 0, 0, 617, 0, 618, 0, 619, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 623,
    0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0,
    0, 628, 0, 0, 629, 630, 0, 0, 0, 631, 0, 0, 0, 0, 632, 0, 0, 0, 633, 634, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 637,
    0, 0, 0, 0, 638, 0, 639, 0, 640, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0,
    0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 0, 646, 647, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 0, 650, 651, 0, 0, 0,
    0, 652, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 0, 655, 0, 656, 0, 657, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    659, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 663, 0, 0,
    0, 664, 0, 665, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 668, 0, 669, 0, 0, 670, 0, 671, 0, 672, 0, 0, 0, 0, 673, 0, 0,
    674, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 677, 0, 0, 678, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0,
    681, 0, 0, 682, 0, 0, 0, 0, 0, 0, 683, 0, 684, 0, 685, 0, 686, 0, 0, 687, 0, 688, 0, 689, 0, 690, 0, 691, 0, 692, 0, 693,
    694, 0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 697, 0, 0, 0, 0, 0, 0, 698, 0, 699, 0, 700, 0, 0, 701, 0, 0, 702, 0,
    703, 0, 704, 0, 705, 0, 706, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 709, 710, 0, 0, 711, 0, 0, 0, 712, 0, 0, 713, 0, 0, 714,
    0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 0, 717, 0, 0, 0, 0, 718, 0, 719, 0, 720, 0, 721, 0, 722, 0, 0, 0, 723, 0, 724,
    0, 0, 0, 725, 0, 726, 0, 0, 727, 0, 0, 0, 0, 728, 0, 729, 0, 730, 0, 731, 0, 0, 0, 732, 0, 0, 0, 0, 0, 733, 0, 0,
    734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0,
    0, 0, 739, 0, 740, 0, 741, 0, 0, 742, 0, 743, 0, 744, 0, 745, 0, 746, 0, 0, 747, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 751, 0, 752, 0, 753, 0, 754, 0, 755, 0, 0, 0, 0, 756, 0, 0, 757, 0, 0, 0, 758, 0,
    759, 0, 0, 760, 0, 761, 0, 0, 762, 0, 0, 763, 0, 0, 764, 0, 765, 0, 766, 0, 767, 0, 768, 0, 0, 0, 0, 0, 0, 769, 0, 0,
    0, 0, 0, 770, 0, 0, 771, 0, 0, 0, 0, 772, 0, 773, 0, 0, 774, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0,
    0, 0, 0, 777, 0, 778, 0, 779, 0, 780, 0, 0, 781, 0, 0, 0, 782, 0, 783, 0, 0, 0, 0, 0, 784, 0, 0, 785, 0, 786, 0, 787,
    0, 0, 0, 788, 0, 789, 0, 790, 0, 791, 0, 792, 0, 793, 0, 794, 0, 0, 795, 0, 796, 0, 797, 0, 0, 798, 0, 799, 800, 0, 801, 0,
    0, 0, 0, 802, 0, 803, 0, 804, 0, 0, 805, 0, 0, 806, 0, 0, 0, 0, 0, 0, 807, 0, 808, 0, 809, 0, 0, 0, 0, 0, 810, 0,
    811, 0, 812, 0, 0, 0, 813, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0, 816, 0, 817, 0, 0, 0, 818, 0, 819, 0, 0, 0, 0,
    820, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 823, 0,
    824, 825, 0, 0, 826, 0, 0, 0, 827, 0, 0, 0, 828, 0, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0, 0, 0, 0, 832,
    0, 0, 833, 0, 834, 0, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 837, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 840, 0, 841, 842, 0, 843,
    0, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0, 0, 846, 0, 0, 0, 847, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 0, 850, 0, 0, 0,
    851, 0, 0, 0, 852, 0, 0, 853, 0, 0, 0, 0, 854, 0, 0, 855, 0, 0, 856, 0, 0, 0, 0, 857, 0, 0, 0, 0, 858, 0, 859, 0,
    0, 0, 860, 0, 0, 861, 0, 0, 0, 0, 862, 0, 0, 0, 863, 0, 864, 0, 0, 865, 0, 0, 866, 0, 0, 0, 867, 0, 0, 0, 868, 0,
    869, 0, 0, 870, 0, 0, 0, 871, 0, 0, 0, 0, 872, 0, 0, 0, 873, 0, 0, 0, 874, 0, 0, 0, 0, 0, 0, 875, 0, 0, 0, 0,
    876, 0, 0, 877, 0, 0, 878, 0, 0, 879, 0, 0, 0, 880, 0, 0, 881, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 882, 0, 0, 0, 883,
    0, 0, 884, 0, 0, 0, 885, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0,
    0, 888, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 889, 0, 890, 0, 891, 0, 892, 0, 0, 0, 893, 0, 0, 894, 0, 0, 895,
    896, 0, 0, 897, 0, 898, 0, 899, 0, 0, 900, 0, 901, 0, 902, 0, 0, 903, 0, 904, 0, 905, 0, 0, 0, 906, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 907, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 908, 0, 909,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 910, 0, 0, 911, 0, 912, 0, 0, 913, 0, 0, 0, 0, 0, 0, 0, 0, 914, 0, 0, 0, 915,
    0, 916, 0, 0, 917, 0, 0, 918, 0, 919, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 920, 921, 0, 0, 0, 922, 923, 0, 0, 0, 0,
    0, 924, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 925, 0, 0, 0, 926, 0, 0, 0, 927, 0, 0, 0, 928,
    0, 0, 929, 0, 0, 0, 930, 0, 0, 0, 0, 0, 0, 0, 931, 0, 0, 932, 0, 933, 0, 934, 0, 935, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 936, 0, 0, 0, 937, 0, 0, 0, 938, 939, 940, 0, 0, 0, 941, 0, 0, 942, 0, 0, 943, 0, 944, 945, 0, 946, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 947, 0, 948, 0, 0, 949, 0, 950, 0, 951, 0, 952, 0, 953, 0, 0, 0, 954, 0, 955, 956, 0, 957, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 958, 0, 959, 0, 960, 0, 961, 962, 0, 963, 0, 0, 0, 0, 964, 0, 0, 0, 965, 0, 0, 0, 966, 967,
    968, 0, 969, 0, 0, 970, 0, 971, 972, 0, 973, 0, 0, 0, 0, 0, 0, 0, 974, 0, 975, 976, 0, 977, 0, 0, 0, 978, 0, 0, 0, 979,
    0, 980, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 981, 0, 0, 0, 982,
};
void recomp_unit_0112_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089C4000u;
        entry_id = (entry_delta < 16328u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0112[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C4000;
    case 2u: goto L_089C404C;
    case 3u: goto L_089C4090;
    case 4u: goto L_089C4094;
    case 5u: goto L_089C40AC;
    case 6u: goto L_089C40EC;
    case 7u: goto L_089C40F8;
    case 8u: goto L_089C4104;
    case 9u: goto L_089C4130;
    case 10u: goto L_089C414C;
    case 11u: goto L_089C4154;
    case 12u: goto L_089C4158;
    case 13u: goto L_089C418C;
    case 14u: goto L_089C41DC;
    case 15u: goto L_089C41E8;
    case 16u: goto L_089C41F4;
    case 17u: goto L_089C41FC;
    case 18u: goto L_089C4200;
    case 19u: goto L_089C4204;
    case 20u: goto L_089C420C;
    case 21u: goto L_089C4214;
    case 22u: goto L_089C4224;
    case 23u: goto L_089C4230;
    case 24u: goto L_089C423C;
    case 25u: goto L_089C4244;
    case 26u: goto L_089C4248;
    case 27u: goto L_089C424C;
    case 28u: goto L_089C4258;
    case 29u: goto L_089C4260;
    case 30u: goto L_089C4268;
    case 31u: goto L_089C42A0;
    case 32u: goto L_089C42A8;
    case 33u: goto L_089C42B0;
    case 34u: goto L_089C42C0;
    case 35u: goto L_089C42CC;
    case 36u: goto L_089C42D0;
    case 37u: goto L_089C42E4;
    case 38u: goto L_089C42F4;
    case 39u: goto L_089C4308;
    case 40u: goto L_089C4310;
    case 41u: goto L_089C4318;
    case 42u: goto L_089C4320;
    case 43u: goto L_089C4330;
    case 44u: goto L_089C4338;
    case 45u: goto L_089C4348;
    case 46u: goto L_089C4350;
    case 47u: goto L_089C4360;
    case 48u: goto L_089C4364;
    case 49u: goto L_089C436C;
    case 50u: goto L_089C4380;
    case 51u: goto L_089C43AC;
    case 52u: goto L_089C43C4;
    case 53u: goto L_089C43D0;
    case 54u: goto L_089C43D8;
    case 55u: goto L_089C43EC;
    case 56u: goto L_089C4414;
    case 57u: goto L_089C4428;
    case 58u: goto L_089C4440;
    case 59u: goto L_089C444C;
    case 60u: goto L_089C4460;
    case 61u: goto L_089C447C;
    case 62u: goto L_089C4480;
    case 63u: goto L_089C4488;
    case 64u: goto L_089C4490;
    case 65u: goto L_089C44B4;
    case 66u: goto L_089C44BC;
    case 67u: goto L_089C44D0;
    case 68u: goto L_089C44F4;
    case 69u: goto L_089C44FC;
    case 70u: goto L_089C4510;
    case 71u: goto L_089C4548;
    case 72u: goto L_089C4550;
    case 73u: goto L_089C4554;
    case 74u: goto L_089C455C;
    case 75u: goto L_089C4570;
    case 76u: goto L_089C4578;
    case 77u: goto L_089C4580;
    case 78u: goto L_089C4588;
    case 79u: goto L_089C4590;
    case 80u: goto L_089C459C;
    case 81u: goto L_089C45C0;
    case 82u: goto L_089C45C8;
    case 83u: goto L_089C45DC;
    case 84u: goto L_089C45F4;
    case 85u: goto L_089C45FC;
    case 86u: goto L_089C4604;
    case 87u: goto L_089C461C;
    case 88u: goto L_089C4624;
    case 89u: goto L_089C4630;
    case 90u: goto L_089C4638;
    case 91u: goto L_089C4640;
    case 92u: goto L_089C4648;
    case 93u: goto L_089C4654;
    case 94u: goto L_089C4660;
    case 95u: goto L_089C466C;
    case 96u: goto L_089C4674;
    case 97u: goto L_089C4678;
    case 98u: goto L_089C4680;
    case 99u: goto L_089C468C;
    case 100u: goto L_089C46A0;
    case 101u: goto L_089C46A8;
    case 102u: goto L_089C46B0;
    case 103u: goto L_089C46BC;
    case 104u: goto L_089C46C8;
    case 105u: goto L_089C46D0;
    case 106u: goto L_089C46D4;
    case 107u: goto L_089C46DC;
    case 108u: goto L_089C46E4;
    case 109u: goto L_089C46F8;
    case 110u: goto L_089C4708;
    case 111u: goto L_089C471C;
    case 112u: goto L_089C4724;
    case 113u: goto L_089C472C;
    case 114u: goto L_089C4748;
    case 115u: goto L_089C4760;
    case 116u: goto L_089C4768;
    case 117u: goto L_089C4770;
    case 118u: goto L_089C4788;
    case 119u: goto L_089C4790;
    case 120u: goto L_089C4794;
    case 121u: goto L_089C479C;
    case 122u: goto L_089C47A8;
    case 123u: goto L_089C47B4;
    case 124u: goto L_089C47BC;
    case 125u: goto L_089C47C0;
    case 126u: goto L_089C47C8;
    case 127u: goto L_089C47D0;
    case 128u: goto L_089C47F0;
    case 129u: goto L_089C47F8;
    case 130u: goto L_089C4804;
    case 131u: goto L_089C4848;
    case 132u: goto L_089C487C;
    case 133u: goto L_089C4898;
    case 134u: goto L_089C48A0;
    case 135u: goto L_089C48A8;
    case 136u: goto L_089C48BC;
    case 137u: goto L_089C48D0;
    case 138u: goto L_089C48E0;
    case 139u: goto L_089C48EC;
    case 140u: goto L_089C48F4;
    case 141u: goto L_089C4904;
    case 142u: goto L_089C4910;
    case 143u: goto L_089C4918;
    case 144u: goto L_089C4920;
    case 145u: goto L_089C492C;
    case 146u: goto L_089C4944;
    case 147u: goto L_089C494C;
    case 148u: goto L_089C4960;
    case 149u: goto L_089C4974;
    case 150u: goto L_089C4990;
    case 151u: goto L_089C4998;
    case 152u: goto L_089C49A4;
    case 153u: goto L_089C49AC;
    case 154u: goto L_089C49BC;
    case 155u: goto L_089C49C4;
    case 156u: goto L_089C49D0;
    case 157u: goto L_089C49D8;
    case 158u: goto L_089C49E8;
    case 159u: goto L_089C49F0;
    case 160u: goto L_089C49F4;
    case 161u: goto L_089C49FC;
    case 162u: goto L_089C4A10;
    case 163u: goto L_089C4A18;
    case 164u: goto L_089C4A24;
    case 165u: goto L_089C4A34;
    case 166u: goto L_089C4A44;
    case 167u: goto L_089C4A50;
    case 168u: goto L_089C4A58;
    case 169u: goto L_089C4A64;
    case 170u: goto L_089C4A6C;
    case 171u: goto L_089C4A74;
    case 172u: goto L_089C4A7C;
    case 173u: goto L_089C4A94;
    case 174u: goto L_089C4A9C;
    case 175u: goto L_089C4AA4;
    case 176u: goto L_089C4AB0;
    case 177u: goto L_089C4AB8;
    case 178u: goto L_089C4AC8;
    case 179u: goto L_089C4ADC;
    case 180u: goto L_089C4AE8;
    case 181u: goto L_089C4AEC;
    case 182u: goto L_089C4AF8;
    case 183u: goto L_089C4B0C;
    case 184u: goto L_089C4B18;
    case 185u: goto L_089C4B24;
    case 186u: goto L_089C4B30;
    case 187u: goto L_089C4B44;
    case 188u: goto L_089C4B4C;
    case 189u: goto L_089C4B54;
    case 190u: goto L_089C4B64;
    case 191u: goto L_089C4B6C;
    case 192u: goto L_089C4B74;
    case 193u: goto L_089C4B8C;
    case 194u: goto L_089C4B94;
    case 195u: goto L_089C4B9C;
    case 196u: goto L_089C4BA4;
    case 197u: goto L_089C4BB4;
    case 198u: goto L_089C4BCC;
    case 199u: goto L_089C4BDC;
    case 200u: goto L_089C4BF4;
    case 201u: goto L_089C4C04;
    case 202u: goto L_089C4C0C;
    case 203u: goto L_089C4C14;
    case 204u: goto L_089C4C20;
    case 205u: goto L_089C4C30;
    case 206u: goto L_089C4C40;
    case 207u: goto L_089C4C48;
    case 208u: goto L_089C4C50;
    case 209u: goto L_089C4C70;
    case 210u: goto L_089C4C78;
    case 211u: goto L_089C4C7C;
    case 212u: goto L_089C4CCC;
    case 213u: goto L_089C4CD4;
    case 214u: goto L_089C4CE4;
    case 215u: goto L_089C4CF4;
    case 216u: goto L_089C4CFC;
    case 217u: goto L_089C4D04;
    case 218u: goto L_089C4D0C;
    case 219u: goto L_089C4D18;
    case 220u: goto L_089C4D24;
    case 221u: goto L_089C4D28;
    case 222u: goto L_089C4D30;
    case 223u: goto L_089C4D38;
    case 224u: goto L_089C4D44;
    case 225u: goto L_089C4D4C;
    case 226u: goto L_089C4D54;
    case 227u: goto L_089C4DA4;
    case 228u: goto L_089C4DAC;
    case 229u: goto L_089C4DB4;
    case 230u: goto L_089C4DC8;
    case 231u: goto L_089C4DD0;
    case 232u: goto L_089C4DD8;
    case 233u: goto L_089C4DE4;
    case 234u: goto L_089C4DF4;
    case 235u: goto L_089C4DFC;
    case 236u: goto L_089C4E04;
    case 237u: goto L_089C4E0C;
    case 238u: goto L_089C4E14;
    case 239u: goto L_089C4E1C;
    case 240u: goto L_089C4E24;
    case 241u: goto L_089C4E30;
    case 242u: goto L_089C4E38;
    case 243u: goto L_089C4E40;
    case 244u: goto L_089C4E54;
    case 245u: goto L_089C4E68;
    case 246u: goto L_089C4E70;
    case 247u: goto L_089C4E78;
    case 248u: goto L_089C4E80;
    case 249u: goto L_089C4E90;
    case 250u: goto L_089C4E98;
    case 251u: goto L_089C4E9C;
    case 252u: goto L_089C4ECC;
    case 253u: goto L_089C4FC8;
    case 254u: goto L_089C4FD4;
    case 255u: goto L_089C4FE8;
    case 256u: goto L_089C5008;
    case 257u: goto L_089C5014;
    case 258u: goto L_089C502C;
    case 259u: goto L_089C504C;
    case 260u: goto L_089C505C;
    case 261u: goto L_089C5074;
    case 262u: goto L_089C5098;
    case 263u: goto L_089C50A8;
    case 264u: goto L_089C50C4;
    case 265u: goto L_089C50E0;
    case 266u: goto L_089C5104;
    case 267u: goto L_089C5118;
    case 268u: goto L_089C5128;
    case 269u: goto L_089C5134;
    case 270u: goto L_089C5148;
    case 271u: goto L_089C514C;
    case 272u: goto L_089C515C;
    case 273u: goto L_089C5168;
    case 274u: goto L_089C518C;
    case 275u: goto L_089C51B0;
    case 276u: goto L_089C51C4;
    case 277u: goto L_089C51D4;
    case 278u: goto L_089C51E0;
    case 279u: goto L_089C51F4;
    case 280u: goto L_089C51F8;
    case 281u: goto L_089C5208;
    case 282u: goto L_089C5214;
    case 283u: goto L_089C5238;
    case 284u: goto L_089C5254;
    case 285u: goto L_089C5270;
    case 286u: goto L_089C527C;
    case 287u: goto L_089C5290;
    case 288u: goto L_089C529C;
    case 289u: goto L_089C52A4;
    case 290u: goto L_089C52B0;
    case 291u: goto L_089C52B8;
    case 292u: goto L_089C52C0;
    case 293u: goto L_089C52C8;
    case 294u: goto L_089C52D8;
    case 295u: goto L_089C52E0;
    case 296u: goto L_089C52EC;
    case 297u: goto L_089C5300;
    case 298u: goto L_089C5318;
    case 299u: goto L_089C5320;
    case 300u: goto L_089C534C;
    case 301u: goto L_089C5354;
    case 302u: goto L_089C5360;
    case 303u: goto L_089C5374;
    case 304u: goto L_089C5388;
    case 305u: goto L_089C53A0;
    case 306u: goto L_089C53A8;
    case 307u: goto L_089C53DC;
    case 308u: goto L_089C53E4;
    case 309u: goto L_089C53FC;
    case 310u: goto L_089C540C;
    case 311u: goto L_089C5418;
    case 312u: goto L_089C5428;
    case 313u: goto L_089C5450;
    case 314u: goto L_089C5464;
    case 315u: goto L_089C5478;
    case 316u: goto L_089C5484;
    case 317u: goto L_089C5498;
    case 318u: goto L_089C54C4;
    case 319u: goto L_089C54CC;
    case 320u: goto L_089C54D4;
    case 321u: goto L_089C54E8;
    case 322u: goto L_089C54F0;
    case 323u: goto L_089C5520;
    case 324u: goto L_089C5534;
    case 325u: goto L_089C5548;
    case 326u: goto L_089C5550;
    case 327u: goto L_089C5558;
    case 328u: goto L_089C5568;
    case 329u: goto L_089C556C;
    case 330u: goto L_089C5590;
    case 331u: goto L_089C55A4;
    case 332u: goto L_089C55CC;
    case 333u: goto L_089C55D8;
    case 334u: goto L_089C5604;
    case 335u: goto L_089C560C;
    case 336u: goto L_089C5614;
    case 337u: goto L_089C5638;
    case 338u: goto L_089C5640;
    case 339u: goto L_089C5650;
    case 340u: goto L_089C5664;
    case 341u: goto L_089C5674;
    case 342u: goto L_089C567C;
    case 343u: goto L_089C5684;
    case 344u: goto L_089C569C;
    case 345u: goto L_089C56A4;
    case 346u: goto L_089C56AC;
    case 347u: goto L_089C56B8;
    case 348u: goto L_089C56C8;
    case 349u: goto L_089C56D8;
    case 350u: goto L_089C56DC;
    case 351u: goto L_089C56E4;
    case 352u: goto L_089C5704;
    case 353u: goto L_089C5710;
    case 354u: goto L_089C5724;
    case 355u: goto L_089C5740;
    case 356u: goto L_089C5760;
    case 357u: goto L_089C5768;
    case 358u: goto L_089C5774;
    case 359u: goto L_089C577C;
    case 360u: goto L_089C5790;
    case 361u: goto L_089C5798;
    case 362u: goto L_089C57A4;
    case 363u: goto L_089C57F8;
    case 364u: goto L_089C5810;
    case 365u: goto L_089C5818;
    case 366u: goto L_089C5838;
    case 367u: goto L_089C5840;
    case 368u: goto L_089C584C;
    case 369u: goto L_089C5864;
    case 370u: goto L_089C5878;
    case 371u: goto L_089C5898;
    case 372u: goto L_089C58A0;
    case 373u: goto L_089C58B0;
    case 374u: goto L_089C58C0;
    case 375u: goto L_089C58D0;
    case 376u: goto L_089C58D8;
    case 377u: goto L_089C58E0;
    case 378u: goto L_089C58E8;
    case 379u: goto L_089C58F8;
    case 380u: goto L_089C5900;
    case 381u: goto L_089C5924;
    case 382u: goto L_089C5948;
    case 383u: goto L_089C595C;
    case 384u: goto L_089C5978;
    case 385u: goto L_089C5998;
    case 386u: goto L_089C59A0;
    case 387u: goto L_089C59A8;
    case 388u: goto L_089C59B0;
    case 389u: goto L_089C59B8;
    case 390u: goto L_089C59C0;
    case 391u: goto L_089C59C4;
    case 392u: goto L_089C59CC;
    case 393u: goto L_089C59D4;
    case 394u: goto L_089C59E4;
    case 395u: goto L_089C59F0;
    case 396u: goto L_089C59F8;
    case 397u: goto L_089C59FC;
    case 398u: goto L_089C5A04;
    case 399u: goto L_089C5A0C;
    case 400u: goto L_089C5A18;
    case 401u: goto L_089C5A24;
    case 402u: goto L_089C5A2C;
    case 403u: goto L_089C5A44;
    case 404u: goto L_089C5A54;
    case 405u: goto L_089C5A60;
    case 406u: goto L_089C5A6C;
    case 407u: goto L_089C5A78;
    case 408u: goto L_089C5A80;
    case 409u: goto L_089C5A8C;
    case 410u: goto L_089C5A94;
    case 411u: goto L_089C5A9C;
    case 412u: goto L_089C5AA8;
    case 413u: goto L_089C5ABC;
    case 414u: goto L_089C5AC8;
    case 415u: goto L_089C5AD0;
    case 416u: goto L_089C5AE0;
    case 417u: goto L_089C5AEC;
    case 418u: goto L_089C5AF4;
    case 419u: goto L_089C5B00;
    case 420u: goto L_089C5B0C;
    case 421u: goto L_089C5B14;
    case 422u: goto L_089C5B1C;
    case 423u: goto L_089C5B38;
    case 424u: goto L_089C5B3C;
    case 425u: goto L_089C5B58;
    case 426u: goto L_089C5B60;
    case 427u: goto L_089C5B64;
    case 428u: goto L_089C5B70;
    case 429u: goto L_089C5B90;
    case 430u: goto L_089C5C48;
    case 431u: goto L_089C5C80;
    case 432u: goto L_089C5C94;
    case 433u: goto L_089C5CA0;
    case 434u: goto L_089C5CB0;
    case 435u: goto L_089C5CC0;
    case 436u: goto L_089C5CD0;
    case 437u: goto L_089C5CE0;
    case 438u: goto L_089C5CF0;
    case 439u: goto L_089C5D00;
    case 440u: goto L_089C5D10;
    case 441u: goto L_089C5D2C;
    case 442u: goto L_089C5DB4;
    case 443u: goto L_089C5DD4;
    case 444u: goto L_089C5DE8;
    case 445u: goto L_089C5E04;
    case 446u: goto L_089C5E0C;
    case 447u: goto L_089C5E18;
    case 448u: goto L_089C5E28;
    case 449u: goto L_089C5E38;
    case 450u: goto L_089C5E48;
    case 451u: goto L_089C5E58;
    case 452u: goto L_089C5E68;
    case 453u: goto L_089C5E78;
    case 454u: goto L_089C5E88;
    case 455u: goto L_089C5EB4;
    case 456u: goto L_089C5F34;
    case 457u: goto L_089C5F58;
    case 458u: goto L_089C5F78;
    case 459u: goto L_089C5F98;
    case 460u: goto L_089C5FA8;
    case 461u: goto L_089C5FB8;
    case 462u: goto L_089C5FC8;
    case 463u: goto L_089C5FD8;
    case 464u: goto L_089C5FE8;
    case 465u: goto L_089C5FF0;
    case 466u: goto L_089C6000;
    case 467u: goto L_089C6010;
    case 468u: goto L_089C6040;
    case 469u: goto L_089C6068;
    case 470u: goto L_089C60A8;
    case 471u: goto L_089C60B8;
    case 472u: goto L_089C60C4;
    case 473u: goto L_089C60CC;
    case 474u: goto L_089C60D8;
    case 475u: goto L_089C60E4;
    case 476u: goto L_089C60EC;
    case 477u: goto L_089C60F4;
    case 478u: goto L_089C6100;
    case 479u: goto L_089C6114;
    case 480u: goto L_089C6128;
    case 481u: goto L_089C6140;
    case 482u: goto L_089C6150;
    case 483u: goto L_089C615C;
    case 484u: goto L_089C6168;
    case 485u: goto L_089C6170;
    case 486u: goto L_089C617C;
    case 487u: goto L_089C6188;
    case 488u: goto L_089C6194;
    case 489u: goto L_089C619C;
    case 490u: goto L_089C61A4;
    case 491u: goto L_089C61B0;
    case 492u: goto L_089C61B8;
    case 493u: goto L_089C61C4;
    case 494u: goto L_089C61CC;
    case 495u: goto L_089C61D4;
    case 496u: goto L_089C61E0;
    case 497u: goto L_089C61E8;
    case 498u: goto L_089C61F0;
    case 499u: goto L_089C6214;
    case 500u: goto L_089C6220;
    case 501u: goto L_089C622C;
    case 502u: goto L_089C6248;
    case 503u: goto L_089C6268;
    case 504u: goto L_089C6270;
    case 505u: goto L_089C627C;
    case 506u: goto L_089C6288;
    case 507u: goto L_089C6298;
    case 508u: goto L_089C62A4;
    case 509u: goto L_089C62A8;
    case 510u: goto L_089C62B4;
    case 511u: goto L_089C62B8;
    case 512u: goto L_089C62C8;
    case 513u: goto L_089C62CC;
    case 514u: goto L_089C62E8;
    case 515u: goto L_089C6310;
    case 516u: goto L_089C6318;
    case 517u: goto L_089C6328;
    case 518u: goto L_089C6344;
    case 519u: goto L_089C6358;
    case 520u: goto L_089C6368;
    case 521u: goto L_089C6374;
    case 522u: goto L_089C6380;
    case 523u: goto L_089C6388;
    case 524u: goto L_089C6394;
    case 525u: goto L_089C63A8;
    case 526u: goto L_089C63D0;
    case 527u: goto L_089C640C;
    case 528u: goto L_089C6414;
    case 529u: goto L_089C6424;
    case 530u: goto L_089C643C;
    case 531u: goto L_089C6448;
    case 532u: goto L_089C6460;
    case 533u: goto L_089C6470;
    case 534u: goto L_089C6480;
    case 535u: goto L_089C648C;
    case 536u: goto L_089C6494;
    case 537u: goto L_089C64A4;
    case 538u: goto L_089C64AC;
    case 539u: goto L_089C64B4;
    case 540u: goto L_089C64C0;
    case 541u: goto L_089C64C8;
    case 542u: goto L_089C64D0;
    case 543u: goto L_089C64D8;
    case 544u: goto L_089C64E0;
    case 545u: goto L_089C64F0;
    case 546u: goto L_089C651C;
    case 547u: goto L_089C6554;
    case 548u: goto L_089C655C;
    case 549u: goto L_089C6570;
    case 550u: goto L_089C6588;
    case 551u: goto L_089C6590;
    case 552u: goto L_089C6598;
    case 553u: goto L_089C65A0;
    case 554u: goto L_089C65B4;
    case 555u: goto L_089C65DC;
    case 556u: goto L_089C65E4;
    case 557u: goto L_089C65EC;
    case 558u: goto L_089C65F8;
    case 559u: goto L_089C6600;
    case 560u: goto L_089C6608;
    case 561u: goto L_089C661C;
    case 562u: goto L_089C665C;
    case 563u: goto L_089C6660;
    case 564u: goto L_089C6678;
    case 565u: goto L_089C668C;
    case 566u: goto L_089C6694;
    case 567u: goto L_089C66B0;
    case 568u: goto L_089C66EC;
    case 569u: goto L_089C66FC;
    case 570u: goto L_089C671C;
    case 571u: goto L_089C6724;
    case 572u: goto L_089C672C;
    case 573u: goto L_089C6748;
    case 574u: goto L_089C674C;
    case 575u: goto L_089C6768;
    case 576u: goto L_089C6770;
    case 577u: goto L_089C6774;
    case 578u: goto L_089C6780;
    case 579u: goto L_089C6788;
    case 580u: goto L_089C6798;
    case 581u: goto L_089C67A4;
    case 582u: goto L_089C67A8;
    case 583u: goto L_089C67B0;
    case 584u: goto L_089C67B8;
    case 585u: goto L_089C67C4;
    case 586u: goto L_089C67D0;
    case 587u: goto L_089C67DC;
    case 588u: goto L_089C67E4;
    case 589u: goto L_089C67EC;
    case 590u: goto L_089C67F4;
    case 591u: goto L_089C6800;
    case 592u: goto L_089C6808;
    case 593u: goto L_089C6810;
    case 594u: goto L_089C6818;
    case 595u: goto L_089C6828;
    case 596u: goto L_089C682C;
    case 597u: goto L_089C6834;
    case 598u: goto L_089C6844;
    case 599u: goto L_089C684C;
    case 600u: goto L_089C6854;
    case 601u: goto L_089C6860;
    case 602u: goto L_089C6884;
    case 603u: goto L_089C6890;
    case 604u: goto L_089C68BC;
    case 605u: goto L_089C68CC;
    case 606u: goto L_089C68D4;
    case 607u: goto L_089C68E0;
    case 608u: goto L_089C6918;
    case 609u: goto L_089C6924;
    case 610u: goto L_089C6938;
    case 611u: goto L_089C694C;
    case 612u: goto L_089C695C;
    case 613u: goto L_089C6960;
    case 614u: goto L_089C6974;
    case 615u: goto L_089C6984;
    case 616u: goto L_089C6990;
    case 617u: goto L_089C69A4;
    case 618u: goto L_089C69AC;
    case 619u: goto L_089C69B4;
    case 620u: goto L_089C69C0;
    case 621u: goto L_089C69DC;
    case 622u: goto L_089C69F0;
    case 623u: goto L_089C69FC;
    case 624u: goto L_089C6A08;
    case 625u: goto L_089C6A38;
    case 626u: goto L_089C6A50;
    case 627u: goto L_089C6A68;
    case 628u: goto L_089C6A84;
    case 629u: goto L_089C6A90;
    case 630u: goto L_089C6A94;
    case 631u: goto L_089C6AA4;
    case 632u: goto L_089C6AB8;
    case 633u: goto L_089C6AC8;
    case 634u: goto L_089C6ACC;
    case 635u: goto L_089C6AE0;
    case 636u: goto L_089C6AF0;
    case 637u: goto L_089C6AFC;
    case 638u: goto L_089C6B10;
    case 639u: goto L_089C6B18;
    case 640u: goto L_089C6B20;
    case 641u: goto L_089C6B2C;
    case 642u: goto L_089C6B5C;
    case 643u: goto L_089C6B74;
    case 644u: goto L_089C6B8C;
    case 645u: goto L_089C6BA8;
    case 646u: goto L_089C6BB4;
    case 647u: goto L_089C6BB8;
    case 648u: goto L_089C6BC8;
    case 649u: goto L_089C6BDC;
    case 650u: goto L_089C6BEC;
    case 651u: goto L_089C6BF0;
    case 652u: goto L_089C6C04;
    case 653u: goto L_089C6C14;
    case 654u: goto L_089C6C20;
    case 655u: goto L_089C6C34;
    case 656u: goto L_089C6C3C;
    case 657u: goto L_089C6C44;
    case 658u: goto L_089C6C50;
    case 659u: goto L_089C6C80;
    case 660u: goto L_089C6C8C;
    case 661u: goto L_089C6CD8;
    case 662u: goto L_089C6CEC;
    case 663u: goto L_089C6CF4;
    case 664u: goto L_089C6D04;
    case 665u: goto L_089C6D0C;
    case 666u: goto L_089C6D24;
    case 667u: goto L_089C6D2C;
    case 668u: goto L_089C6D3C;
    case 669u: goto L_089C6D44;
    case 670u: goto L_089C6D50;
    case 671u: goto L_089C6D58;
    case 672u: goto L_089C6D60;
    case 673u: goto L_089C6D74;
    case 674u: goto L_089C6D80;
    case 675u: goto L_089C6D8C;
    case 676u: goto L_089C6DB4;
    case 677u: goto L_089C6DBC;
    case 678u: goto L_089C6DC8;
    case 679u: goto L_089C6DD0;
    case 680u: goto L_089C6DF4;
    case 681u: goto L_089C6E00;
    case 682u: goto L_089C6E0C;
    case 683u: goto L_089C6E28;
    case 684u: goto L_089C6E30;
    case 685u: goto L_089C6E38;
    case 686u: goto L_089C6E40;
    case 687u: goto L_089C6E4C;
    case 688u: goto L_089C6E54;
    case 689u: goto L_089C6E5C;
    case 690u: goto L_089C6E64;
    case 691u: goto L_089C6E6C;
    case 692u: goto L_089C6E74;
    case 693u: goto L_089C6E7C;
    case 694u: goto L_089C6E80;
    case 695u: goto L_089C6E9C;
    case 696u: goto L_089C6EA8;
    case 697u: goto L_089C6EB4;
    case 698u: goto L_089C6ED0;
    case 699u: goto L_089C6ED8;
    case 700u: goto L_089C6EE0;
    case 701u: goto L_089C6EEC;
    case 702u: goto L_089C6EF8;
    case 703u: goto L_089C6F00;
    case 704u: goto L_089C6F08;
    case 705u: goto L_089C6F10;
    case 706u: goto L_089C6F18;
    case 707u: goto L_089C6F20;
    case 708u: goto L_089C6F3C;
    case 709u: goto L_089C6F44;
    case 710u: goto L_089C6F48;
    case 711u: goto L_089C6F54;
    case 712u: goto L_089C6F64;
    case 713u: goto L_089C6F70;
    case 714u: goto L_089C6F7C;
    case 715u: goto L_089C6F88;
    case 716u: goto L_089C6FA4;
    case 717u: goto L_089C6FB0;
    case 718u: goto L_089C6FC4;
    case 719u: goto L_089C6FCC;
    case 720u: goto L_089C6FD4;
    case 721u: goto L_089C6FDC;
    case 722u: goto L_089C6FE4;
    case 723u: goto L_089C6FF4;
    case 724u: goto L_089C6FFC;
    case 725u: goto L_089C700C;
    case 726u: goto L_089C7014;
    case 727u: goto L_089C7020;
    case 728u: goto L_089C7034;
    case 729u: goto L_089C703C;
    case 730u: goto L_089C7044;
    case 731u: goto L_089C704C;
    case 732u: goto L_089C705C;
    case 733u: goto L_089C7074;
    case 734u: goto L_089C7080;
    case 735u: goto L_089C7094;
    case 736u: goto L_089C70A8;
    case 737u: goto L_089C70C0;
    case 738u: goto L_089C70F0;
    case 739u: goto L_089C7108;
    case 740u: goto L_089C7110;
    case 741u: goto L_089C7118;
    case 742u: goto L_089C7124;
    case 743u: goto L_089C712C;
    case 744u: goto L_089C7134;
    case 745u: goto L_089C713C;
    case 746u: goto L_089C7144;
    case 747u: goto L_089C7150;
    case 748u: goto L_089C7158;
    case 749u: goto L_089C716C;
    case 750u: goto L_089C719C;
    case 751u: goto L_089C71A8;
    case 752u: goto L_089C71B0;
    case 753u: goto L_089C71B8;
    case 754u: goto L_089C71C0;
    case 755u: goto L_089C71C8;
    case 756u: goto L_089C71DC;
    case 757u: goto L_089C71E8;
    case 758u: goto L_089C71F8;
    case 759u: goto L_089C7200;
    case 760u: goto L_089C720C;
    case 761u: goto L_089C7214;
    case 762u: goto L_089C7220;
    case 763u: goto L_089C722C;
    case 764u: goto L_089C7238;
    case 765u: goto L_089C7240;
    case 766u: goto L_089C7248;
    case 767u: goto L_089C7250;
    case 768u: goto L_089C7258;
    case 769u: goto L_089C7274;
    case 770u: goto L_089C728C;
    case 771u: goto L_089C7298;
    case 772u: goto L_089C72AC;
    case 773u: goto L_089C72B4;
    case 774u: goto L_089C72C0;
    case 775u: goto L_089C72C8;
    case 776u: goto L_089C72F0;
    case 777u: goto L_089C730C;
    case 778u: goto L_089C7314;
    case 779u: goto L_089C731C;
    case 780u: goto L_089C7324;
    case 781u: goto L_089C7330;
    case 782u: goto L_089C7340;
    case 783u: goto L_089C7348;
    case 784u: goto L_089C7360;
    case 785u: goto L_089C736C;
    case 786u: goto L_089C7374;
    case 787u: goto L_089C737C;
    case 788u: goto L_089C738C;
    case 789u: goto L_089C7394;
    case 790u: goto L_089C739C;
    case 791u: goto L_089C73A4;
    case 792u: goto L_089C73AC;
    case 793u: goto L_089C73B4;
    case 794u: goto L_089C73BC;
    case 795u: goto L_089C73C8;
    case 796u: goto L_089C73D0;
    case 797u: goto L_089C73D8;
    case 798u: goto L_089C73E4;
    case 799u: goto L_089C73EC;
    case 800u: goto L_089C73F0;
    case 801u: goto L_089C73F8;
    case 802u: goto L_089C740C;
    case 803u: goto L_089C7414;
    case 804u: goto L_089C741C;
    case 805u: goto L_089C7428;
    case 806u: goto L_089C7434;
    case 807u: goto L_089C7450;
    case 808u: goto L_089C7458;
    case 809u: goto L_089C7460;
    case 810u: goto L_089C7478;
    case 811u: goto L_089C7480;
    case 812u: goto L_089C7488;
    case 813u: goto L_089C7498;
    case 814u: goto L_089C74AC;
    case 815u: goto L_089C74C4;
    case 816u: goto L_089C74CC;
    case 817u: goto L_089C74D4;
    case 818u: goto L_089C74E4;
    case 819u: goto L_089C74EC;
    case 820u: goto L_089C7500;
    case 821u: goto L_089C7548;
    case 822u: goto L_089C7560;
    case 823u: goto L_089C7578;
    case 824u: goto L_089C7580;
    case 825u: goto L_089C7584;
    case 826u: goto L_089C7590;
    case 827u: goto L_089C75A0;
    case 828u: goto L_089C75B0;
    case 829u: goto L_089C75C4;
    case 830u: goto L_089C75D4;
    case 831u: goto L_089C75E4;
    case 832u: goto L_089C75FC;
    case 833u: goto L_089C7608;
    case 834u: goto L_089C7610;
    case 835u: goto L_089C7624;
    case 836u: goto L_089C7654;
    case 837u: goto L_089C7688;
    case 838u: goto L_089C76A0;
    case 839u: goto L_089C76D0;
    case 840u: goto L_089C76E8;
    case 841u: goto L_089C76F0;
    case 842u: goto L_089C76F4;
    case 843u: goto L_089C76FC;
    case 844u: goto L_089C7710;
    case 845u: goto L_089C7720;
    case 846u: goto L_089C7730;
    case 847u: goto L_089C7740;
    case 848u: goto L_089C7750;
    case 849u: goto L_089C7760;
    case 850u: goto L_089C7770;
    case 851u: goto L_089C7780;
    case 852u: goto L_089C7790;
    case 853u: goto L_089C779C;
    case 854u: goto L_089C77B0;
    case 855u: goto L_089C77BC;
    case 856u: goto L_089C77C8;
    case 857u: goto L_089C77DC;
    case 858u: goto L_089C77F0;
    case 859u: goto L_089C77F8;
    case 860u: goto L_089C7808;
    case 861u: goto L_089C7814;
    case 862u: goto L_089C7828;
    case 863u: goto L_089C7838;
    case 864u: goto L_089C7840;
    case 865u: goto L_089C784C;
    case 866u: goto L_089C7858;
    case 867u: goto L_089C7868;
    case 868u: goto L_089C7878;
    case 869u: goto L_089C7880;
    case 870u: goto L_089C788C;
    case 871u: goto L_089C789C;
    case 872u: goto L_089C78B0;
    case 873u: goto L_089C78C0;
    case 874u: goto L_089C78D0;
    case 875u: goto L_089C78EC;
    case 876u: goto L_089C7900;
    case 877u: goto L_089C790C;
    case 878u: goto L_089C7918;
    case 879u: goto L_089C7924;
    case 880u: goto L_089C7934;
    case 881u: goto L_089C7940;
    case 882u: goto L_089C796C;
    case 883u: goto L_089C797C;
    case 884u: goto L_089C7988;
    case 885u: goto L_089C7998;
    case 886u: goto L_089C79A4;
    case 887u: goto L_089C79F4;
    case 888u: goto L_089C7A04;
    case 889u: goto L_089C7A3C;
    case 890u: goto L_089C7A44;
    case 891u: goto L_089C7A4C;
    case 892u: goto L_089C7A54;
    case 893u: goto L_089C7A64;
    case 894u: goto L_089C7A70;
    case 895u: goto L_089C7A7C;
    case 896u: goto L_089C7A80;
    case 897u: goto L_089C7A8C;
    case 898u: goto L_089C7A94;
    case 899u: goto L_089C7A9C;
    case 900u: goto L_089C7AA8;
    case 901u: goto L_089C7AB0;
    case 902u: goto L_089C7AB8;
    case 903u: goto L_089C7AC4;
    case 904u: goto L_089C7ACC;
    case 905u: goto L_089C7AD4;
    case 906u: goto L_089C7AE4;
    case 907u: goto L_089C7B40;
    case 908u: goto L_089C7B74;
    case 909u: goto L_089C7B7C;
    case 910u: goto L_089C7BA8;
    case 911u: goto L_089C7BB4;
    case 912u: goto L_089C7BBC;
    case 913u: goto L_089C7BC8;
    case 914u: goto L_089C7BEC;
    case 915u: goto L_089C7BFC;
    case 916u: goto L_089C7C04;
    case 917u: goto L_089C7C10;
    case 918u: goto L_089C7C1C;
    case 919u: goto L_089C7C24;
    case 920u: goto L_089C7C54;
    case 921u: goto L_089C7C58;
    case 922u: goto L_089C7C68;
    case 923u: goto L_089C7C6C;
    case 924u: goto L_089C7C84;
    case 925u: goto L_089C7CCC;
    case 926u: goto L_089C7CDC;
    case 927u: goto L_089C7CEC;
    case 928u: goto L_089C7CFC;
    case 929u: goto L_089C7D08;
    case 930u: goto L_089C7D18;
    case 931u: goto L_089C7D38;
    case 932u: goto L_089C7D44;
    case 933u: goto L_089C7D4C;
    case 934u: goto L_089C7D54;
    case 935u: goto L_089C7D5C;
    case 936u: goto L_089C7D90;
    case 937u: goto L_089C7DA0;
    case 938u: goto L_089C7DB0;
    case 939u: goto L_089C7DB4;
    case 940u: goto L_089C7DB8;
    case 941u: goto L_089C7DC8;
    case 942u: goto L_089C7DD4;
    case 943u: goto L_089C7DE0;
    case 944u: goto L_089C7DE8;
    case 945u: goto L_089C7DEC;
    case 946u: goto L_089C7DF4;
    case 947u: goto L_089C7E1C;
    case 948u: goto L_089C7E24;
    case 949u: goto L_089C7E30;
    case 950u: goto L_089C7E38;
    case 951u: goto L_089C7E40;
    case 952u: goto L_089C7E48;
    case 953u: goto L_089C7E50;
    case 954u: goto L_089C7E60;
    case 955u: goto L_089C7E68;
    case 956u: goto L_089C7E6C;
    case 957u: goto L_089C7E74;
    case 958u: goto L_089C7EA0;
    case 959u: goto L_089C7EA8;
    case 960u: goto L_089C7EB0;
    case 961u: goto L_089C7EB8;
    case 962u: goto L_089C7EBC;
    case 963u: goto L_089C7EC4;
    case 964u: goto L_089C7ED8;
    case 965u: goto L_089C7EE8;
    case 966u: goto L_089C7EF8;
    case 967u: goto L_089C7EFC;
    case 968u: goto L_089C7F00;
    case 969u: goto L_089C7F08;
    case 970u: goto L_089C7F14;
    case 971u: goto L_089C7F1C;
    case 972u: goto L_089C7F20;
    case 973u: goto L_089C7F28;
    case 974u: goto L_089C7F48;
    case 975u: goto L_089C7F50;
    case 976u: goto L_089C7F54;
    case 977u: goto L_089C7F5C;
    case 978u: goto L_089C7F6C;
    case 979u: goto L_089C7F7C;
    case 980u: goto L_089C7F84;
    case 981u: goto L_089C7FB4;
    case 982u: goto L_089C7FC4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C4000:
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] >> 24u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    ctx.gpr[19] = (ctx.gpr[9] - ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 0 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 0u);
        goto L_089C404C;
    }
    goto L_089C404C;
L_089C404C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(55)));
    ctx.gpr[4] = (15232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 255u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 255u);
        goto L_089C4090;
    }
    goto L_089C4090;
L_089C4090:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_089C4094;
L_089C4094:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089C40ACu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089C40ACu) goto L_089C40AC;
    return;
L_089C40AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C40ECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x089C40ECu) goto L_089C40EC;
    return;
L_089C40EC:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3439)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4154;
      }
      goto L_089C40F8;
    }
L_089C40F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(125)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4154;
      }
      goto L_089C4104;
    }
L_089C4104:
    ctx.gpr[4] = (0u | 255u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[31] = (0x089C4130u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x089C4130u) goto L_089C4130;
    return;
L_089C4130:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C414Cu);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 910u, 0x08AD3B10u>(ctx, &aot_mem) && ctx.pc == 0x089C414Cu) goto L_089C414C;
    return;
L_089C414C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4158;
      }
      goto L_089C4154;
    }
L_089C4154:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-28470), static_cast<std::uint8_t>(0u));
    goto L_089C4158;
L_089C4158:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C418C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C4204;
      }
      goto L_089C41DC;
    }
L_089C41DC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C41E8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C41E8u) goto L_089C41E8;
    return;
L_089C41E8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4200;
      }
      goto L_089C41F4;
    }
L_089C41F4:
    ctx.gpr[31] = (0x089C41FCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C41FCu) goto L_089C41FC;
    return;
L_089C41FC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C4200;
L_089C4200:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_089C4204;
L_089C4204:
    ctx.gpr[31] = (0x089C420Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 400u, 0x08913A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C420Cu) goto L_089C420C;
    return;
L_089C420C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C42A8;
      }
      goto L_089C4214;
    }
L_089C4214:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[17] = (2226u << 16u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-15556));
      if (branch_taken) {
          goto L_089C424C;
      }
      goto L_089C4224;
    }
L_089C4224:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089C4230u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C4230u) goto L_089C4230;
    return;
L_089C4230:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4248;
      }
      goto L_089C423C;
    }
L_089C423C:
    ctx.gpr[31] = (0x089C4244u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C4244u) goto L_089C4244;
    return;
L_089C4244:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089C4248;
L_089C4248:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    goto L_089C424C;
L_089C424C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C4258u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 430u, 0x08913C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4258u) goto L_089C4258;
    return;
L_089C4258:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C42A8;
      }
      goto L_089C4260;
    }
L_089C4260:
    ctx.gpr[31] = (0x089C4268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 496u, 0x08AC74E4u>(ctx, &aot_mem) && ctx.pc == 0x089C4268u) goto L_089C4268;
    return;
L_089C4268:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6888), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-28372)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-28372), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3436)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[30] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C42B0;
      }
      goto L_089C42A0;
    }
L_089C42A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C42D0;
      }
      goto L_089C42A8;
    }
L_089C42A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4804;
      }
      goto L_089C42B0;
    }
L_089C42B0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3437)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C42D0;
      }
      goto L_089C42C0;
    }
L_089C42C0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3438)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C42D0;
      }
      goto L_089C42CC;
    }
L_089C42CC:
    ctx.gpr[20] = (0u | 1u);
    goto L_089C42D0;
L_089C42D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28444)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_089C4440;
      }
      goto L_089C42E4;
    }
L_089C42E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C4440;
      }
      goto L_089C42F4;
    }
L_089C42F4:
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C4364;
      }
      goto L_089C4308;
    }
L_089C4308:
    ctx.gpr[31] = (0x089C4310u);
    ctx.gpr[22] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089C4310u) goto L_089C4310;
    return;
L_089C4310:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4364;
      }
      goto L_089C4318;
    }
L_089C4318:
    ctx.gpr[31] = (0x089C4320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089C4320u) goto L_089C4320;
    return;
L_089C4320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C4360;
      }
      goto L_089C4330;
    }
L_089C4330:
    ctx.gpr[31] = (0x089C4338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089C4338u) goto L_089C4338;
    return;
L_089C4338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C4360;
      }
      goto L_089C4348;
    }
L_089C4348:
    ctx.gpr[31] = (0x089C4350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089C4350u) goto L_089C4350;
    return;
L_089C4350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C4364;
      }
      goto L_089C4360;
    }
L_089C4360:
    ctx.gpr[22] = (0u | 1u);
    goto L_089C4364;
L_089C4364:
    ctx.gpr[31] = (0x089C436Cu);
    // nop
    ctx.pc = 0x08B0BBC4u;
    return;
L_089C436C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089C4380u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_089C4380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28444)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[22];
      if (branch_taken) {
          goto L_089C4440;
      }
      goto L_089C43AC;
    }
L_089C43AC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C4440;
      }
      goto L_089C43C4;
    }
L_089C43C4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-28372), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089C4414;
      }
      goto L_089C43D0;
    }
L_089C43D0:
    ctx.gpr[31] = (0x089C43D8u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.pc = 0x08B0BBC4u;
    return;
L_089C43D8:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089C43ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_089C43EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-28444), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089C4414;
L_089C4414:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x089C4428u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 774u, 0x089C3120u>(ctx, &aot_mem) && ctx.pc == 0x089C4428u) goto L_089C4428;
    return;
L_089C4428:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-28376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089C4440;
L_089C4440:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-28372)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C4480;
      }
      goto L_089C444C;
    }
L_089C444C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-28376)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C4480;
      }
      goto L_089C4460;
    }
L_089C4460:
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-28376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C4480;
      }
      goto L_089C447C;
    }
L_089C447C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-28376), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089C4480;
L_089C4480:
    ctx.gpr[31] = (0x089C4488u);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 496u, 0x08AC74E4u>(ctx, &aot_mem) && ctx.pc == 0x089C4488u) goto L_089C4488;
    return;
L_089C4488:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4550;
      }
      goto L_089C4490;
    }
L_089C4490:
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28368)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C44F4;
      }
      goto L_089C44B4;
    }
L_089C44B4:
    ctx.gpr[31] = (0x089C44BCu);
    // nop
    ctx.pc = 0x08B0BBC4u;
    return;
L_089C44BC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089C44D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_089C44D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-28368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089C44F4;
L_089C44F4:
    ctx.gpr[31] = (0x089C44FCu);
    ctx.gpr[18] = (0u | 0u);
    ctx.pc = 0x08B0BBC4u;
    return;
L_089C44FC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089C4510u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_089C4510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28368)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[18] = (0u | 1u);
        goto L_089C4548;
    }
    goto L_089C4548;
L_089C4548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_089C4554;
      }
      goto L_089C4550;
    }
L_089C4550:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-28368), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089C4554;
L_089C4554:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C4570;
      }
      goto L_089C455C;
    }
L_089C455C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-28376)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C47F8;
      }
      goto L_089C4570;
    }
L_089C4570:
    ctx.gpr[31] = (0x089C4578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x089C4578u) goto L_089C4578;
    return;
L_089C4578:
    ctx.gpr[31] = (0x089C4580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x089C4580u) goto L_089C4580;
    return;
L_089C4580:
    ctx.gpr[31] = (0x089C4588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 203u, 0x08A54E9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4588u) goto L_089C4588;
    return;
L_089C4588:
    ctx.gpr[31] = (0x089C4590u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x089C4590u) goto L_089C4590;
    return;
L_089C4590:
    ctx.gpr[4] = (17392u << 16u);
    ctx.gpr[31] = (0x089C459Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C459Cu) goto L_089C459C;
    return;
L_089C459C:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089C45C0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x089C45C0u) goto L_089C45C0;
    return;
L_089C45C0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4708;
      }
      goto L_089C45C8;
    }
L_089C45C8:
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17160u << 16u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C4604;
      }
      goto L_089C45DC;
    }
L_089C45DC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C45F4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089C45F4u) goto L_089C45F4;
    return;
L_089C45F4:
    ctx.gpr[31] = (0x089C45FCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x089C45FCu) goto L_089C45FC;
    return;
L_089C45FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4624;
      }
      goto L_089C4604;
    }
L_089C4604:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089C461Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089C461Cu) goto L_089C461C;
    return;
L_089C461C:
    ctx.gpr[31] = (0x089C4624u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x089C4624u) goto L_089C4624;
    return;
L_089C4624:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089C4630u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x089C4630u) goto L_089C4630;
    return;
L_089C4630:
    ctx.gpr[31] = (0x089C4638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x089C4638u) goto L_089C4638;
    return;
L_089C4638:
    ctx.gpr[31] = (0x089C4640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 500u, 0x08AC7520u>(ctx, &aot_mem) && ctx.pc == 0x089C4640u) goto L_089C4640;
    return;
L_089C4640:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
      if (branch_taken) {
          goto L_089C46A8;
      }
      goto L_089C4648;
    }
L_089C4648:
    ctx.gpr[19] = (2226u << 16u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-10976));
      if (branch_taken) {
          goto L_089C4680;
      }
      goto L_089C4654;
    }
L_089C4654:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C4660u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C4660u) goto L_089C4660;
    return;
L_089C4660:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4678;
      }
      goto L_089C466C;
    }
L_089C466C:
    ctx.gpr[31] = (0x089C4674u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C4674u) goto L_089C4674;
    return;
L_089C4674:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C4678;
L_089C4678:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_089C4680;
L_089C4680:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C468Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089C468Cu) goto L_089C468C;
    return;
L_089C468C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089C46A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089C46A0u) goto L_089C46A0;
    return;
L_089C46A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C46F8;
      }
      goto L_089C46A8;
    }
L_089C46A8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089C46DC;
      }
      goto L_089C46B0;
    }
L_089C46B0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089C46BCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C46BCu) goto L_089C46BC;
    return;
L_089C46BC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C46D4;
      }
      goto L_089C46C8;
    }
L_089C46C8:
    ctx.gpr[31] = (0x089C46D0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C46D0u) goto L_089C46D0;
    return;
L_089C46D0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089C46D4;
L_089C46D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C46DC;
L_089C46DC:
    ctx.gpr[31] = (0x089C46E4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089C46E4u) goto L_089C46E4;
    return;
L_089C46E4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089C46F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089C46F8u) goto L_089C46F8;
    return;
L_089C46F8:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4576));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089C4708;
L_089C4708:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-28376)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C4804;
      }
      goto L_089C471C;
    }
L_089C471C:
    ctx.gpr[31] = (0x089C4724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C4724u) goto L_089C4724;
    return;
L_089C4724:
    ctx.gpr[31] = (0x089C472Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x089C472Cu) goto L_089C472C;
    return;
L_089C472C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-28376)));
    ctx.gpr[23] = (2226u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-10976));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089C4770;
      }
      goto L_089C4748;
    }
L_089C4748:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089C4760u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089C4760u) goto L_089C4760;
    return;
L_089C4760:
    ctx.gpr[31] = (0x089C4768u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x089C4768u) goto L_089C4768;
    return;
L_089C4768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
      if (branch_taken) {
          goto L_089C4794;
      }
      goto L_089C4770;
    }
L_089C4770:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x089C4788u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089C4788u) goto L_089C4788;
    return;
L_089C4788:
    ctx.gpr[31] = (0x089C4790u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x089C4790u) goto L_089C4790;
    return;
L_089C4790:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    goto L_089C4794;
L_089C4794:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089C47C8;
      }
      goto L_089C479C;
    }
L_089C479C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C47A8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089C47A8u) goto L_089C47A8;
    return;
L_089C47A8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C47C0;
      }
      goto L_089C47B4;
    }
L_089C47B4:
    ctx.gpr[31] = (0x089C47BCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089C47BCu) goto L_089C47BC;
    return;
L_089C47BC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C47C0;
L_089C47C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089C47C8;
L_089C47C8:
    ctx.gpr[31] = (0x089C47D0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089C47D0u) goto L_089C47D0;
    return;
L_089C47D0:
    ctx.gpr[6] = (17389u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (16544u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C47F0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089C47F0u) goto L_089C47F0;
    return;
L_089C47F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4804;
      }
      goto L_089C47F8;
    }
L_089C47F8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    goto L_089C4804;
L_089C4804:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4848:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C487Cu);
    // nop
    ctx.pc = 0x08B0B7BCu;
    return;
L_089C487C:
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2080));
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[30] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C4A24;
      }
      goto L_089C4898;
    }
L_089C4898:
    ctx.gpr[31] = (0x089C48A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 492u, 0x08AC74A8u>(ctx, &aot_mem) && ctx.pc == 0x089C48A0u) goto L_089C48A0;
    return;
L_089C48A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4A24;
      }
      goto L_089C48A8;
    }
L_089C48A8:
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10640));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C48BCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 267u, 0x08A6D2D4u>(ctx, &aot_mem) && ctx.pc == 0x089C48BCu) goto L_089C48BC;
    return;
L_089C48BC:
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-7827));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-28364));
      if (branch_taken) {
          goto L_089C48E0;
      }
      goto L_089C48D0;
    }
L_089C48D0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[31] = (0x089C48E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x089C48E0u) goto L_089C48E0;
    return;
L_089C48E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C48ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 267u, 0x08A6D2D4u>(ctx, &aot_mem) && ctx.pc == 0x089C48ECu) goto L_089C48EC;
    return;
L_089C48EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4904;
      }
      goto L_089C48F4;
    }
L_089C48F4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x089C4904u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x089C4904u) goto L_089C4904;
    return;
L_089C4904:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C4910u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 113u, 0x08864820u>(ctx, &aot_mem) && ctx.pc == 0x089C4910u) goto L_089C4910;
    return;
L_089C4910:
    ctx.gpr[31] = (0x089C4918u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 93u, 0x088646E8u>(ctx, &aot_mem) && ctx.pc == 0x089C4918u) goto L_089C4918;
    return;
L_089C4918:
    ctx.gpr[31] = (0x089C4920u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 437u, 0x089C1E8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4920u) goto L_089C4920;
    return;
L_089C4920:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C494C;
      }
      goto L_089C492C;
    }
L_089C492C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089C4944u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10804));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x089C4944u) goto L_089C4944;
    return;
L_089C4944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4960;
      }
      goto L_089C494C;
    }
L_089C494C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089C4960u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 438u, 0x089C1E98u>(ctx, &aot_mem) && ctx.pc == 0x089C4960u) goto L_089C4960;
    return;
L_089C4960:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 4251u);
    ctx.gpr[31] = (0x089C4974u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10792));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 110u, 0x089C08CCu>(ctx, &aot_mem) && ctx.pc == 0x089C4974u) goto L_089C4974;
    return;
L_089C4974:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28348)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-10772));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28352)));
    goto L_089C4990;
L_089C4990:
    ctx.gpr[31] = (0x089C4998u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 585u, 0x08AB350Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4998u) goto L_089C4998;
    return;
L_089C4998:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x089C49A4u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.pc = 0x08B0B7B4u;
    return;
L_089C49A4:
    ctx.gpr[31] = (0x089C49ACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.pc = 0x08B0B7BCu;
    return;
L_089C49AC:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
      if (branch_taken) {
          goto L_089C49F4;
      }
      goto L_089C49BC;
    }
L_089C49BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C49F4;
      }
      goto L_089C49C4;
    }
L_089C49C4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089C49D0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BCE4u;
    return;
L_089C49D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C49F4;
      }
      goto L_089C49D8;
    }
L_089C49D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C49F4;
      }
      goto L_089C49E8;
    }
L_089C49E8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089C49F4;
      }
      goto L_089C49F0;
    }
L_089C49F0:
    ctx.gpr[16] = (0u | 1u);
    goto L_089C49F4;
L_089C49F4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4990;
      }
      goto L_089C49FC;
    }
L_089C49FC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 4280u);
    ctx.gpr[31] = (0x089C4A10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10720));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 110u, 0x089C08CCu>(ctx, &aot_mem) && ctx.pc == 0x089C4A10u) goto L_089C4A10;
    return;
L_089C4A10:
    ctx.gpr[31] = (0x089C4A18u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 437u, 0x089C1E8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4A18u) goto L_089C4A18;
    return;
L_089C4A18:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C4A24u);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 113u, 0x08864820u>(ctx, &aot_mem) && ctx.pc == 0x089C4A24u) goto L_089C4A24;
    return;
L_089C4A24:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(936)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089C4A44;
      }
      goto L_089C4A34;
    }
L_089C4A34:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4A50;
      }
      goto L_089C4A44;
    }
L_089C4A44:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(27332), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089C4A58;
      }
      goto L_089C4A50;
    }
L_089C4A50:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(27332), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089C4A58;
L_089C4A58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4A6C;
      }
      goto L_089C4A64;
    }
L_089C4A64:
    ctx.gpr[31] = (0x089C4A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 480u, 0x08AB7174u>(ctx, &aot_mem) && ctx.pc == 0x089C4A6Cu) goto L_089C4A6C;
    return;
L_089C4A6C:
    ctx.gpr[31] = (0x089C4A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 864u, 0x08AD36C8u>(ctx, &aot_mem) && ctx.pc == 0x089C4A74u) goto L_089C4A74;
    return;
L_089C4A74:
    ctx.gpr[31] = (0x089C4A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 77u, 0x08A54554u>(ctx, &aot_mem) && ctx.pc == 0x089C4A7Cu) goto L_089C4A7C;
    return;
L_089C4A7C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7776), 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C4A94u);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4A94u) goto L_089C4A94;
    return;
L_089C4A94:
    ctx.gpr[31] = (0x089C4A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 444u, 0x08AD19D0u>(ctx, &aot_mem) && ctx.pc == 0x089C4A9Cu) goto L_089C4A9C;
    return;
L_089C4A9C:
    ctx.gpr[31] = (0x089C4AA4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x089C4AA4u) goto L_089C4AA4;
    return;
L_089C4AA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4AB8;
      }
      goto L_089C4AB0;
    }
L_089C4AB0:
    ctx.gpr[31] = (0x089C4AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 482u, 0x08AB7194u>(ctx, &aot_mem) && ctx.pc == 0x089C4AB8u) goto L_089C4AB8;
    return;
L_089C4AB8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17588)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C4AEC;
      }
      goto L_089C4AC8;
    }
L_089C4AC8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C4AEC;
      }
      goto L_089C4ADC;
    }
L_089C4ADC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x089C4AE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 93u, 0x088646E8u>(ctx, &aot_mem) && ctx.pc == 0x089C4AE8u) goto L_089C4AE8;
    return;
L_089C4AE8:
    ctx.gpr[20] = (2229u << 16u);
    goto L_089C4AEC;
L_089C4AEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-28471)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_089C4B18;
      }
      goto L_089C4AF8;
    }
L_089C4AF8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C4B4C;
      }
      goto L_089C4B0C;
    }
L_089C4B0C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16756)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C4B4C;
      }
      goto L_089C4B18;
    }
L_089C4B18:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[31] = (0x089C4B24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7680)));
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 551u, 0x088CFF90u>(ctx, &aot_mem) && ctx.pc == 0x089C4B24u) goto L_089C4B24;
    return;
L_089C4B24:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C4B30u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4B30u) goto L_089C4B30;
    return;
L_089C4B30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-28471)));
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(13216));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_089C4B54;
      }
      goto L_089C4B44;
    }
L_089C4B44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4B8C;
      }
      goto L_089C4B4C;
    }
L_089C4B4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C4E9C;
      }
      goto L_089C4B54;
    }
L_089C4B54:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C4B64u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 397u, 0x088EE884u>(ctx, &aot_mem) && ctx.pc == 0x089C4B64u) goto L_089C4B64;
    return;
L_089C4B64:
    ctx.gpr[31] = (0x089C4B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 416u, 0x089C1B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4B6Cu) goto L_089C4B6C;
    return;
L_089C4B6C:
    ctx.gpr[31] = (0x089C4B74u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 376u, 0x089C18DCu>(ctx, &aot_mem) && ctx.pc == 0x089C4B74u) goto L_089C4B74;
    return;
L_089C4B74:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-28471), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3439), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089C4B8C;
L_089C4B8C:
    ctx.gpr[31] = (0x089C4B94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 133u, 0x088ED0C8u>(ctx, &aot_mem) && ctx.pc == 0x089C4B94u) goto L_089C4B94;
    return;
L_089C4B94:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C4BCC;
      }
      goto L_089C4B9C;
    }
L_089C4B9C:
    ctx.gpr[31] = (0x089C4BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 488u, 0x0887AF74u>(ctx, &aot_mem) && ctx.pc == 0x089C4BA4u) goto L_089C4BA4;
    return;
L_089C4BA4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28456)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4BCC;
      }
      goto L_089C4BB4;
    }
L_089C4BB4:
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4576));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1133), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28456), static_cast<std::uint8_t>(0u));
    goto L_089C4BCC;
L_089C4BCC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28446)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C4E24;
      }
      goto L_089C4BDC;
    }
L_089C4BDC:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-7680));
      if (branch_taken) {
          goto L_089C4C04;
      }
      goto L_089C4BF4;
    }
L_089C4BF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1130)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C4D4C;
      }
      goto L_089C4C04;
    }
L_089C4C04:
    ctx.gpr[31] = (0x089C4C0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 133u, 0x088ED0C8u>(ctx, &aot_mem) && ctx.pc == 0x089C4C0Cu) goto L_089C4C0C;
    return;
L_089C4C0C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C4D4C;
      }
      goto L_089C4C14;
    }
L_089C4C14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089C4C30;
      }
      goto L_089C4C20;
    }
L_089C4C20:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4D4C;
      }
      goto L_089C4C30;
    }
L_089C4C30:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6856)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C4C78;
      }
      goto L_089C4C40;
    }
L_089C4C40:
    ctx.gpr[31] = (0x089C4C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 421u, 0x08ACA8D4u>(ctx, &aot_mem) && ctx.pc == 0x089C4C48u) goto L_089C4C48;
    return;
L_089C4C48:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22912)));
        goto L_089C4C7C;
    }
    goto L_089C4C50;
L_089C4C50:
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[31] = (0x089C4C70u);
    ctx.gpr[10] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 263u, 0x089C12B4u>(ctx, &aot_mem) && ctx.pc == 0x089C4C70u) goto L_089C4C70;
    return;
L_089C4C70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4CCC;
      }
      goto L_089C4C78;
    }
L_089C4C78:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22912)));
    goto L_089C4C7C;
L_089C4C7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11068)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11072)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11076)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11080)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11084)));
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11088)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[9] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[9] = (ctx.gpr[10] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[31] = (0x089C4CCCu);
    ctx.gpr[10] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 263u, 0x089C12B4u>(ctx, &aot_mem) && ctx.pc == 0x089C4CCCu) goto L_089C4CCC;
    return;
L_089C4CCC:
    ctx.gpr[31] = (0x089C4CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 201u, 0x08A4CCF8u>(ctx, &aot_mem) && ctx.pc == 0x089C4CD4u) goto L_089C4CD4;
    return;
L_089C4CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22912)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11148)));
    ctx.gpr[31] = (0x089C4CE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 602u, 0x0887357Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4CE4u) goto L_089C4CE4;
    return;
L_089C4CE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22912)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11152)));
    ctx.gpr[31] = (0x089C4CF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 639u, 0x08873924u>(ctx, &aot_mem) && ctx.pc == 0x089C4CF4u) goto L_089C4CF4;
    return;
L_089C4CF4:
    ctx.gpr[31] = (0x089C4CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 647u, 0x089C29E8u>(ctx, &aot_mem) && ctx.pc == 0x089C4CFCu) goto L_089C4CFC;
    return;
L_089C4CFC:
    ctx.gpr[31] = (0x089C4D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 657u, 0x089C2A54u>(ctx, &aot_mem) && ctx.pc == 0x089C4D04u) goto L_089C4D04;
    return;
L_089C4D04:
    ctx.gpr[31] = (0x089C4D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 656u, 0x089C2A4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4D0Cu) goto L_089C4D0C;
    return;
L_089C4D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7172)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4D24;
      }
      goto L_089C4D18;
    }
L_089C4D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(7172)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[20] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C4D28;
      }
      goto L_089C4D24;
    }
L_089C4D24:
    ctx.gpr[20] = (2229u << 16u);
    goto L_089C4D28;
L_089C4D28:
    ctx.gpr[31] = (0x089C4D30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 492u, 0x088EF0A0u>(ctx, &aot_mem) && ctx.pc == 0x089C4D30u) goto L_089C4D30;
    return;
L_089C4D30:
    ctx.gpr[31] = (0x089C4D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 685u, 0x089C2B60u>(ctx, &aot_mem) && ctx.pc == 0x089C4D38u) goto L_089C4D38;
    return;
L_089C4D38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(322)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4DC8;
      }
      goto L_089C4D44;
    }
L_089C4D44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089C4DC8;
      }
      goto L_089C4D4C;
    }
L_089C4D4C:
    ctx.gpr[31] = (0x089C4D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 163u, 0x0883CBF8u>(ctx, &aot_mem) && ctx.pc == 0x089C4D54u) goto L_089C4D54;
    return;
L_089C4D54:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16355u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 36409u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089C4DA4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 276u, 0x08839298u>(ctx, &aot_mem) && ctx.pc == 0x089C4DA4u) goto L_089C4DA4;
    return;
L_089C4DA4:
    ctx.gpr[31] = (0x089C4DACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 517u, 0x08926EF4u>(ctx, &aot_mem) && ctx.pc == 0x089C4DACu) goto L_089C4DAC;
    return;
L_089C4DAC:
    ctx.gpr[31] = (0x089C4DB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 570u, 0x089172D0u>(ctx, &aot_mem) && ctx.pc == 0x089C4DB4u) goto L_089C4DB4;
    return;
L_089C4DB4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089C4DC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6008));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 632u, 0x08873884u>(ctx, &aot_mem) && ctx.pc == 0x089C4DC8u) goto L_089C4DC8;
    return;
L_089C4DC8:
    ctx.gpr[31] = (0x089C4DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 734u, 0x089C2E84u>(ctx, &aot_mem) && ctx.pc == 0x089C4DD0u) goto L_089C4DD0;
    return;
L_089C4DD0:
    ctx.gpr[31] = (0x089C4DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 1041u, 0x089C3E60u>(ctx, &aot_mem) && ctx.pc == 0x089C4DD8u) goto L_089C4DD8;
    return;
L_089C4DD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-28471)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_089C4DF4;
      }
      goto L_089C4DE4;
    }
L_089C4DE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1133)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C4E14;
      }
      goto L_089C4DF4;
    }
L_089C4DF4:
    ctx.gpr[31] = (0x089C4DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 747u, 0x089C2FB0u>(ctx, &aot_mem) && ctx.pc == 0x089C4DFCu) goto L_089C4DFC;
    return;
L_089C4DFC:
    ctx.gpr[31] = (0x089C4E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 460u, 0x08A8E3A4u>(ctx, &aot_mem) && ctx.pc == 0x089C4E04u) goto L_089C4E04;
    return;
L_089C4E04:
    ctx.gpr[31] = (0x089C4E0Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 315u, 0x089C15E8u>(ctx, &aot_mem) && ctx.pc == 0x089C4E0Cu) goto L_089C4E0C;
    return;
L_089C4E0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4E24;
      }
      goto L_089C4E14;
    }
L_089C4E14:
    ctx.gpr[31] = (0x089C4E1Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x089C4E1Cu) goto L_089C4E1C;
    return;
L_089C4E1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C4E9C;
      }
      goto L_089C4E24;
    }
L_089C4E24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-28471)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089C4E68;
      }
      goto L_089C4E30;
    }
L_089C4E30:
    ctx.gpr[31] = (0x089C4E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 416u, 0x089C1B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089C4E38u) goto L_089C4E38;
    return;
L_089C4E38:
    ctx.gpr[31] = (0x089C4E40u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 376u, 0x089C18DCu>(ctx, &aot_mem) && ctx.pc == 0x089C4E40u) goto L_089C4E40;
    return;
L_089C4E40:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C4E54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 397u, 0x088EE884u>(ctx, &aot_mem) && ctx.pc == 0x089C4E54u) goto L_089C4E54;
    return;
L_089C4E54:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-28471), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3439), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089C4E68;
L_089C4E68:
    ctx.gpr[31] = (0x089C4E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 720u, 0x0891B328u>(ctx, &aot_mem) && ctx.pc == 0x089C4E70u) goto L_089C4E70;
    return;
L_089C4E70:
    ctx.gpr[31] = (0x089C4E78u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x089C4E78u) goto L_089C4E78;
    return;
L_089C4E78:
    ctx.gpr[31] = (0x089C4E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 589u, 0x089C26E8u>(ctx, &aot_mem) && ctx.pc == 0x089C4E80u) goto L_089C4E80;
    return;
L_089C4E80:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25628)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C4E98;
      }
      goto L_089C4E90;
    }
L_089C4E90:
    ctx.gpr[31] = (0x089C4E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 554u, 0x089C2514u>(ctx, &aot_mem) && ctx.pc == 0x089C4E98u) goto L_089C4E98;
    return;
L_089C4E98:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_089C4E9C;
L_089C4E9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4ECC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28540)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28544)));
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28536), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28516)));
    ctx.gpr[3] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-28504)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28508)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28500), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-28492), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-28528), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-28532), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.gpr[14] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[8] = (16281u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-28524), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-28520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[24] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-28512), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[25] = (2229u << 16u);
    ctx.gpr[17] = (2229u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28440));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-28496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C4FC8u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28488), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x089C4FC8u) goto L_089C4FC8;
    return;
L_089C4FC8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089C4FD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28344));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x089C4FD4u) goto L_089C4FD4;
    return;
L_089C4FD4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C4FE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5008u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x089C5008u) goto L_089C5008;
    return;
L_089C5008:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) & 0x7FFFFFFFu);
    ctx.gpr[31] = (0x089C5014u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5014u) goto L_089C5014;
    return;
L_089C5014:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C502C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C504Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x089C504Cu) goto L_089C504C;
    return;
L_089C504C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[0]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x089C505Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C505Cu) goto L_089C505C;
    return;
L_089C505C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5098u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x089C5098u) goto L_089C5098;
    return;
L_089C5098:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C50A8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x089C50A8u) goto L_089C50A8;
    return;
L_089C50A8:
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[31] = (0x089C50C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C50C4u) goto L_089C50C4;
    return;
L_089C50C4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C50E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5104u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x089C5104u) goto L_089C5104;
    return;
L_089C5104:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C5118u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x089C5118u) goto L_089C5118;
    return;
L_089C5118:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_089C515C;
      }
      goto L_089C5128;
    }
L_089C5128:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C5134u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x089C5134u) goto L_089C5134;
    return;
L_089C5134:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C514C;
      }
      goto L_089C5148;
    }
L_089C5148:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089C514C;
L_089C514C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5128;
      }
      goto L_089C515C;
    }
L_089C515C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C5168u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5168u) goto L_089C5168;
    return;
L_089C5168:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_089C518C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C51B0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x089C51B0u) goto L_089C51B0;
    return;
L_089C51B0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C51C4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x089C51C4u) goto L_089C51C4;
    return;
L_089C51C4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_089C5208;
      }
      goto L_089C51D4;
    }
L_089C51D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C51E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x089C51E0u) goto L_089C51E0;
    return;
L_089C51E0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C51F8;
      }
      goto L_089C51F4;
    }
L_089C51F4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089C51F8;
L_089C51F8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C51D4;
      }
      goto L_089C5208;
    }
L_089C5208:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C5214u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5214u) goto L_089C5214;
    return;
L_089C5214:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_089C5238:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5254u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089C5254u) goto L_089C5254;
    return;
L_089C5254:
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_089C527C;
      }
      goto L_089C5270;
    }
L_089C5270:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089C527C;
L_089C527C:
    ctx.gpr[4] = (12288u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C5290u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x089C5290u) goto L_089C5290;
    return;
L_089C5290:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C52B8;
      }
      goto L_089C529C;
    }
L_089C529C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C52C8;
      }
      goto L_089C52A4;
    }
L_089C52A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C52B0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C52B0u) goto L_089C52B0;
    return;
L_089C52B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C53E4;
      }
      goto L_089C52B8;
    }
L_089C52B8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C52E0;
      }
      goto L_089C52C0;
    }
L_089C52C0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5354;
      }
      goto L_089C52C8;
    }
L_089C52C8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C52D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10544));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 375u, 0x08A4B244u>(ctx, &aot_mem) && ctx.pc == 0x089C52D8u) goto L_089C52D8;
    return;
L_089C52D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C53E4;
      }
      goto L_089C52E0;
    }
L_089C52E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C52ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x089C52ECu) goto L_089C52EC;
    return;
L_089C52EC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
        goto L_089C5320;
    }
    goto L_089C5300;
L_089C5300:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089C5318u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10564));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x089C5318u) goto L_089C5318;
    return;
L_089C5318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089C5320;
L_089C5320:
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x089C534Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C534Cu) goto L_089C534C;
    return;
L_089C534C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C52B0;
      }
      goto L_089C5354;
    }
L_089C5354:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C5360u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x089C5360u) goto L_089C5360;
    return;
L_089C5360:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x089C5374u);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x089C5374u) goto L_089C5374;
    return;
L_089C5374:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
        goto L_089C53A8;
    }
    goto L_089C5388;
L_089C5388:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x089C53A0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10564));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x089C53A0u) goto L_089C53A0;
    return;
L_089C53A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    goto L_089C53A8;
L_089C53A8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x089C53DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C53DCu) goto L_089C53DC;
    return;
L_089C53DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C52B0;
      }
      goto L_089C53E4;
    }
L_089C53E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C53FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C540Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x089C540Cu) goto L_089C540C;
    return;
L_089C540C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089C5418u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 325u, 0x08AED238u>(ctx, &aot_mem) && ctx.pc == 0x089C5418u) goto L_089C5418;
    return;
L_089C5418:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5428:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10516));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5450u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28328));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 474u, 0x08A4B854u>(ctx, &aot_mem) && ctx.pc == 0x089C5450u) goto L_089C5450;
    return;
L_089C5450:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089C5464u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10508));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5464u) goto L_089C5464;
    return;
L_089C5464:
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C5478u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5478u) goto L_089C5478;
    return;
L_089C5478:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C5484u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x089C5484u) goto L_089C5484;
    return;
L_089C5484:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5498:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C54C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28264));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 324u, 0x08A35FE0u>(ctx, &aot_mem) && ctx.pc == 0x089C54C4u) goto L_089C54C4;
    return;
L_089C54C4:
    ctx.gpr[31] = (0x089C54CCu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 526u, 0x08AD67CCu>(ctx, &aot_mem) && ctx.pc == 0x089C54CCu) goto L_089C54CC;
    return;
L_089C54CC:
    ctx.gpr[31] = (0x089C54D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x089C54D4u) goto L_089C54D4;
    return;
L_089C54D4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C54E8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C54F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5520u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_089C54E8;
L_089C5520:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089C5568;
      }
      goto L_089C5534;
    }
L_089C5534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x089C5548u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C5548u) goto L_089C5548;
    return;
L_089C5548:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5558;
      }
      goto L_089C5550;
    }
L_089C5550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089C556C;
      }
      goto L_089C5558;
    }
L_089C5558:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C5534;
      }
      goto L_089C5568;
    }
L_089C5568:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_089C556C;
L_089C556C:
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
L_089C5590:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C55A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C55CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28264));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 284u, 0x08A35D30u>(ctx, &aot_mem) && ctx.pc == 0x089C55CCu) goto L_089C55CC;
    return;
L_089C55CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C55D8:
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
L_089C5604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C560C;
      }
      goto L_089C560C;
    }
L_089C560C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5614:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5638u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 525u, 0x089C2328u>(ctx, &aot_mem) && ctx.pc == 0x089C5638u) goto L_089C5638;
    return;
L_089C5638:
    ctx.gpr[31] = (0x089C5640u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 525u, 0x089C2328u>(ctx, &aot_mem) && ctx.pc == 0x089C5640u) goto L_089C5640;
    return;
L_089C5640:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C567C;
      }
      goto L_089C5664;
    }
L_089C5664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5684;
      }
      goto L_089C5674;
    }
L_089C5674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C56AC;
      }
      goto L_089C567C;
    }
L_089C567C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C56B8;
      }
      goto L_089C5684;
    }
L_089C5684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089C569Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C569Cu) goto L_089C569C;
    return;
L_089C569C:
    ctx.gpr[31] = (0x089C56A4u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    goto L_089C6068;
L_089C56A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C56B8;
      }
      goto L_089C56AC;
    }
L_089C56AC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C56B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10220));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089C56B8u) goto L_089C56B8;
    return;
L_089C56B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C56C8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089C56DC;
      }
      goto L_089C56D8;
    }
L_089C56D8:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089C56DC;
L_089C56DC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C56E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5710;
      }
      goto L_089C5704;
    }
L_089C5704:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[31] = (0x089C5710u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 362u, 0x0894E178u>(ctx, &aot_mem) && ctx.pc == 0x089C5710u) goto L_089C5710;
    return;
L_089C5710:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5724:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5740:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5760:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5768:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C577C;
      }
      goto L_089C5774;
    }
L_089C5774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C5790;
      }
      goto L_089C577C;
    }
L_089C577C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089C5790;
L_089C5790:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5798:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C57A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5996), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5992), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7788), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5988), ctx.gpr[6]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5768));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_089C57F8;
L_089C57F8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C57F8;
      }
      goto L_089C5810;
    }
L_089C5810:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C584C;
      }
      goto L_089C5818;
    }
L_089C5818:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(9432));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10168));
    ctx.gpr[31] = (0x089C5838u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(13733));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x089C5838u) goto L_089C5838;
    return;
L_089C5838:
    ctx.gpr[31] = (0x089C5840u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 401u, 0x08A8A70Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5840u) goto L_089C5840;
    return;
L_089C5840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    goto L_089C584C;
L_089C584C:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7436)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C5864u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10140));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089C5864u) goto L_089C5864;
    return;
L_089C5864:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5878:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5898u);
    // nop
    goto L_089C661C;
L_089C5898:
    ctx.gpr[31] = (0x089C58A0u);
    // nop
    goto L_089C5C48;
L_089C58A0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[16] = (2229u << 16u);
    goto L_089C58B0;
L_089C58B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C58D0;
      }
      goto L_089C58C0;
    }
L_089C58C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_089C58D0;
L_089C58D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C58E8;
      }
      goto L_089C58D8;
    }
L_089C58D8:
    ctx.gpr[31] = (0x089C58E0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089C6A08;
L_089C58E0:
    ctx.gpr[31] = (0x089C58E8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089C6B2C;
L_089C58E8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C58B0;
      }
      goto L_089C58F8;
    }
L_089C58F8:
    ctx.gpr[31] = (0x089C5900u);
    // nop
    goto L_089C62E8;
L_089C5900:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7788), static_cast<std::uint8_t>(0u));
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
L_089C5924:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C5948u);
    // nop
    goto L_089C72C0;
L_089C5948:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5988)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C59A8;
      }
      goto L_089C595C;
    }
L_089C595C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6920)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6888)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C59A0;
      }
      goto L_089C5978;
    }
L_089C5978:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[20] = (2u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-7388));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[18] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C59B8;
      }
      goto L_089C5998;
    }
L_089C5998:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C59C4;
      }
      goto L_089C59A0;
    }
L_089C59A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5B70;
      }
      goto L_089C59A8;
    }
L_089C59A8:
    ctx.gpr[31] = (0x089C59B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 386u, 0x089C9BC0u>(ctx, &aot_mem) && ctx.pc == 0x089C59B0u) goto L_089C59B0;
    return;
L_089C59B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5B70;
      }
      goto L_089C59B8;
    }
L_089C59B8:
    ctx.gpr[31] = (0x089C59C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x089C59C0u) goto L_089C59C0;
    return;
L_089C59C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20156)));
    goto L_089C59C4;
L_089C59C4:
    ctx.gpr[31] = (0x089C59CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 659u, 0x08953AA0u>(ctx, &aot_mem) && ctx.pc == 0x089C59CCu) goto L_089C59CC;
    return;
L_089C59CC:
    ctx.gpr[31] = (0x089C59D4u);
    // nop
    goto L_089C72C8;
L_089C59D4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x089C59E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 569u, 0x089CA754u>(ctx, &aot_mem) && ctx.pc == 0x089C59E4u) goto L_089C59E4;
    return;
L_089C59E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C59FC;
      }
      goto L_089C59F0;
    }
L_089C59F0:
    ctx.gpr[31] = (0x089C59F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x089C59F8u) goto L_089C59F8;
    return;
L_089C59F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20156)));
    goto L_089C59FC;
L_089C59FC:
    ctx.gpr[31] = (0x089C5A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 62u, 0x08950440u>(ctx, &aot_mem) && ctx.pc == 0x089C5A04u) goto L_089C5A04;
    return;
L_089C5A04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5A18;
      }
      goto L_089C5A0C;
    }
L_089C5A0C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-27996), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C5A2C;
      }
      goto L_089C5A18;
    }
L_089C5A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-27996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5A2C;
      }
      goto L_089C5A24;
    }
L_089C5A24:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-27996), ctx.gpr[4]);
    goto L_089C5A2C;
L_089C5A2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(936)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7788)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C5A94;
      }
      goto L_089C5A44;
    }
L_089C5A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7780)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C5A94;
      }
      goto L_089C5A54;
    }
L_089C5A54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6887)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5A94;
      }
      goto L_089C5A60;
    }
L_089C5A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-27996)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C5A94;
      }
      goto L_089C5A6C;
    }
L_089C5A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5A94;
      }
      goto L_089C5A78;
    }
L_089C5A78:
    ctx.gpr[31] = (0x089C5A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 447u, 0x089CA05Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5A80u) goto L_089C5A80;
    return;
L_089C5A80:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089C5A8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5A8Cu) goto L_089C5A8C;
    return;
L_089C5A8C:
    ctx.gpr[31] = (0x089C5A94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 95u, 0x089CC6ACu>(ctx, &aot_mem) && ctx.pc == 0x089C5A94u) goto L_089C5A94;
    return;
L_089C5A94:
    ctx.gpr[31] = (0x089C5A9Cu);
    // nop
    goto L_089C651C;
L_089C5A9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(936)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5B1C;
      }
      goto L_089C5AA8;
    }
L_089C5AA8:
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5AF4;
      }
      goto L_089C5ABC;
    }
L_089C5ABC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089C5AC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5AC8u) goto L_089C5AC8;
    return;
L_089C5AC8:
    ctx.gpr[31] = (0x089C5AD0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 347u, 0x08986094u>(ctx, &aot_mem) && ctx.pc == 0x089C5AD0u) goto L_089C5AD0;
    return;
L_089C5AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089C5AE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 295u, 0x08985D40u>(ctx, &aot_mem) && ctx.pc == 0x089C5AE0u) goto L_089C5AE0;
    return;
L_089C5AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089C5AECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 346u, 0x0898608Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5AECu) goto L_089C5AEC;
    return;
L_089C5AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5B1C;
      }
      goto L_089C5AF4;
    }
L_089C5AF4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089C5B00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5B00u) goto L_089C5B00;
    return;
L_089C5B00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C5B0Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 295u, 0x08985D40u>(ctx, &aot_mem) && ctx.pc == 0x089C5B0Cu) goto L_089C5B0C;
    return;
L_089C5B0C:
    ctx.gpr[31] = (0x089C5B14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5B14u) goto L_089C5B14;
    return;
L_089C5B14:
    ctx.gpr[31] = (0x089C5B1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 346u, 0x0898608Cu>(ctx, &aot_mem) && ctx.pc == 0x089C5B1Cu) goto L_089C5B1C;
    return;
L_089C5B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7364)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    ctx.gpr[16] = (0u | 20u);
      if (branch_taken) {
          goto L_089C5B70;
      }
      goto L_089C5B38;
    }
L_089C5B38:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089C5B3C;
L_089C5B3C:
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(9)));
    ctx.gpr[6] = (ctx.gpr[6] & 143u);
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C5B64;
      }
      goto L_089C5B58;
    }
L_089C5B58:
    ctx.gpr[31] = (0x089C5B60u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089C6068;
L_089C5B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
    goto L_089C5B64;
L_089C5B64:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C5B3C;
      }
      goto L_089C5B70;
    }
L_089C5B70:
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
L_089C5B90:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7408));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7428), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7424), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7408), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7404), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7368));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7388), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7384), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7368), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7388));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7364), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5C48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (2227u << 16u);
    goto L_089C5C80;
L_089C5C80:
    ctx.gpr[16] = (ctx.gpr[19] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_089C5C94;
L_089C5C94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[31] = (0x089C5CA0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8C28u>(ctx, &aot_mem) && ctx.pc == 0x089C5CA0u) goto L_089C5CA0;
    return;
L_089C5CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5CB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8C28u>(ctx, &aot_mem) && ctx.pc == 0x089C5CB0u) goto L_089C5CB0;
    return;
L_089C5CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5CC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8C28u>(ctx, &aot_mem) && ctx.pc == 0x089C5CC0u) goto L_089C5CC0;
    return;
L_089C5CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5CD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8C28u>(ctx, &aot_mem) && ctx.pc == 0x089C5CD0u) goto L_089C5CD0;
    return;
L_089C5CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5CE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8C28u>(ctx, &aot_mem) && ctx.pc == 0x089C5CE0u) goto L_089C5CE0;
    return;
L_089C5CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5CF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8C28u>(ctx, &aot_mem) && ctx.pc == 0x089C5CF0u) goto L_089C5CF0;
    return;
L_089C5CF0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4400));
      if (branch_taken) {
          goto L_089C5C94;
      }
      goto L_089C5D00;
    }
L_089C5D00:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5C80;
      }
      goto L_089C5D10;
    }
L_089C5D10:
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
L_089C5D2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[15] / ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (2227u << 16u);
    goto L_089C5DB4;
L_089C5DB4:
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[19]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[19] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[19]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    goto L_089C5DD4;
L_089C5DD4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_089C5E04;
      }
      goto L_089C5DE8;
    }
L_089C5DE8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C5E0C;
      }
      goto L_089C5E04;
    }
L_089C5E04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C5E68;
      }
      goto L_089C5E0C;
    }
L_089C5E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[31] = (0x089C5E18u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8C28u>(ctx, &aot_mem) && ctx.pc == 0x089C5E18u) goto L_089C5E18;
    return;
L_089C5E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5E28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8C28u>(ctx, &aot_mem) && ctx.pc == 0x089C5E28u) goto L_089C5E28;
    return;
L_089C5E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5E38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8C28u>(ctx, &aot_mem) && ctx.pc == 0x089C5E38u) goto L_089C5E38;
    return;
L_089C5E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5E48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8C28u>(ctx, &aot_mem) && ctx.pc == 0x089C5E48u) goto L_089C5E48;
    return;
L_089C5E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5E58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8C28u>(ctx, &aot_mem) && ctx.pc == 0x089C5E58u) goto L_089C5E58;
    return;
L_089C5E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C5E68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8C28u>(ctx, &aot_mem) && ctx.pc == 0x089C5E68u) goto L_089C5E68;
    return;
L_089C5E68:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4400));
      if (branch_taken) {
          goto L_089C5DD4;
      }
      goto L_089C5E78;
    }
L_089C5E78:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C5DB4;
      }
      goto L_089C5E88;
    }
L_089C5E88:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C5EB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[18] - ctx.fpr[14];
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.fpr[14] = ctx.fpr[18] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_089C5F34;
    }
    goto L_089C5F34;
L_089C5F34:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
        goto L_089C5F58;
    }
    goto L_089C5F58;
L_089C5F58:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[17] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_089C5F78;
    }
    goto L_089C5F78;
L_089C5F78:
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[18] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_089C5F98;
    }
    goto L_089C5F98;
L_089C5F98:
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
      if (branch_taken) {
          goto L_089C6010;
      }
      goto L_089C5FA8;
    }
L_089C5FA8:
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[5] << 2u);
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[4]);
    ctx.gpr[21] = (2227u << 16u);
    goto L_089C5FB8;
L_089C5FB8:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_089C6000;
      }
      goto L_089C5FC8;
    }
L_089C5FC8:
    ctx.gpr[23] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[23] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[23] = (ctx.gpr[4] - ctx.gpr[23]);
    goto L_089C5FD8;
L_089C5FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[31] = (0x089C5FE8u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 161u, 0x089C8DFCu>(ctx, &aot_mem) && ctx.pc == 0x089C5FE8u) goto L_089C5FE8;
    return;
L_089C5FE8:
    ctx.gpr[31] = (0x089C5FF0u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 161u, 0x089C8DFCu>(ctx, &aot_mem) && ctx.pc == 0x089C5FF0u) goto L_089C5FF0;
    return;
L_089C5FF0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089C5FD8;
      }
      goto L_089C6000;
    }
L_089C6000:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_089C5FB8;
      }
      goto L_089C6010;
    }
L_089C6010:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6040:
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
L_089C6068:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C60EC;
      }
      goto L_089C60A8;
    }
L_089C60A8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C60CC;
      }
      goto L_089C60B8;
    }
L_089C60B8:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C60F4;
      }
      goto L_089C60C4;
    }
L_089C60C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6214;
      }
      goto L_089C60CC;
    }
L_089C60CC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C60D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10092));
    goto L_089C55D8;
L_089C60D8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C60E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10032));
    goto L_089C55D8;
L_089C60E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C62CC;
      }
      goto L_089C60EC;
    }
L_089C60EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C62CC;
      }
      goto L_089C60F4;
    }
L_089C60F4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C615C;
      }
      goto L_089C6100;
    }
L_089C6100:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6128;
      }
      goto L_089C6114;
    }
L_089C6114:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C6128;
L_089C6128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089C6140u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6140u) goto L_089C6140;
    return;
L_089C6140:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C6150u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10016));
    goto L_089C6040;
L_089C6150:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089C61E8;
      }
      goto L_089C615C;
    }
L_089C615C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6100 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C6188;
      }
      goto L_089C6168;
    }
L_089C6168:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6188;
      }
      goto L_089C6170;
    }
L_089C6170:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4900));
    ctx.gpr[31] = (0x089C617Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 611u, 0x0892FB40u>(ctx, &aot_mem) && ctx.pc == 0x089C617Cu) goto L_089C617C;
    return;
L_089C617C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089C61E8;
      }
      goto L_089C6188;
    }
L_089C6188:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6115 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C61B0;
      }
      goto L_089C6194;
    }
L_089C6194:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C61B0;
      }
      goto L_089C619C;
    }
L_089C619C:
    ctx.gpr[31] = (0x089C61A4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6100));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 261u, 0x08985AE4u>(ctx, &aot_mem) && ctx.pc == 0x089C61A4u) goto L_089C61A4;
    return;
L_089C61A4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089C61E8;
      }
      goto L_089C61B0;
    }
L_089C61B0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C61E8;
      }
      goto L_089C61B8;
    }
L_089C61B8:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6115));
    ctx.gpr[31] = (0x089C61C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 307u, 0x089C969Cu>(ctx, &aot_mem) && ctx.pc == 0x089C61C4u) goto L_089C61C4;
    return;
L_089C61C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C61E0;
      }
      goto L_089C61CC;
    }
L_089C61CC:
    ctx.gpr[31] = (0x089C61D4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 433u, 0x08A8AAA0u>(ctx, &aot_mem) && ctx.pc == 0x089C61D4u) goto L_089C61D4;
    return;
L_089C61D4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089C61E8;
      }
      goto L_089C61E0;
    }
L_089C61E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C62CC;
      }
      goto L_089C61E8;
    }
L_089C61E8:
    ctx.gpr[31] = (0x089C61F0u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_089C5760;
L_089C61F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[2] << 11u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089C6214;
L_089C6214:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C627C;
      }
      goto L_089C6220;
    }
L_089C6220:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C6268;
      }
      goto L_089C622C;
    }
L_089C622C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7780)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7780), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_089C6268;
      }
      goto L_089C6248;
    }
L_089C6248:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6000)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6000), ctx.gpr[5]);
    goto L_089C6268;
L_089C6268:
    ctx.gpr[31] = (0x089C6270u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_089C5740;
L_089C6270:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089C62C8;
      }
      goto L_089C627C;
    }
L_089C627C:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C62C8;
      }
      goto L_089C6288;
    }
L_089C6288:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5768));
    goto L_089C6298;
L_089C6298:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C62A8;
      }
      goto L_089C62A4;
    }
L_089C62A4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089C62A8;
L_089C62A8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C62B8;
      }
      goto L_089C62B4;
    }
L_089C62B4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_089C62B8;
L_089C62B8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C6298;
      }
      goto L_089C62C8;
    }
L_089C62C8:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    goto L_089C62CC;
L_089C62CC:
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
L_089C62E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    goto L_089C6310;
L_089C6310:
    ctx.gpr[31] = (0x089C6318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 17u, 0x089C8124u>(ctx, &aot_mem) && ctx.pc == 0x089C6318u) goto L_089C6318;
    return;
L_089C6318:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6310;
      }
      goto L_089C6328;
    }
L_089C6328:
    ctx.gpr[22] = (0u | 300u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[21] = (0u | 6000u);
    ctx.gpr[17] = (0u | 1200u);
    ctx.gpr[20] = (2229u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[16] = (2229u << 16u);
    goto L_089C6344;
L_089C6344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089C6394;
      }
      goto L_089C6358;
    }
L_089C6358:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6374;
      }
      goto L_089C6368;
    }
L_089C6368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C6374;
L_089C6374:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6394;
      }
      goto L_089C6380;
    }
L_089C6380:
    ctx.gpr[31] = (0x089C6388u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089C6068;
L_089C6388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    goto L_089C6394;
L_089C6394:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C6344;
      }
      goto L_089C63A8;
    }
L_089C63A8:
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
L_089C63D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[17] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[18] = (0u | 0u);
    goto L_089C640C;
L_089C640C:
    ctx.gpr[31] = (0x089C6414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 17u, 0x089C8124u>(ctx, &aot_mem) && ctx.pc == 0x089C6414u) goto L_089C6414;
    return;
L_089C6414:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C640C;
      }
      goto L_089C6424;
    }
L_089C6424:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[17]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7404)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[20] = (0u | 20u);
      if (branch_taken) {
          goto L_089C64F0;
      }
      goto L_089C643C;
    }
L_089C643C:
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_089C6448;
L_089C6448:
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[21] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C64A4;
      }
      goto L_089C6460;
    }
L_089C6460:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6480;
      }
      goto L_089C6470;
    }
L_089C6470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C6480;
L_089C6480:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C64E0;
      }
      goto L_089C648C;
    }
L_089C648C:
    ctx.gpr[31] = (0x089C6494u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_089C6068;
L_089C6494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7404)));
      if (branch_taken) {
          goto L_089C64E0;
      }
      goto L_089C64A4;
    }
L_089C64A4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 6100 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C64E0;
      }
      goto L_089C64AC;
    }
L_089C64AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C64E0;
      }
      goto L_089C64B4;
    }
L_089C64B4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-4900));
    ctx.gpr[31] = (0x089C64C0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 660u, 0x0892FEDCu>(ctx, &aot_mem) && ctx.pc == 0x089C64C0u) goto L_089C64C0;
    return;
L_089C64C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C64E0;
      }
      goto L_089C64C8;
    }
L_089C64C8:
    ctx.gpr[31] = (0x089C64D0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 281u, 0x089C9554u>(ctx, &aot_mem) && ctx.pc == 0x089C64D0u) goto L_089C64D0;
    return;
L_089C64D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C64E0;
      }
      goto L_089C64D8;
    }
L_089C64D8:
    ctx.gpr[31] = (0x089C64E0u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4900));
    goto L_089C6068;
L_089C64E0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C6448;
      }
      goto L_089C64F0;
    }
L_089C64F0:
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
L_089C651C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-27992)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-5768));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C655C;
      }
      goto L_089C6554;
    }
L_089C6554:
    ctx.gpr[31] = (0x089C655Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 350u, 0x089C995Cu>(ctx, &aot_mem) && ctx.pc == 0x089C655Cu) goto L_089C655C;
    return;
L_089C655C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5988)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C6590;
      }
      goto L_089C6570;
    }
L_089C6570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-27992)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6598;
      }
      goto L_089C6588;
    }
L_089C6588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C65A0;
      }
      goto L_089C6590;
    }
L_089C6590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C65A0;
      }
      goto L_089C6598;
    }
L_089C6598:
    ctx.gpr[31] = (0x089C65A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 20u, 0x089CC144u>(ctx, &aot_mem) && ctx.pc == 0x089C65A0u) goto L_089C65A0;
    return;
L_089C65A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C65B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2277u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-5768));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C65EC;
      }
      goto L_089C65DC;
    }
L_089C65DC:
    ctx.gpr[31] = (0x089C65E4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 341u, 0x08A8A340u>(ctx, &aot_mem) && ctx.pc == 0x089C65E4u) goto L_089C65E4;
    return;
L_089C65E4:
    ctx.gpr[31] = (0x089C65ECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 350u, 0x089C995Cu>(ctx, &aot_mem) && ctx.pc == 0x089C65ECu) goto L_089C65EC;
    return;
L_089C65EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C6608;
      }
      goto L_089C65F8;
    }
L_089C65F8:
    ctx.gpr[31] = (0x089C6600u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 341u, 0x08A8A340u>(ctx, &aot_mem) && ctx.pc == 0x089C6600u) goto L_089C6600;
    return;
L_089C6600:
    ctx.gpr[31] = (0x089C6608u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 350u, 0x089C995Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6608u) goto L_089C6608;
    return;
L_089C6608:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C661C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (2u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7388)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7368));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[16] = (0u | 20u);
      if (branch_taken) {
          goto L_089C668C;
      }
      goto L_089C665C;
    }
L_089C665C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_089C6660;
L_089C6660:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[31] = (0x089C6678u);
    // nop
    goto L_089C6068;
L_089C6678:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C6660;
      }
      goto L_089C668C;
    }
L_089C668C:
    ctx.gpr[31] = (0x089C6694u);
    // nop
    goto L_089C65B4;
L_089C6694:
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
L_089C66B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C66ECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 281u, 0x08871AF4u>(ctx, &aot_mem) && ctx.pc == 0x089C66ECu) goto L_089C66EC;
    return;
L_089C66EC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C66FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9992));
    goto L_089C55D8;
L_089C66FC:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-19544)));
    ctx.gpr[19] = (2u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-7388));
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[22] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C6724;
      }
      goto L_089C671C;
    }
L_089C671C:
    ctx.gpr[31] = (0x089C6724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 132u, 0x08B0092Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6724u) goto L_089C6724;
    return;
L_089C6724:
    ctx.gpr[31] = (0x089C672Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-19544)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 115u, 0x088B4714u>(ctx, &aot_mem) && ctx.pc == 0x089C672Cu) goto L_089C672C;
    return;
L_089C672C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7364)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[5];
    ctx.gpr[20] = (0u | 20u);
      if (branch_taken) {
          goto L_089C6780;
      }
      goto L_089C6748;
    }
L_089C6748:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089C674C;
L_089C674C:
    ctx.gpr[5] = (ctx.gpr[21] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(9)));
    ctx.gpr[6] = (ctx.gpr[6] & 143u);
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C6774;
      }
      goto L_089C6768;
    }
L_089C6768:
    ctx.gpr[31] = (0x089C6770u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_089C6068;
L_089C6770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    goto L_089C6774;
L_089C6774:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C674C;
      }
      goto L_089C6780;
    }
L_089C6780:
    ctx.gpr[31] = (0x089C6788u);
    // nop
    goto L_089C661C;
L_089C6788:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x089C6798u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6887), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089C5C48;
L_089C6798:
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(936)));
      if (branch_taken) {
          goto L_089C67A8;
      }
      goto L_089C67A4;
    }
L_089C67A4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7060)));
    goto L_089C67A8;
L_089C67A8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C67B8;
      }
      goto L_089C67B0;
    }
L_089C67B0:
    ctx.gpr[31] = (0x089C67B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C68BC;
L_089C67B8:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-7060), ctx.gpr[17]);
    ctx.gpr[31] = (0x089C67C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089C74AC;
L_089C67C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C67D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089C7458;
L_089C67D0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089C67DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089C7458;
L_089C67DC:
    ctx.gpr[31] = (0x089C67E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089C7654;
L_089C67E4:
    ctx.gpr[31] = (0x089C67ECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x089C67ECu) goto L_089C67EC;
    return;
L_089C67EC:
    ctx.gpr[31] = (0x089C67F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 132u, 0x08968BF0u>(ctx, &aot_mem) && ctx.pc == 0x089C67F4u) goto L_089C67F4;
    return;
L_089C67F4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089C6810;
      }
      goto L_089C6800;
    }
L_089C6800:
    ctx.gpr[31] = (0x089C6808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x089C6808u) goto L_089C6808;
    return;
L_089C6808:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089C6810;
L_089C6810:
    ctx.gpr[31] = (0x089C6818u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 491u, 0x08952C00u>(ctx, &aot_mem) && ctx.pc == 0x089C6818u) goto L_089C6818;
    return;
L_089C6818:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6844;
      }
      goto L_089C6828;
    }
L_089C6828:
    ctx.gpr[17] = (0u | 0u);
    goto L_089C682C;
L_089C682C:
    ctx.gpr[31] = (0x089C6834u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 4u, 0x089C804Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6834u) goto L_089C6834;
    return;
L_089C6834:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C682C;
      }
      goto L_089C6844;
    }
L_089C6844:
    ctx.gpr[31] = (0x089C684Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x089C684Cu) goto L_089C684C;
    return;
L_089C684C:
    ctx.gpr[31] = (0x089C6854u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C5EB4;
L_089C6854:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (0u | 0u);
    goto L_089C6860;
L_089C6860:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(13)));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6175 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089C6860;
      }
      goto L_089C6884;
    }
L_089C6884:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C6890u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9972));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089C6890u) goto L_089C6890;
    return;
L_089C6890:
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
L_089C68BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C68CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 295u, 0x08985D40u>(ctx, &aot_mem) && ctx.pc == 0x089C68CCu) goto L_089C68CC;
    return;
L_089C68CC:
    ctx.gpr[31] = (0x089C68D4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x089C68D4u) goto L_089C68D4;
    return;
L_089C68D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C68E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4900 ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[9] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_089C6924;
      }
      goto L_089C6918;
    }
L_089C6918:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6100 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
        goto L_089C6960;
    }
    goto L_089C6924;
L_089C6924:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089C694C;
      }
      goto L_089C6938;
    }
L_089C6938:
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_089C694C;
L_089C694C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089C69B4;
      }
      goto L_089C695C;
    }
L_089C695C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    goto L_089C6960;
L_089C6960:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(13)));
    ctx.gpr[7] = (ctx.gpr[7] & 130u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C69B4;
      }
      goto L_089C6974;
    }
L_089C6974:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089C69AC;
      }
      goto L_089C6984;
    }
L_089C6984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C69B4;
      }
      goto L_089C6990;
    }
L_089C6990:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[31] = (0x089C69A4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_089C5724;
L_089C69A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C69B4;
      }
      goto L_089C69AC;
    }
L_089C69AC:
    ctx.gpr[31] = (0x089C69B4u);
    // nop
    goto L_089C6068;
L_089C69B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C69C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C69F0;
      }
      goto L_089C69DC;
    }
L_089C69DC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C69F0;
L_089C69F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[31] = (0x089C69FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4900));
    goto L_089C68E0;
L_089C69FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6A08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[8] & 2u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6A68;
      }
      goto L_089C6A38;
    }
L_089C6A38:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[31] = (0x089C6A50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9956));
    goto L_089C6040;
L_089C6A50:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089C6A68;
L_089C6A68:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C6A94;
      }
      goto L_089C6A84;
    }
L_089C6A84:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6100 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
        goto L_089C6ACC;
    }
    goto L_089C6A90;
L_089C6A90:
    ctx.gpr[7] = (2230u << 16u);
    goto L_089C6A94;
L_089C6A94:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6AB8;
      }
      goto L_089C6AA4;
    }
L_089C6AA4:
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_089C6AB8;
L_089C6AB8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089C6B20;
      }
      goto L_089C6AC8;
    }
L_089C6AC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    goto L_089C6ACC;
L_089C6ACC:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    ctx.gpr[6] = (ctx.gpr[6] & 129u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6B20;
      }
      goto L_089C6AE0;
    }
L_089C6AE0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089C6B18;
      }
      goto L_089C6AF0;
    }
L_089C6AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6B20;
      }
      goto L_089C6AFC;
    }
L_089C6AFC:
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089C6B10u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_089C5724;
L_089C6B10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6B20;
      }
      goto L_089C6B18;
    }
L_089C6B18:
    ctx.gpr[31] = (0x089C6B20u);
    // nop
    goto L_089C6068;
L_089C6B20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6B2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[8] & 128u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6B8C;
      }
      goto L_089C6B5C;
    }
L_089C6B5C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[31] = (0x089C6B74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9912));
    goto L_089C6040;
L_089C6B74:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089C6B8C;
L_089C6B8C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C6BB8;
      }
      goto L_089C6BA8;
    }
L_089C6BA8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6100 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
        goto L_089C6BF0;
    }
    goto L_089C6BB4;
L_089C6BB4:
    ctx.gpr[7] = (2230u << 16u);
    goto L_089C6BB8;
L_089C6BB8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6BDC;
      }
      goto L_089C6BC8;
    }
L_089C6BC8:
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_089C6BDC;
L_089C6BDC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089C6C44;
      }
      goto L_089C6BEC;
    }
L_089C6BEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    goto L_089C6BF0;
L_089C6BF0:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6C44;
      }
      goto L_089C6C04;
    }
L_089C6C04:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089C6C3C;
      }
      goto L_089C6C14;
    }
L_089C6C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6C44;
      }
      goto L_089C6C20;
    }
L_089C6C20:
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089C6C34u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_089C5724;
L_089C6C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6C44;
      }
      goto L_089C6C3C;
    }
L_089C6C3C:
    ctx.gpr[31] = (0x089C6C44u);
    // nop
    goto L_089C6068;
L_089C6C44:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6C50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C6C80u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_089C5768;
L_089C6C80:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C6C8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[23] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089C6CEC;
      }
      goto L_089C6CD8;
    }
L_089C6CD8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C6CEC;
L_089C6CEC:
    ctx.gpr[31] = (0x089C6CF4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x089C6CF4u) goto L_089C6CF4;
    return;
L_089C6CF4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C6D04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9860));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x089C6D04u) goto L_089C6D04;
    return;
L_089C6D04:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C6D74;
      }
      goto L_089C6D0C;
    }
L_089C6D0C:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28104));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C6D74;
      }
      goto L_089C6D24;
    }
L_089C6D24:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28172));
    ctx.gpr[17] = (2229u << 16u);
    goto L_089C6D2C;
L_089C6D2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6D44;
      }
      goto L_089C6D3C;
    }
L_089C6D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C6D44;
L_089C6D44:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089C6D50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x089C6D50u) goto L_089C6D50;
    return;
L_089C6D50:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C6D60;
      }
      goto L_089C6D58;
    }
L_089C6D58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C6D74;
      }
      goto L_089C6D60;
    }
L_089C6D60:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C6D2C;
      }
      goto L_089C6D74;
    }
L_089C6D74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[31] = (0x089C6D80u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x089C6D80u) goto L_089C6D80;
    return;
L_089C6D80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C6DBC;
      }
      goto L_089C6D8C;
    }
L_089C6D8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.gpr[19] = (ctx.gpr[22] << 4u);
    ctx.gpr[5] = (ctx.gpr[22] << 2u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[30] = (2229u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[18] = (2u << 16u);
      if (branch_taken) {
          goto L_089C6DD0;
      }
      goto L_089C6DB4;
    }
L_089C6DB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6F54;
      }
      goto L_089C6DBC;
    }
L_089C6DBC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C6DC8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089C6DC8u) goto L_089C6DC8;
    return;
L_089C6DC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C70C0;
      }
      goto L_089C6DD0;
    }
L_089C6DD0:
    ctx.gpr[20] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(3248));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[23] = (2229u << 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089C6DF4;
L_089C6DF4:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-3248));
      if (branch_taken) {
          goto L_089C6E7C;
      }
      goto L_089C6E00;
    }
L_089C6E00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(28))))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15028)));
        goto L_089C6E80;
    }
    goto L_089C6E0C;
L_089C6E0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089C6E30;
      }
      goto L_089C6E28;
    }
L_089C6E28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6E38;
      }
      goto L_089C6E30;
    }
L_089C6E30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[18]);
    goto L_089C6E38;
L_089C6E38:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6E74;
      }
      goto L_089C6E40;
    }
L_089C6E40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089C6E74;
      }
      goto L_089C6E4C;
    }
L_089C6E4C:
    ctx.gpr[31] = (0x089C6E54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089C6E54u) goto L_089C6E54;
    return;
L_089C6E54:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C6E74;
      }
      goto L_089C6E5C;
    }
L_089C6E5C:
    ctx.gpr[31] = (0x089C6E64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 700u, 0x089A2E24u>(ctx, &aot_mem) && ctx.pc == 0x089C6E64u) goto L_089C6E64;
    return;
L_089C6E64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6E74;
      }
      goto L_089C6E6C;
    }
L_089C6E6C:
    ctx.gpr[31] = (0x089C6E74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 132u, 0x0887C9B4u>(ctx, &aot_mem) && ctx.pc == 0x089C6E74u) goto L_089C6E74;
    return;
L_089C6E74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089C6DF4;
      }
      goto L_089C6E7C;
    }
L_089C6E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15028)));
    goto L_089C6E80;
L_089C6E80:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[19] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C6E9C;
L_089C6E9C:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-544));
      if (branch_taken) {
          goto L_089C6F44;
      }
      goto L_089C6EA8;
    }
L_089C6EA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(28))))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
        goto L_089C6F48;
    }
    goto L_089C6EB4;
L_089C6EB4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089C6ED8;
      }
      goto L_089C6ED0;
    }
L_089C6ED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089C6EE0;
      }
      goto L_089C6ED8;
    }
L_089C6ED8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_089C6EE0;
L_089C6EE0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6F3C;
      }
      goto L_089C6EEC;
    }
L_089C6EEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089C6F3C;
      }
      goto L_089C6EF8;
    }
L_089C6EF8:
    ctx.gpr[31] = (0x089C6F00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 244u, 0x0883D410u>(ctx, &aot_mem) && ctx.pc == 0x089C6F00u) goto L_089C6F00;
    return;
L_089C6F00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6F3C;
      }
      goto L_089C6F08;
    }
L_089C6F08:
    ctx.gpr[31] = (0x089C6F10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x089C6F10u) goto L_089C6F10;
    return;
L_089C6F10:
    ctx.gpr[31] = (0x089C6F18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 476u, 0x088C309Cu>(ctx, &aot_mem) && ctx.pc == 0x089C6F18u) goto L_089C6F18;
    return;
L_089C6F18:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6F3C;
      }
      goto L_089C6F20;
    }
L_089C6F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089C6F3Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C6F3Cu) goto L_089C6F3C;
    return;
L_089C6F3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089C6E9C;
      }
      goto L_089C6F44;
    }
L_089C6F44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    goto L_089C6F48;
L_089C6F48:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (2u << 16u);
    goto L_089C6F54;
L_089C6F54:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C6F64u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 233u, 0x08A7D434u>(ctx, &aot_mem) && ctx.pc == 0x089C6F64u) goto L_089C6F64;
    return;
L_089C6F64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C6F70u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 101u, 0x08A28C40u>(ctx, &aot_mem) && ctx.pc == 0x089C6F70u) goto L_089C6F70;
    return;
L_089C6F70:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C700C;
      }
      goto L_089C6F7C;
    }
L_089C6F7C:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[20];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C6FF4;
      }
      goto L_089C6F88;
    }
L_089C6F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_089C6FB0;
    }
    goto L_089C6FA4;
L_089C6FA4:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C6FC4;
      }
      goto L_089C6FB0;
    }
L_089C6FB0:
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[6] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C6FC4;
L_089C6FC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C6FF4;
      }
      goto L_089C6FCC;
    }
L_089C6FCC:
    ctx.gpr[31] = (0x089C6FD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 628u, 0x0892FC80u>(ctx, &aot_mem) && ctx.pc == 0x089C6FD4u) goto L_089C6FD4;
    return;
L_089C6FD4:
    ctx.gpr[31] = (0x089C6FDCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089C6068;
L_089C6FDC:
    ctx.gpr[31] = (0x089C6FE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 656u, 0x0892FE94u>(ctx, &aot_mem) && ctx.pc == 0x089C6FE4u) goto L_089C6FE4;
    return;
L_089C6FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7432)));
      if (branch_taken) {
          goto L_089C7020;
      }
      goto L_089C6FF4;
    }
L_089C6FF4:
    ctx.gpr[31] = (0x089C6FFCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089C6068;
L_089C6FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7432)));
      if (branch_taken) {
          goto L_089C7020;
      }
      goto L_089C700C;
    }
L_089C700C:
    ctx.gpr[31] = (0x089C7014u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089C6068;
L_089C7014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7432)));
    goto L_089C7020;
L_089C7020:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C7034u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 2u, 0x088B8080u>(ctx, &aot_mem) && ctx.pc == 0x089C7034u) goto L_089C7034;
    return;
L_089C7034:
    ctx.gpr[31] = (0x089C703Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 247u, 0x08A7D520u>(ctx, &aot_mem) && ctx.pc == 0x089C703Cu) goto L_089C703C;
    return;
L_089C703C:
    ctx.gpr[31] = (0x089C7044u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7044u) goto L_089C7044;
    return;
L_089C7044:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089C7074;
      }
      goto L_089C704C;
    }
L_089C704C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C705Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9848));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 242u, 0x08A7D4CCu>(ctx, &aot_mem) && ctx.pc == 0x089C705Cu) goto L_089C705C;
    return;
L_089C705C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089C7094;
      }
      goto L_089C7074;
    }
L_089C7074:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C7080u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 242u, 0x08A7D4CCu>(ctx, &aot_mem) && ctx.pc == 0x089C7080u) goto L_089C7080;
    return;
L_089C7080:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089C7094;
L_089C7094:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089C70A8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_089C5798;
L_089C70A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x089C70C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089C70C0u) goto L_089C70C0;
    return;
L_089C70C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C70F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C7108u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 660u, 0x08AB3A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7108u) goto L_089C7108;
    return;
L_089C7108:
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-26512));
    goto L_089C7110;
L_089C7110:
    ctx.gpr[31] = (0x089C7118u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 828u, 0x08AA3ED4u>(ctx, &aot_mem) && ctx.pc == 0x089C7118u) goto L_089C7118;
    return;
L_089C7118:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C713C;
      }
      goto L_089C7124;
    }
L_089C7124:
    ctx.gpr[31] = (0x089C712Cu);
    ctx.gpr[4] = (0u | 163u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 175u, 0x089C8EB8u>(ctx, &aot_mem) && ctx.pc == 0x089C712Cu) goto L_089C712C;
    return;
L_089C712C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7144;
      }
      goto L_089C7134;
    }
L_089C7134:
    ctx.gpr[31] = (0x089C713Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 194u, 0x089CCD04u>(ctx, &aot_mem) && ctx.pc == 0x089C713Cu) goto L_089C713C;
    return;
L_089C713C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7158;
      }
      goto L_089C7144;
    }
L_089C7144:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C7150u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089C716C;
L_089C7150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7110;
      }
      goto L_089C7158;
    }
L_089C7158:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C716C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C719Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 828u, 0x08AA3ED4u>(ctx, &aot_mem) && ctx.pc == 0x089C719Cu) goto L_089C719C;
    return;
L_089C719C:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C71B8;
      }
      goto L_089C71A8;
    }
L_089C71A8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C71C0;
      }
      goto L_089C71B0;
    }
L_089C71B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C71DC;
      }
      goto L_089C71B8;
    }
L_089C71B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7258;
      }
      goto L_089C71C0;
    }
L_089C71C0:
    ctx.gpr[31] = (0x089C71C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 827u, 0x08AA3EBCu>(ctx, &aot_mem) && ctx.pc == 0x089C71C8u) goto L_089C71C8;
    return;
L_089C71C8:
    ctx.gpr[4] = (6u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6784));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7258;
      }
      goto L_089C71DC;
    }
L_089C71DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C71E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 737u, 0x08AA3710u>(ctx, &aot_mem) && ctx.pc == 0x089C71E8u) goto L_089C71E8;
    return;
L_089C71E8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7248;
      }
      goto L_089C71F8;
    }
L_089C71F8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7240;
      }
      goto L_089C7200;
    }
L_089C7200:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C720Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9840));
    goto L_089C55D8;
L_089C720C:
    ctx.gpr[31] = (0x089C7214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 628u, 0x08AB3850u>(ctx, &aot_mem) && ctx.pc == 0x089C7214u) goto L_089C7214;
    return;
L_089C7214:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C7220u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 737u, 0x08AA3710u>(ctx, &aot_mem) && ctx.pc == 0x089C7220u) goto L_089C7220;
    return;
L_089C7220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7248;
      }
      goto L_089C722C;
    }
L_089C722C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C7238u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9780));
    goto L_089C55D8;
L_089C7238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7258;
      }
      goto L_089C7240;
    }
L_089C7240:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7258;
      }
      goto L_089C7248;
    }
L_089C7248:
    ctx.gpr[31] = (0x089C7250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 756u, 0x089CB298u>(ctx, &aot_mem) && ctx.pc == 0x089C7250u) goto L_089C7250;
    return;
L_089C7250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7258;
      }
      goto L_089C7258;
    }
L_089C7258:
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
L_089C7274:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C728Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2080));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x089C728Cu) goto L_089C728C;
    return;
L_089C728C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7298:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C72ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2080));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x089C72ACu) goto L_089C72AC;
    return;
L_089C72AC:
    ctx.gpr[31] = (0x089C72B4u);
    // nop
    goto L_089C72C0;
L_089C72B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C72C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C72C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(936)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7314;
      }
      goto L_089C72F0;
    }
L_089C72F0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C731C;
      }
      goto L_089C730C;
    }
L_089C730C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7434;
      }
      goto L_089C7314;
    }
L_089C7314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7434;
      }
      goto L_089C731C;
    }
L_089C731C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C7434;
      }
      goto L_089C7324;
    }
L_089C7324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7060)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C7434;
      }
      goto L_089C7330;
    }
L_089C7330:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C7340u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9728));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089C7340u) goto L_089C7340;
    return;
L_089C7340:
    ctx.gpr[31] = (0x089C7348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 755u, 0x0891B674u>(ctx, &aot_mem) && ctx.pc == 0x089C7348u) goto L_089C7348;
    return;
L_089C7348:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-7060), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C7360u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x08864AC0u>(ctx, &aot_mem) && ctx.pc == 0x089C7360u) goto L_089C7360;
    return;
L_089C7360:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C736Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 113u, 0x08864820u>(ctx, &aot_mem) && ctx.pc == 0x089C736Cu) goto L_089C736C;
    return;
L_089C736C:
    ctx.gpr[31] = (0x089C7374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 529u, 0x08A964D8u>(ctx, &aot_mem) && ctx.pc == 0x089C7374u) goto L_089C7374;
    return;
L_089C7374:
    ctx.gpr[31] = (0x089C737Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7060)));
    goto L_089C5614;
L_089C737C:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-19544)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C7394;
      }
      goto L_089C738C;
    }
L_089C738C:
    ctx.gpr[31] = (0x089C7394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 132u, 0x08B0092Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7394u) goto L_089C7394;
    return;
L_089C7394:
    ctx.gpr[31] = (0x089C739Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-19544)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 115u, 0x088B4714u>(ctx, &aot_mem) && ctx.pc == 0x089C739Cu) goto L_089C739C;
    return;
L_089C739C:
    ctx.gpr[31] = (0x089C73A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 93u, 0x088646E8u>(ctx, &aot_mem) && ctx.pc == 0x089C73A4u) goto L_089C73A4;
    return;
L_089C73A4:
    ctx.gpr[31] = (0x089C73ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7060)));
    goto L_089C74AC;
L_089C73AC:
    ctx.gpr[31] = (0x089C73B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7060)));
    goto L_089C7460;
L_089C73B4:
    ctx.gpr[31] = (0x089C73BCu);
    // nop
    goto L_089C63D0;
L_089C73BC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7060)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C73D8;
      }
      goto L_089C73C8;
    }
L_089C73C8:
    ctx.gpr[31] = (0x089C73D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 422u, 0x089C1BD0u>(ctx, &aot_mem) && ctx.pc == 0x089C73D0u) goto L_089C73D0;
    return;
L_089C73D0:
    ctx.gpr[31] = (0x089C73D8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 376u, 0x089C18DCu>(ctx, &aot_mem) && ctx.pc == 0x089C73D8u) goto L_089C73D8;
    return;
L_089C73D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20156)));
        goto L_089C73F0;
    }
    goto L_089C73E4;
L_089C73E4:
    ctx.gpr[31] = (0x089C73ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x089C73ECu) goto L_089C73EC;
    return;
L_089C73EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20156)));
    goto L_089C73F0;
L_089C73F0:
    ctx.gpr[31] = (0x089C73F8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7060)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 455u, 0x089528ACu>(ctx, &aot_mem) && ctx.pc == 0x089C73F8u) goto L_089C73F8;
    return;
L_089C73F8:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7060)));
    ctx.gpr[31] = (0x089C740Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    goto L_089C7458;
L_089C740C:
    ctx.gpr[31] = (0x089C7414u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x089C7414u) goto L_089C7414;
    return;
L_089C7414:
    ctx.gpr[31] = (0x089C741Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 757u, 0x0891B698u>(ctx, &aot_mem) && ctx.pc == 0x089C741Cu) goto L_089C741C;
    return;
L_089C741C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C7428u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x08864AC0u>(ctx, &aot_mem) && ctx.pc == 0x089C7428u) goto L_089C7428;
    return;
L_089C7428:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C7434u);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 113u, 0x08864820u>(ctx, &aot_mem) && ctx.pc == 0x089C7434u) goto L_089C7434;
    return;
L_089C7434:
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
L_089C7450:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7458:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7460:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 1u);
    goto L_089C7478;
L_089C7478:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C7488;
      }
      goto L_089C7480;
    }
L_089C7480:
    ctx.gpr[31] = (0x089C7488u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 847u, 0x089CB958u>(ctx, &aot_mem) && ctx.pc == 0x089C7488u) goto L_089C7488;
    return;
L_089C7488:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7478;
      }
      goto L_089C7498;
    }
L_089C7498:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C74AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 1u);
    goto L_089C74C4;
L_089C74C4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C74D4;
      }
      goto L_089C74CC;
    }
L_089C74CC:
    ctx.gpr[31] = (0x089C74D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089C7500;
L_089C74D4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C74C4;
      }
      goto L_089C74E4;
    }
L_089C74E4:
    ctx.gpr[31] = (0x089C74ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C7654;
L_089C74EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7500:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15036)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089C7624;
      }
      goto L_089C7548;
    }
L_089C7548:
    ctx.gpr[19] = (ctx.gpr[18] << 5u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[30] = (128u << 16u);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[22] = (2229u << 16u);
    goto L_089C7560;
L_089C7560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089C7580;
    }
    goto L_089C7578;
L_089C7578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7584;
      }
      goto L_089C7580;
    }
L_089C7580:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_089C7584;
L_089C7584:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7610;
      }
      goto L_089C7590;
    }
L_089C7590:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7610;
      }
      goto L_089C75A0;
    }
L_089C75A0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(90)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C7610;
      }
      goto L_089C75B0;
    }
L_089C75B0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089C75D4;
      }
      goto L_089C75C4;
    }
L_089C75C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089C75D4;
L_089C75D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7610;
      }
      goto L_089C75E4;
    }
L_089C75E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089C75FCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C75FCu) goto L_089C75FC;
    return;
L_089C75FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7610;
      }
      goto L_089C7608;
    }
L_089C7608:
    ctx.gpr[31] = (0x089C7610u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    goto L_089C6068;
L_089C7610:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_089C7560;
      }
      goto L_089C7624;
    }
L_089C7624:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7654:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7328)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C77B0;
      }
      goto L_089C7688;
    }
L_089C7688:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-15036)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_089C77B0;
      }
      goto L_089C76A0;
    }
L_089C76A0:
    ctx.gpr[11] = (ctx.gpr[9] << 5u);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[2] = (2u << 16u);
    ctx.gpr[3] = (2u << 16u);
    ctx.gpr[31] = (2u << 16u);
    ctx.gpr[12] = (2u << 16u);
    ctx.gpr[13] = (2u << 16u);
    ctx.gpr[14] = (2u << 16u);
    ctx.gpr[25] = (2u << 16u);
    ctx.gpr[15] = (2u << 16u);
    ctx.gpr[24] = (2u << 16u);
    goto L_089C76D0;
L_089C76D0:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] & 128u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_089C76F0;
    }
    goto L_089C76E8;
L_089C76E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_089C76F4;
      }
      goto L_089C76F0;
    }
L_089C76F0:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    goto L_089C76F4;
L_089C76F4:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C779C;
      }
      goto L_089C76FC;
    }
L_089C76FC:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7348)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C7720;
      }
      goto L_089C7710;
    }
L_089C7710:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7328), ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
      if (branch_taken) {
          goto L_089C779C;
      }
      goto L_089C7720;
    }
L_089C7720:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[3]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7344)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C7740;
      }
      goto L_089C7730;
    }
L_089C7730:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7324), ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
      if (branch_taken) {
          goto L_089C779C;
      }
      goto L_089C7740;
    }
L_089C7740:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[12]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7340)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C7760;
      }
      goto L_089C7750;
    }
L_089C7750:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7320), ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
      if (branch_taken) {
          goto L_089C779C;
      }
      goto L_089C7760;
    }
L_089C7760:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[14]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7336)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C7780;
      }
      goto L_089C7770;
    }
L_089C7770:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7316), ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
      if (branch_taken) {
          goto L_089C779C;
      }
      goto L_089C7780;
    }
L_089C7780:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[15]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7332)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C779C;
      }
      goto L_089C7790;
    }
L_089C7790:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7312), ctx.gpr[10]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    goto L_089C779C;
L_089C779C:
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_089C76D0;
      }
      goto L_089C77B0;
    }
L_089C77B0:
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089C77F8;
      }
      goto L_089C77BC;
    }
L_089C77BC:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089C77C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7328)));
    goto L_089C5650;
L_089C77C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089C77DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7320)));
    goto L_089C5650;
L_089C77DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089C77F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7312)));
    goto L_089C5650;
L_089C77F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C78D0;
      }
      goto L_089C77F8;
    }
L_089C77F8:
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[17] = (2u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[18] = (2u << 16u);
      if (branch_taken) {
          goto L_089C7840;
      }
      goto L_089C7808;
    }
L_089C7808:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[31] = (0x089C7814u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7324)));
    goto L_089C5650;
L_089C7814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089C7828u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7320)));
    goto L_089C5650;
L_089C7828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x089C7838u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7316)));
    goto L_089C5650;
L_089C7838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C78D0;
      }
      goto L_089C7840;
    }
L_089C7840:
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[19] = (2u << 16u);
      if (branch_taken) {
          goto L_089C7880;
      }
      goto L_089C784C;
    }
L_089C784C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[31] = (0x089C7858u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7316)));
    goto L_089C5650;
L_089C7858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x089C7868u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7312)));
    goto L_089C5650;
L_089C7868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x089C7878u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7324)));
    goto L_089C5650;
L_089C7878:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C78D0;
      }
      goto L_089C7880;
    }
L_089C7880:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089C788Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7328)));
    goto L_089C5650;
L_089C788C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x089C789Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7324)));
    goto L_089C5650;
L_089C789C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089C78B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7320)));
    goto L_089C5650;
L_089C78B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x089C78C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7316)));
    goto L_089C5650;
L_089C78C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x089C78D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7312)));
    goto L_089C5650;
L_089C78D0:
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
L_089C78EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C7900u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089C7900u) goto L_089C7900;
    return;
L_089C7900:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089C790Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089C790Cu) goto L_089C790C;
    return;
L_089C790C:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x089C7918u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089C7918u) goto L_089C7918;
    return;
L_089C7918:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7924:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C7934u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(109));
    goto L_089C6C8C;
L_089C7934:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7940:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(109));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 1u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C796C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C797Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(109));
    goto L_089C6A08;
L_089C797C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C7988:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C7998u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(109));
    goto L_089C6B2C;
L_089C7998:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C79A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7448)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[23] = (2277u << 16u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-5704));
      if (branch_taken) {
          goto L_089C7A64;
      }
      goto L_089C79F4;
    }
L_089C79F4:
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (2u << 16u);
    ctx.gpr[20] = (2229u << 16u);
    goto L_089C7A04;
L_089C7A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7472), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(26124)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7448)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C7A44;
      }
      goto L_089C7A3C;
    }
L_089C7A3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7A54;
      }
      goto L_089C7A44;
    }
L_089C7A44:
    ctx.gpr[31] = (0x089C7A4Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089C68E0;
L_089C7A4C:
    ctx.gpr[31] = (0x089C7A54u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089C69C0;
L_089C7A54:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C7A04;
      }
      goto L_089C7A64;
    }
L_089C7A64:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x089C7A70u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089C7A70u) goto L_089C7A70;
    return;
L_089C7A70:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x089C7A7Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089C7A7Cu) goto L_089C7A7C;
    return;
L_089C7A7C:
    ctx.gpr[19] = (0u | 0u);
    goto L_089C7A80;
L_089C7A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C7A9C;
      }
      goto L_089C7A8C;
    }
L_089C7A8C:
    ctx.gpr[31] = (0x089C7A94u);
    // nop
    goto L_089C68E0;
L_089C7A94:
    ctx.gpr[31] = (0x089C7A9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    goto L_089C69C0;
L_089C7A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C7AB8;
      }
      goto L_089C7AA8;
    }
L_089C7AA8:
    ctx.gpr[31] = (0x089C7AB0u);
    // nop
    goto L_089C68E0;
L_089C7AB0:
    ctx.gpr[31] = (0x089C7AB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    goto L_089C69C0;
L_089C7AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C7AD4;
      }
      goto L_089C7AC4;
    }
L_089C7AC4:
    ctx.gpr[31] = (0x089C7ACCu);
    // nop
    goto L_089C68E0;
L_089C7ACC:
    ctx.gpr[31] = (0x089C7AD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_089C69C0;
L_089C7AD4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089C7A80;
      }
      goto L_089C7AE4;
    }
L_089C7AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7448), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7444), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7442), static_cast<std::uint16_t>(0u));
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
L_089C7B40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7448)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C7B7C;
      }
      goto L_089C7B74;
    }
L_089C7B74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7C6C;
      }
      goto L_089C7B7C;
    }
L_089C7B7C:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(26124)));
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[18] = (2u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-11332)));
    goto L_089C7BA8;
L_089C7BA8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C7BBC;
      }
      goto L_089C7BB4;
    }
L_089C7BB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C7C58;
      }
      goto L_089C7BBC;
    }
L_089C7BBC:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-7472)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_089C7C54;
      }
      goto L_089C7BC8;
    }
L_089C7BC8:
    ctx.gpr[2] = (ctx.gpr[7] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7C54;
      }
      goto L_089C7BEC;
    }
L_089C7BEC:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(13)));
    ctx.gpr[9] = (ctx.gpr[9] & 131u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089C7C54;
      }
      goto L_089C7BFC;
    }
L_089C7BFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7C10;
      }
      goto L_089C7C04;
    }
L_089C7C04:
    ctx.gpr[9] = (ctx.gpr[7] << 2u);
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_089C7C10;
L_089C7C10:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7C54;
      }
      goto L_089C7C1C;
    }
L_089C7C1C:
    ctx.gpr[31] = (0x089C7C24u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_089C6068;
L_089C7C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7472), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7452)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7452), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C7C6C;
      }
      goto L_089C7C54;
    }
L_089C7C54:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089C7C58;
L_089C7C58:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C7BA8;
      }
      goto L_089C7C68;
    }
L_089C7C68:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C7C6C;
L_089C7C6C:
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
L_089C7C84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C7CCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9700));
    goto L_089C55D8;
L_089C7CCC:
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28180));
      if (branch_taken) {
          goto L_089C7CEC;
      }
      goto L_089C7CDC;
    }
L_089C7CDC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089C7CECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9676));
    goto L_089C55D8;
L_089C7CEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_089C7CFC;
L_089C7CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089C7D08u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089C7D08u) goto L_089C7D08;
    return;
L_089C7D08:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C7CFC;
      }
      goto L_089C7D18;
    }
L_089C7D18:
    ctx.gpr[23] = (2227u << 16u);
    ctx.gpr[20] = (0u | 109u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(19148));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[30] = (2229u << 16u);
    goto L_089C7D38;
L_089C7D38:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089C7D54;
      }
      goto L_089C7D44;
    }
L_089C7D44:
    ctx.gpr[31] = (0x089C7D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7D4Cu) goto L_089C7D4C;
    return;
L_089C7D4C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C7D54;
L_089C7D54:
    ctx.gpr[31] = (0x089C7D5Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 126u, 0x08A088B4u>(ctx, &aot_mem) && ctx.pc == 0x089C7D5Cu) goto L_089C7D5C;
    return;
L_089C7D5C:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7DB4;
      }
      goto L_089C7D90;
    }
L_089C7D90:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_089C7DB8;
    }
    goto L_089C7DA0;
L_089C7DA0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089C7DB8;
      }
      goto L_089C7DB0;
    }
L_089C7DB0:
    ctx.gpr[4] = (0u | 1u);
    goto L_089C7DB4;
L_089C7DB4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089C7DB8;
L_089C7DB8:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7F6C;
      }
      goto L_089C7DC8;
    }
L_089C7DC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[31] = (0x089C7DD4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089C6068;
L_089C7DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7DEC;
      }
      goto L_089C7DE0;
    }
L_089C7DE0:
    ctx.gpr[31] = (0x089C7DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7DE8u) goto L_089C7DE8;
    return;
L_089C7DE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_089C7DEC;
L_089C7DEC:
    ctx.gpr[31] = (0x089C7DF4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 126u, 0x08A088B4u>(ctx, &aot_mem) && ctx.pc == 0x089C7DF4u) goto L_089C7DF4;
    return;
L_089C7DF4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089C7E1Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28BB8u>(ctx, &aot_mem) && ctx.pc == 0x089C7E1Cu) goto L_089C7E1C;
    return;
L_089C7E1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7E50;
      }
      goto L_089C7E24;
    }
L_089C7E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 109 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C7E50;
      }
      goto L_089C7E30;
    }
L_089C7E30:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 120 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C7E40;
      }
      goto L_089C7E38;
    }
L_089C7E38:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7E50;
      }
      goto L_089C7E40;
    }
L_089C7E40:
    ctx.gpr[31] = (0x089C7E48u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089C7E48u) goto L_089C7E48;
    return;
L_089C7E48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
      if (branch_taken) {
          goto L_089C7EA8;
      }
      goto L_089C7E50;
    }
L_089C7E50:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089C7E6C;
      }
      goto L_089C7E60;
    }
L_089C7E60:
    ctx.gpr[31] = (0x089C7E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7E68u) goto L_089C7E68;
    return;
L_089C7E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_089C7E6C;
L_089C7E6C:
    ctx.gpr[31] = (0x089C7E74u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 126u, 0x08A088B4u>(ctx, &aot_mem) && ctx.pc == 0x089C7E74u) goto L_089C7E74;
    return;
L_089C7E74:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089C7EA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C6C8C;
L_089C7EA0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_089C7EA8;
L_089C7EA8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7EBC;
      }
      goto L_089C7EB0;
    }
L_089C7EB0:
    ctx.gpr[31] = (0x089C7EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7EB8u) goto L_089C7EB8;
    return;
L_089C7EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_089C7EBC;
L_089C7EBC:
    ctx.gpr[31] = (0x089C7EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 289u, 0x08A0928Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7EC4u) goto L_089C7EC4;
    return;
L_089C7EC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C7EFC;
      }
      goto L_089C7ED8;
    }
L_089C7ED8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_089C7F00;
    }
    goto L_089C7EE8;
L_089C7EE8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089C7F00;
      }
      goto L_089C7EF8;
    }
L_089C7EF8:
    ctx.gpr[5] = (0u | 1u);
    goto L_089C7EFC;
L_089C7EFC:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_089C7F00;
L_089C7F00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C7F6C;
      }
      goto L_089C7F08;
    }
L_089C7F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7F20;
      }
      goto L_089C7F14;
    }
L_089C7F14:
    ctx.gpr[31] = (0x089C7F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7F1Cu) goto L_089C7F1C;
    return;
L_089C7F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_089C7F20;
L_089C7F20:
    ctx.gpr[31] = (0x089C7F28u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 126u, 0x08A088B4u>(ctx, &aot_mem) && ctx.pc == 0x089C7F28u) goto L_089C7F28;
    return;
L_089C7F28:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(27776), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C7F54;
      }
      goto L_089C7F48;
    }
L_089C7F48:
    ctx.gpr[31] = (0x089C7F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x089C7F50u) goto L_089C7F50;
    return;
L_089C7F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20652)));
    goto L_089C7F54;
L_089C7F54:
    ctx.gpr[31] = (0x089C7F5Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 126u, 0x08A088B4u>(ctx, &aot_mem) && ctx.pc == 0x089C7F5Cu) goto L_089C7F5C;
    return;
L_089C7F5C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(27780), ctx.gpr[4]);
    goto L_089C7F6C;
L_089C7F6C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089C7D38;
      }
      goto L_089C7F7C;
    }
L_089C7F7C:
    ctx.gpr[31] = (0x089C7F84u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x089C7F84u) goto L_089C7F84;
    return;
L_089C7F84:
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
L_089C7FB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C7FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089C7FC4u) goto L_089C7FC4;
    return;
L_089C7FC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[1] = (ctx.gpr[5] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(37)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28180));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.pc = 0x089C8000u; return;
}

void recomp_unit_0112(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0112_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_112(Runtime &runtime) {
    runtime.register_generated_unit(112u, 0x089C4000u, 16384u, &recomp_unit_0112, &recomp_unit_0112_entry);
    runtime.register_function(0x089C4000u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C404Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4090u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4094u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C40ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C40ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C40F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4104u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4130u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C414Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4154u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4158u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C418Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C41FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4200u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4204u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C420Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4214u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4224u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4230u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C423Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4244u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4248u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C424Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4258u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4260u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4268u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C42F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4308u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4310u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4318u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4320u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4330u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4338u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4348u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4350u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4360u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4364u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C436Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4380u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C43ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4414u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4428u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4440u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C444Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4460u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C447Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4480u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4488u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4490u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C44FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4510u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4548u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4550u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4554u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C455Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4570u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4578u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4580u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4588u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4590u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C459Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C45FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4604u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C461Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4624u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4630u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4638u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4640u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4648u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4654u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4660u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C466Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4674u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4678u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4680u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C468Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C46F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4708u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C471Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4724u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C472Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4748u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4760u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4768u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4770u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4788u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4790u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4794u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C479Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C47F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4804u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4848u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C487Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4898u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C48F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4904u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4910u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4918u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4920u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C492Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4944u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C494Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4960u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4974u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4990u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4998u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C49FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A34u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4A9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4ADCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4AF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4B9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BCCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4BF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4C7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CCCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4CFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4D54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DD0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4DFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E90u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4E9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4ECCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4FC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4FD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C4FE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5008u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5014u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C502Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C504Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C505Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5074u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5098u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C50A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C50C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C50E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5104u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5118u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5128u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5134u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5148u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C514Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C515Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5168u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C518Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C51F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5208u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5214u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5238u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5254u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5270u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C527Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5290u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C529Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C52ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5300u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5318u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5320u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C534Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5354u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5360u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5374u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5388u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C53A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C53A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C53DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C53E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C53FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C540Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5418u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5428u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5450u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5464u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5478u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5484u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5498u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C54F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5520u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5534u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5548u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5550u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5558u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5568u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C556Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5590u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C55D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5604u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C560Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5614u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5638u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5640u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5650u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5664u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5674u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C567Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5684u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C569Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C56E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5704u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5710u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5724u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5740u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5760u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5768u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5774u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C577Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5790u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5798u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C57F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5810u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5818u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5838u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5840u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C584Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5864u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5878u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5898u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C58F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5900u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5924u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5948u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C595Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5978u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5998u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C59FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A60u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5A9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5ABCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AD0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5AF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B60u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5B90u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5C94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5CA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5CB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5CC0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5CD0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5CE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5CF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5D2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5DB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5DD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5DE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5E88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5EB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F34u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F78u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5F98u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5FA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5FB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5FC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5FD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5FE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C5FF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6000u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6010u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6040u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6068u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C60F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6100u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6114u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6128u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6140u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6150u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C615Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6168u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6170u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C617Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6188u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6194u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C619Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C61F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6214u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6220u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C622Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6248u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6268u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6270u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C627Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6288u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6298u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C62E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6310u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6318u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6328u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6344u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6358u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6368u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6374u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6380u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6388u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6394u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C63A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C63D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C640Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6414u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6424u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C643Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6448u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6460u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6470u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6480u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C648Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6494u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C64F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C651Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6554u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C655Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6570u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6588u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6590u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6598u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C65F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6600u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6608u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C661Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C665Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6660u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6678u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C668Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6694u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C66FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C671Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6724u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C672Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6748u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C674Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6768u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6770u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6774u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6780u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6788u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6798u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C67F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6800u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6808u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6810u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6818u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6828u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C682Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6834u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6844u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C684Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6854u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6860u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6884u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6890u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C68E0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6918u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6924u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6938u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C694Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C695Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6960u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6974u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6984u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6990u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C69FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A90u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6A94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6ACCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6AFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B5Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6B8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6BF0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C34u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6C8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CD8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6CF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D2Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D60u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6D8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DD0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6DF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E0Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E5Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6E9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6ED0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6ED8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6EF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6F88u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FA4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FCCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C6FFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C700Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7014u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7020u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7034u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C703Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7044u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C704Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C705Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7074u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7080u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7094u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C70F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7108u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7110u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7118u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7124u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C712Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7134u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C713Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7144u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7150u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7158u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C716Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C719Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71A8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71B8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C71F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7200u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C720Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7214u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7220u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C722Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7238u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7240u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7248u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7250u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7258u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7274u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C728Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7298u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C72F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C730Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7314u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C731Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7324u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7330u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7340u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7348u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7360u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C736Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7374u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C737Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C738Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7394u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C739Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73B4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73D8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C73F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C740Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7414u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C741Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7428u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7434u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7450u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7458u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7460u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7478u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7480u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7488u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7498u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74ACu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74CCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C74ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7500u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7548u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7560u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7578u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7580u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7584u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7590u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75C4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75D4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75E4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C75FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7608u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7610u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7624u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7654u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7688u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C76A0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C76D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C76E8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C76F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C76F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C76FCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7710u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7720u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7730u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7740u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7750u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7760u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7770u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7780u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7790u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C779Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77BCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77C8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77DCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77F0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C77F8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7808u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7814u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7828u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7838u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7840u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C784Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7858u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7868u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7878u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7880u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C788Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C789Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78B0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78C0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78D0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C78ECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7900u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C790Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7918u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7924u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7934u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7940u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C796Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C797Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7988u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7998u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79A4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C79F4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A3Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A64u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A70u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A80u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A8Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A94u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7A9Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7AA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7AB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7AB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7AC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7ACCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7AD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7AE4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7B7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7BFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C04u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C10u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C58u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7C84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CCCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CDCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7CFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D18u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D44u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D4Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D5Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7D90u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DC8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DD4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DE0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DECu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7DF4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E24u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E30u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E38u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E40u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E60u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E68u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7E74u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EA0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EA8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EB0u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EB8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EBCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EC4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7ED8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EE8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EF8u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7EFCu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F00u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F08u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F14u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F1Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F20u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F28u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F48u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F50u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F54u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F5Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F6Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F7Cu, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7F84u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FB4u, &recomp_unit_0112, "recomp_unit_0112");
    runtime.register_function(0x089C7FC4u, &recomp_unit_0112, "recomp_unit_0112");
}
} // namespace psprecomp
