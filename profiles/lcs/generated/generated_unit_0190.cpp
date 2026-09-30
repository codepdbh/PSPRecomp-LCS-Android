#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0190[4096] = {
    1, 0, 2, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0,
    0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0,
    0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 38, 0, 0, 39, 0, 40, 41, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0,
    0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 55,
    0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 62, 0, 63, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 72, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 78, 0, 79, 0, 0, 80, 0, 81, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0,
    0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 0, 93, 0, 94, 95, 0, 0, 0, 96, 0, 0,
    97, 0, 98, 99, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 107, 108, 0, 109, 110, 0,
    111, 0, 0, 112, 0, 0, 113, 0, 114, 115, 0, 116, 117, 0, 0, 0, 0, 118, 0, 119, 0, 0, 120, 0, 121, 0, 0, 122, 0, 123, 0, 124,
    0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 133, 0, 134, 135, 0, 136, 137, 0, 138, 0, 139, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 149, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 160, 0, 161, 162, 0, 163, 0, 164, 0, 165, 166, 0, 167, 0, 168, 0, 169, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 187, 0, 188, 0, 0, 189, 0, 190,
    0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0,
    200, 0, 201, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 211, 0, 212, 213, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 242,
    0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249,
    0, 0, 250, 0, 0, 0, 251, 0, 252, 0, 253, 254, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258,
    0, 0, 259, 0, 260, 0, 0, 261, 0, 0, 262, 0, 263, 264, 0, 0, 265, 0, 0, 266, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 0,
    270, 271, 0, 272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0,
    0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 289, 0, 0, 290, 0, 291, 0, 0, 292, 0, 293, 0, 0, 294, 0,
    295, 0, 0, 296, 0, 297, 0, 298, 0, 0, 0, 299, 0, 300, 0, 301, 302, 0, 303, 0, 304, 0, 0, 0, 305, 0, 306, 0, 0, 0, 307, 0,
    308, 309, 0, 0, 310, 0, 311, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0,
    315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 321, 0, 322,
    0, 0, 323, 0, 324, 0, 325, 0, 0, 326, 0, 327, 0, 0, 328, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    332, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 337, 0, 0, 0, 338, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 342, 0, 0, 0, 343, 0, 0,
    0, 0, 344, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368,
    0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 380, 0,
    0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0,
    0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 396, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 400, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0,
    0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 409, 0, 410, 0, 411, 0, 0, 0, 0, 412, 413, 0, 0, 414, 0, 415,
    0, 0, 416, 0, 417, 0, 0, 418, 0, 419, 0, 0, 420, 0, 421, 0, 422, 0, 0, 0, 423, 0, 424, 0, 425, 426, 0, 427, 0, 428, 0, 0,
    0, 429, 0, 430, 0, 0, 0, 431, 0, 432, 433, 0, 0, 434, 0, 435, 0, 436, 0, 0, 0, 0, 437, 438, 0, 0, 0, 0, 0, 0, 439, 440,
    0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 447, 448, 0, 0,
    449, 0, 0, 450, 0, 0, 0, 0, 451, 0, 452, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 458, 0, 0,
    459, 0, 0, 0, 460, 0, 0, 461, 0, 462, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 469,
    0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0,
    0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0,
    478, 0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 493, 0,
    494, 0, 495, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 499, 0, 0, 500, 0, 501, 0, 0, 0, 502, 0,
    503, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 508, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 518,
    0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 522, 0, 523, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0,
    0, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 528, 0, 529, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0,
    533, 0, 0, 0, 534, 0, 0, 0, 535, 536, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0,
    540, 0, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 544, 0, 545, 0, 0, 546, 0, 0, 0, 547, 0, 548, 549, 0,
    0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 554, 555, 0, 556, 557, 0,
    0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561, 562, 0, 563, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 566,
    0, 0, 0, 0, 0, 0, 0, 567, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0,
    571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0,
    0, 0, 577, 0, 0, 578, 0, 579, 580, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 583, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 589,
    0, 0, 590, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 596, 0, 0,
    0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 600, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 603, 604,
    0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 609,
    0, 610, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0,
    614, 0, 0, 615, 616, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 622, 0, 0,
    0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0,
    0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 631, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0,
    633, 0, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 636, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0,
    0, 640, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 646, 0, 0, 647, 0, 0, 0, 648,
    0, 0, 0, 0, 0, 0, 0, 0, 649, 650, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0,
    0, 0, 653, 0, 0, 0, 654, 0, 0, 655, 0, 656, 0, 657, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 661, 662, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 666, 0,
    667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 671, 0, 0,
    0, 0, 672, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 679,
    0, 0, 680, 0, 0, 0, 681, 0, 682, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685, 686, 0, 0, 687, 0, 688, 0, 0, 0, 0,
    0, 0, 689, 0, 0, 0, 690, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 693, 0, 0, 694, 0, 0, 0, 695, 0, 696,
    0, 697, 698, 0, 0, 699, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 703, 0, 704, 0, 0, 705, 0,
    0, 706, 0, 707, 708, 0, 0, 709, 0, 0, 710, 0, 0, 0, 711, 0, 712, 0, 713, 0, 0, 0, 0, 714, 715, 0, 716, 0, 0, 717, 0, 0,
    0, 0, 718, 0, 719, 0, 720, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 724, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0,
    731, 0, 0, 732, 0, 0, 0, 0, 0, 0, 733, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 736, 0, 0, 0, 737,
    0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 0, 0, 744, 0, 0, 745,
    0, 0, 0, 0, 0, 0, 0, 0, 746, 747, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0,
    0, 0, 750, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 753, 0, 754, 0, 0, 755, 0, 0, 0, 756, 0, 757, 0, 758, 0, 759, 0, 760, 0,
    0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 764, 765,
    0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 770, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 777,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 779, 0, 780, 0, 781, 0, 0, 0, 782, 0, 0, 0, 783, 784, 0, 785, 0, 0,
    0, 0, 0, 0, 786, 0, 0, 787, 0, 788, 0, 0, 0, 0, 0, 789, 0, 790, 0, 791, 0, 0, 792, 0, 0, 0, 793, 0, 0, 794, 0, 795,
    0, 0, 0, 0, 0, 0, 796, 797, 798, 799, 0, 0, 800, 0, 0, 801, 0, 0, 0, 802, 0, 0, 803, 0, 804, 0, 805, 0, 0, 806, 0, 0,
    807, 0, 0, 0, 808, 809, 0, 0, 810, 811, 0, 0, 812, 0, 0, 813, 0, 0, 814, 0, 0, 0, 815, 816, 0, 0, 817, 818, 0, 0, 819, 0,
    0, 820, 0, 821, 0, 822, 0, 0, 823, 0, 0, 824, 0, 0, 0, 825, 0, 0, 0, 0, 826, 827, 0, 0, 828, 0, 0, 829, 0, 830, 0, 0,
    831, 0, 0, 0, 0, 832, 0, 833, 0, 0, 834, 0, 835, 836, 0, 0, 837, 838, 0, 0, 0, 0, 0, 839, 840, 0, 0, 841, 0, 842, 0, 843,
    0, 0, 844, 0, 0, 0, 0, 845, 846, 0, 0, 847, 0, 0, 848, 0, 849, 0, 0, 850, 0, 0, 0, 0, 851, 0, 852, 0, 0, 853, 0, 854,
    855, 0, 0, 856, 857, 0, 0, 0, 0, 0, 858, 859, 0, 0, 860, 0, 861, 0, 862, 0, 863, 864, 0, 0, 0, 0, 0, 0, 0, 0, 0, 865,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 0, 0, 0,
    0, 0, 869, 0, 870, 0, 0, 0, 871, 0, 0, 872, 0, 0, 0, 0, 0, 0, 0, 0, 873, 0, 0, 874, 0, 0, 0, 875, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 876, 0, 877, 0, 0, 0, 0, 0, 0, 878, 0, 879, 0, 0, 880, 0, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 882,
    0, 883, 0, 0, 0, 0, 0, 0, 884, 0, 885, 0, 0, 0, 886, 0, 0, 887, 0, 0, 0, 888, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 891, 0, 0, 0, 892, 0, 0, 893, 0, 0, 894, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    895, 0, 0, 0, 0, 0, 0, 0, 0, 0, 896, 0, 0, 0, 0, 897, 0, 0, 0, 0, 0, 0, 898, 0, 899, 0, 0, 0, 0, 0, 0, 900,
    0, 901, 0, 0, 902, 0, 0, 903, 0, 0, 0, 0, 0, 0, 904, 0, 905, 0, 906, 0, 0, 0, 907, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    908, 0, 0, 0, 0, 909, 0, 0, 0, 0, 0, 0, 910, 0, 911, 0, 0, 0, 0, 0, 0, 912, 0, 913, 0, 914, 0, 0, 915, 0, 0, 0,
    916, 0, 0, 917, 0, 0, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 919, 0, 0, 920, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 921, 0, 0, 0, 0, 0, 0, 922, 0, 923, 0, 0, 0, 924, 0, 0, 925, 0, 0, 0, 0, 0, 0, 0, 0,
    926, 0, 0, 927, 0, 0, 0, 928, 0, 0, 0, 0, 0, 0, 0, 0, 0, 929, 0, 930, 0, 0, 0, 0, 0, 0, 931, 0, 932, 0, 0, 933,
};
void recomp_unit_0190_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AFC000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0190[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AFC000;
    case 2u: goto L_08AFC008;
    case 3u: goto L_08AFC00C;
    case 4u: goto L_08AFC014;
    case 5u: goto L_08AFC03C;
    case 6u: goto L_08AFC07C;
    case 7u: goto L_08AFC09C;
    case 8u: goto L_08AFC0AC;
    case 9u: goto L_08AFC0D4;
    case 10u: goto L_08AFC0E4;
    case 11u: goto L_08AFC0F8;
    case 12u: goto L_08AFC108;
    case 13u: goto L_08AFC118;
    case 14u: goto L_08AFC128;
    case 15u: goto L_08AFC138;
    case 16u: goto L_08AFC158;
    case 17u: goto L_08AFC168;
    case 18u: goto L_08AFC178;
    case 19u: goto L_08AFC180;
    case 20u: goto L_08AFC1A8;
    case 21u: goto L_08AFC1B8;
    case 22u: goto L_08AFC1CC;
    case 23u: goto L_08AFC1DC;
    case 24u: goto L_08AFC1EC;
    case 25u: goto L_08AFC210;
    case 26u: goto L_08AFC220;
    case 27u: goto L_08AFC22C;
    case 28u: goto L_08AFC23C;
    case 29u: goto L_08AFC244;
    case 30u: goto L_08AFC268;
    case 31u: goto L_08AFC278;
    case 32u: goto L_08AFC288;
    case 33u: goto L_08AFC290;
    case 34u: goto L_08AFC2A8;
    case 35u: goto L_08AFC2B8;
    case 36u: goto L_08AFC2C4;
    case 37u: goto L_08AFC2CC;
    case 38u: goto L_08AFC2D4;
    case 39u: goto L_08AFC2E0;
    case 40u: goto L_08AFC2E8;
    case 41u: goto L_08AFC2EC;
    case 42u: goto L_08AFC314;
    case 43u: goto L_08AFC324;
    case 44u: goto L_08AFC338;
    case 45u: goto L_08AFC340;
    case 46u: goto L_08AFC368;
    case 47u: goto L_08AFC378;
    case 48u: goto L_08AFC384;
    case 49u: goto L_08AFC398;
    case 50u: goto L_08AFC3A0;
    case 51u: goto L_08AFC3C4;
    case 52u: goto L_08AFC3D4;
    case 53u: goto L_08AFC3E0;
    case 54u: goto L_08AFC3F4;
    case 55u: goto L_08AFC3FC;
    case 56u: goto L_08AFC410;
    case 57u: goto L_08AFC418;
    case 58u: goto L_08AFC428;
    case 59u: goto L_08AFC458;
    case 60u: goto L_08AFC4AC;
    case 61u: goto L_08AFC4B4;
    case 62u: goto L_08AFC4C0;
    case 63u: goto L_08AFC4C8;
    case 64u: goto L_08AFC4CC;
    case 65u: goto L_08AFC508;
    case 66u: goto L_08AFC518;
    case 67u: goto L_08AFC52C;
    case 68u: goto L_08AFC534;
    case 69u: goto L_08AFC558;
    case 70u: goto L_08AFC560;
    case 71u: goto L_08AFC56C;
    case 72u: goto L_08AFC574;
    case 73u: goto L_08AFC578;
    case 74u: goto L_08AFC5B4;
    case 75u: goto L_08AFC5C4;
    case 76u: goto L_08AFC5D8;
    case 77u: goto L_08AFC5E0;
    case 78u: goto L_08AFC604;
    case 79u: goto L_08AFC60C;
    case 80u: goto L_08AFC618;
    case 81u: goto L_08AFC620;
    case 82u: goto L_08AFC624;
    case 83u: goto L_08AFC660;
    case 84u: goto L_08AFC670;
    case 85u: goto L_08AFC684;
    case 86u: goto L_08AFC68C;
    case 87u: goto L_08AFC6B4;
    case 88u: goto L_08AFC714;
    case 89u: goto L_08AFC724;
    case 90u: goto L_08AFC730;
    case 91u: goto L_08AFC738;
    case 92u: goto L_08AFC74C;
    case 93u: goto L_08AFC758;
    case 94u: goto L_08AFC760;
    case 95u: goto L_08AFC764;
    case 96u: goto L_08AFC774;
    case 97u: goto L_08AFC780;
    case 98u: goto L_08AFC788;
    case 99u: goto L_08AFC78C;
    case 100u: goto L_08AFC794;
    case 101u: goto L_08AFC7A4;
    case 102u: goto L_08AFC7B0;
    case 103u: goto L_08AFC7B8;
    case 104u: goto L_08AFC7C4;
    case 105u: goto L_08AFC7D4;
    case 106u: goto L_08AFC7E0;
    case 107u: goto L_08AFC7E8;
    case 108u: goto L_08AFC7EC;
    case 109u: goto L_08AFC7F4;
    case 110u: goto L_08AFC7F8;
    case 111u: goto L_08AFC800;
    case 112u: goto L_08AFC80C;
    case 113u: goto L_08AFC818;
    case 114u: goto L_08AFC820;
    case 115u: goto L_08AFC824;
    case 116u: goto L_08AFC82C;
    case 117u: goto L_08AFC830;
    case 118u: goto L_08AFC844;
    case 119u: goto L_08AFC84C;
    case 120u: goto L_08AFC858;
    case 121u: goto L_08AFC860;
    case 122u: goto L_08AFC86C;
    case 123u: goto L_08AFC874;
    case 124u: goto L_08AFC87C;
    case 125u: goto L_08AFC884;
    case 126u: goto L_08AFC88C;
    case 127u: goto L_08AFC898;
    case 128u: goto L_08AFC8A0;
    case 129u: goto L_08AFC8A8;
    case 130u: goto L_08AFC8B0;
    case 131u: goto L_08AFC8B8;
    case 132u: goto L_08AFC8C4;
    case 133u: goto L_08AFC8CC;
    case 134u: goto L_08AFC8D4;
    case 135u: goto L_08AFC8D8;
    case 136u: goto L_08AFC8E0;
    case 137u: goto L_08AFC8E4;
    case 138u: goto L_08AFC8EC;
    case 139u: goto L_08AFC8F4;
    case 140u: goto L_08AFC93C;
    case 141u: goto L_08AFC990;
    case 142u: goto L_08AFC998;
    case 143u: goto L_08AFC9A4;
    case 144u: goto L_08AFC9B0;
    case 145u: goto L_08AFC9B8;
    case 146u: goto L_08AFC9C8;
    case 147u: goto L_08AFC9D4;
    case 148u: goto L_08AFC9E0;
    case 149u: goto L_08AFC9E4;
    case 150u: goto L_08AFC9F8;
    case 151u: goto L_08AFCA1C;
    case 152u: goto L_08AFCA44;
    case 153u: goto L_08AFCA50;
    case 154u: goto L_08AFCA5C;
    case 155u: goto L_08AFCA6C;
    case 156u: goto L_08AFCA88;
    case 157u: goto L_08AFCA94;
    case 158u: goto L_08AFCAA0;
    case 159u: goto L_08AFCAAC;
    case 160u: goto L_08AFCAB4;
    case 161u: goto L_08AFCABC;
    case 162u: goto L_08AFCAC0;
    case 163u: goto L_08AFCAC8;
    case 164u: goto L_08AFCAD0;
    case 165u: goto L_08AFCAD8;
    case 166u: goto L_08AFCADC;
    case 167u: goto L_08AFCAE4;
    case 168u: goto L_08AFCAEC;
    case 169u: goto L_08AFCAF4;
    case 170u: goto L_08AFCB00;
    case 171u: goto L_08AFCB20;
    case 172u: goto L_08AFCB28;
    case 173u: goto L_08AFCB48;
    case 174u: goto L_08AFCB8C;
    case 175u: goto L_08AFCB94;
    case 176u: goto L_08AFCBA0;
    case 177u: goto L_08AFCBB0;
    case 178u: goto L_08AFCBC0;
    case 179u: goto L_08AFCBCC;
    case 180u: goto L_08AFCBD8;
    case 181u: goto L_08AFCBF8;
    case 182u: goto L_08AFCC08;
    case 183u: goto L_08AFCC18;
    case 184u: goto L_08AFCC3C;
    case 185u: goto L_08AFCC4C;
    case 186u: goto L_08AFCC58;
    case 187u: goto L_08AFCC60;
    case 188u: goto L_08AFCC68;
    case 189u: goto L_08AFCC74;
    case 190u: goto L_08AFCC7C;
    case 191u: goto L_08AFCC84;
    case 192u: goto L_08AFCC90;
    case 193u: goto L_08AFCC9C;
    case 194u: goto L_08AFCCB0;
    case 195u: goto L_08AFCCBC;
    case 196u: goto L_08AFCCD0;
    case 197u: goto L_08AFCCDC;
    case 198u: goto L_08AFCCE8;
    case 199u: goto L_08AFCCF8;
    case 200u: goto L_08AFCD00;
    case 201u: goto L_08AFCD08;
    case 202u: goto L_08AFCD10;
    case 203u: goto L_08AFCD24;
    case 204u: goto L_08AFCD4C;
    case 205u: goto L_08AFCD70;
    case 206u: goto L_08AFCD7C;
    case 207u: goto L_08AFCDA4;
    case 208u: goto L_08AFCDC8;
    case 209u: goto L_08AFCDD8;
    case 210u: goto L_08AFCDE0;
    case 211u: goto L_08AFCDEC;
    case 212u: goto L_08AFCDF4;
    case 213u: goto L_08AFCDF8;
    case 214u: goto L_08AFCE18;
    case 215u: goto L_08AFCE28;
    case 216u: goto L_08AFCE38;
    case 217u: goto L_08AFCE44;
    case 218u: goto L_08AFCE4C;
    case 219u: goto L_08AFCE5C;
    case 220u: goto L_08AFCE74;
    case 221u: goto L_08AFCE88;
    case 222u: goto L_08AFCE9C;
    case 223u: goto L_08AFCEA4;
    case 224u: goto L_08AFCEC0;
    case 225u: goto L_08AFCED4;
    case 226u: goto L_08AFCF0C;
    case 227u: goto L_08AFCF1C;
    case 228u: goto L_08AFCF2C;
    case 229u: goto L_08AFCF38;
    case 230u: goto L_08AFCF5C;
    case 231u: goto L_08AFCF98;
    case 232u: goto L_08AFCFC0;
    case 233u: goto L_08AFCFE4;
    case 234u: goto L_08AFD010;
    case 235u: goto L_08AFD020;
    case 236u: goto L_08AFD02C;
    case 237u: goto L_08AFD03C;
    case 238u: goto L_08AFD044;
    case 239u: goto L_08AFD058;
    case 240u: goto L_08AFD068;
    case 241u: goto L_08AFD078;
    case 242u: goto L_08AFD07C;
    case 243u: goto L_08AFD088;
    case 244u: goto L_08AFD090;
    case 245u: goto L_08AFD0AC;
    case 246u: goto L_08AFD0BC;
    case 247u: goto L_08AFD0C0;
    case 248u: goto L_08AFD0EC;
    case 249u: goto L_08AFD0FC;
    case 250u: goto L_08AFD108;
    case 251u: goto L_08AFD118;
    case 252u: goto L_08AFD120;
    case 253u: goto L_08AFD128;
    case 254u: goto L_08AFD12C;
    case 255u: goto L_08AFD138;
    case 256u: goto L_08AFD140;
    case 257u: goto L_08AFD16C;
    case 258u: goto L_08AFD17C;
    case 259u: goto L_08AFD188;
    case 260u: goto L_08AFD190;
    case 261u: goto L_08AFD19C;
    case 262u: goto L_08AFD1A8;
    case 263u: goto L_08AFD1B0;
    case 264u: goto L_08AFD1B4;
    case 265u: goto L_08AFD1C0;
    case 266u: goto L_08AFD1CC;
    case 267u: goto L_08AFD1DC;
    case 268u: goto L_08AFD1E4;
    case 269u: goto L_08AFD1EC;
    case 270u: goto L_08AFD200;
    case 271u: goto L_08AFD204;
    case 272u: goto L_08AFD20C;
    case 273u: goto L_08AFD218;
    case 274u: goto L_08AFD22C;
    case 275u: goto L_08AFD234;
    case 276u: goto L_08AFD23C;
    case 277u: goto L_08AFD244;
    case 278u: goto L_08AFD258;
    case 279u: goto L_08AFD284;
    case 280u: goto L_08AFD2A4;
    case 281u: goto L_08AFD2B4;
    case 282u: goto L_08AFD2C0;
    case 283u: goto L_08AFD2CC;
    case 284u: goto L_08AFD2F0;
    case 285u: goto L_08AFD2F8;
    case 286u: goto L_08AFD314;
    case 287u: goto L_08AFD32C;
    case 288u: goto L_08AFD340;
    case 289u: goto L_08AFD344;
    case 290u: goto L_08AFD350;
    case 291u: goto L_08AFD358;
    case 292u: goto L_08AFD364;
    case 293u: goto L_08AFD36C;
    case 294u: goto L_08AFD378;
    case 295u: goto L_08AFD380;
    case 296u: goto L_08AFD38C;
    case 297u: goto L_08AFD394;
    case 298u: goto L_08AFD39C;
    case 299u: goto L_08AFD3AC;
    case 300u: goto L_08AFD3B4;
    case 301u: goto L_08AFD3BC;
    case 302u: goto L_08AFD3C0;
    case 303u: goto L_08AFD3C8;
    case 304u: goto L_08AFD3D0;
    case 305u: goto L_08AFD3E0;
    case 306u: goto L_08AFD3E8;
    case 307u: goto L_08AFD3F8;
    case 308u: goto L_08AFD400;
    case 309u: goto L_08AFD404;
    case 310u: goto L_08AFD410;
    case 311u: goto L_08AFD418;
    case 312u: goto L_08AFD420;
    case 313u: goto L_08AFD434;
    case 314u: goto L_08AFD474;
    case 315u: goto L_08AFD480;
    case 316u: goto L_08AFD488;
    case 317u: goto L_08AFD4BC;
    case 318u: goto L_08AFD4C4;
    case 319u: goto L_08AFD4DC;
    case 320u: goto L_08AFD4E4;
    case 321u: goto L_08AFD4F4;
    case 322u: goto L_08AFD4FC;
    case 323u: goto L_08AFD508;
    case 324u: goto L_08AFD510;
    case 325u: goto L_08AFD518;
    case 326u: goto L_08AFD524;
    case 327u: goto L_08AFD52C;
    case 328u: goto L_08AFD538;
    case 329u: goto L_08AFD540;
    case 330u: goto L_08AFD554;
    case 331u: goto L_08AFD570;
    case 332u: goto L_08AFD580;
    case 333u: goto L_08AFD584;
    case 334u: goto L_08AFD5AC;
    case 335u: goto L_08AFD5C4;
    case 336u: goto L_08AFD5D0;
    case 337u: goto L_08AFD60C;
    case 338u: goto L_08AFD61C;
    case 339u: goto L_08AFD620;
    case 340u: goto L_08AFD638;
    case 341u: goto L_08AFD660;
    case 342u: goto L_08AFD664;
    case 343u: goto L_08AFD674;
    case 344u: goto L_08AFD688;
    case 345u: goto L_08AFD690;
    case 346u: goto L_08AFD6A0;
    case 347u: goto L_08AFD6B0;
    case 348u: goto L_08AFD6D0;
    case 349u: goto L_08AFD704;
    case 350u: goto L_08AFD728;
    case 351u: goto L_08AFD740;
    case 352u: goto L_08AFD748;
    case 353u: goto L_08AFD754;
    case 354u: goto L_08AFD770;
    case 355u: goto L_08AFD794;
    case 356u: goto L_08AFD7B8;
    case 357u: goto L_08AFD7BC;
    case 358u: goto L_08AFD7E4;
    case 359u: goto L_08AFD7EC;
    case 360u: goto L_08AFD800;
    case 361u: goto L_08AFD830;
    case 362u: goto L_08AFD838;
    case 363u: goto L_08AFD84C;
    case 364u: goto L_08AFD880;
    case 365u: goto L_08AFD88C;
    case 366u: goto L_08AFD8CC;
    case 367u: goto L_08AFD8D8;
    case 368u: goto L_08AFD8FC;
    case 369u: goto L_08AFD904;
    case 370u: goto L_08AFD91C;
    case 371u: goto L_08AFD934;
    case 372u: goto L_08AFD950;
    case 373u: goto L_08AFD95C;
    case 374u: goto L_08AFD984;
    case 375u: goto L_08AFD990;
    case 376u: goto L_08AFD9B8;
    case 377u: goto L_08AFD9C8;
    case 378u: goto L_08AFD9E4;
    case 379u: goto L_08AFD9EC;
    case 380u: goto L_08AFD9F8;
    case 381u: goto L_08AFDA0C;
    case 382u: goto L_08AFDA44;
    case 383u: goto L_08AFDA4C;
    case 384u: goto L_08AFDA58;
    case 385u: goto L_08AFDA64;
    case 386u: goto L_08AFDA88;
    case 387u: goto L_08AFDA9C;
    case 388u: goto L_08AFDAAC;
    case 389u: goto L_08AFDABC;
    case 390u: goto L_08AFDAC4;
    case 391u: goto L_08AFDAD4;
    case 392u: goto L_08AFDAE0;
    case 393u: goto L_08AFDAEC;
    case 394u: goto L_08AFDB18;
    case 395u: goto L_08AFDB48;
    case 396u: goto L_08AFDB4C;
    case 397u: goto L_08AFDB70;
    case 398u: goto L_08AFDB7C;
    case 399u: goto L_08AFDBA4;
    case 400u: goto L_08AFDBA8;
    case 401u: goto L_08AFDBB8;
    case 402u: goto L_08AFDBC4;
    case 403u: goto L_08AFDBDC;
    case 404u: goto L_08AFDBF0;
    case 405u: goto L_08AFDC08;
    case 406u: goto L_08AFDC10;
    case 407u: goto L_08AFDC2C;
    case 408u: goto L_08AFDC3C;
    case 409u: goto L_08AFDC40;
    case 410u: goto L_08AFDC48;
    case 411u: goto L_08AFDC50;
    case 412u: goto L_08AFDC64;
    case 413u: goto L_08AFDC68;
    case 414u: goto L_08AFDC74;
    case 415u: goto L_08AFDC7C;
    case 416u: goto L_08AFDC88;
    case 417u: goto L_08AFDC90;
    case 418u: goto L_08AFDC9C;
    case 419u: goto L_08AFDCA4;
    case 420u: goto L_08AFDCB0;
    case 421u: goto L_08AFDCB8;
    case 422u: goto L_08AFDCC0;
    case 423u: goto L_08AFDCD0;
    case 424u: goto L_08AFDCD8;
    case 425u: goto L_08AFDCE0;
    case 426u: goto L_08AFDCE4;
    case 427u: goto L_08AFDCEC;
    case 428u: goto L_08AFDCF4;
    case 429u: goto L_08AFDD04;
    case 430u: goto L_08AFDD0C;
    case 431u: goto L_08AFDD1C;
    case 432u: goto L_08AFDD24;
    case 433u: goto L_08AFDD28;
    case 434u: goto L_08AFDD34;
    case 435u: goto L_08AFDD3C;
    case 436u: goto L_08AFDD44;
    case 437u: goto L_08AFDD58;
    case 438u: goto L_08AFDD5C;
    case 439u: goto L_08AFDD78;
    case 440u: goto L_08AFDD7C;
    case 441u: goto L_08AFDD8C;
    case 442u: goto L_08AFDD94;
    case 443u: goto L_08AFDDA8;
    case 444u: goto L_08AFDDC0;
    case 445u: goto L_08AFDDDC;
    case 446u: goto L_08AFDDE8;
    case 447u: goto L_08AFDDF0;
    case 448u: goto L_08AFDDF4;
    case 449u: goto L_08AFDE00;
    case 450u: goto L_08AFDE0C;
    case 451u: goto L_08AFDE20;
    case 452u: goto L_08AFDE28;
    case 453u: goto L_08AFDE38;
    case 454u: goto L_08AFDE44;
    case 455u: goto L_08AFDE54;
    case 456u: goto L_08AFDE60;
    case 457u: goto L_08AFDE6C;
    case 458u: goto L_08AFDE74;
    case 459u: goto L_08AFDE80;
    case 460u: goto L_08AFDE90;
    case 461u: goto L_08AFDE9C;
    case 462u: goto L_08AFDEA4;
    case 463u: goto L_08AFDEB4;
    case 464u: goto L_08AFDEBC;
    case 465u: goto L_08AFDED8;
    case 466u: goto L_08AFDF38;
    case 467u: goto L_08AFDF40;
    case 468u: goto L_08AFDF78;
    case 469u: goto L_08AFDF7C;
    case 470u: goto L_08AFDF84;
    case 471u: goto L_08AFDFA0;
    case 472u: goto L_08AFDFC8;
    case 473u: goto L_08AFDFF4;
    case 474u: goto L_08AFE010;
    case 475u: goto L_08AFE02C;
    case 476u: goto L_08AFE048;
    case 477u: goto L_08AFE064;
    case 478u: goto L_08AFE080;
    case 479u: goto L_08AFE088;
    case 480u: goto L_08AFE090;
    case 481u: goto L_08AFE098;
    case 482u: goto L_08AFE0A0;
    case 483u: goto L_08AFE0A8;
    case 484u: goto L_08AFE0B0;
    case 485u: goto L_08AFE0B8;
    case 486u: goto L_08AFE0C0;
    case 487u: goto L_08AFE0C8;
    case 488u: goto L_08AFE0D0;
    case 489u: goto L_08AFE0D8;
    case 490u: goto L_08AFE0E0;
    case 491u: goto L_08AFE0E8;
    case 492u: goto L_08AFE0F0;
    case 493u: goto L_08AFE0F8;
    case 494u: goto L_08AFE100;
    case 495u: goto L_08AFE108;
    case 496u: goto L_08AFE110;
    case 497u: goto L_08AFE13C;
    case 498u: goto L_08AFE144;
    case 499u: goto L_08AFE154;
    case 500u: goto L_08AFE160;
    case 501u: goto L_08AFE168;
    case 502u: goto L_08AFE178;
    case 503u: goto L_08AFE180;
    case 504u: goto L_08AFE19C;
    case 505u: goto L_08AFE210;
    case 506u: goto L_08AFE218;
    case 507u: goto L_08AFE250;
    case 508u: goto L_08AFE254;
    case 509u: goto L_08AFE25C;
    case 510u: goto L_08AFE288;
    case 511u: goto L_08AFE2A4;
    case 512u: goto L_08AFE2CC;
    case 513u: goto L_08AFE2D8;
    case 514u: goto L_08AFE308;
    case 515u: goto L_08AFE338;
    case 516u: goto L_08AFE358;
    case 517u: goto L_08AFE370;
    case 518u: goto L_08AFE37C;
    case 519u: goto L_08AFE390;
    case 520u: goto L_08AFE3B0;
    case 521u: goto L_08AFE3C0;
    case 522u: goto L_08AFE3CC;
    case 523u: goto L_08AFE3D4;
    case 524u: goto L_08AFE3DC;
    case 525u: goto L_08AFE3F4;
    case 526u: goto L_08AFE414;
    case 527u: goto L_08AFE424;
    case 528u: goto L_08AFE430;
    case 529u: goto L_08AFE438;
    case 530u: goto L_08AFE440;
    case 531u: goto L_08AFE458;
    case 532u: goto L_08AFE478;
    case 533u: goto L_08AFE480;
    case 534u: goto L_08AFE490;
    case 535u: goto L_08AFE4A0;
    case 536u: goto L_08AFE4A4;
    case 537u: goto L_08AFE4AC;
    case 538u: goto L_08AFE4C8;
    case 539u: goto L_08AFE4E8;
    case 540u: goto L_08AFE500;
    case 541u: goto L_08AFE50C;
    case 542u: goto L_08AFE528;
    case 543u: goto L_08AFE538;
    case 544u: goto L_08AFE548;
    case 545u: goto L_08AFE550;
    case 546u: goto L_08AFE55C;
    case 547u: goto L_08AFE56C;
    case 548u: goto L_08AFE574;
    case 549u: goto L_08AFE578;
    case 550u: goto L_08AFE588;
    case 551u: goto L_08AFE5BC;
    case 552u: goto L_08AFE5C8;
    case 553u: goto L_08AFE5D8;
    case 554u: goto L_08AFE5E8;
    case 555u: goto L_08AFE5EC;
    case 556u: goto L_08AFE5F4;
    case 557u: goto L_08AFE5F8;
    case 558u: goto L_08AFE60C;
    case 559u: goto L_08AFE618;
    case 560u: goto L_08AFE628;
    case 561u: goto L_08AFE638;
    case 562u: goto L_08AFE63C;
    case 563u: goto L_08AFE644;
    case 564u: goto L_08AFE648;
    case 565u: goto L_08AFE674;
    case 566u: goto L_08AFE67C;
    case 567u: goto L_08AFE69C;
    case 568u: goto L_08AFE6A0;
    case 569u: goto L_08AFE6D4;
    case 570u: goto L_08AFE6F4;
    case 571u: goto L_08AFE700;
    case 572u: goto L_08AFE714;
    case 573u: goto L_08AFE740;
    case 574u: goto L_08AFE744;
    case 575u: goto L_08AFE75C;
    case 576u: goto L_08AFE76C;
    case 577u: goto L_08AFE788;
    case 578u: goto L_08AFE794;
    case 579u: goto L_08AFE79C;
    case 580u: goto L_08AFE7A0;
    case 581u: goto L_08AFE7C4;
    case 582u: goto L_08AFE7E8;
    case 583u: goto L_08AFE814;
    case 584u: goto L_08AFE81C;
    case 585u: goto L_08AFE824;
    case 586u: goto L_08AFE844;
    case 587u: goto L_08AFE858;
    case 588u: goto L_08AFE86C;
    case 589u: goto L_08AFE87C;
    case 590u: goto L_08AFE888;
    case 591u: goto L_08AFE894;
    case 592u: goto L_08AFE8A4;
    case 593u: goto L_08AFE8C4;
    case 594u: goto L_08AFE8DC;
    case 595u: goto L_08AFE8EC;
    case 596u: goto L_08AFE8F4;
    case 597u: goto L_08AFE908;
    case 598u: goto L_08AFE91C;
    case 599u: goto L_08AFE92C;
    case 600u: goto L_08AFE938;
    case 601u: goto L_08AFE944;
    case 602u: goto L_08AFE954;
    case 603u: goto L_08AFE978;
    case 604u: goto L_08AFE97C;
    case 605u: goto L_08AFE998;
    case 606u: goto L_08AFE9C0;
    case 607u: goto L_08AFE9E0;
    case 608u: goto L_08AFE9F0;
    case 609u: goto L_08AFE9FC;
    case 610u: goto L_08AFEA04;
    case 611u: goto L_08AFEA0C;
    case 612u: goto L_08AFEA24;
    case 613u: goto L_08AFEA60;
    case 614u: goto L_08AFEA80;
    case 615u: goto L_08AFEA8C;
    case 616u: goto L_08AFEA90;
    case 617u: goto L_08AFEA98;
    case 618u: goto L_08AFEAA0;
    case 619u: goto L_08AFEAC8;
    case 620u: goto L_08AFEAD0;
    case 621u: goto L_08AFEAD8;
    case 622u: goto L_08AFEAF4;
    case 623u: goto L_08AFEB08;
    case 624u: goto L_08AFEB30;
    case 625u: goto L_08AFEB4C;
    case 626u: goto L_08AFEB60;
    case 627u: goto L_08AFEB70;
    case 628u: goto L_08AFEB90;
    case 629u: goto L_08AFEBBC;
    case 630u: goto L_08AFEBC4;
    case 631u: goto L_08AFEBCC;
    case 632u: goto L_08AFEBEC;
    case 633u: goto L_08AFEC00;
    case 634u: goto L_08AFEC14;
    case 635u: goto L_08AFEC24;
    case 636u: goto L_08AFEC30;
    case 637u: goto L_08AFEC3C;
    case 638u: goto L_08AFEC4C;
    case 639u: goto L_08AFEC6C;
    case 640u: goto L_08AFEC84;
    case 641u: goto L_08AFEC94;
    case 642u: goto L_08AFEC9C;
    case 643u: goto L_08AFECB0;
    case 644u: goto L_08AFECC4;
    case 645u: goto L_08AFECD4;
    case 646u: goto L_08AFECE0;
    case 647u: goto L_08AFECEC;
    case 648u: goto L_08AFECFC;
    case 649u: goto L_08AFED20;
    case 650u: goto L_08AFED24;
    case 651u: goto L_08AFED40;
    case 652u: goto L_08AFED68;
    case 653u: goto L_08AFED88;
    case 654u: goto L_08AFED98;
    case 655u: goto L_08AFEDA4;
    case 656u: goto L_08AFEDAC;
    case 657u: goto L_08AFEDB4;
    case 658u: goto L_08AFEDCC;
    case 659u: goto L_08AFEE08;
    case 660u: goto L_08AFEE28;
    case 661u: goto L_08AFEE34;
    case 662u: goto L_08AFEE38;
    case 663u: goto L_08AFEE40;
    case 664u: goto L_08AFEE48;
    case 665u: goto L_08AFEE70;
    case 666u: goto L_08AFEE78;
    case 667u: goto L_08AFEE80;
    case 668u: goto L_08AFEE9C;
    case 669u: goto L_08AFEEB0;
    case 670u: goto L_08AFEED8;
    case 671u: goto L_08AFEEF4;
    case 672u: goto L_08AFEF08;
    case 673u: goto L_08AFEF18;
    case 674u: goto L_08AFEF38;
    case 675u: goto L_08AFEF74;
    case 676u: goto L_08AFEF9C;
    case 677u: goto L_08AFEFC0;
    case 678u: goto L_08AFEFEC;
    case 679u: goto L_08AFEFFC;
    case 680u: goto L_08AFF008;
    case 681u: goto L_08AFF018;
    case 682u: goto L_08AFF020;
    case 683u: goto L_08AFF034;
    case 684u: goto L_08AFF044;
    case 685u: goto L_08AFF054;
    case 686u: goto L_08AFF058;
    case 687u: goto L_08AFF064;
    case 688u: goto L_08AFF06C;
    case 689u: goto L_08AFF088;
    case 690u: goto L_08AFF098;
    case 691u: goto L_08AFF09C;
    case 692u: goto L_08AFF0C8;
    case 693u: goto L_08AFF0D8;
    case 694u: goto L_08AFF0E4;
    case 695u: goto L_08AFF0F4;
    case 696u: goto L_08AFF0FC;
    case 697u: goto L_08AFF104;
    case 698u: goto L_08AFF108;
    case 699u: goto L_08AFF114;
    case 700u: goto L_08AFF11C;
    case 701u: goto L_08AFF148;
    case 702u: goto L_08AFF158;
    case 703u: goto L_08AFF164;
    case 704u: goto L_08AFF16C;
    case 705u: goto L_08AFF178;
    case 706u: goto L_08AFF184;
    case 707u: goto L_08AFF18C;
    case 708u: goto L_08AFF190;
    case 709u: goto L_08AFF19C;
    case 710u: goto L_08AFF1A8;
    case 711u: goto L_08AFF1B8;
    case 712u: goto L_08AFF1C0;
    case 713u: goto L_08AFF1C8;
    case 714u: goto L_08AFF1DC;
    case 715u: goto L_08AFF1E0;
    case 716u: goto L_08AFF1E8;
    case 717u: goto L_08AFF1F4;
    case 718u: goto L_08AFF208;
    case 719u: goto L_08AFF210;
    case 720u: goto L_08AFF218;
    case 721u: goto L_08AFF220;
    case 722u: goto L_08AFF234;
    case 723u: goto L_08AFF260;
    case 724u: goto L_08AFF28C;
    case 725u: goto L_08AFF294;
    case 726u: goto L_08AFF29C;
    case 727u: goto L_08AFF2BC;
    case 728u: goto L_08AFF2D0;
    case 729u: goto L_08AFF2E4;
    case 730u: goto L_08AFF2F4;
    case 731u: goto L_08AFF300;
    case 732u: goto L_08AFF30C;
    case 733u: goto L_08AFF328;
    case 734u: goto L_08AFF334;
    case 735u: goto L_08AFF354;
    case 736u: goto L_08AFF36C;
    case 737u: goto L_08AFF37C;
    case 738u: goto L_08AFF384;
    case 739u: goto L_08AFF398;
    case 740u: goto L_08AFF3AC;
    case 741u: goto L_08AFF3BC;
    case 742u: goto L_08AFF3C8;
    case 743u: goto L_08AFF3D4;
    case 744u: goto L_08AFF3F0;
    case 745u: goto L_08AFF3FC;
    case 746u: goto L_08AFF420;
    case 747u: goto L_08AFF424;
    case 748u: goto L_08AFF440;
    case 749u: goto L_08AFF468;
    case 750u: goto L_08AFF488;
    case 751u: goto L_08AFF498;
    case 752u: goto L_08AFF4AC;
    case 753u: goto L_08AFF4B4;
    case 754u: goto L_08AFF4BC;
    case 755u: goto L_08AFF4C8;
    case 756u: goto L_08AFF4D8;
    case 757u: goto L_08AFF4E0;
    case 758u: goto L_08AFF4E8;
    case 759u: goto L_08AFF4F0;
    case 760u: goto L_08AFF4F8;
    case 761u: goto L_08AFF510;
    case 762u: goto L_08AFF54C;
    case 763u: goto L_08AFF56C;
    case 764u: goto L_08AFF578;
    case 765u: goto L_08AFF57C;
    case 766u: goto L_08AFF584;
    case 767u: goto L_08AFF58C;
    case 768u: goto L_08AFF5B4;
    case 769u: goto L_08AFF5BC;
    case 770u: goto L_08AFF5C4;
    case 771u: goto L_08AFF5E0;
    case 772u: goto L_08AFF5F4;
    case 773u: goto L_08AFF61C;
    case 774u: goto L_08AFF638;
    case 775u: goto L_08AFF64C;
    case 776u: goto L_08AFF65C;
    case 777u: goto L_08AFF67C;
    case 778u: goto L_08AFF6B0;
    case 779u: goto L_08AFF6B8;
    case 780u: goto L_08AFF6C0;
    case 781u: goto L_08AFF6C8;
    case 782u: goto L_08AFF6D8;
    case 783u: goto L_08AFF6E8;
    case 784u: goto L_08AFF6EC;
    case 785u: goto L_08AFF6F4;
    case 786u: goto L_08AFF710;
    case 787u: goto L_08AFF71C;
    case 788u: goto L_08AFF724;
    case 789u: goto L_08AFF73C;
    case 790u: goto L_08AFF744;
    case 791u: goto L_08AFF74C;
    case 792u: goto L_08AFF758;
    case 793u: goto L_08AFF768;
    case 794u: goto L_08AFF774;
    case 795u: goto L_08AFF77C;
    case 796u: goto L_08AFF798;
    case 797u: goto L_08AFF79C;
    case 798u: goto L_08AFF7A0;
    case 799u: goto L_08AFF7A4;
    case 800u: goto L_08AFF7B0;
    case 801u: goto L_08AFF7BC;
    case 802u: goto L_08AFF7CC;
    case 803u: goto L_08AFF7D8;
    case 804u: goto L_08AFF7E0;
    case 805u: goto L_08AFF7E8;
    case 806u: goto L_08AFF7F4;
    case 807u: goto L_08AFF800;
    case 808u: goto L_08AFF810;
    case 809u: goto L_08AFF814;
    case 810u: goto L_08AFF820;
    case 811u: goto L_08AFF824;
    case 812u: goto L_08AFF830;
    case 813u: goto L_08AFF83C;
    case 814u: goto L_08AFF848;
    case 815u: goto L_08AFF858;
    case 816u: goto L_08AFF85C;
    case 817u: goto L_08AFF868;
    case 818u: goto L_08AFF86C;
    case 819u: goto L_08AFF878;
    case 820u: goto L_08AFF884;
    case 821u: goto L_08AFF88C;
    case 822u: goto L_08AFF894;
    case 823u: goto L_08AFF8A0;
    case 824u: goto L_08AFF8AC;
    case 825u: goto L_08AFF8BC;
    case 826u: goto L_08AFF8D0;
    case 827u: goto L_08AFF8D4;
    case 828u: goto L_08AFF8E0;
    case 829u: goto L_08AFF8EC;
    case 830u: goto L_08AFF8F4;
    case 831u: goto L_08AFF900;
    case 832u: goto L_08AFF914;
    case 833u: goto L_08AFF91C;
    case 834u: goto L_08AFF928;
    case 835u: goto L_08AFF930;
    case 836u: goto L_08AFF934;
    case 837u: goto L_08AFF940;
    case 838u: goto L_08AFF944;
    case 839u: goto L_08AFF95C;
    case 840u: goto L_08AFF960;
    case 841u: goto L_08AFF96C;
    case 842u: goto L_08AFF974;
    case 843u: goto L_08AFF97C;
    case 844u: goto L_08AFF988;
    case 845u: goto L_08AFF99C;
    case 846u: goto L_08AFF9A0;
    case 847u: goto L_08AFF9AC;
    case 848u: goto L_08AFF9B8;
    case 849u: goto L_08AFF9C0;
    case 850u: goto L_08AFF9CC;
    case 851u: goto L_08AFF9E0;
    case 852u: goto L_08AFF9E8;
    case 853u: goto L_08AFF9F4;
    case 854u: goto L_08AFF9FC;
    case 855u: goto L_08AFFA00;
    case 856u: goto L_08AFFA0C;
    case 857u: goto L_08AFFA10;
    case 858u: goto L_08AFFA28;
    case 859u: goto L_08AFFA2C;
    case 860u: goto L_08AFFA38;
    case 861u: goto L_08AFFA40;
    case 862u: goto L_08AFFA48;
    case 863u: goto L_08AFFA50;
    case 864u: goto L_08AFFA54;
    case 865u: goto L_08AFFA7C;
    case 866u: goto L_08AFFAB8;
    case 867u: goto L_08AFFAC4;
    case 868u: goto L_08AFFAEC;
    case 869u: goto L_08AFFB08;
    case 870u: goto L_08AFFB10;
    case 871u: goto L_08AFFB20;
    case 872u: goto L_08AFFB2C;
    case 873u: goto L_08AFFB50;
    case 874u: goto L_08AFFB5C;
    case 875u: goto L_08AFFB6C;
    case 876u: goto L_08AFFB94;
    case 877u: goto L_08AFFB9C;
    case 878u: goto L_08AFFBB8;
    case 879u: goto L_08AFFBC0;
    case 880u: goto L_08AFFBCC;
    case 881u: goto L_08AFFBE0;
    case 882u: goto L_08AFFBFC;
    case 883u: goto L_08AFFC04;
    case 884u: goto L_08AFFC20;
    case 885u: goto L_08AFFC28;
    case 886u: goto L_08AFFC38;
    case 887u: goto L_08AFFC44;
    case 888u: goto L_08AFFC54;
    case 889u: goto L_08AFFC84;
    case 890u: goto L_08AFFCA8;
    case 891u: goto L_08AFFCB0;
    case 892u: goto L_08AFFCC0;
    case 893u: goto L_08AFFCCC;
    case 894u: goto L_08AFFCD8;
    case 895u: goto L_08AFFD00;
    case 896u: goto L_08AFFD28;
    case 897u: goto L_08AFFD3C;
    case 898u: goto L_08AFFD58;
    case 899u: goto L_08AFFD60;
    case 900u: goto L_08AFFD7C;
    case 901u: goto L_08AFFD84;
    case 902u: goto L_08AFFD90;
    case 903u: goto L_08AFFD9C;
    case 904u: goto L_08AFFDB8;
    case 905u: goto L_08AFFDC0;
    case 906u: goto L_08AFFDC8;
    case 907u: goto L_08AFFDD8;
    case 908u: goto L_08AFFE00;
    case 909u: goto L_08AFFE14;
    case 910u: goto L_08AFFE30;
    case 911u: goto L_08AFFE38;
    case 912u: goto L_08AFFE54;
    case 913u: goto L_08AFFE5C;
    case 914u: goto L_08AFFE64;
    case 915u: goto L_08AFFE70;
    case 916u: goto L_08AFFE80;
    case 917u: goto L_08AFFE8C;
    case 918u: goto L_08AFFEAC;
    case 919u: goto L_08AFFEE8;
    case 920u: goto L_08AFFEF4;
    case 921u: goto L_08AFFF1C;
    case 922u: goto L_08AFFF38;
    case 923u: goto L_08AFFF40;
    case 924u: goto L_08AFFF50;
    case 925u: goto L_08AFFF5C;
    case 926u: goto L_08AFFF80;
    case 927u: goto L_08AFFF8C;
    case 928u: goto L_08AFFF9C;
    case 929u: goto L_08AFFFC4;
    case 930u: goto L_08AFFFCC;
    case 931u: goto L_08AFFFE8;
    case 932u: goto L_08AFFFF0;
    case 933u: goto L_08AFFFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AFC000:
    ctx.gpr[31] = (0x08AFC008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFC008u) goto L_08AFC008;
    return;
L_08AFC008:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(40));
    goto L_08AFC00C;
L_08AFC00C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 930u, 0x08AFBF78u>(ctx, &aot_mem); return;
      }
      goto L_08AFC014;
    }
L_08AFC014:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC03C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[21];
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFC428;
      }
      goto L_08AFC07C;
    }
L_08AFC07C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFC290;
      }
      goto L_08AFC09C;
    }
L_08AFC09C:
    ctx.gpr[17] = (ctx.gpr[22] - ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AFC180;
      }
      goto L_08AFC0AC;
    }
L_08AFC0AC:
    ctx.gpr[17] = (ctx.gpr[22] - ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(43))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(46))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AFC0D4u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 918u, 0x08AFBE70u>(ctx, &aot_mem) && ctx.pc == 0x08AFC0D4u) goto L_08AFC0D4;
    return;
L_08AFC0D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC0F8;
      }
      goto L_08AFC0E4;
    }
L_08AFC0E4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AFC118;
      }
      goto L_08AFC0F8;
    }
L_08AFC0F8:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AFC108u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC108u) goto L_08AFC108;
    return;
L_08AFC108:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_08AFC118;
L_08AFC118:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[20]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC138;
      }
      goto L_08AFC128;
    }
L_08AFC128:
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFC138u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC138u) goto L_08AFC138;
    return;
L_08AFC138:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(49))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AFC158u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 918u, 0x08AFBE70u>(ctx, &aot_mem) && ctx.pc == 0x08AFC158u) goto L_08AFC158;
    return;
L_08AFC158:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[16];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC178;
      }
      goto L_08AFC168;
    }
L_08AFC168:
    ctx.gpr[6] = (ctx.gpr[21] - ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFC178u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC178u) goto L_08AFC178;
    return;
L_08AFC178:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC288;
      }
      goto L_08AFC180;
    }
L_08AFC180:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(59))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[23] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08AFC1A8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 918u, 0x08AFBE70u>(ctx, &aot_mem) && ctx.pc == 0x08AFC1A8u) goto L_08AFC1A8;
    return;
L_08AFC1A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC1CC;
      }
      goto L_08AFC1B8;
    }
L_08AFC1B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFC1EC;
      }
      goto L_08AFC1CC;
    }
L_08AFC1CC:
    ctx.gpr[6] = (ctx.gpr[21] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AFC1DCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC1DCu) goto L_08AFC1DC;
    return;
L_08AFC1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    goto L_08AFC1EC;
L_08AFC1EC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(62))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(65))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFC210u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 918u, 0x08AFBE70u>(ctx, &aot_mem) && ctx.pc == 0x08AFC210u) goto L_08AFC210;
    return;
L_08AFC210:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(104))))));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC22C;
      }
      goto L_08AFC220;
    }
L_08AFC220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AFC244;
      }
      goto L_08AFC22C;
    }
L_08AFC22C:
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AFC23Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC23Cu) goto L_08AFC23C;
    return;
L_08AFC23C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08AFC244;
L_08AFC244:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(68))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(71))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AFC268u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 918u, 0x08AFBE70u>(ctx, &aot_mem) && ctx.pc == 0x08AFC268u) goto L_08AFC268;
    return;
L_08AFC268:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(108))))));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC288;
      }
      goto L_08AFC278;
    }
L_08AFC278:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFC288u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC288u) goto L_08AFC288;
    return;
L_08AFC288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC428;
      }
      goto L_08AFC290;
    }
L_08AFC290:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (ctx.gpr[30] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[30] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08AFC2B8;
      }
      goto L_08AFC2A8;
    }
L_08AFC2A8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFC2C4;
      }
      goto L_08AFC2B8;
    }
L_08AFC2B8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (ctx.gpr[30] + ctx.gpr[4]);
    goto L_08AFC2C4;
L_08AFC2C4:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFC2EC;
      }
      goto L_08AFC2CC;
    }
L_08AFC2CC:
    ctx.gpr[31] = (0x08AFC2D4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFC2D4u) goto L_08AFC2D4;
    return;
L_08AFC2D4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC2EC;
      }
      goto L_08AFC2E0;
    }
L_08AFC2E0:
    ctx.gpr[31] = (0x08AFC2E8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08AFC2E8u) goto L_08AFC2E8;
    return;
L_08AFC2E8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08AFC2EC;
L_08AFC2EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(74))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(77))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFC314u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 918u, 0x08AFBE70u>(ctx, &aot_mem) && ctx.pc == 0x08AFC314u) goto L_08AFC314;
    return;
L_08AFC314:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112))))));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[16];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC340;
      }
      goto L_08AFC324;
    }
L_08AFC324:
    ctx.gpr[17] = (ctx.gpr[20] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFC338u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC338u) goto L_08AFC338;
    return;
L_08AFC338:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AFC340;
      }
      goto L_08AFC340;
    }
L_08AFC340:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(83))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AFC368u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 918u, 0x08AFBE70u>(ctx, &aot_mem) && ctx.pc == 0x08AFC368u) goto L_08AFC368;
    return;
L_08AFC368:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(116))))));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[16];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC384;
      }
      goto L_08AFC378;
    }
L_08AFC378:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFC3A0;
      }
      goto L_08AFC384;
    }
L_08AFC384:
    ctx.gpr[17] = (ctx.gpr[21] - ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFC398u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC398u) goto L_08AFC398;
    return;
L_08AFC398:
    ctx.gpr[16] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08AFC3A0;
L_08AFC3A0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(86))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFC3C4u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 918u, 0x08AFBE70u>(ctx, &aot_mem) && ctx.pc == 0x08AFC3C4u) goto L_08AFC3C4;
    return;
L_08AFC3C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(120))))));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC3E0;
      }
      goto L_08AFC3D4;
    }
L_08AFC3D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFC3FC;
      }
      goto L_08AFC3E0;
    }
L_08AFC3E0:
    ctx.gpr[16] = (ctx.gpr[17] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFC3F4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC3F4u) goto L_08AFC3F4;
    return;
L_08AFC3F4:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08AFC3FC;
L_08AFC3FC:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC418;
      }
      goto L_08AFC410;
    }
L_08AFC410:
    ctx.gpr[31] = (0x08AFC418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFC418u) goto L_08AFC418;
    return;
L_08AFC418:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AFC428;
L_08AFC428:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFC458:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFC4CC;
      }
      goto L_08AFC4AC;
    }
L_08AFC4AC:
    ctx.gpr[31] = (0x08AFC4B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFC4B4u) goto L_08AFC4B4;
    return;
L_08AFC4B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC4CC;
      }
      goto L_08AFC4C0;
    }
L_08AFC4C0:
    ctx.gpr[31] = (0x08AFC4C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08AFC4C8u) goto L_08AFC4C8;
    return;
L_08AFC4C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AFC4CC;
L_08AFC4CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFC508u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 918u, 0x08AFBE70u>(ctx, &aot_mem) && ctx.pc == 0x08AFC508u) goto L_08AFC508;
    return;
L_08AFC508:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC534;
      }
      goto L_08AFC518;
    }
L_08AFC518:
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFC52Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC52Cu) goto L_08AFC52C;
    return;
L_08AFC52C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AFC534;
      }
      goto L_08AFC534;
    }
L_08AFC534:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFC578;
      }
      goto L_08AFC558;
    }
L_08AFC558:
    ctx.gpr[31] = (0x08AFC560u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFC560u) goto L_08AFC560;
    return;
L_08AFC560:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC578;
      }
      goto L_08AFC56C;
    }
L_08AFC56C:
    ctx.gpr[31] = (0x08AFC574u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08AFC574u) goto L_08AFC574;
    return;
L_08AFC574:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AFC578;
L_08AFC578:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFC5B4u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 918u, 0x08AFBE70u>(ctx, &aot_mem) && ctx.pc == 0x08AFC5B4u) goto L_08AFC5B4;
    return;
L_08AFC5B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC5E0;
      }
      goto L_08AFC5C4;
    }
L_08AFC5C4:
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFC5D8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC5D8u) goto L_08AFC5D8;
    return;
L_08AFC5D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AFC5E0;
      }
      goto L_08AFC5E0;
    }
L_08AFC5E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFC624;
      }
      goto L_08AFC604;
    }
L_08AFC604:
    ctx.gpr[31] = (0x08AFC60Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFC60Cu) goto L_08AFC60C;
    return;
L_08AFC60C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC624;
      }
      goto L_08AFC618;
    }
L_08AFC618:
    ctx.gpr[31] = (0x08AFC620u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08AFC620u) goto L_08AFC620;
    return;
L_08AFC620:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AFC624;
L_08AFC624:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFC660u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 918u, 0x08AFBE70u>(ctx, &aot_mem) && ctx.pc == 0x08AFC660u) goto L_08AFC660;
    return;
L_08AFC660:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFC68C;
      }
      goto L_08AFC670;
    }
L_08AFC670:
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFC684u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFC684u) goto L_08AFC684;
    return;
L_08AFC684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AFC68C;
      }
      goto L_08AFC68C;
    }
L_08AFC68C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08AFC6B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (0u | 40u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[9] & 255u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFC724;
      }
      goto L_08AFC714;
    }
L_08AFC714:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFC730;
      }
      goto L_08AFC724;
    }
L_08AFC724:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_08AFC730;
L_08AFC730:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFC764;
      }
      goto L_08AFC738;
    }
L_08AFC738:
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
    ctx.gpr[5] = (ctx.gpr[20] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AFC74Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFC74Cu) goto L_08AFC74C;
    return;
L_08AFC74C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFC764;
      }
      goto L_08AFC758;
    }
L_08AFC758:
    ctx.gpr[31] = (0x08AFC760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08AFC760u) goto L_08AFC760;
    return;
L_08AFC760:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_08AFC764;
L_08AFC764:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC794;
      }
      goto L_08AFC774;
    }
L_08AFC774:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(40));
        goto L_08AFC78C;
    }
    goto L_08AFC780;
L_08AFC780:
    ctx.gpr[31] = (0x08AFC788u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08AFC458;
L_08AFC788:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(40));
    goto L_08AFC78C;
L_08AFC78C:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[17];
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08AFC774;
      }
      goto L_08AFC794;
    }
L_08AFC794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFC7C4;
      }
      goto L_08AFC7A4;
    }
L_08AFC7A4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC7B8;
      }
      goto L_08AFC7B0;
    }
L_08AFC7B0:
    ctx.gpr[31] = (0x08AFC7B8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AFC458;
L_08AFC7B8:
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFC7F8;
      }
      goto L_08AFC7C4;
    }
L_08AFC7C4:
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC7F4;
      }
      goto L_08AFC7D4;
    }
L_08AFC7D4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
        goto L_08AFC7EC;
    }
    goto L_08AFC7E0;
L_08AFC7E0:
    ctx.gpr[31] = (0x08AFC7E8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AFC458;
L_08AFC7E8:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08AFC7EC;
L_08AFC7EC:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08AFC7D4;
      }
      goto L_08AFC7F4;
    }
L_08AFC7F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFC7F8;
L_08AFC7F8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC830;
      }
      goto L_08AFC800;
    }
L_08AFC800:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC830;
      }
      goto L_08AFC80C;
    }
L_08AFC80C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
        goto L_08AFC824;
    }
    goto L_08AFC818;
L_08AFC818:
    ctx.gpr[31] = (0x08AFC820u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFC458;
L_08AFC820:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
    goto L_08AFC824;
L_08AFC824:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08AFC80C;
      }
      goto L_08AFC82C;
    }
L_08AFC82C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFC830;
L_08AFC830:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC8E4;
      }
      goto L_08AFC844;
    }
L_08AFC844:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08AFC8D4;
      }
      goto L_08AFC84C;
    }
L_08AFC84C:
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AFC87C;
      }
      goto L_08AFC858;
    }
L_08AFC858:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC87C;
      }
      goto L_08AFC860;
    }
L_08AFC860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC87C;
      }
      goto L_08AFC86C;
    }
L_08AFC86C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC87C;
      }
      goto L_08AFC874;
    }
L_08AFC874:
    ctx.gpr[31] = (0x08AFC87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFC87Cu) goto L_08AFC87C;
    return;
L_08AFC87C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC8A8;
      }
      goto L_08AFC884;
    }
L_08AFC884:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC8A8;
      }
      goto L_08AFC88C;
    }
L_08AFC88C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC8A8;
      }
      goto L_08AFC898;
    }
L_08AFC898:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC8A8;
      }
      goto L_08AFC8A0;
    }
L_08AFC8A0:
    ctx.gpr[31] = (0x08AFC8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFC8A8u) goto L_08AFC8A8;
    return;
L_08AFC8A8:
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
        goto L_08AFC8D8;
    }
    goto L_08AFC8B0;
L_08AFC8B0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFC8D4;
      }
      goto L_08AFC8B8;
    }
L_08AFC8B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
        goto L_08AFC8D8;
    }
    goto L_08AFC8C4;
L_08AFC8C4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
        goto L_08AFC8D8;
    }
    goto L_08AFC8CC;
L_08AFC8CC:
    ctx.gpr[31] = (0x08AFC8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFC8D4u) goto L_08AFC8D4;
    return;
L_08AFC8D4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
    goto L_08AFC8D8;
L_08AFC8D8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AFC844;
      }
      goto L_08AFC8E0;
    }
L_08AFC8E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFC8E4;
L_08AFC8E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC8F4;
      }
      goto L_08AFC8EC;
    }
L_08AFC8EC:
    ctx.gpr[31] = (0x08AFC8F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFC8F4u) goto L_08AFC8F4;
    return;
L_08AFC8F4:
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
    ctx.gpr[5] = (ctx.gpr[20] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
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
L_08AFC93C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 40u);
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[20] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFCB00;
      }
      goto L_08AFC990;
    }
L_08AFC990:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFC9C8;
      }
      goto L_08AFC998;
    }
L_08AFC998:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFC9B8;
      }
      goto L_08AFC9A4;
    }
L_08AFC9A4:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AFC9B0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AFC458;
L_08AFC9B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFC9B8;
L_08AFC9B8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFCB28;
      }
      goto L_08AFC9C8;
    }
L_08AFC9C8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-40));
      if (branch_taken) {
          goto L_08AFC9E4;
      }
      goto L_08AFC9D4;
    }
L_08AFC9D4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AFC9E0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08AFC458;
L_08AFC9E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFC9E4;
L_08AFC9E4:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08AFC9F8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AFC458;
L_08AFC9F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (ctx.gpr[18] - ctx.gpr[17]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCA6C;
      }
      goto L_08AFCA1C;
    }
L_08AFCA1C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-40));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08AFCA44u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_08AFCD7C;
L_08AFCA44:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AFCA50u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08AFCD7C;
L_08AFCA50:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08AFCA5Cu);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
    goto L_08AFCD7C;
L_08AFCA5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AFCA1C;
      }
      goto L_08AFCA6C;
    }
L_08AFCA6C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08AFCA88u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_08AFCD7C;
L_08AFCA88:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AFCA94u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    goto L_08AFCD7C;
L_08AFCA94:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08AFCAA0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_08AFCD7C;
L_08AFCAA0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCABC;
      }
      goto L_08AFCAAC;
    }
L_08AFCAAC:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_08AFCAC0;
    }
    goto L_08AFCAB4;
L_08AFCAB4:
    ctx.gpr[31] = (0x08AFCABCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFCABCu) goto L_08AFCABC;
    return;
L_08AFCABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08AFCAC0;
L_08AFCAC0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCAD8;
      }
      goto L_08AFCAC8;
    }
L_08AFCAC8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_08AFCADC;
    }
    goto L_08AFCAD0;
L_08AFCAD0:
    ctx.gpr[31] = (0x08AFCAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFCAD8u) goto L_08AFCAD8;
    return;
L_08AFCAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08AFCADC;
L_08AFCADC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCAF4;
      }
      goto L_08AFCAE4;
    }
L_08AFCAE4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCAF4;
      }
      goto L_08AFCAEC;
    }
L_08AFCAEC:
    ctx.gpr[31] = (0x08AFCAF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFCAF4u) goto L_08AFCAF4;
    return;
L_08AFCAF4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFCB28;
      }
      goto L_08AFCB00;
    }
L_08AFCB00:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08AFCB20u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFC6B4;
L_08AFCB20:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[20]);
    goto L_08AFCB28;
L_08AFCB28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFCB48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[17] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AFCC18;
      }
      goto L_08AFCB8C;
    }
L_08AFCB8C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFCBC0;
      }
      goto L_08AFCB94;
    }
L_08AFCB94:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCBB0;
      }
      goto L_08AFCBA0;
    }
L_08AFCBA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFCBB0;
L_08AFCBB0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AFCD24;
      }
      goto L_08AFCBC0;
    }
L_08AFCBC0:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFCBD8;
      }
      goto L_08AFCBCC;
    }
L_08AFCBCC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFCBD8;
L_08AFCBD8:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCC08;
      }
      goto L_08AFCBF8;
    }
L_08AFCBF8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[31] = (0x08AFCC08u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCC08u) goto L_08AFCC08;
    return;
L_08AFCC08:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AFCD24;
      }
      goto L_08AFCC18;
    }
L_08AFCC18:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFCC4C;
      }
      goto L_08AFCC3C;
    }
L_08AFCC3C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AFCC58;
      }
      goto L_08AFCC4C;
    }
L_08AFCC4C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[5]);
    goto L_08AFCC58;
L_08AFCC58:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFCC84;
      }
      goto L_08AFCC60;
    }
L_08AFCC60:
    ctx.gpr[31] = (0x08AFCC68u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFCC68u) goto L_08AFCC68;
    return;
L_08AFCC68:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AFCC84;
    }
    goto L_08AFCC74;
L_08AFCC74:
    ctx.gpr[31] = (0x08AFCC7Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08AFCC7Cu) goto L_08AFCC7C;
    return;
L_08AFCC7C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFCC84;
L_08AFCC84:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[6];
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFCC9C;
      }
      goto L_08AFCC90;
    }
L_08AFCC90:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AFCCBC;
      }
      goto L_08AFCC9C;
    }
L_08AFCC9C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AFCCB0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCCB0u) goto L_08AFCCB0;
    return;
L_08AFCCB0:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08AFCCBC;
L_08AFCCBC:
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[22] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AFCCD0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08AFCCD0u) goto L_08AFCCD0;
    return;
L_08AFCCD0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AFCCE8;
      }
      goto L_08AFCCDC;
    }
L_08AFCCDC:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFCD00;
      }
      goto L_08AFCCE8;
    }
L_08AFCCE8:
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFCCF8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCCF8u) goto L_08AFCCF8;
    return;
L_08AFCCF8:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFCD00;
L_08AFCD00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCD10;
      }
      goto L_08AFCD08;
    }
L_08AFCD08:
    ctx.gpr[31] = (0x08AFCD10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFCD10u) goto L_08AFCD10;
    return;
L_08AFCD10:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[21] + ctx.gpr[19]);
    goto L_08AFCD24;
L_08AFCD24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFCD4C:
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFCD70:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFCD7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFCF38;
      }
      goto L_08AFCDA4;
    }
L_08AFCDA4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCE5C;
      }
      goto L_08AFCDC8;
    }
L_08AFCDC8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFCDF8;
      }
      goto L_08AFCDD8;
    }
L_08AFCDD8:
    ctx.gpr[31] = (0x08AFCDE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFCDE0u) goto L_08AFCDE0;
    return;
L_08AFCDE0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCDF8;
      }
      goto L_08AFCDEC;
    }
L_08AFCDEC:
    ctx.gpr[31] = (0x08AFCDF4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08AFCDF4u) goto L_08AFCDF4;
    return;
L_08AFCDF4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AFCDF8;
L_08AFCDF8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFCE18u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 918u, 0x08AFBE70u>(ctx, &aot_mem) && ctx.pc == 0x08AFCE18u) goto L_08AFCE18;
    return;
L_08AFCE18:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFCE38;
      }
      goto L_08AFCE28;
    }
L_08AFCE28:
    ctx.gpr[6] = (ctx.gpr[19] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFCE38u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCE38u) goto L_08AFCE38;
    return;
L_08AFCE38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCE4C;
      }
      goto L_08AFCE44;
    }
L_08AFCE44:
    ctx.gpr[31] = (0x08AFCE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFCE4Cu) goto L_08AFCE4C;
    return;
L_08AFCE4C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFCF2C;
      }
      goto L_08AFCE5C;
    }
L_08AFCE5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFCEA4;
      }
      goto L_08AFCE74;
    }
L_08AFCE74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCE9C;
      }
      goto L_08AFCE88;
    }
L_08AFCE88:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] - ctx.gpr[7]);
    ctx.gpr[31] = (0x08AFCE9Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCE9Cu) goto L_08AFCE9C;
    return;
L_08AFCE9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCF2C;
      }
      goto L_08AFCEA4;
    }
L_08AFCEA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFCED4;
      }
      goto L_08AFCEC0;
    }
L_08AFCEC0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[31] = (0x08AFCED4u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCED4u) goto L_08AFCED4;
    return;
L_08AFCED4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFCF0Cu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 918u, 0x08AFBE70u>(ctx, &aot_mem) && ctx.pc == 0x08AFCF0Cu) goto L_08AFCF0C;
    return;
L_08AFCF0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFCF2C;
      }
      goto L_08AFCF1C;
    }
L_08AFCF1C:
    ctx.gpr[6] = (ctx.gpr[19] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFCF2Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFCF2Cu) goto L_08AFCF2C;
    return;
L_08AFCF2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AFCF38;
L_08AFCF38:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFCF5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AFD258;
      }
      goto L_08AFCF98;
    }
L_08AFCF98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[20] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
        goto L_08AFD140;
    }
    goto L_08AFCFC0;
L_08AFCFC0:
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AFD090;
      }
      goto L_08AFCFE4;
    }
L_08AFCFE4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[22] - ctx.gpr[20]);
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AFD010u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 920u, 0x08AFBE8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFD010u) goto L_08AFD010;
    return;
L_08AFD010:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[21];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFD02C;
      }
      goto L_08AFD020;
    }
L_08AFD020:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFD044;
      }
      goto L_08AFD02C;
    }
L_08AFD02C:
    ctx.gpr[6] = (ctx.gpr[22] - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AFD03Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFD03Cu) goto L_08AFD03C;
    return;
L_08AFD03C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
    goto L_08AFD044;
L_08AFD044:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[19] - ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFD068;
      }
      goto L_08AFD058;
    }
L_08AFD058:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFD068u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFD068u) goto L_08AFD068;
    return;
L_08AFD068:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AFD088;
      }
      goto L_08AFD078;
    }
L_08AFD078:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AFD07C;
L_08AFD07C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
        goto L_08AFD07C;
    }
    goto L_08AFD088;
L_08AFD088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD138;
      }
      goto L_08AFD090;
    }
L_08AFD090:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
      if (branch_taken) {
          goto L_08AFD0C0;
      }
      goto L_08AFD0AC;
    }
L_08AFD0AC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AFD0AC;
      }
      goto L_08AFD0BC;
    }
L_08AFD0BC:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFD0C0;
L_08AFD0C0:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[20] = (ctx.gpr[22] + ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFD0ECu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 920u, 0x08AFBE8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFD0ECu) goto L_08AFD0EC;
    return;
L_08AFD0EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFD108;
      }
      goto L_08AFD0FC;
    }
L_08AFD0FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AFD120;
      }
      goto L_08AFD108;
    }
L_08AFD108:
    ctx.gpr[6] = (ctx.gpr[19] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFD118u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFD118u) goto L_08AFD118;
    return;
L_08AFD118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08AFD120;
L_08AFD120:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AFD138;
      }
      goto L_08AFD128;
    }
L_08AFD128:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AFD12C;
L_08AFD12C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[17] != ctx.gpr[19]) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
        goto L_08AFD12C;
    }
    goto L_08AFD138;
L_08AFD138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD258;
      }
      goto L_08AFD140;
    }
L_08AFD140:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AFD17C;
      }
      goto L_08AFD16C;
    }
L_08AFD16C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFD188;
      }
      goto L_08AFD17C;
    }
L_08AFD17C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08AFD188;
L_08AFD188:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFD1B4;
      }
      goto L_08AFD190;
    }
L_08AFD190:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[31] = (0x08AFD19Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFD19Cu) goto L_08AFD19C;
    return;
L_08AFD19C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08AFD1B4;
      }
      goto L_08AFD1A8;
    }
L_08AFD1A8:
    ctx.gpr[31] = (0x08AFD1B0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08AFD1B0u) goto L_08AFD1B0;
    return;
L_08AFD1B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AFD1B4;
L_08AFD1B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD1CC;
      }
      goto L_08AFD1C0;
    }
L_08AFD1C0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08AFD1E4;
      }
      goto L_08AFD1CC;
    }
L_08AFD1CC:
    ctx.gpr[21] = (ctx.gpr[17] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFD1DCu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFD1DCu) goto L_08AFD1DC;
    return;
L_08AFD1DC:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08AFD1E4;
L_08AFD1E4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AFD204;
    }
    goto L_08AFD1EC;
L_08AFD1EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AFD1EC;
      }
      goto L_08AFD200;
    }
L_08AFD200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFD204;
L_08AFD204:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFD218;
      }
      goto L_08AFD20C;
    }
L_08AFD20C:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFD234;
      }
      goto L_08AFD218;
    }
L_08AFD218:
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFD22Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFD22Cu) goto L_08AFD22C;
    return;
L_08AFD22C:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFD234;
L_08AFD234:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFD244;
      }
      goto L_08AFD23C;
    }
L_08AFD23C:
    ctx.gpr[31] = (0x08AFD244u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFD244u) goto L_08AFD244;
    return;
L_08AFD244:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AFD258;
L_08AFD258:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD284:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFD314;
      }
      goto L_08AFD2A4;
    }
L_08AFD2A4:
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[17]);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFD2C0;
      }
      goto L_08AFD2B4;
    }
L_08AFD2B4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFD2B4;
      }
      goto L_08AFD2C0;
    }
L_08AFD2C0:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AFD2CCu);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AFD420;
L_08AFD2CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AFD2F0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08AFD434;
L_08AFD2F0:
    ctx.gpr[31] = (0x08AFD2F8u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AFD420;
L_08AFD2F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[31] = (0x08AFD314u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AFD990;
L_08AFD314:
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
L_08AFD32C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFD39C;
      }
      goto L_08AFD340;
    }
L_08AFD340:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AFD344;
L_08AFD344:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFD358;
    }
    goto L_08AFD350;
L_08AFD350:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD418;
      }
      goto L_08AFD358;
    }
L_08AFD358:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFD36C;
    }
    goto L_08AFD364;
L_08AFD364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD418;
      }
      goto L_08AFD36C;
    }
L_08AFD36C:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFD380;
    }
    goto L_08AFD378;
L_08AFD378:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD418;
      }
      goto L_08AFD380;
    }
L_08AFD380:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFD394;
      }
      goto L_08AFD38C;
    }
L_08AFD38C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD418;
      }
      goto L_08AFD394;
    }
L_08AFD394:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFD344;
      }
      goto L_08AFD39C;
    }
L_08AFD39C:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFD3C0;
      }
      goto L_08AFD3AC;
    }
L_08AFD3AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFD418;
      }
      goto L_08AFD3B4;
    }
L_08AFD3B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFD404;
      }
      goto L_08AFD3BC;
    }
L_08AFD3BC:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    goto L_08AFD3C0;
L_08AFD3C0:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFD3E8;
      }
      goto L_08AFD3C8;
    }
L_08AFD3C8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFD418;
      }
      goto L_08AFD3D0;
    }
L_08AFD3D0:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFD3E8;
    }
    goto L_08AFD3E0;
L_08AFD3E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD418;
      }
      goto L_08AFD3E8;
    }
L_08AFD3E8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFD400;
    }
    goto L_08AFD3F8;
L_08AFD3F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD418;
      }
      goto L_08AFD400;
    }
L_08AFD400:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AFD404;
L_08AFD404:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFD418;
      }
      goto L_08AFD410;
    }
L_08AFD410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD418;
      }
      goto L_08AFD418;
    }
L_08AFD418:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD420:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD434:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[8]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AFD584;
      }
      goto L_08AFD474;
    }
L_08AFD474:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    goto L_08AFD480;
L_08AFD480:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
      if (branch_taken) {
          goto L_08AFD4C4;
      }
      goto L_08AFD488;
    }
L_08AFD488:
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AFD4E4;
      }
      goto L_08AFD4BC;
    }
L_08AFD4BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFD518;
      }
      goto L_08AFD4C4;
    }
L_08AFD4C4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFD4DCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_08AFD5AC;
L_08AFD4DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD584;
      }
      goto L_08AFD4E4;
    }
L_08AFD4E4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
        goto L_08AFD4FC;
    }
    goto L_08AFD4F4;
L_08AFD4F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFD540;
      }
      goto L_08AFD4FC;
    }
L_08AFD4FC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD510;
      }
      goto L_08AFD508;
    }
L_08AFD508:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFD540;
      }
      goto L_08AFD510;
    }
L_08AFD510:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFD540;
      }
      goto L_08AFD518;
    }
L_08AFD518:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFD52C;
      }
      goto L_08AFD524;
    }
L_08AFD524:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFD540;
      }
      goto L_08AFD52C;
    }
L_08AFD52C:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08AFD540;
    }
    goto L_08AFD538;
L_08AFD538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFD540;
      }
      goto L_08AFD540;
    }
L_08AFD540:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFD554u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_08AFD8D8;
L_08AFD554:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFD570u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_08AFD434;
L_08AFD570:
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[16]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AFD480;
      }
      goto L_08AFD580;
    }
L_08AFD580:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08AFD584;
L_08AFD584:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD5AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFD5C4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AFD5D0;
L_08AFD5C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD5D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[8]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFD60Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFD6D0;
L_08AFD60C:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
      if (branch_taken) {
          goto L_08AFD674;
      }
      goto L_08AFD61C;
    }
L_08AFD61C:
    ctx.gpr[19] = (ctx.gpr[17] - ctx.gpr[16]);
    goto L_08AFD620;
L_08AFD620:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD664;
      }
      goto L_08AFD638;
    }
L_08AFD638:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AFD660u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08AFD770;
L_08AFD660:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    goto L_08AFD664;
L_08AFD664:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD620;
      }
      goto L_08AFD674;
    }
L_08AFD674:
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD6B0;
      }
      goto L_08AFD688;
    }
L_08AFD688:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33))))));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFD690;
L_08AFD690:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFD6A0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08AFD88C;
L_08AFD6A0:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AFD690;
      }
      goto L_08AFD6B0;
    }
L_08AFD6B0:
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
L_08AFD6D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFD754;
      }
      goto L_08AFD704;
    }
L_08AFD704:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AFD728;
L_08AFD728:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AFD740u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    goto L_08AFD770;
L_08AFD740:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFD754;
      }
      goto L_08AFD748;
    }
L_08AFD748:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFD728;
      }
      goto L_08AFD754;
    }
L_08AFD754:
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
L_08AFD770:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[7] & 255u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFD7E4;
      }
      goto L_08AFD794;
    }
L_08AFD794:
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD7BC;
      }
      goto L_08AFD7B8;
    }
L_08AFD7B8:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    goto L_08AFD7BC;
L_08AFD7BC:
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD794;
      }
      goto L_08AFD7E4;
    }
L_08AFD7E4:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AFD800;
      }
      goto L_08AFD7EC;
    }
L_08AFD7EC:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-1)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    goto L_08AFD800;
L_08AFD800:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08AFD830;
L_08AFD830:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AFD880;
      }
      goto L_08AFD838;
    }
L_08AFD838:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08AFD880;
      }
      goto L_08AFD84C;
    }
L_08AFD84C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[9] >> 31u);
    ctx.gpr[2] = (ctx.gpr[10] | 0u);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFD830;
      }
      goto L_08AFD880;
    }
L_08AFD880:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD88C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-1)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[8] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFD8CCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AFD770;
L_08AFD8CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD8D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_08AFD8FC;
L_08AFD8FC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD91C;
      }
      goto L_08AFD904;
    }
L_08AFD904:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD904;
      }
      goto L_08AFD91C;
    }
L_08AFD91C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD950;
      }
      goto L_08AFD934;
    }
L_08AFD934:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD934;
      }
      goto L_08AFD950;
    }
L_08AFD950:
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD984;
      }
      goto L_08AFD95C;
    }
L_08AFD95C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AFD8FC;
      }
      goto L_08AFD984;
    }
L_08AFD984:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFD990:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
      if (branch_taken) {
          goto L_08AFD9EC;
      }
      goto L_08AFD9B8;
    }
L_08AFD9B8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AFD9C8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AFDA0C;
L_08AFD9C8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFD9E4u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AFDB7C;
L_08AFD9E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFD9F8;
      }
      goto L_08AFD9EC;
    }
L_08AFD9EC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AFD9F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AFDA0C;
L_08AFD9F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDA0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFDA4C;
      }
      goto L_08AFDA44;
    }
L_08AFDA44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDAEC;
      }
      goto L_08AFDA4C;
    }
L_08AFDA4C:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AFDAEC;
      }
      goto L_08AFDA58;
    }
L_08AFDA58:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    goto L_08AFDA64;
L_08AFDA64:
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFDAC4;
      }
      goto L_08AFDA88;
    }
L_08AFDA88:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AFDA9Cu);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21))))));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 918u, 0x08AFBE70u>(ctx, &aot_mem) && ctx.pc == 0x08AFDA9Cu) goto L_08AFDA9C;
    return;
L_08AFDA9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
      if (branch_taken) {
          goto L_08AFDABC;
      }
      goto L_08AFDAAC;
    }
L_08AFDAAC:
    ctx.gpr[4] = (ctx.gpr[23] - ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFDABCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFDABCu) goto L_08AFDABC;
    return;
L_08AFDABC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08AFDAD4;
      }
      goto L_08AFDAC4;
    }
L_08AFDAC4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[31] = (0x08AFDAD4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AFDB18;
L_08AFDAD4:
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AFDA64;
      }
      goto L_08AFDAE0;
    }
L_08AFDAE0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_08AFDAEC;
L_08AFDAEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDB18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDB70;
      }
      goto L_08AFDB48;
    }
L_08AFDB48:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AFDB4C;
L_08AFDB4C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08AFDB4C;
    }
    goto L_08AFDB70;
L_08AFDB70:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDB7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AFDBC4;
      }
      goto L_08AFDBA4;
    }
L_08AFDBA4:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    goto L_08AFDBA8;
L_08AFDBA8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFDBB8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08AFDB18;
L_08AFDBB8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AFDBA8;
      }
      goto L_08AFDBC4;
    }
L_08AFDBC4:
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
L_08AFDBDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDBF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFDC48;
      }
      goto L_08AFDC08;
    }
L_08AFDC08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    goto L_08AFDC10;
L_08AFDC10:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDC3C;
      }
      goto L_08AFDC2C;
    }
L_08AFDC2C:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFDC40;
      }
      goto L_08AFDC3C;
    }
L_08AFDC3C:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08AFDC40;
L_08AFDC40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AFDC10;
      }
      goto L_08AFDC48;
    }
L_08AFDC48:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDC50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFDCC0;
      }
      goto L_08AFDC64;
    }
L_08AFDC64:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AFDC68;
L_08AFDC68:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFDC7C;
    }
    goto L_08AFDC74;
L_08AFDC74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFDD3C;
      }
      goto L_08AFDC7C;
    }
L_08AFDC7C:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFDC90;
    }
    goto L_08AFDC88;
L_08AFDC88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFDD3C;
      }
      goto L_08AFDC90;
    }
L_08AFDC90:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFDCA4;
    }
    goto L_08AFDC9C;
L_08AFDC9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFDD3C;
      }
      goto L_08AFDCA4;
    }
L_08AFDCA4:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AFDCB8;
      }
      goto L_08AFDCB0;
    }
L_08AFDCB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFDD3C;
      }
      goto L_08AFDCB8;
    }
L_08AFDCB8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFDC68;
      }
      goto L_08AFDCC0;
    }
L_08AFDCC0:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFDCE4;
      }
      goto L_08AFDCD0;
    }
L_08AFDCD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFDD3C;
      }
      goto L_08AFDCD8;
    }
L_08AFDCD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFDD28;
      }
      goto L_08AFDCE0;
    }
L_08AFDCE0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    goto L_08AFDCE4;
L_08AFDCE4:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFDD0C;
      }
      goto L_08AFDCEC;
    }
L_08AFDCEC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFDD3C;
      }
      goto L_08AFDCF4;
    }
L_08AFDCF4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFDD0C;
    }
    goto L_08AFDD04;
L_08AFDD04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFDD3C;
      }
      goto L_08AFDD0C;
    }
L_08AFDD0C:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AFDD24;
    }
    goto L_08AFDD1C;
L_08AFDD1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFDD3C;
      }
      goto L_08AFDD24;
    }
L_08AFDD24:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AFDD28;
L_08AFDD28:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFDD3C;
      }
      goto L_08AFDD34;
    }
L_08AFDD34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFDD3C;
      }
      goto L_08AFDD3C;
    }
L_08AFDD3C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDD44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFDD8C;
      }
      goto L_08AFDD58;
    }
L_08AFDD58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08AFDD5C;
L_08AFDD5C:
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDD7C;
      }
      goto L_08AFDD78;
    }
L_08AFDD78:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08AFDD7C;
L_08AFDD7C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDD5C;
      }
      goto L_08AFDD8C;
    }
L_08AFDD8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDD94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFDDA8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AFDD44;
L_08AFDDA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDDC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AFDDDCu);
    ctx.gpr[4] = (0u | 11120u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AFDDDCu) goto L_08AFDDDC;
    return;
L_08AFDDDC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDDF4;
      }
      goto L_08AFDDE8;
    }
L_08AFDDE8:
    ctx.gpr[31] = (0x08AFDDF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 116u, 0x08950A0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFDDF0u) goto L_08AFDDF0;
    return;
L_08AFDDF0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AFDDF4;
L_08AFDDF4:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08AFDE00u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-20156), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 261u, 0x08A2956Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFDE00u) goto L_08AFDE00;
    return;
L_08AFDE00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[31] = (0x08AFDE0Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 259u, 0x08A29554u>(ctx, &aot_mem) && ctx.pc == 0x08AFDE0Cu) goto L_08AFDE0C;
    return;
L_08AFDE0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDE20:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDE28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AFDE74;
      }
      goto L_08AFDE38;
    }
L_08AFDE38:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-20152));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFDE60;
      }
      goto L_08AFDE44;
    }
L_08AFDE44:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-17236));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AFDE60;
      }
      goto L_08AFDE54;
    }
L_08AFDE54:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-13268));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_08AFDE60;
L_08AFDE60:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDE74;
      }
      goto L_08AFDE6C;
    }
L_08AFDE6C:
    ctx.gpr[31] = (0x08AFDE74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFDE74u) goto L_08AFDE74;
    return;
L_08AFDE74:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDE80:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08AFDE90;
L_08AFDE90:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AFDEBC;
      }
      goto L_08AFDE9C;
    }
L_08AFDE9C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDEB4;
      }
      goto L_08AFDEA4;
    }
L_08AFDEA4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFDEBC;
      }
      goto L_08AFDEB4;
    }
L_08AFDEB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFDF38;
      }
      goto L_08AFDEBC;
    }
L_08AFDEBC:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFDE90;
      }
      goto L_08AFDED8;
    }
L_08AFDED8:
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
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08AFDF38;
L_08AFDF38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDF40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 96u);
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
          goto L_08AFDF7C;
      }
      goto L_08AFDF78;
    }
L_08AFDF78:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08AFDF7C;
L_08AFDF7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDF84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDFA0:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[7] = (32768u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 31u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFDFC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 3248u);
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
L_08AFDFF4:
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
L_08AFE010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE064:
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
L_08AFE080:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE088:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE090:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE098:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE0A0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE0A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE0B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE0B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE0C0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE0C8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE0D0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE0D8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE0E0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE0E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE0F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE0F8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE100:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE108:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE110:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE13C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE144:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08AFE154;
L_08AFE154:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AFE180;
      }
      goto L_08AFE160;
    }
L_08AFE160:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE178;
      }
      goto L_08AFE168;
    }
L_08AFE168:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFE180;
      }
      goto L_08AFE178;
    }
L_08AFE178:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFE210;
      }
      goto L_08AFE180;
    }
L_08AFE180:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE154;
      }
      goto L_08AFE19C;
    }
L_08AFE19C:
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
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08AFE210;
L_08AFE210:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE218:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 1760u);
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
          goto L_08AFE254;
      }
      goto L_08AFE250;
    }
L_08AFE250:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08AFE254;
L_08AFE254:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE25C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 1760u);
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
L_08AFE288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1760u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE2A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08AFE2CCu);
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AFE2CCu) goto L_08AFE2CC;
    return;
L_08AFE2CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE2D8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-19560));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE308:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08AFE358;
      }
      goto L_08AFE338;
    }
L_08AFE338:
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AFE358;
      }
      goto L_08AFE358;
    }
L_08AFE358:
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    jump_target = ctx.gpr[11];
    ctx.gpr[31] = (0x08AFE370u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AFE370u) goto L_08AFE370;
    return;
L_08AFE370:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE37C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE390:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFE3DC;
      }
      goto L_08AFE3B0;
    }
L_08AFE3B0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFE3C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AFE390;
L_08AFE3C0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFE3D4;
      }
      goto L_08AFE3CC;
    }
L_08AFE3CC:
    ctx.gpr[31] = (0x08AFE3D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFE3D4u) goto L_08AFE3D4;
    return;
L_08AFE3D4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AFE3B0;
      }
      goto L_08AFE3DC;
    }
L_08AFE3DC:
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
L_08AFE3F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFE440;
      }
      goto L_08AFE414;
    }
L_08AFE414:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFE424u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AFE3F4;
L_08AFE424:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFE438;
      }
      goto L_08AFE430;
    }
L_08AFE430:
    ctx.gpr[31] = (0x08AFE438u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFE438u) goto L_08AFE438;
    return;
L_08AFE438:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AFE414;
      }
      goto L_08AFE440;
    }
L_08AFE440:
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
L_08AFE458:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFE4AC;
      }
      goto L_08AFE478;
    }
L_08AFE478:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    goto L_08AFE480;
L_08AFE480:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
        goto L_08AFE4A0;
    }
    goto L_08AFE490;
L_08AFE490:
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFE4A4;
      }
      goto L_08AFE4A0;
    }
L_08AFE4A0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_08AFE4A4;
L_08AFE4A4:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
        goto L_08AFE480;
    }
    goto L_08AFE4AC;
L_08AFE4AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] ^ ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AFE4E8;
      }
      goto L_08AFE4C8;
    }
L_08AFE4C8:
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE578;
      }
      goto L_08AFE4E8;
    }
L_08AFE4E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_08AFE50C;
      }
      goto L_08AFE500;
    }
L_08AFE500:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08AFE50C;
L_08AFE50C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08AFE528u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 39u, 0x08B002DCu>(ctx, &aot_mem) && ctx.pc == 0x08AFE528u) goto L_08AFE528;
    return;
L_08AFE528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFE550;
      }
      goto L_08AFE538;
    }
L_08AFE538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFE550;
      }
      goto L_08AFE548;
    }
L_08AFE548:
    ctx.gpr[31] = (0x08AFE550u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFE550u) goto L_08AFE550;
    return;
L_08AFE550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE574;
      }
      goto L_08AFE55C;
    }
L_08AFE55C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AFE574;
      }
      goto L_08AFE56C;
    }
L_08AFE56C:
    ctx.gpr[31] = (0x08AFE574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFE574u) goto L_08AFE574;
    return;
L_08AFE574:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AFE578;
L_08AFE578:
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE588:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
        goto L_08AFE5F8;
    }
    goto L_08AFE5BC;
L_08AFE5BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08AFE5C8;
L_08AFE5C8:
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
        goto L_08AFE5E8;
    }
    goto L_08AFE5D8;
L_08AFE5D8:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFE5EC;
      }
      goto L_08AFE5E8;
    }
L_08AFE5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AFE5EC;
L_08AFE5EC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08AFE5C8;
    }
    goto L_08AFE5F4;
L_08AFE5F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    goto L_08AFE5F8;
L_08AFE5F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
        goto L_08AFE648;
    }
    goto L_08AFE60C;
L_08AFE60C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08AFE618;
L_08AFE618:
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08AFE638;
    }
    goto L_08AFE628;
L_08AFE628:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFE63C;
      }
      goto L_08AFE638;
    }
L_08AFE638:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AFE63C;
L_08AFE63C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08AFE618;
    }
    goto L_08AFE644;
L_08AFE644:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    goto L_08AFE648;
L_08AFE648:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AFE6A0;
      }
      goto L_08AFE674;
    }
L_08AFE674:
    ctx.gpr[31] = (0x08AFE67Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x08AFE67Cu) goto L_08AFE67C;
    return;
L_08AFE67C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AFE674;
      }
      goto L_08AFE69C;
    }
L_08AFE69C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AFE6A0;
L_08AFE6A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08AFE740;
      }
      goto L_08AFE6D4;
    }
L_08AFE6D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AFE744;
    }
    goto L_08AFE6F4;
L_08AFE6F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE7C4;
      }
      goto L_08AFE700;
    }
L_08AFE700:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08AFE714u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AFE9C0;
L_08AFE714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08AFE7C4;
      }
      goto L_08AFE740;
    }
L_08AFE740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AFE744;
L_08AFE744:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08AFE7C4;
      }
      goto L_08AFE75C;
    }
L_08AFE75C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AFE76Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x08AFE76Cu) goto L_08AFE76C;
    return;
L_08AFE76C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08AFE788u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    goto L_08AFF67C;
L_08AFE788:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AFE7A0;
    }
    goto L_08AFE794;
L_08AFE794:
    ctx.gpr[31] = (0x08AFE79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFE79Cu) goto L_08AFE79C;
    return;
L_08AFE79C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFE7A0;
L_08AFE7A0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE75C;
      }
      goto L_08AFE7C4;
    }
L_08AFE7C4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE7E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AFE844;
      }
      goto L_08AFE814;
    }
L_08AFE814:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE8F4;
      }
      goto L_08AFE81C;
    }
L_08AFE81C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE844;
      }
      goto L_08AFE824;
    }
L_08AFE824:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE8F4;
      }
      goto L_08AFE844;
    }
L_08AFE844:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08AFE858u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFE858u) goto L_08AFE858;
    return;
L_08AFE858:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFE888;
      }
      goto L_08AFE86C;
    }
L_08AFE86C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08AFE87Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08AFE87Cu) goto L_08AFE87C;
    return;
L_08AFE87C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AFE888;
L_08AFE888:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE8A4;
      }
      goto L_08AFE894;
    }
L_08AFE894:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFE8A4;
L_08AFE8A4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFE8DC;
      }
      goto L_08AFE8C4;
    }
L_08AFE8C4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AFE97C;
      }
      goto L_08AFE8DC;
    }
L_08AFE8DC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AFE97C;
      }
      goto L_08AFE8EC;
    }
L_08AFE8EC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AFE97C;
      }
      goto L_08AFE8F4;
    }
L_08AFE8F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08AFE908u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFE908u) goto L_08AFE908;
    return;
L_08AFE908:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFE938;
      }
      goto L_08AFE91C;
    }
L_08AFE91C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08AFE92Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08AFE92Cu) goto L_08AFE92C;
    return;
L_08AFE92C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AFE938;
L_08AFE938:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFE954;
      }
      goto L_08AFE944;
    }
L_08AFE944:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFE954;
L_08AFE954:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFE97C;
      }
      goto L_08AFE978;
    }
L_08AFE978:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AFE97C;
L_08AFE97C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFE998u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 858u, 0x08AFBB3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFE998u) goto L_08AFE998;
    return;
L_08AFE998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFE9C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFEA0C;
      }
      goto L_08AFE9E0;
    }
L_08AFE9E0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFE9F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AFE9C0;
L_08AFE9F0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFEA04;
      }
      goto L_08AFE9FC;
    }
L_08AFE9FC:
    ctx.gpr[31] = (0x08AFEA04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFEA04u) goto L_08AFEA04;
    return;
L_08AFEA04:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AFE9E0;
      }
      goto L_08AFEA0C;
    }
L_08AFEA0C:
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
L_08AFEA24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AFEA98;
      }
      goto L_08AFEA60;
    }
L_08AFEA60:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFEA8C;
      }
      goto L_08AFEA80;
    }
L_08AFEA80:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFEA90;
      }
      goto L_08AFEA8C;
    }
L_08AFEA8C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AFEA90;
L_08AFEA90:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEA60;
      }
      goto L_08AFEA98;
    }
L_08AFEA98:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFEB08;
      }
      goto L_08AFEAA0;
    }
L_08AFEAA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEAD8;
      }
      goto L_08AFEAC8;
    }
L_08AFEAC8:
    ctx.gpr[31] = (0x08AFEAD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 891u, 0x08AFBD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFEAD0u) goto L_08AFEAD0;
    return;
L_08AFEAD0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFEB08;
      }
      goto L_08AFEAD8;
    }
L_08AFEAD8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFEAF4u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFE7E8;
L_08AFEAF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AFEB70;
      }
      goto L_08AFEB08;
    }
L_08AFEB08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEB60;
      }
      goto L_08AFEB30;
    }
L_08AFEB30:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFEB4Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFE7E8;
L_08AFEB4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AFEB70;
      }
      goto L_08AFEB60;
    }
L_08AFEB60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AFEB70;
L_08AFEB70:
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
L_08AFEB90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AFEBEC;
      }
      goto L_08AFEBBC;
    }
L_08AFEBBC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEC9C;
      }
      goto L_08AFEBC4;
    }
L_08AFEBC4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEBEC;
      }
      goto L_08AFEBCC;
    }
L_08AFEBCC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEC9C;
      }
      goto L_08AFEBEC;
    }
L_08AFEBEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08AFEC00u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFEC00u) goto L_08AFEC00;
    return;
L_08AFEC00:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFEC30;
      }
      goto L_08AFEC14;
    }
L_08AFEC14:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08AFEC24u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08AFEC24u) goto L_08AFEC24;
    return;
L_08AFEC24:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AFEC30;
L_08AFEC30:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEC4C;
      }
      goto L_08AFEC3C;
    }
L_08AFEC3C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFEC4C;
L_08AFEC4C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFEC84;
      }
      goto L_08AFEC6C;
    }
L_08AFEC6C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AFED24;
      }
      goto L_08AFEC84;
    }
L_08AFEC84:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AFED24;
      }
      goto L_08AFEC94;
    }
L_08AFEC94:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AFED24;
      }
      goto L_08AFEC9C;
    }
L_08AFEC9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08AFECB0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFECB0u) goto L_08AFECB0;
    return;
L_08AFECB0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFECE0;
      }
      goto L_08AFECC4;
    }
L_08AFECC4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08AFECD4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08AFECD4u) goto L_08AFECD4;
    return;
L_08AFECD4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AFECE0;
L_08AFECE0:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFECFC;
      }
      goto L_08AFECEC;
    }
L_08AFECEC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08AFECFC;
L_08AFECFC:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFED24;
      }
      goto L_08AFED20;
    }
L_08AFED20:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AFED24;
L_08AFED24:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFED40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 858u, 0x08AFBB3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFED40u) goto L_08AFED40;
    return;
L_08AFED40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFED68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFEDB4;
      }
      goto L_08AFED88;
    }
L_08AFED88:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFED98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AFED68;
L_08AFED98:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFEDAC;
      }
      goto L_08AFEDA4;
    }
L_08AFEDA4:
    ctx.gpr[31] = (0x08AFEDACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFEDACu) goto L_08AFEDAC;
    return;
L_08AFEDAC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AFED88;
      }
      goto L_08AFEDB4;
    }
L_08AFEDB4:
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
L_08AFEDCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AFEE40;
      }
      goto L_08AFEE08;
    }
L_08AFEE08:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFEE34;
      }
      goto L_08AFEE28;
    }
L_08AFEE28:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFEE38;
      }
      goto L_08AFEE34;
    }
L_08AFEE34:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AFEE38;
L_08AFEE38:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEE08;
      }
      goto L_08AFEE40;
    }
L_08AFEE40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFEEB0;
      }
      goto L_08AFEE48;
    }
L_08AFEE48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEE80;
      }
      goto L_08AFEE70;
    }
L_08AFEE70:
    ctx.gpr[31] = (0x08AFEE78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 891u, 0x08AFBD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFEE78u) goto L_08AFEE78;
    return;
L_08AFEE78:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFEEB0;
      }
      goto L_08AFEE80;
    }
L_08AFEE80:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFEE9Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFEB90;
L_08AFEE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AFEF18;
      }
      goto L_08AFEEB0;
    }
L_08AFEEB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFEF08;
      }
      goto L_08AFEED8;
    }
L_08AFEED8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFEEF4u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFEB90;
L_08AFEEF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AFEF18;
      }
      goto L_08AFEF08;
    }
L_08AFEF08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AFEF18;
L_08AFEF18:
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
L_08AFEF38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AFF234;
      }
      goto L_08AFEF74;
    }
L_08AFEF74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[20] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
        goto L_08AFF11C;
    }
    goto L_08AFEF9C;
L_08AFEF9C:
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AFF06C;
      }
      goto L_08AFEFC0;
    }
L_08AFEFC0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[22] - ctx.gpr[20]);
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AFEFECu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AFE37C;
L_08AFEFEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[21];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFF008;
      }
      goto L_08AFEFFC;
    }
L_08AFEFFC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFF020;
      }
      goto L_08AFF008;
    }
L_08AFF008:
    ctx.gpr[6] = (ctx.gpr[22] - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AFF018u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFF018u) goto L_08AFF018;
    return;
L_08AFF018:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
    goto L_08AFF020;
L_08AFF020:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[19] - ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFF044;
      }
      goto L_08AFF034;
    }
L_08AFF034:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFF044u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFF044u) goto L_08AFF044;
    return;
L_08AFF044:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AFF064;
      }
      goto L_08AFF054;
    }
L_08AFF054:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AFF058;
L_08AFF058:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
        goto L_08AFF058;
    }
    goto L_08AFF064;
L_08AFF064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF114;
      }
      goto L_08AFF06C;
    }
L_08AFF06C:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
      if (branch_taken) {
          goto L_08AFF09C;
      }
      goto L_08AFF088;
    }
L_08AFF088:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AFF088;
      }
      goto L_08AFF098;
    }
L_08AFF098:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFF09C;
L_08AFF09C:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[20] = (ctx.gpr[22] + ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AFF0C8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AFE37C;
L_08AFF0C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AFF0E4;
      }
      goto L_08AFF0D8;
    }
L_08AFF0D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AFF0FC;
      }
      goto L_08AFF0E4;
    }
L_08AFF0E4:
    ctx.gpr[6] = (ctx.gpr[19] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFF0F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFF0F4u) goto L_08AFF0F4;
    return;
L_08AFF0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08AFF0FC;
L_08AFF0FC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AFF114;
      }
      goto L_08AFF104;
    }
L_08AFF104:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AFF108;
L_08AFF108:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[17] != ctx.gpr[19]) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
        goto L_08AFF108;
    }
    goto L_08AFF114;
L_08AFF114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF234;
      }
      goto L_08AFF11C;
    }
L_08AFF11C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AFF158;
      }
      goto L_08AFF148;
    }
L_08AFF148:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFF164;
      }
      goto L_08AFF158;
    }
L_08AFF158:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08AFF164;
L_08AFF164:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AFF190;
      }
      goto L_08AFF16C;
    }
L_08AFF16C:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[31] = (0x08AFF178u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFF178u) goto L_08AFF178;
    return;
L_08AFF178:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08AFF190;
      }
      goto L_08AFF184;
    }
L_08AFF184:
    ctx.gpr[31] = (0x08AFF18Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08AFF18Cu) goto L_08AFF18C;
    return;
L_08AFF18C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AFF190;
L_08AFF190:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFF1A8;
      }
      goto L_08AFF19C;
    }
L_08AFF19C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08AFF1C0;
      }
      goto L_08AFF1A8;
    }
L_08AFF1A8:
    ctx.gpr[21] = (ctx.gpr[17] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AFF1B8u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFF1B8u) goto L_08AFF1B8;
    return;
L_08AFF1B8:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08AFF1C0;
L_08AFF1C0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AFF1E0;
    }
    goto L_08AFF1C8;
L_08AFF1C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AFF1C8;
      }
      goto L_08AFF1DC;
    }
L_08AFF1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AFF1E0;
L_08AFF1E0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFF1F4;
      }
      goto L_08AFF1E8;
    }
L_08AFF1E8:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFF210;
      }
      goto L_08AFF1F4;
    }
L_08AFF1F4:
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AFF208u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AFF208u) goto L_08AFF208;
    return;
L_08AFF208:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFF210;
L_08AFF210:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AFF220;
      }
      goto L_08AFF218;
    }
L_08AFF218:
    ctx.gpr[31] = (0x08AFF220u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFF220u) goto L_08AFF220;
    return;
L_08AFF220:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AFF234;
L_08AFF234:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF260:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AFF2BC;
      }
      goto L_08AFF28C;
    }
L_08AFF28C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF384;
      }
      goto L_08AFF294;
    }
L_08AFF294:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF2BC;
      }
      goto L_08AFF29C;
    }
L_08AFF29C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF384;
      }
      goto L_08AFF2BC;
    }
L_08AFF2BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08AFF2D0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFF2D0u) goto L_08AFF2D0;
    return;
L_08AFF2D0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFF300;
      }
      goto L_08AFF2E4;
    }
L_08AFF2E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08AFF2F4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08AFF2F4u) goto L_08AFF2F4;
    return;
L_08AFF2F4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AFF300;
L_08AFF300:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF334;
      }
      goto L_08AFF30C;
    }
L_08AFF30C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF334;
      }
      goto L_08AFF328;
    }
L_08AFF328:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08AFF334;
L_08AFF334:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFF36C;
      }
      goto L_08AFF354;
    }
L_08AFF354:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AFF424;
      }
      goto L_08AFF36C;
    }
L_08AFF36C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AFF424;
      }
      goto L_08AFF37C;
    }
L_08AFF37C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AFF424;
      }
      goto L_08AFF384;
    }
L_08AFF384:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08AFF398u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AFF398u) goto L_08AFF398;
    return;
L_08AFF398:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AFF3C8;
      }
      goto L_08AFF3AC;
    }
L_08AFF3AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[31] = (0x08AFF3BCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08AFF3BCu) goto L_08AFF3BC;
    return;
L_08AFF3BC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AFF3C8;
L_08AFF3C8:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF3FC;
      }
      goto L_08AFF3D4;
    }
L_08AFF3D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF3FC;
      }
      goto L_08AFF3F0;
    }
L_08AFF3F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08AFF3FC;
L_08AFF3FC:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFF424;
      }
      goto L_08AFF420;
    }
L_08AFF420:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AFF424;
L_08AFF424:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFF440u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 858u, 0x08AFBB3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF440u) goto L_08AFF440;
    return;
L_08AFF440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFF468:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFF4F8;
      }
      goto L_08AFF488;
    }
L_08AFF488:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFF498u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AFF468;
L_08AFF498:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08AFF4E0;
      }
      goto L_08AFF4AC;
    }
L_08AFF4AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF4E0;
      }
      goto L_08AFF4B4;
    }
L_08AFF4B4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF4E0;
      }
      goto L_08AFF4BC;
    }
L_08AFF4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF4E0;
      }
      goto L_08AFF4C8;
    }
L_08AFF4C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AFF4E0;
      }
      goto L_08AFF4D8;
    }
L_08AFF4D8:
    ctx.gpr[31] = (0x08AFF4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AFF4E0u) goto L_08AFF4E0;
    return;
L_08AFF4E0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF4F0;
      }
      goto L_08AFF4E8;
    }
L_08AFF4E8:
    ctx.gpr[31] = (0x08AFF4F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AFF4F0u) goto L_08AFF4F0;
    return;
L_08AFF4F0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AFF488;
      }
      goto L_08AFF4F8;
    }
L_08AFF4F8:
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
L_08AFF510:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AFF584;
      }
      goto L_08AFF54C;
    }
L_08AFF54C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AFF578;
      }
      goto L_08AFF56C;
    }
L_08AFF56C:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFF57C;
      }
      goto L_08AFF578;
    }
L_08AFF578:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AFF57C;
L_08AFF57C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF54C;
      }
      goto L_08AFF584;
    }
L_08AFF584:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AFF5F4;
      }
      goto L_08AFF58C;
    }
L_08AFF58C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF5C4;
      }
      goto L_08AFF5B4;
    }
L_08AFF5B4:
    ctx.gpr[31] = (0x08AFF5BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 891u, 0x08AFBD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFF5BCu) goto L_08AFF5BC;
    return;
L_08AFF5BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AFF5F4;
      }
      goto L_08AFF5C4;
    }
L_08AFF5C4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFF5E0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFF260;
L_08AFF5E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AFF65C;
      }
      goto L_08AFF5F4;
    }
L_08AFF5F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF64C;
      }
      goto L_08AFF61C;
    }
L_08AFF61C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFF638u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFF260;
L_08AFF638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AFF65C;
      }
      goto L_08AFF64C;
    }
L_08AFF64C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AFF65C;
L_08AFF65C:
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
L_08AFF67C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AFF6B8;
      }
      goto L_08AFF6B0;
    }
L_08AFF6B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFF6EC;
      }
      goto L_08AFF6B8;
    }
L_08AFF6B8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF6C8;
      }
      goto L_08AFF6C0;
    }
L_08AFF6C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF6EC;
      }
      goto L_08AFF6C8;
    }
L_08AFF6C8:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF6E8;
      }
      goto L_08AFF6D8;
    }
L_08AFF6D8:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF6D8;
      }
      goto L_08AFF6E8;
    }
L_08AFF6E8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08AFF6EC;
L_08AFF6EC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF798;
      }
      goto L_08AFF6F4;
    }
L_08AFF6F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFF73C;
      }
      goto L_08AFF710;
    }
L_08AFF710:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AFF724;
      }
      goto L_08AFF71C;
    }
L_08AFF71C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AFF724;
L_08AFF724:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFF744;
      }
      goto L_08AFF73C;
    }
L_08AFF73C:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFF744;
L_08AFF744:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF758;
      }
      goto L_08AFF74C;
    }
L_08AFF74C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFF77C;
      }
      goto L_08AFF758;
    }
L_08AFF758:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF774;
      }
      goto L_08AFF768;
    }
L_08AFF768:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFF77C;
      }
      goto L_08AFF774;
    }
L_08AFF774:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08AFF77C;
L_08AFF77C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AFF86C;
      }
      goto L_08AFF798;
    }
L_08AFF798:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AFF7A4;
      }
      goto L_08AFF7A0;
    }
L_08AFF79C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AFF7A0;
L_08AFF7A0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    goto L_08AFF7A4;
L_08AFF7A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF7BC;
      }
      goto L_08AFF7B0;
    }
L_08AFF7B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFF7E0;
      }
      goto L_08AFF7BC;
    }
L_08AFF7BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF7D8;
      }
      goto L_08AFF7CC;
    }
L_08AFF7CC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFF7E0;
      }
      goto L_08AFF7D8;
    }
L_08AFF7D8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AFF7E0;
L_08AFF7E0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF824;
      }
      goto L_08AFF7E8;
    }
L_08AFF7E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF800;
      }
      goto L_08AFF7F4;
    }
L_08AFF7F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AFF824;
      }
      goto L_08AFF800;
    }
L_08AFF800:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[8] == 0u) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_08AFF824;
    }
    goto L_08AFF810;
L_08AFF810:
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    goto L_08AFF814;
L_08AFF814:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
        goto L_08AFF814;
    }
    goto L_08AFF820;
L_08AFF820:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AFF824;
L_08AFF824:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF86C;
      }
      goto L_08AFF830;
    }
L_08AFF830:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF848;
      }
      goto L_08AFF83C;
    }
L_08AFF83C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFF86C;
      }
      goto L_08AFF848;
    }
L_08AFF848:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
        goto L_08AFF86C;
    }
    goto L_08AFF858;
L_08AFF858:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AFF85C;
L_08AFF85C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08AFF85C;
    }
    goto L_08AFF868;
L_08AFF868:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AFF86C;
L_08AFF86C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFA54;
      }
      goto L_08AFF878;
    }
L_08AFF878:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AFF884;
L_08AFF884:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFFA48;
      }
      goto L_08AFF88C;
    }
L_08AFF88C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF8A0;
      }
      goto L_08AFF894;
    }
L_08AFF894:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFFA48;
      }
      goto L_08AFF8A0;
    }
L_08AFF8A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFF97C;
      }
      goto L_08AFF8AC;
    }
L_08AFF8AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF8D4;
      }
      goto L_08AFF8BC;
    }
L_08AFF8BC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AFF8D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 901u, 0x08AFBDA4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF8D0u) goto L_08AFF8D0;
    return;
L_08AFF8D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_08AFF8D4;
L_08AFF8D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AFF8EC;
      }
      goto L_08AFF8E0;
    }
L_08AFF8E0:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFF914;
      }
      goto L_08AFF8EC;
    }
L_08AFF8EC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF900;
      }
      goto L_08AFF8F4;
    }
L_08AFF8F4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFF914;
      }
      goto L_08AFF900;
    }
L_08AFF900:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFF974;
      }
      goto L_08AFF914;
    }
L_08AFF914:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF928;
      }
      goto L_08AFF91C;
    }
L_08AFF91C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFF944;
      }
      goto L_08AFF928;
    }
L_08AFF928:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF934;
      }
      goto L_08AFF930;
    }
L_08AFF930:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08AFF934;
L_08AFF934:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AFF940u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 909u, 0x08AFBE00u>(ctx, &aot_mem) && ctx.pc == 0x08AFF940u) goto L_08AFF940;
    return;
L_08AFF940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_08AFF944;
L_08AFF944:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF960;
      }
      goto L_08AFF95C;
    }
L_08AFF95C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08AFF960;
L_08AFF960:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AFF96Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 901u, 0x08AFBDA4u>(ctx, &aot_mem) && ctx.pc == 0x08AFF96Cu) goto L_08AFF96C;
    return;
L_08AFF96C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFA48;
      }
      goto L_08AFF974;
    }
L_08AFF974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFA40;
      }
      goto L_08AFF97C;
    }
L_08AFF97C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF9A0;
      }
      goto L_08AFF988;
    }
L_08AFF988:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AFF99Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 909u, 0x08AFBE00u>(ctx, &aot_mem) && ctx.pc == 0x08AFF99Cu) goto L_08AFF99C;
    return;
L_08AFF99C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08AFF9A0;
L_08AFF9A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AFF9B8;
      }
      goto L_08AFF9AC;
    }
L_08AFF9AC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFF9E0;
      }
      goto L_08AFF9B8;
    }
L_08AFF9B8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF9CC;
      }
      goto L_08AFF9C0;
    }
L_08AFF9C0:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFF9E0;
      }
      goto L_08AFF9CC;
    }
L_08AFF9CC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AFFA40;
      }
      goto L_08AFF9E0;
    }
L_08AFF9E0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF9F4;
      }
      goto L_08AFF9E8;
    }
L_08AFF9E8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFFA10;
      }
      goto L_08AFF9F4;
    }
L_08AFF9F4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFA00;
      }
      goto L_08AFF9FC;
    }
L_08AFF9FC:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08AFFA00;
L_08AFFA00:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AFFA0Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 901u, 0x08AFBDA4u>(ctx, &aot_mem) && ctx.pc == 0x08AFFA0Cu) goto L_08AFFA0C;
    return;
L_08AFFA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_08AFFA10;
L_08AFFA10:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFA2C;
      }
      goto L_08AFFA28;
    }
L_08AFFA28:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08AFFA2C;
L_08AFFA2C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AFFA38u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 909u, 0x08AFBE00u>(ctx, &aot_mem) && ctx.pc == 0x08AFFA38u) goto L_08AFFA38;
    return;
L_08AFFA38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFA48;
      }
      goto L_08AFFA40;
    }
L_08AFFA40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFF884;
      }
      goto L_08AFFA48;
    }
L_08AFFA48:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFA54;
      }
      goto L_08AFFA50;
    }
L_08AFFA50:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08AFFA54;
L_08AFFA54:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AFFA7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AFFC44;
      }
      goto L_08AFFAB8;
    }
L_08AFFAB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFB10;
      }
      goto L_08AFFAC4;
    }
L_08AFFAC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFB2C;
      }
      goto L_08AFFAEC;
    }
L_08AFFAEC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFFB08u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFE7E8;
L_08AFFB08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFE8C;
      }
      goto L_08AFFB10;
    }
L_08AFFB10:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFFB20u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AFEA24;
L_08AFFB20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFFE8C;
      }
      goto L_08AFFB2C;
    }
L_08AFFB2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFBC0;
      }
      goto L_08AFFB50;
    }
L_08AFFB50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFFB5Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x08AFFB5Cu) goto L_08AFFB5C;
    return;
L_08AFFB5C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFFB9C;
      }
      goto L_08AFFB6C;
    }
L_08AFFB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFBCC;
      }
      goto L_08AFFB94;
    }
L_08AFFB94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFC28;
      }
      goto L_08AFFB9C;
    }
L_08AFFB9C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AFFBB8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08AFE7E8;
L_08AFFBB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFE8C;
      }
      goto L_08AFFBC0;
    }
L_08AFFBC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFFE8C;
      }
      goto L_08AFFBCC;
    }
L_08AFFBCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFC04;
      }
      goto L_08AFFBE0;
    }
L_08AFFBE0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AFFBFCu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08AFE7E8;
L_08AFFBFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFE8C;
      }
      goto L_08AFFC04;
    }
L_08AFFC04:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFFC20u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFE7E8;
L_08AFFC20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFE8C;
      }
      goto L_08AFFC28;
    }
L_08AFFC28:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFFC38u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AFEA24;
L_08AFFC38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFFE8C;
      }
      goto L_08AFFC44;
    }
L_08AFFC44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AFFCCC;
      }
      goto L_08AFFC54;
    }
L_08AFFC54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFCB0;
      }
      goto L_08AFFC84;
    }
L_08AFFC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AFFCA8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08AFE7E8;
L_08AFFCA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFE8C;
      }
      goto L_08AFFCB0;
    }
L_08AFFCB0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFFCC0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AFEA24;
L_08AFFCC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFFE8C;
      }
      goto L_08AFFCCC;
    }
L_08AFFCCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFFCD8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 891u, 0x08AFBD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AFFCD8u) goto L_08AFFCD8;
    return;
L_08AFFCD8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFD84;
      }
      goto L_08AFFD00;
    }
L_08AFFD00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFD84;
      }
      goto L_08AFFD28;
    }
L_08AFFD28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFD60;
      }
      goto L_08AFFD3C;
    }
L_08AFFD3C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AFFD58u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08AFE7E8;
L_08AFFD58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFE8C;
      }
      goto L_08AFFD60;
    }
L_08AFFD60:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFFD7Cu);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFE7E8;
L_08AFFD7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFE8C;
      }
      goto L_08AFFD84;
    }
L_08AFFD84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFFD90u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x08AFFD90u) goto L_08AFFD90;
    return;
L_08AFFD90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AFFDB8;
      }
      goto L_08AFFD9C;
    }
L_08AFFD9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    goto L_08AFFDB8;
L_08AFFDB8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFE5C;
      }
      goto L_08AFFDC0;
    }
L_08AFFDC0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFE5C;
      }
      goto L_08AFFDC8;
    }
L_08AFFDC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AFFE00;
      }
      goto L_08AFFDD8;
    }
L_08AFFDD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFE5C;
      }
      goto L_08AFFE00;
    }
L_08AFFE00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFE38;
      }
      goto L_08AFFE14;
    }
L_08AFFE14:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AFFE30u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08AFE7E8;
L_08AFFE30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFE8C;
      }
      goto L_08AFFE38;
    }
L_08AFFE38:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFFE54u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFE7E8;
L_08AFFE54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFE8C;
      }
      goto L_08AFFE5C;
    }
L_08AFFE5C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFFE70;
      }
      goto L_08AFFE64;
    }
L_08AFFE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFFE8C;
      }
      goto L_08AFFE70;
    }
L_08AFFE70:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFFE80u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AFEA24;
L_08AFFE80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AFFE8C;
      }
      goto L_08AFFE8C;
    }
L_08AFFE8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFFEAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 8u, 0x08B00074u>(ctx, &aot_mem); return;
      }
      goto L_08AFFEE8;
    }
L_08AFFEE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFF40;
      }
      goto L_08AFFEF4;
    }
L_08AFFEF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFF5C;
      }
      goto L_08AFFF1C;
    }
L_08AFFF1C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AFFF38u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08AFEB90;
L_08AFFF38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 38u, 0x08B002BCu>(ctx, &aot_mem); return;
      }
      goto L_08AFFF40;
    }
L_08AFFF40:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AFFF50u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AFEDCC;
L_08AFFF50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 38u, 0x08B002BCu>(ctx, &aot_mem); return;
      }
      goto L_08AFFF5C;
    }
L_08AFFF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFFF0;
      }
      goto L_08AFFF80;
    }
L_08AFFF80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AFFF8Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 881u, 0x08AFBCACu>(ctx, &aot_mem) && ctx.pc == 0x08AFFF8Cu) goto L_08AFFF8C;
    return;
L_08AFFF8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AFFFCC;
      }
      goto L_08AFFF9C;
    }
L_08AFFF9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFFFFC;
      }
      goto L_08AFFFC4;
    }
L_08AFFFC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 6u, 0x08B00058u>(ctx, &aot_mem); return;
      }
      goto L_08AFFFCC;
    }
L_08AFFFCC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AFFFE8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_08AFEB90;
L_08AFFFE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 38u, 0x08B002BCu>(ctx, &aot_mem); return;
      }
      goto L_08AFFFF0;
    }
L_08AFFFF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 38u, 0x08B002BCu>(ctx, &aot_mem); return;
      }
      goto L_08AFFFFC;
    }
L_08AFFFFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B00000u; return;
}

void recomp_unit_0190(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0190_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_190(Runtime &runtime) {
    runtime.register_generated_unit(190u, 0x08AFC000u, 16384u, &recomp_unit_0190, &recomp_unit_0190_entry);
    runtime.register_function(0x08AFC000u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC008u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC00Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC014u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC03Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC07Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC09Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC0F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC108u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC118u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC128u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC138u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC158u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC168u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC178u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC180u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC1A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC1B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC1CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC1DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC1ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC210u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC220u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC22Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC23Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC244u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC268u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC278u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC288u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC290u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC2A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC2B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC2C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC2CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC2D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC2E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC2E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC2ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC314u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC324u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC338u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC340u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC368u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC378u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC384u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC398u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC3FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC410u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC418u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC428u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC458u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC4CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC508u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC518u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC52Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC534u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC558u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC560u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC56Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC574u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC578u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC5B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC5C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC5D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC5E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC604u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC60Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC618u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC620u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC624u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC660u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC670u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC684u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC68Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC6B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC714u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC724u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC730u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC738u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC74Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC758u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC760u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC764u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC774u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC780u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC788u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC78Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC794u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC7F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC800u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC80Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC818u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC820u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC824u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC82Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC830u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC844u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC84Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC858u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC860u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC86Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC874u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC87Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC884u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC88Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC898u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC8F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC93Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC990u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC998u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFC9F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCA94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCABCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAD0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCADCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCAF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCB94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCBF8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC68u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCC9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCD0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCDCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCCF8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCD7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCDF8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCE9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCEC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCED4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCF98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFCFE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD010u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD020u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD02Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD03Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD044u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD058u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD068u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD078u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD07Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD088u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD090u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD0ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD0BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD0C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD0ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD0FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD108u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD118u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD120u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD128u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD12Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD138u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD140u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD16Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD17Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD188u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD190u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD19Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD1ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD200u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD204u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD20Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD218u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD22Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD234u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD23Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD244u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD258u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD284u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD2F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD314u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD32Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD340u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD344u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD350u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD358u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD364u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD36Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD378u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD380u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD38Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD394u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD39Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD3F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD400u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD404u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD410u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD418u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD420u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD434u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD474u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD480u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD488u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD4FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD508u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD510u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD518u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD524u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD52Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD538u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD540u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD554u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD570u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD580u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD584u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD5ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD5C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD5D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD60Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD61Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD620u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD638u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD660u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD664u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD674u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD688u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD690u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD6A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD6B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD6D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD704u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD728u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD740u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD748u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD754u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD770u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD794u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD7B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD7BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD7E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD7ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD800u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD830u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD838u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD84Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD880u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD88Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD8CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD8D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD8FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD904u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD91Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD934u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD950u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD95Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD984u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD990u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFD9F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDA9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDABCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDAECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDB7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBDCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDBF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC68u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDC9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCD0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCE4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDCF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD04u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD34u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD78u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDD94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDDCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDDF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE54u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE80u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDE9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDEA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDEB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDEBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDED8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF78u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDF84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFDFF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE010u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE02Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE048u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE064u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE080u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE088u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE090u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE098u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE0F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE100u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE108u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE110u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE13Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE144u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE154u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE160u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE168u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE178u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE180u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE19Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE210u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE218u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE250u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE254u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE25Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE288u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE2A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE2CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE2D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE308u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE338u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE358u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE370u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE37Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE390u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE3F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE414u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE424u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE430u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE438u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE440u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE458u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE478u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE480u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE490u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE4E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE500u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE50Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE528u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE538u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE548u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE550u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE55Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE56Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE574u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE578u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE588u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE5F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE60Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE618u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE628u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE638u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE63Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE644u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE648u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE674u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE67Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE69Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE6F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE700u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE714u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE740u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE744u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE75Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE76Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE788u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE794u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE79Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE7E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE814u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE81Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE824u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE844u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE858u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE86Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE87Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE888u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE894u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE8F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE908u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE91Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE92Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE938u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE944u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE954u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE978u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE97Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE998u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFE9FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA04u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA80u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEA98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAA0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAD0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEAF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEB90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBBCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEBECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC14u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC4Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEC9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECD4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFECFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED24u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED68u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED88u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFED98u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEDA4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEDACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEDB4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEDCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE34u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE78u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE80u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEE9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEEB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEED8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEEF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF18u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF74u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEF9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFEFFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF008u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF018u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF020u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF034u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF044u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF054u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF058u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF064u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF06Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF088u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF098u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF09Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF0FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF104u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF108u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF114u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF11Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF148u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF158u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF164u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF16Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF178u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF184u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF18Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF190u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF19Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1A8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1DCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF1F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF208u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF210u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF218u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF220u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF234u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF260u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF28Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF294u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF29Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2E4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF2F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF300u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF30Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF328u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF334u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF354u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF36Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF37Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF384u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF398u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF3FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF420u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF424u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF440u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF468u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF488u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF498u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4F0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF4F8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF510u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF54Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF56Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF578u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF57Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF584u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF58Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5B4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5C4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF5F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF61Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF638u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF64Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF65Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF67Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6C8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF6F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF710u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF71Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF724u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF73Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF744u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF74Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF758u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF768u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF774u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF77Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF798u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF79Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7A4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7B0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7D8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF7F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF800u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF810u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF814u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF820u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF824u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF830u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF83Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF848u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF858u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF85Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF868u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF86Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF878u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF884u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF88Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF894u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8BCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8D0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8D4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8ECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF8F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF900u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF914u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF91Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF928u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF930u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF934u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF940u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF944u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF95Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF960u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF96Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF974u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF97Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF988u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF99Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9A0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9ACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9B8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9C0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9CCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9E0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9E8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9F4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFF9FCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA0Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA48u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA54u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFA7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFAECu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB08u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB10u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB2Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB6Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB94u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFB9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBE0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFBFCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC04u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC20u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC44u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC54u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFC84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCA8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCB0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFCD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD28u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD3Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD58u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD60u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD7Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD84u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD90u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFD9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFDB8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFDC0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFDC8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFDD8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE00u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE14u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE30u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE54u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE64u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE70u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE80u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFE8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFEACu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFEE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFEF4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF1Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF38u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF40u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF50u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF5Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF80u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF8Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFF9Cu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFFC4u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFFCCu, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFFE8u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFFF0u, &recomp_unit_0190, "recomp_unit_0190");
    runtime.register_function(0x08AFFFFCu, &recomp_unit_0190, "recomp_unit_0190");
}
} // namespace psprecomp
