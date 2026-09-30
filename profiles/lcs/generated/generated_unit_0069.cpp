#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0069[4093] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 0,
    0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0, 20, 0, 21,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0,
    0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 36, 37, 0, 38, 0, 39, 0, 40, 0, 41, 42, 0, 43, 0, 44,
    0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 63, 0,
    0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0,
    71, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0,
    0, 0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92,
    0, 93, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 99, 0, 0, 100, 101, 0, 102, 0, 0,
    103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 112, 0,
    0, 113, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 0,
    0, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 133, 0,
    0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0,
    0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0,
    165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0,
    0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    179, 0, 0, 180, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 212, 213, 214, 0, 0, 0, 215,
    0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0,
    223, 0, 0, 224, 0, 0, 225, 0, 226, 227, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0,
    233, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0,
    0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    243, 0, 0, 0, 244, 0, 0, 245, 0, 246, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 251, 252, 0, 0, 0, 253, 0, 0, 254,
    0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0,
    263, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 278,
    0, 0, 0, 0, 279, 0, 0, 280, 0, 281, 282, 0, 283, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 288, 0, 0, 289, 0, 290, 0,
    0, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 295, 0, 0, 296, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299,
    0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 307,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 0,
    316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0,
    0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 328, 0, 329, 0, 330, 0, 331, 0,
    332, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 0, 336, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 342, 0,
    0, 0, 343, 0, 344, 0, 0, 345, 0, 0, 346, 347, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 0,
    354, 0, 0, 0, 355, 0, 356, 357, 0, 0, 358, 0, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 0,
    368, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 376, 0, 0, 0, 377, 0, 378, 0, 379,
    0, 0, 380, 0, 0, 381, 0, 382, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 0, 387, 0, 0, 388, 0, 389, 0, 0, 0, 390,
    0, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 395, 0, 396, 0, 0, 397, 0, 398, 0, 399, 0, 0, 0, 0, 400, 0,
    0, 401, 0, 0, 402, 403, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 410, 411,
    0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 418, 0, 0, 0, 419, 0, 0, 0, 420, 0, 421, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0,
    0, 0, 0, 0, 0, 426, 0, 427, 0, 428, 0, 0, 0, 0, 429, 0, 0, 430, 431, 0, 432, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0,
    0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0,
    0, 0, 440, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 445, 0, 446, 0,
    447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0,
    0, 453, 0, 454, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0,
    0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0,
    0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 481, 0, 482, 0, 0, 483, 0, 484, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 488, 0, 489, 0, 0, 490, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 497, 0, 498, 0, 0, 499, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 505, 506, 0, 0,
    0, 507, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0,
    0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0,
    0, 0, 0, 523, 0, 524, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 528, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 531, 0, 532, 533, 0, 0, 0, 534, 535, 0, 0, 0, 536, 537, 0, 538, 0, 0, 0, 0, 539, 0, 540, 541, 0, 0,
    0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 553,
    0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 0, 560, 0, 561, 0, 0, 0,
    0, 562, 0, 0, 0, 563, 0, 0, 564, 0, 565, 0, 566, 0, 0, 567, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    569, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 0, 575, 0, 0, 0,
    0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 0, 0, 0,
    586, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 590, 0, 591, 0, 0, 592, 0, 593, 0, 0, 594, 595, 596, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 0,
    606, 0, 607, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 613, 0, 0, 0,
    0, 0, 0, 0, 614, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618,
    0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 622, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0,
    0, 625, 0, 626, 0, 0, 0, 0, 0, 627, 0, 628, 0, 629, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 0, 632,
    0, 0, 633, 0, 634, 635, 636, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 640, 0, 641, 0, 642, 0, 643, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 0, 646, 0, 0, 647,
    0, 648, 649, 650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 654, 0, 655, 0, 656, 0, 657, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 661, 0, 662, 663,
    664, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0,
    669, 0, 670, 0, 671, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 674, 0, 0, 675, 0, 676, 677, 678, 0, 0,
    0, 679, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 684,
    0, 0, 0, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 0, 690, 691, 0, 0, 692, 0, 0,
    0, 693, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 699, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 704, 0, 705, 0, 0, 0, 706, 0, 707, 708, 0, 0,
    709, 0, 0, 0, 710, 0, 0, 711, 0, 712, 0, 0, 0, 713, 0, 0, 714, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 0, 717, 0, 0, 0,
    0, 0, 0, 718, 0, 719, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 723, 0, 0, 0, 0, 724, 0, 0, 0, 0, 725,
    0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0, 0, 729, 0, 0,
    0, 0, 0, 730, 0, 0, 731, 0, 0, 732, 0, 0, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 737,
    0, 0, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 744,
    0, 0, 0, 0, 0, 0, 745, 0, 0, 746, 0, 747, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0,
    0, 0, 0, 751, 752, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0,
    0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0, 0, 758, 0, 759, 0, 0, 0, 0, 0, 0, 0, 760, 0, 761, 762, 0, 763, 0, 0, 0, 764,
    0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 767, 0, 0, 768, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 770, 0, 771, 0, 772, 0, 773, 0, 0, 0, 0, 774, 0, 775, 0, 776, 0, 0, 0, 777, 0, 0,
    0, 778, 0, 0, 0, 779, 0, 0, 780, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 783, 0, 0, 784, 0, 0, 0,
    0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 787, 0, 0, 0, 788, 0, 0, 789, 0, 0, 0,
    0, 790, 0, 0, 0, 791, 792, 0, 793, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 796, 797, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 799, 0, 800, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 802, 0, 803, 0, 0, 0, 0, 804, 0, 0, 0, 805, 0, 0, 0, 0, 806, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 808, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 810, 0, 811, 0, 0, 0, 0, 812, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 817, 0, 0, 0,
    818, 0, 0, 0, 0, 819, 0, 820, 0, 0, 0, 0, 821, 0, 822, 0, 0, 0, 0, 823, 0, 824, 0, 0, 0, 0, 825, 0, 826, 0, 0, 0,
    0, 827, 828, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 0, 831, 0, 832, 833, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0,
    835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 837, 0, 0, 0, 0, 0, 0, 838, 0, 839, 840, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 841, 0, 0, 842, 0, 0, 0, 0, 843, 0, 0, 844, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 846,
    0, 847, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 849, 850, 0, 0, 0, 851, 0, 0, 852, 0, 0, 0, 853, 0, 0, 0, 0, 854, 0, 855,
    0, 0, 0, 0, 856, 0, 0, 857, 0, 0, 0, 0, 858, 0, 0, 859, 0, 0, 0, 0, 0, 0, 860, 0, 0, 0, 0, 0, 861, 0, 0, 0,
    0, 862, 0, 863, 0, 864, 0, 865, 0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 0, 868, 0, 869, 0, 0, 0, 0, 870, 0, 871, 0, 0, 0,
    0, 872, 0, 0, 873, 0, 0, 0, 874, 0, 0, 0, 875, 0, 0, 0, 876, 0, 0, 0, 877, 0, 0, 0, 0, 878, 879, 0, 880,
};
void recomp_unit_0069_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08918000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0069[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08918000;
    case 2u: goto L_0891801C;
    case 3u: goto L_08918024;
    case 4u: goto L_0891803C;
    case 5u: goto L_08918050;
    case 6u: goto L_08918058;
    case 7u: goto L_08918060;
    case 8u: goto L_08918070;
    case 9u: goto L_08918084;
    case 10u: goto L_0891808C;
    case 11u: goto L_089180A0;
    case 12u: goto L_089180A8;
    case 13u: goto L_089180B4;
    case 14u: goto L_089180BC;
    case 15u: goto L_089180C8;
    case 16u: goto L_089180D0;
    case 17u: goto L_089180D8;
    case 18u: goto L_089180E0;
    case 19u: goto L_089180E8;
    case 20u: goto L_089180F4;
    case 21u: goto L_089180FC;
    case 22u: goto L_08918104;
    case 23u: goto L_08918124;
    case 24u: goto L_08918144;
    case 25u: goto L_08918164;
    case 26u: goto L_08918178;
    case 27u: goto L_08918188;
    case 28u: goto L_08918190;
    case 29u: goto L_08918198;
    case 30u: goto L_089181A8;
    case 31u: goto L_089181BC;
    case 32u: goto L_089181EC;
    case 33u: goto L_08918220;
    case 34u: goto L_08918230;
    case 35u: goto L_08918238;
    case 36u: goto L_08918244;
    case 37u: goto L_08918248;
    case 38u: goto L_08918250;
    case 39u: goto L_08918258;
    case 40u: goto L_08918260;
    case 41u: goto L_08918268;
    case 42u: goto L_0891826C;
    case 43u: goto L_08918274;
    case 44u: goto L_0891827C;
    case 45u: goto L_08918290;
    case 46u: goto L_0891829C;
    case 47u: goto L_089182A8;
    case 48u: goto L_089182B4;
    case 49u: goto L_089182C0;
    case 50u: goto L_089182D0;
    case 51u: goto L_089182D8;
    case 52u: goto L_089182FC;
    case 53u: goto L_08918300;
    case 54u: goto L_08918340;
    case 55u: goto L_08918350;
    case 56u: goto L_08918364;
    case 57u: goto L_0891836C;
    case 58u: goto L_0891837C;
    case 59u: goto L_089183A4;
    case 60u: goto L_089183B8;
    case 61u: goto L_089183D8;
    case 62u: goto L_089183EC;
    case 63u: goto L_089183F8;
    case 64u: goto L_08918404;
    case 65u: goto L_08918410;
    case 66u: goto L_0891841C;
    case 67u: goto L_08918440;
    case 68u: goto L_08918444;
    case 69u: goto L_08918468;
    case 70u: goto L_08918478;
    case 71u: goto L_08918480;
    case 72u: goto L_08918488;
    case 73u: goto L_08918490;
    case 74u: goto L_08918498;
    case 75u: goto L_089184AC;
    case 76u: goto L_089184C0;
    case 77u: goto L_089184D0;
    case 78u: goto L_089184E0;
    case 79u: goto L_089184F4;
    case 80u: goto L_08918510;
    case 81u: goto L_08918534;
    case 82u: goto L_08918540;
    case 83u: goto L_0891854C;
    case 84u: goto L_08918570;
    case 85u: goto L_08918578;
    case 86u: goto L_08918590;
    case 87u: goto L_0891859C;
    case 88u: goto L_089185A4;
    case 89u: goto L_089185B4;
    case 90u: goto L_089185C4;
    case 91u: goto L_089185E0;
    case 92u: goto L_089185FC;
    case 93u: goto L_08918604;
    case 94u: goto L_08918608;
    case 95u: goto L_08918610;
    case 96u: goto L_0891863C;
    case 97u: goto L_08918648;
    case 98u: goto L_08918654;
    case 99u: goto L_0891865C;
    case 100u: goto L_08918668;
    case 101u: goto L_0891866C;
    case 102u: goto L_08918674;
    case 103u: goto L_08918680;
    case 104u: goto L_08918688;
    case 105u: goto L_089186A0;
    case 106u: goto L_089186B4;
    case 107u: goto L_089186BC;
    case 108u: goto L_089186C4;
    case 109u: goto L_089186CC;
    case 110u: goto L_089186D8;
    case 111u: goto L_089186E0;
    case 112u: goto L_089186F8;
    case 113u: goto L_08918704;
    case 114u: goto L_0891870C;
    case 115u: goto L_08918718;
    case 116u: goto L_08918724;
    case 117u: goto L_08918730;
    case 118u: goto L_0891873C;
    case 119u: goto L_08918750;
    case 120u: goto L_08918758;
    case 121u: goto L_08918764;
    case 122u: goto L_0891876C;
    case 123u: goto L_08918774;
    case 124u: goto L_0891878C;
    case 125u: goto L_08918794;
    case 126u: goto L_089187A4;
    case 127u: goto L_089187AC;
    case 128u: goto L_089187B4;
    case 129u: goto L_089187BC;
    case 130u: goto L_089187C4;
    case 131u: goto L_089187E4;
    case 132u: goto L_089187F0;
    case 133u: goto L_089187F8;
    case 134u: goto L_08918804;
    case 135u: goto L_0891880C;
    case 136u: goto L_08918814;
    case 137u: goto L_0891881C;
    case 138u: goto L_08918828;
    case 139u: goto L_08918830;
    case 140u: goto L_08918838;
    case 141u: goto L_08918840;
    case 142u: goto L_08918848;
    case 143u: goto L_08918854;
    case 144u: goto L_0891885C;
    case 145u: goto L_08918864;
    case 146u: goto L_08918888;
    case 147u: goto L_08918890;
    case 148u: goto L_08918898;
    case 149u: goto L_089188A0;
    case 150u: goto L_089188AC;
    case 151u: goto L_089188B4;
    case 152u: goto L_089188BC;
    case 153u: goto L_089188C4;
    case 154u: goto L_089188CC;
    case 155u: goto L_089188D8;
    case 156u: goto L_089188F4;
    case 157u: goto L_08918930;
    case 158u: goto L_08918938;
    case 159u: goto L_08918940;
    case 160u: goto L_08918948;
    case 161u: goto L_08918950;
    case 162u: goto L_08918958;
    case 163u: goto L_08918960;
    case 164u: goto L_08918968;
    case 165u: goto L_08918980;
    case 166u: goto L_08918988;
    case 167u: goto L_08918990;
    case 168u: goto L_089189B4;
    case 169u: goto L_089189C0;
    case 170u: goto L_089189CC;
    case 171u: goto L_089189E0;
    case 172u: goto L_089189E8;
    case 173u: goto L_089189F8;
    case 174u: goto L_08918A10;
    case 175u: goto L_08918A18;
    case 176u: goto L_08918A20;
    case 177u: goto L_08918A30;
    case 178u: goto L_08918A78;
    case 179u: goto L_08918A80;
    case 180u: goto L_08918A8C;
    case 181u: goto L_08918AA0;
    case 182u: goto L_08918AA8;
    case 183u: goto L_08918AB8;
    case 184u: goto L_08918AD0;
    case 185u: goto L_08918AD8;
    case 186u: goto L_08918AE0;
    case 187u: goto L_08918AF0;
    case 188u: goto L_08918B38;
    case 189u: goto L_08918B48;
    case 190u: goto L_08918B64;
    case 191u: goto L_08918B74;
    case 192u: goto L_08918B8C;
    case 193u: goto L_08918B98;
    case 194u: goto L_08918BA8;
    case 195u: goto L_08918BBC;
    case 196u: goto L_08918BE4;
    case 197u: goto L_08918BF4;
    case 198u: goto L_08918C08;
    case 199u: goto L_08918C1C;
    case 200u: goto L_08918C24;
    case 201u: goto L_08918C44;
    case 202u: goto L_08918C4C;
    case 203u: goto L_08918C54;
    case 204u: goto L_08918C60;
    case 205u: goto L_08918C90;
    case 206u: goto L_08918CA8;
    case 207u: goto L_08918CB0;
    case 208u: goto L_08918CB8;
    case 209u: goto L_08918CC4;
    case 210u: goto L_08918CD0;
    case 211u: goto L_08918CDC;
    case 212u: goto L_08918CE4;
    case 213u: goto L_08918CE8;
    case 214u: goto L_08918CEC;
    case 215u: goto L_08918CFC;
    case 216u: goto L_08918D10;
    case 217u: goto L_08918D18;
    case 218u: goto L_08918D28;
    case 219u: goto L_08918D48;
    case 220u: goto L_08918D50;
    case 221u: goto L_08918D68;
    case 222u: goto L_08918D70;
    case 223u: goto L_08918D80;
    case 224u: goto L_08918D8C;
    case 225u: goto L_08918D98;
    case 226u: goto L_08918DA0;
    case 227u: goto L_08918DA4;
    case 228u: goto L_08918DAC;
    case 229u: goto L_08918DBC;
    case 230u: goto L_08918DD0;
    case 231u: goto L_08918DD8;
    case 232u: goto L_08918DE8;
    case 233u: goto L_08918E00;
    case 234u: goto L_08918E08;
    case 235u: goto L_08918E10;
    case 236u: goto L_08918E5C;
    case 237u: goto L_08918E68;
    case 238u: goto L_08918E88;
    case 239u: goto L_08918E90;
    case 240u: goto L_08918EBC;
    case 241u: goto L_08918F50;
    case 242u: goto L_08918F74;
    case 243u: goto L_08918F80;
    case 244u: goto L_08918F90;
    case 245u: goto L_08918F9C;
    case 246u: goto L_08918FA4;
    case 247u: goto L_08918FAC;
    case 248u: goto L_08918FBC;
    case 249u: goto L_08918FC8;
    case 250u: goto L_08918FD4;
    case 251u: goto L_08918FDC;
    case 252u: goto L_08918FE0;
    case 253u: goto L_08918FF0;
    case 254u: goto L_08918FFC;
    case 255u: goto L_0891900C;
    case 256u: goto L_08919014;
    case 257u: goto L_08919028;
    case 258u: goto L_08919034;
    case 259u: goto L_08919040;
    case 260u: goto L_08919054;
    case 261u: goto L_08919060;
    case 262u: goto L_0891906C;
    case 263u: goto L_08919080;
    case 264u: goto L_0891908C;
    case 265u: goto L_08919098;
    case 266u: goto L_089190AC;
    case 267u: goto L_089190B8;
    case 268u: goto L_089190C8;
    case 269u: goto L_089190D4;
    case 270u: goto L_089190F0;
    case 271u: goto L_08919114;
    case 272u: goto L_08919120;
    case 273u: goto L_08919130;
    case 274u: goto L_0891913C;
    case 275u: goto L_08919148;
    case 276u: goto L_0891915C;
    case 277u: goto L_08919168;
    case 278u: goto L_0891917C;
    case 279u: goto L_08919190;
    case 280u: goto L_0891919C;
    case 281u: goto L_089191A4;
    case 282u: goto L_089191A8;
    case 283u: goto L_089191B0;
    case 284u: goto L_089191B8;
    case 285u: goto L_089191C4;
    case 286u: goto L_089191D0;
    case 287u: goto L_089191DC;
    case 288u: goto L_089191E4;
    case 289u: goto L_089191F0;
    case 290u: goto L_089191F8;
    case 291u: goto L_0891920C;
    case 292u: goto L_08919218;
    case 293u: goto L_08919224;
    case 294u: goto L_08919230;
    case 295u: goto L_08919238;
    case 296u: goto L_08919244;
    case 297u: goto L_08919248;
    case 298u: goto L_08919260;
    case 299u: goto L_0891927C;
    case 300u: goto L_08919284;
    case 301u: goto L_08919294;
    case 302u: goto L_089192A8;
    case 303u: goto L_089192BC;
    case 304u: goto L_089192C8;
    case 305u: goto L_089192DC;
    case 306u: goto L_089192F0;
    case 307u: goto L_089192FC;
    case 308u: goto L_08919310;
    case 309u: goto L_08919324;
    case 310u: goto L_08919330;
    case 311u: goto L_08919344;
    case 312u: goto L_0891934C;
    case 313u: goto L_08919358;
    case 314u: goto L_08919368;
    case 315u: goto L_08919374;
    case 316u: goto L_08919380;
    case 317u: goto L_08919390;
    case 318u: goto L_089193A0;
    case 319u: goto L_089193AC;
    case 320u: goto L_089193DC;
    case 321u: goto L_089193E8;
    case 322u: goto L_089193F8;
    case 323u: goto L_08919404;
    case 324u: goto L_08919418;
    case 325u: goto L_0891942C;
    case 326u: goto L_08919440;
    case 327u: goto L_08919454;
    case 328u: goto L_08919460;
    case 329u: goto L_08919468;
    case 330u: goto L_08919470;
    case 331u: goto L_08919478;
    case 332u: goto L_08919480;
    case 333u: goto L_0891948C;
    case 334u: goto L_08919498;
    case 335u: goto L_089194A4;
    case 336u: goto L_089194B4;
    case 337u: goto L_089194BC;
    case 338u: goto L_089194C8;
    case 339u: goto L_089194D8;
    case 340u: goto L_089194E4;
    case 341u: goto L_089194F0;
    case 342u: goto L_089194F8;
    case 343u: goto L_08919508;
    case 344u: goto L_08919510;
    case 345u: goto L_0891951C;
    case 346u: goto L_08919528;
    case 347u: goto L_0891952C;
    case 348u: goto L_08919534;
    case 349u: goto L_08919540;
    case 350u: goto L_0891954C;
    case 351u: goto L_08919558;
    case 352u: goto L_08919568;
    case 353u: goto L_08919570;
    case 354u: goto L_08919580;
    case 355u: goto L_08919590;
    case 356u: goto L_08919598;
    case 357u: goto L_0891959C;
    case 358u: goto L_089195A8;
    case 359u: goto L_089195B4;
    case 360u: goto L_089195BC;
    case 361u: goto L_089195C4;
    case 362u: goto L_089195CC;
    case 363u: goto L_089195D4;
    case 364u: goto L_089195DC;
    case 365u: goto L_089195E4;
    case 366u: goto L_089195EC;
    case 367u: goto L_089195F4;
    case 368u: goto L_08919600;
    case 369u: goto L_08919610;
    case 370u: goto L_0891961C;
    case 371u: goto L_08919628;
    case 372u: goto L_08919630;
    case 373u: goto L_0891963C;
    case 374u: goto L_08919648;
    case 375u: goto L_08919654;
    case 376u: goto L_0891965C;
    case 377u: goto L_0891966C;
    case 378u: goto L_08919674;
    case 379u: goto L_0891967C;
    case 380u: goto L_08919688;
    case 381u: goto L_08919694;
    case 382u: goto L_0891969C;
    case 383u: goto L_089196A4;
    case 384u: goto L_089196B4;
    case 385u: goto L_089196C0;
    case 386u: goto L_089196C8;
    case 387u: goto L_089196D8;
    case 388u: goto L_089196E4;
    case 389u: goto L_089196EC;
    case 390u: goto L_089196FC;
    case 391u: goto L_08919708;
    case 392u: goto L_08919714;
    case 393u: goto L_08919724;
    case 394u: goto L_0891972C;
    case 395u: goto L_08919740;
    case 396u: goto L_08919748;
    case 397u: goto L_08919754;
    case 398u: goto L_0891975C;
    case 399u: goto L_08919764;
    case 400u: goto L_08919778;
    case 401u: goto L_08919784;
    case 402u: goto L_08919790;
    case 403u: goto L_08919794;
    case 404u: goto L_089197B8;
    case 405u: goto L_089197E4;
    case 406u: goto L_0891980C;
    case 407u: goto L_08919834;
    case 408u: goto L_08919860;
    case 409u: goto L_08919868;
    case 410u: goto L_08919878;
    case 411u: goto L_0891987C;
    case 412u: goto L_08919898;
    case 413u: goto L_089198AC;
    case 414u: goto L_089198E0;
    case 415u: goto L_08919900;
    case 416u: goto L_08919930;
    case 417u: goto L_08919938;
    case 418u: goto L_08919984;
    case 419u: goto L_08919994;
    case 420u: goto L_089199A4;
    case 421u: goto L_089199AC;
    case 422u: goto L_089199B0;
    case 423u: goto L_089199C0;
    case 424u: goto L_089199DC;
    case 425u: goto L_089199F8;
    case 426u: goto L_08919A14;
    case 427u: goto L_08919A1C;
    case 428u: goto L_08919A24;
    case 429u: goto L_08919A38;
    case 430u: goto L_08919A44;
    case 431u: goto L_08919A48;
    case 432u: goto L_08919A50;
    case 433u: goto L_08919A58;
    case 434u: goto L_08919A6C;
    case 435u: goto L_08919A90;
    case 436u: goto L_08919AA8;
    case 437u: goto L_08919AB8;
    case 438u: goto L_08919AC8;
    case 439u: goto L_08919AF4;
    case 440u: goto L_08919B08;
    case 441u: goto L_08919B10;
    case 442u: goto L_08919B1C;
    case 443u: goto L_08919B54;
    case 444u: goto L_08919B5C;
    case 445u: goto L_08919B70;
    case 446u: goto L_08919B78;
    case 447u: goto L_08919B80;
    case 448u: goto L_08919BA4;
    case 449u: goto L_08919BB4;
    case 450u: goto L_08919BC4;
    case 451u: goto L_08919BD0;
    case 452u: goto L_08919BEC;
    case 453u: goto L_08919C04;
    case 454u: goto L_08919C0C;
    case 455u: goto L_08919C14;
    case 456u: goto L_08919C2C;
    case 457u: goto L_08919C80;
    case 458u: goto L_08919C94;
    case 459u: goto L_08919CA8;
    case 460u: goto L_08919CB0;
    case 461u: goto L_08919CC4;
    case 462u: goto L_08919CDC;
    case 463u: goto L_08919CF0;
    case 464u: goto L_08919D08;
    case 465u: goto L_08919D40;
    case 466u: goto L_08919D94;
    case 467u: goto L_08919DA0;
    case 468u: goto L_08919DAC;
    case 469u: goto L_08919DB8;
    case 470u: goto L_08919DCC;
    case 471u: goto L_08919DD8;
    case 472u: goto L_08919DEC;
    case 473u: goto L_08919E04;
    case 474u: goto L_08919E4C;
    case 475u: goto L_08919E58;
    case 476u: goto L_08919EA8;
    case 477u: goto L_08919EB4;
    case 478u: goto L_08919EC4;
    case 479u: goto L_08919ED4;
    case 480u: goto L_08919EE4;
    case 481u: goto L_08919F0C;
    case 482u: goto L_08919F14;
    case 483u: goto L_08919F20;
    case 484u: goto L_08919F28;
    case 485u: goto L_08919F34;
    case 486u: goto L_08919F40;
    case 487u: goto L_08919F60;
    case 488u: goto L_08919F94;
    case 489u: goto L_08919F9C;
    case 490u: goto L_08919FA8;
    case 491u: goto L_08919FB0;
    case 492u: goto L_08919FBC;
    case 493u: goto L_08919FE4;
    case 494u: goto L_0891A018;
    case 495u: goto L_0891A024;
    case 496u: goto L_0891A030;
    case 497u: goto L_0891A03C;
    case 498u: goto L_0891A044;
    case 499u: goto L_0891A050;
    case 500u: goto L_0891A060;
    case 501u: goto L_0891A06C;
    case 502u: goto L_0891A0A8;
    case 503u: goto L_0891A0D0;
    case 504u: goto L_0891A0D8;
    case 505u: goto L_0891A0F0;
    case 506u: goto L_0891A0F4;
    case 507u: goto L_0891A104;
    case 508u: goto L_0891A10C;
    case 509u: goto L_0891A118;
    case 510u: goto L_0891A140;
    case 511u: goto L_0891A154;
    case 512u: goto L_0891A168;
    case 513u: goto L_0891A17C;
    case 514u: goto L_0891A1E0;
    case 515u: goto L_0891A1E8;
    case 516u: goto L_0891A214;
    case 517u: goto L_0891A224;
    case 518u: goto L_0891A230;
    case 519u: goto L_0891A26C;
    case 520u: goto L_0891A284;
    case 521u: goto L_0891A2B4;
    case 522u: goto L_0891A2F4;
    case 523u: goto L_0891A30C;
    case 524u: goto L_0891A314;
    case 525u: goto L_0891A320;
    case 526u: goto L_0891A32C;
    case 527u: goto L_0891A338;
    case 528u: goto L_0891A340;
    case 529u: goto L_0891A34C;
    case 530u: goto L_0891A35C;
    case 531u: goto L_0891A398;
    case 532u: goto L_0891A3A0;
    case 533u: goto L_0891A3A4;
    case 534u: goto L_0891A3B4;
    case 535u: goto L_0891A3B8;
    case 536u: goto L_0891A3C8;
    case 537u: goto L_0891A3CC;
    case 538u: goto L_0891A3D4;
    case 539u: goto L_0891A3E8;
    case 540u: goto L_0891A3F0;
    case 541u: goto L_0891A3F4;
    case 542u: goto L_0891A414;
    case 543u: goto L_0891A464;
    case 544u: goto L_0891A510;
    case 545u: goto L_0891A51C;
    case 546u: goto L_0891A528;
    case 547u: goto L_0891A534;
    case 548u: goto L_0891A55C;
    case 549u: goto L_0891A568;
    case 550u: goto L_0891A59C;
    case 551u: goto L_0891A5B4;
    case 552u: goto L_0891A5E0;
    case 553u: goto L_0891A5FC;
    case 554u: goto L_0891A608;
    case 555u: goto L_0891A61C;
    case 556u: goto L_0891A628;
    case 557u: goto L_0891A638;
    case 558u: goto L_0891A640;
    case 559u: goto L_0891A65C;
    case 560u: goto L_0891A668;
    case 561u: goto L_0891A670;
    case 562u: goto L_0891A684;
    case 563u: goto L_0891A694;
    case 564u: goto L_0891A6A0;
    case 565u: goto L_0891A6A8;
    case 566u: goto L_0891A6B0;
    case 567u: goto L_0891A6BC;
    case 568u: goto L_0891A6D4;
    case 569u: goto L_0891A700;
    case 570u: goto L_0891A724;
    case 571u: goto L_0891A730;
    case 572u: goto L_0891A740;
    case 573u: goto L_0891A75C;
    case 574u: goto L_0891A764;
    case 575u: goto L_0891A770;
    case 576u: goto L_0891A788;
    case 577u: goto L_0891A7B0;
    case 578u: goto L_0891A7C4;
    case 579u: goto L_0891A7D0;
    case 580u: goto L_0891A804;
    case 581u: goto L_0891A81C;
    case 582u: goto L_0891A82C;
    case 583u: goto L_0891A834;
    case 584u: goto L_0891A85C;
    case 585u: goto L_0891A868;
    case 586u: goto L_0891A880;
    case 587u: goto L_0891A88C;
    case 588u: goto L_0891A8A4;
    case 589u: goto L_0891A8AC;
    case 590u: goto L_0891A8B8;
    case 591u: goto L_0891A8C0;
    case 592u: goto L_0891A8CC;
    case 593u: goto L_0891A8D4;
    case 594u: goto L_0891A8E0;
    case 595u: goto L_0891A8E4;
    case 596u: goto L_0891A8E8;
    case 597u: goto L_0891A934;
    case 598u: goto L_0891A944;
    case 599u: goto L_0891A964;
    case 600u: goto L_0891A96C;
    case 601u: goto L_0891A9AC;
    case 602u: goto L_0891A9B8;
    case 603u: goto L_0891A9D0;
    case 604u: goto L_0891A9D8;
    case 605u: goto L_0891A9E4;
    case 606u: goto L_0891AA00;
    case 607u: goto L_0891AA08;
    case 608u: goto L_0891AA18;
    case 609u: goto L_0891AA28;
    case 610u: goto L_0891AA40;
    case 611u: goto L_0891AA50;
    case 612u: goto L_0891AA60;
    case 613u: goto L_0891AA70;
    case 614u: goto L_0891AA90;
    case 615u: goto L_0891AA98;
    case 616u: goto L_0891AAA8;
    case 617u: goto L_0891AAC4;
    case 618u: goto L_0891AAFC;
    case 619u: goto L_0891AB04;
    case 620u: goto L_0891AB3C;
    case 621u: goto L_0891AB44;
    case 622u: goto L_0891AB54;
    case 623u: goto L_0891AB5C;
    case 624u: goto L_0891AB78;
    case 625u: goto L_0891AB84;
    case 626u: goto L_0891AB8C;
    case 627u: goto L_0891ABA4;
    case 628u: goto L_0891ABAC;
    case 629u: goto L_0891ABB4;
    case 630u: goto L_0891ABD4;
    case 631u: goto L_0891ABF0;
    case 632u: goto L_0891ABFC;
    case 633u: goto L_0891AC08;
    case 634u: goto L_0891AC10;
    case 635u: goto L_0891AC14;
    case 636u: goto L_0891AC18;
    case 637u: goto L_0891AC28;
    case 638u: goto L_0891AC38;
    case 639u: goto L_0891AC48;
    case 640u: goto L_0891AC90;
    case 641u: goto L_0891AC98;
    case 642u: goto L_0891ACA0;
    case 643u: goto L_0891ACA8;
    case 644u: goto L_0891ACC8;
    case 645u: goto L_0891ACE4;
    case 646u: goto L_0891ACF0;
    case 647u: goto L_0891ACFC;
    case 648u: goto L_0891AD04;
    case 649u: goto L_0891AD08;
    case 650u: goto L_0891AD0C;
    case 651u: goto L_0891AD1C;
    case 652u: goto L_0891AD2C;
    case 653u: goto L_0891AD3C;
    case 654u: goto L_0891AD84;
    case 655u: goto L_0891AD8C;
    case 656u: goto L_0891AD94;
    case 657u: goto L_0891AD9C;
    case 658u: goto L_0891ADBC;
    case 659u: goto L_0891ADD8;
    case 660u: goto L_0891ADE4;
    case 661u: goto L_0891ADF0;
    case 662u: goto L_0891ADF8;
    case 663u: goto L_0891ADFC;
    case 664u: goto L_0891AE00;
    case 665u: goto L_0891AE10;
    case 666u: goto L_0891AE20;
    case 667u: goto L_0891AE30;
    case 668u: goto L_0891AE78;
    case 669u: goto L_0891AE80;
    case 670u: goto L_0891AE88;
    case 671u: goto L_0891AE90;
    case 672u: goto L_0891AEB0;
    case 673u: goto L_0891AECC;
    case 674u: goto L_0891AED8;
    case 675u: goto L_0891AEE4;
    case 676u: goto L_0891AEEC;
    case 677u: goto L_0891AEF0;
    case 678u: goto L_0891AEF4;
    case 679u: goto L_0891AF04;
    case 680u: goto L_0891AF14;
    case 681u: goto L_0891AF24;
    case 682u: goto L_0891AF6C;
    case 683u: goto L_0891AF74;
    case 684u: goto L_0891AF7C;
    case 685u: goto L_0891AF9C;
    case 686u: goto L_0891AFA4;
    case 687u: goto L_0891AFBC;
    case 688u: goto L_0891AFCC;
    case 689u: goto L_0891AFDC;
    case 690u: goto L_0891AFE4;
    case 691u: goto L_0891AFE8;
    case 692u: goto L_0891AFF4;
    case 693u: goto L_0891B004;
    case 694u: goto L_0891B010;
    case 695u: goto L_0891B024;
    case 696u: goto L_0891B030;
    case 697u: goto L_0891B058;
    case 698u: goto L_0891B170;
    case 699u: goto L_0891B19C;
    case 700u: goto L_0891B1A4;
    case 701u: goto L_0891B1C8;
    case 702u: goto L_0891B22C;
    case 703u: goto L_0891B238;
    case 704u: goto L_0891B250;
    case 705u: goto L_0891B258;
    case 706u: goto L_0891B268;
    case 707u: goto L_0891B270;
    case 708u: goto L_0891B274;
    case 709u: goto L_0891B280;
    case 710u: goto L_0891B290;
    case 711u: goto L_0891B29C;
    case 712u: goto L_0891B2A4;
    case 713u: goto L_0891B2B4;
    case 714u: goto L_0891B2C0;
    case 715u: goto L_0891B2C8;
    case 716u: goto L_0891B2E4;
    case 717u: goto L_0891B2F0;
    case 718u: goto L_0891B30C;
    case 719u: goto L_0891B314;
    case 720u: goto L_0891B328;
    case 721u: goto L_0891B36C;
    case 722u: goto L_0891B3C8;
    case 723u: goto L_0891B3D4;
    case 724u: goto L_0891B3E8;
    case 725u: goto L_0891B3FC;
    case 726u: goto L_0891B420;
    case 727u: goto L_0891B45C;
    case 728u: goto L_0891B468;
    case 729u: goto L_0891B474;
    case 730u: goto L_0891B48C;
    case 731u: goto L_0891B498;
    case 732u: goto L_0891B4A4;
    case 733u: goto L_0891B4BC;
    case 734u: goto L_0891B4CC;
    case 735u: goto L_0891B4E0;
    case 736u: goto L_0891B4F0;
    case 737u: goto L_0891B4FC;
    case 738u: goto L_0891B514;
    case 739u: goto L_0891B524;
    case 740u: goto L_0891B538;
    case 741u: goto L_0891B548;
    case 742u: goto L_0891B554;
    case 743u: goto L_0891B568;
    case 744u: goto L_0891B57C;
    case 745u: goto L_0891B598;
    case 746u: goto L_0891B5A4;
    case 747u: goto L_0891B5AC;
    case 748u: goto L_0891B5BC;
    case 749u: goto L_0891B5D0;
    case 750u: goto L_0891B5F4;
    case 751u: goto L_0891B60C;
    case 752u: goto L_0891B610;
    case 753u: goto L_0891B624;
    case 754u: goto L_0891B63C;
    case 755u: goto L_0891B674;
    case 756u: goto L_0891B690;
    case 757u: goto L_0891B698;
    case 758u: goto L_0891B6B0;
    case 759u: goto L_0891B6B8;
    case 760u: goto L_0891B6D8;
    case 761u: goto L_0891B6E0;
    case 762u: goto L_0891B6E4;
    case 763u: goto L_0891B6EC;
    case 764u: goto L_0891B6FC;
    case 765u: goto L_0891B708;
    case 766u: goto L_0891B7E0;
    case 767u: goto L_0891B7EC;
    case 768u: goto L_0891B7F8;
    case 769u: goto L_0891B820;
    case 770u: goto L_0891B828;
    case 771u: goto L_0891B830;
    case 772u: goto L_0891B838;
    case 773u: goto L_0891B840;
    case 774u: goto L_0891B854;
    case 775u: goto L_0891B85C;
    case 776u: goto L_0891B864;
    case 777u: goto L_0891B874;
    case 778u: goto L_0891B884;
    case 779u: goto L_0891B894;
    case 780u: goto L_0891B8A0;
    case 781u: goto L_0891B8AC;
    case 782u: goto L_0891B8CC;
    case 783u: goto L_0891B8E4;
    case 784u: goto L_0891B8F0;
    case 785u: goto L_0891B904;
    case 786u: goto L_0891B944;
    case 787u: goto L_0891B954;
    case 788u: goto L_0891B964;
    case 789u: goto L_0891B970;
    case 790u: goto L_0891B984;
    case 791u: goto L_0891B994;
    case 792u: goto L_0891B998;
    case 793u: goto L_0891B9A0;
    case 794u: goto L_0891B9B8;
    case 795u: goto L_0891B9DC;
    case 796u: goto L_0891B9E8;
    case 797u: goto L_0891B9EC;
    case 798u: goto L_0891BA24;
    case 799u: goto L_0891BA34;
    case 800u: goto L_0891BA3C;
    case 801u: goto L_0891BA44;
    case 802u: goto L_0891BA84;
    case 803u: goto L_0891BA8C;
    case 804u: goto L_0891BAA0;
    case 805u: goto L_0891BAB0;
    case 806u: goto L_0891BAC4;
    case 807u: goto L_0891BAD8;
    case 808u: goto L_0891BB04;
    case 809u: goto L_0891BB18;
    case 810u: goto L_0891BB34;
    case 811u: goto L_0891BB3C;
    case 812u: goto L_0891BB50;
    case 813u: goto L_0891BB64;
    case 814u: goto L_0891BB90;
    case 815u: goto L_0891BBAC;
    case 816u: goto L_0891BBDC;
    case 817u: goto L_0891BBF0;
    case 818u: goto L_0891BC00;
    case 819u: goto L_0891BC14;
    case 820u: goto L_0891BC1C;
    case 821u: goto L_0891BC30;
    case 822u: goto L_0891BC38;
    case 823u: goto L_0891BC4C;
    case 824u: goto L_0891BC54;
    case 825u: goto L_0891BC68;
    case 826u: goto L_0891BC70;
    case 827u: goto L_0891BC84;
    case 828u: goto L_0891BC88;
    case 829u: goto L_0891BC98;
    case 830u: goto L_0891BCA8;
    case 831u: goto L_0891BCBC;
    case 832u: goto L_0891BCC4;
    case 833u: goto L_0891BCC8;
    case 834u: goto L_0891BCDC;
    case 835u: goto L_0891BD00;
    case 836u: goto L_0891BD34;
    case 837u: goto L_0891BD40;
    case 838u: goto L_0891BD5C;
    case 839u: goto L_0891BD64;
    case 840u: goto L_0891BD68;
    case 841u: goto L_0891BD90;
    case 842u: goto L_0891BD9C;
    case 843u: goto L_0891BDB0;
    case 844u: goto L_0891BDBC;
    case 845u: goto L_0891BDE8;
    case 846u: goto L_0891BDFC;
    case 847u: goto L_0891BE04;
    case 848u: goto L_0891BE20;
    case 849u: goto L_0891BE30;
    case 850u: goto L_0891BE34;
    case 851u: goto L_0891BE44;
    case 852u: goto L_0891BE50;
    case 853u: goto L_0891BE60;
    case 854u: goto L_0891BE74;
    case 855u: goto L_0891BE7C;
    case 856u: goto L_0891BE90;
    case 857u: goto L_0891BE9C;
    case 858u: goto L_0891BEB0;
    case 859u: goto L_0891BEBC;
    case 860u: goto L_0891BED8;
    case 861u: goto L_0891BEF0;
    case 862u: goto L_0891BF04;
    case 863u: goto L_0891BF0C;
    case 864u: goto L_0891BF14;
    case 865u: goto L_0891BF1C;
    case 866u: goto L_0891BF30;
    case 867u: goto L_0891BF38;
    case 868u: goto L_0891BF4C;
    case 869u: goto L_0891BF54;
    case 870u: goto L_0891BF68;
    case 871u: goto L_0891BF70;
    case 872u: goto L_0891BF84;
    case 873u: goto L_0891BF90;
    case 874u: goto L_0891BFA0;
    case 875u: goto L_0891BFB0;
    case 876u: goto L_0891BFC0;
    case 877u: goto L_0891BFD0;
    case 878u: goto L_0891BFE4;
    case 879u: goto L_0891BFE8;
    case 880u: goto L_0891BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08918000:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6744), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6752)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918058;
      }
      goto L_0891801C;
    }
L_0891801C:
    ctx.gpr[31] = (0x08918024u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08918024u) goto L_08918024;
    return;
L_08918024:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08918050;
      }
      goto L_0891803C;
    }
L_0891803C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08918050;
L_08918050:
    ctx.gpr[31] = (0x08918058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 235u, 0x08A7D460u>(ctx, &aot_mem) && ctx.pc == 0x08918058u) goto L_08918058;
    return;
L_08918058:
    ctx.gpr[31] = (0x08918060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08918060u) goto L_08918060;
    return;
L_08918060:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    ctx.gpr[31] = (0x08918070u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3228), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08918070u) goto L_08918070;
    return;
L_08918070:
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6752)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08918084u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 450u, 0x088D6278u>(ctx, &aot_mem) && ctx.pc == 0x08918084u) goto L_08918084;
    return;
L_08918084:
    ctx.gpr[31] = (0x0891808Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891808Cu) goto L_0891808C;
    return;
L_0891808C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6792)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 30000u);
    ctx.gpr[31] = (0x089180A0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x089180A0u) goto L_089180A0;
    return;
L_089180A0:
    ctx.gpr[31] = (0x089180A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089180A8u) goto L_089180A8;
    return;
L_089180A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6792)));
    ctx.gpr[31] = (0x089180B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x089180B4u) goto L_089180B4;
    return;
L_089180B4:
    ctx.gpr[31] = (0x089180BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089180BCu) goto L_089180BC;
    return;
L_089180BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6792)));
    ctx.gpr[31] = (0x089180C8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 10u, 0x089440A0u>(ctx, &aot_mem) && ctx.pc == 0x089180C8u) goto L_089180C8;
    return;
L_089180C8:
    ctx.gpr[31] = (0x089180D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089180D0u) goto L_089180D0;
    return;
L_089180D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918198;
      }
      goto L_089180D8;
    }
L_089180D8:
    ctx.gpr[31] = (0x089180E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089180E0u) goto L_089180E0;
    return;
L_089180E0:
    ctx.gpr[31] = (0x089180E8u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089180E8u) goto L_089180E8;
    return;
L_089180E8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[31] = (0x089180F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 585u, 0x0899F1DCu>(ctx, &aot_mem) && ctx.pc == 0x089180F4u) goto L_089180F4;
    return;
L_089180F4:
    ctx.gpr[31] = (0x089180FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089180FCu) goto L_089180FC;
    return;
L_089180FC:
    ctx.gpr[31] = (0x08918104u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08918104u) goto L_08918104;
    return;
L_08918104:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08918124u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08918124u) goto L_08918124;
    return;
L_08918124:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08918144u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08918144u) goto L_08918144;
    return;
L_08918144:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08918164u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08918164u) goto L_08918164;
    return;
L_08918164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08918178;
    }
    goto L_08918178;
L_08918178:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08918188u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 668u, 0x0899F758u>(ctx, &aot_mem) && ctx.pc == 0x08918188u) goto L_08918188;
    return;
L_08918188:
    ctx.gpr[31] = (0x08918190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08918190u) goto L_08918190;
    return;
L_08918190:
    ctx.gpr[31] = (0x08918198u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 198u, 0x08944DA0u>(ctx, &aot_mem) && ctx.pc == 0x08918198u) goto L_08918198;
    return;
L_08918198:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089181BC;
      }
      goto L_089181A8;
    }
L_089181A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 94u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089181BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x089181BCu) goto L_089181BC;
    return;
L_089181BC:
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
L_089181EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(-6796)));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089182FC;
      }
      goto L_08918220;
    }
L_08918220:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-6792)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[4] = (0u | 42u);
      if (branch_taken) {
          goto L_0891827C;
      }
      goto L_08918230;
    }
L_08918230:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[6] = (0u | 39u);
      if (branch_taken) {
          goto L_08918248;
      }
      goto L_08918238;
    }
L_08918238:
    ctx.gpr[4] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891827C;
      }
      goto L_08918244;
    }
L_08918244:
    ctx.gpr[6] = (0u | 39u);
    goto L_08918248;
L_08918248:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 40u);
      if (branch_taken) {
          goto L_08918258;
      }
      goto L_08918250;
    }
L_08918250:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891827C;
      }
      goto L_08918258;
    }
L_08918258:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 31u);
      if (branch_taken) {
          goto L_0891826C;
      }
      goto L_08918260;
    }
L_08918260:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0891827C;
      }
      goto L_08918268;
    }
L_08918268:
    ctx.gpr[4] = (0u | 31u);
    goto L_0891826C;
L_0891826C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 15u);
      if (branch_taken) {
          goto L_089182FC;
      }
      goto L_08918274;
    }
L_08918274:
    if (ctx.gpr[7] != ctx.gpr[4]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
        goto L_08918300;
    }
    goto L_0891827C;
L_0891827C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6788)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089182C0;
      }
      goto L_08918290;
    }
L_08918290:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089182C0;
      }
      goto L_0891829C;
    }
L_0891829C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6784)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089182C0;
      }
      goto L_089182A8;
    }
L_089182A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6780)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089182C0;
      }
      goto L_089182B4;
    }
L_089182B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6776)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
        goto L_08918300;
    }
    goto L_089182C0;
L_089182C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6735)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089182D8;
      }
      goto L_089182D0;
    }
L_089182D0:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
        goto L_08918300;
    }
    goto L_089182D8;
L_089182D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6772)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6772), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (0u | 98u);
    ctx.gpr[31] = (0x089182FCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x089182FCu) goto L_089182FC;
    return;
L_089182FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    goto L_08918300;
L_08918300:
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11216));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7592)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7592), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
        goto L_08918350;
    }
    goto L_08918340;
L_08918340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08918364;
      }
      goto L_08918350;
    }
L_08918350:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08918364;
L_08918364:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891837C;
      }
      goto L_0891836C;
    }
L_0891836C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7548)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7548), ctx.gpr[5]);
    goto L_0891837C;
L_0891837C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7280)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7280), ctx.gpr[5]);
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
L_089183A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7588)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7588), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089183B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(-6796)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08918440;
      }
      goto L_089183D8;
    }
L_089183D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6788)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891841C;
      }
      goto L_089183EC;
    }
L_089183EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0891841C;
      }
      goto L_089183F8;
    }
L_089183F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6784)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0891841C;
      }
      goto L_08918404;
    }
L_08918404:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6780)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0891841C;
      }
      goto L_08918410;
    }
L_08918410:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6776)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
        goto L_08918444;
    }
    goto L_0891841C;
L_0891841C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6772)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6772), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (0u | 99u);
    ctx.gpr[31] = (0x08918440u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08918440u) goto L_08918440;
    return;
L_08918440:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    goto L_08918444;
L_08918444:
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11216));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08918468u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x08918468u) goto L_08918468;
    return;
L_08918468:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089184D0;
      }
      goto L_08918478;
    }
L_08918478:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089184AC;
      }
      goto L_08918480;
    }
L_08918480:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089184AC;
      }
      goto L_08918488;
    }
L_08918488:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089184C0;
      }
      goto L_08918490;
    }
L_08918490:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089184C0;
      }
      goto L_08918498;
    }
L_08918498:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7580)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7580), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089184D0;
      }
      goto L_089184AC;
    }
L_089184AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7584)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7584), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089184D0;
      }
      goto L_089184C0;
    }
L_089184C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7572)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7572), ctx.gpr[5]);
    goto L_089184D0;
L_089184D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089184E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6796)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 1u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089184F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6796)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08918534;
      }
      goto L_08918510;
    }
L_08918510:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6796), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26132), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x08918534u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6756), ctx.gpr[4]);
    goto L_08918610;
L_08918534:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08918540:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11216));
    goto L_0891854C;
L_0891854C:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 240 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891854C;
      }
      goto L_08918570;
    }
L_08918570:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08918578:
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11216));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08918590:
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089185FC;
      }
      goto L_0891859C;
    }
L_0891859C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089185FC;
      }
      goto L_089185A4;
    }
L_089185A4:
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(500));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
        goto L_089185E0;
    }
    goto L_089185B4;
L_089185B4:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-500));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08918604;
      }
      goto L_089185C4;
    }
L_089185C4:
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (0u | 500u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08918608;
      }
      goto L_089185E0;
    }
L_089185E0:
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (0u | 500u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08918608;
      }
      goto L_089185FC;
    }
L_089185FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08918608;
      }
      goto L_08918604;
    }
L_08918604:
    ctx.gpr[2] = (0u | 255u);
    goto L_08918608;
L_08918608:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08918610:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6792)));
    ctx.gpr[4] = (0u | 42u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08918648;
      }
      goto L_0891863C;
    }
L_0891863C:
    ctx.gpr[17] = (0u | 23u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0891866C;
      }
      goto L_08918648;
    }
L_08918648:
    ctx.gpr[4] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 40u);
      if (branch_taken) {
          goto L_0891865C;
      }
      goto L_08918654;
    }
L_08918654:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08918668;
      }
      goto L_0891865C;
    }
L_0891865C:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0891866C;
      }
      goto L_08918668;
    }
L_08918668:
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[17]) < 37 ? 1u : 0u);
    goto L_0891866C;
L_0891866C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089186BC;
      }
      goto L_08918674;
    }
L_08918674:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6752)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089186BC;
      }
      goto L_08918680;
    }
L_08918680:
    ctx.gpr[31] = (0x08918688u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08918688u) goto L_08918688;
    return;
L_08918688:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089186B4;
      }
      goto L_089186A0;
    }
L_089186A0:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089186B4;
L_089186B4:
    ctx.gpr[31] = (0x089186BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 237u, 0x08A7D484u>(ctx, &aot_mem) && ctx.pc == 0x089186BCu) goto L_089186BC;
    return;
L_089186BC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918750;
      }
      goto L_089186C4;
    }
L_089186C4:
    ctx.gpr[31] = (0x089186CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x089186CCu) goto L_089186CC;
    return;
L_089186CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x089186D8u);
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089186D8u) goto L_089186D8;
    return;
L_089186D8:
    ctx.gpr[31] = (0x089186E0u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089186E0u) goto L_089186E0;
    return;
L_089186E0:
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[31] = (0x089186F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x089186F8u) goto L_089186F8;
    return;
L_089186F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08918704u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 565u, 0x0899F0E4u>(ctx, &aot_mem) && ctx.pc == 0x08918704u) goto L_08918704;
    return;
L_08918704:
    ctx.gpr[31] = (0x0891870Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891870Cu) goto L_0891870C;
    return;
L_0891870C:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08918718u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1428), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08918718u) goto L_08918718;
    return;
L_08918718:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08918724u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1440), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08918724u) goto L_08918724;
    return;
L_08918724:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08918730u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1436), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08918730u) goto L_08918730;
    return;
L_08918730:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0891873Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1432), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891873Cu) goto L_0891873C;
    return;
L_0891873C:
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08918750u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 450u, 0x088D6278u>(ctx, &aot_mem) && ctx.pc == 0x08918750u) goto L_08918750;
    return;
L_08918750:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089187A4;
      }
      goto L_08918758;
    }
L_08918758:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x08918764u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6752)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08918764u) goto L_08918764;
    return;
L_08918764:
    ctx.gpr[31] = (0x0891876Cu);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891876Cu) goto L_0891876C;
    return;
L_0891876C:
    ctx.gpr[31] = (0x08918774u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08918774u) goto L_08918774;
    return;
L_08918774:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6752)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6748)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0891878Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x0891878Cu) goto L_0891878C;
    return;
L_0891878C:
    ctx.gpr[31] = (0x08918794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08918794u) goto L_08918794;
    return;
L_08918794:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6744)));
    ctx.gpr[31] = (0x089187A4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x089187A4u) goto L_089187A4;
    return;
L_089187A4:
    ctx.gpr[31] = (0x089187ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089187ACu) goto L_089187AC;
    return;
L_089187AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089188A0;
      }
      goto L_089187B4;
    }
L_089187B4:
    ctx.gpr[31] = (0x089187BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089187BCu) goto L_089187BC;
    return;
L_089187BC:
    ctx.gpr[31] = (0x089187C4u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089187C4u) goto L_089187C4;
    return;
L_089187C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089187E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x089187E4u) goto L_089187E4;
    return;
L_089187E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089187F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 565u, 0x0899F0E4u>(ctx, &aot_mem) && ctx.pc == 0x089187F0u) goto L_089187F0;
    return;
L_089187F0:
    ctx.gpr[31] = (0x089187F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089187F8u) goto L_089187F8;
    return;
L_089187F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1568)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918830;
      }
      goto L_08918804;
    }
L_08918804:
    ctx.gpr[31] = (0x0891880Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891880Cu) goto L_0891880C;
    return;
L_0891880C:
    ctx.gpr[31] = (0x08918814u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08918814u) goto L_08918814;
    return;
L_08918814:
    ctx.gpr[31] = (0x0891881Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891881Cu) goto L_0891881C;
    return;
L_0891881C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[31] = (0x08918828u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 585u, 0x0899F1DCu>(ctx, &aot_mem) && ctx.pc == 0x08918828u) goto L_08918828;
    return;
L_08918828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918854;
      }
      goto L_08918830;
    }
L_08918830:
    ctx.gpr[31] = (0x08918838u);
    ctx.gpr[16] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08918838u) goto L_08918838;
    return;
L_08918838:
    ctx.gpr[31] = (0x08918840u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08918840u) goto L_08918840;
    return;
L_08918840:
    ctx.gpr[31] = (0x08918848u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08918848u) goto L_08918848;
    return;
L_08918848:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[31] = (0x08918854u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 585u, 0x0899F1DCu>(ctx, &aot_mem) && ctx.pc == 0x08918854u) goto L_08918854;
    return;
L_08918854:
    ctx.gpr[31] = (0x0891885Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891885Cu) goto L_0891885C;
    return;
L_0891885C:
    ctx.gpr[31] = (0x08918864u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08918864u) goto L_08918864;
    return;
L_08918864:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08918888u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 10u, 0x089440A0u>(ctx, &aot_mem) && ctx.pc == 0x08918888u) goto L_08918888;
    return;
L_08918888:
    ctx.gpr[31] = (0x08918890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08918890u) goto L_08918890;
    return;
L_08918890:
    ctx.gpr[31] = (0x08918898u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 751u, 0x08887BB0u>(ctx, &aot_mem) && ctx.pc == 0x08918898u) goto L_08918898;
    return;
L_08918898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089188D8;
      }
      goto L_089188A0;
    }
L_089188A0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089188ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 327u, 0x088EE310u>(ctx, &aot_mem) && ctx.pc == 0x089188ACu) goto L_089188AC;
    return;
L_089188AC:
    ctx.gpr[31] = (0x089188B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 160u, 0x08868FB4u>(ctx, &aot_mem) && ctx.pc == 0x089188B4u) goto L_089188B4;
    return;
L_089188B4:
    ctx.gpr[31] = (0x089188BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089188BCu) goto L_089188BC;
    return;
L_089188BC:
    ctx.gpr[31] = (0x089188C4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 311u, 0x088D55F0u>(ctx, &aot_mem) && ctx.pc == 0x089188C4u) goto L_089188C4;
    return;
L_089188C4:
    ctx.gpr[31] = (0x089188CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089188CCu) goto L_089188CC;
    return;
L_089188CC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1724), 0u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(664), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089188D8;
L_089188D8:
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
L_089188F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6796)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08918940;
      }
      goto L_08918930;
    }
L_08918930:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08918E90;
      }
      goto L_08918938;
    }
L_08918938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918958;
      }
      goto L_08918940;
    }
L_08918940:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08918D18;
      }
      goto L_08918948;
    }
L_08918948:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918E90;
      }
      goto L_08918950;
    }
L_08918950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918E90;
      }
      goto L_08918958;
    }
L_08918958:
    ctx.gpr[31] = (0x08918960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x08918960u) goto L_08918960;
    return;
L_08918960:
    ctx.gpr[31] = (0x08918968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x08918968u) goto L_08918968;
    return;
L_08918968:
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08918980u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x08918980u) goto L_08918980;
    return;
L_08918980:
    ctx.gpr[31] = (0x08918988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x08918988u) goto L_08918988;
    return;
L_08918988:
    ctx.gpr[31] = (0x08918990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x08918990u) goto L_08918990;
    return;
L_08918990:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6756)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918A80;
      }
      goto L_089189B4;
    }
L_089189B4:
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(3000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918B38;
      }
      goto L_089189C0;
    }
L_089189C0:
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(11000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918B38;
      }
      goto L_089189CC;
    }
L_089189CC:
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089189E0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x089189E0u) goto L_089189E0;
    return;
L_089189E0:
    ctx.gpr[31] = (0x089189E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x089189E8u) goto L_089189E8;
    return;
L_089189E8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 3000u);
    ctx.gpr[31] = (0x089189F8u);
    ctx.gpr[6] = (0u | 11000u);
    goto L_08918590;
L_089189F8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 128u);
    ctx.gpr[31] = (0x08918A10u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08918A10u) goto L_08918A10;
    return;
L_08918A10:
    ctx.gpr[31] = (0x08918A18u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08918A18u) goto L_08918A18;
    return;
L_08918A18:
    ctx.gpr[31] = (0x08918A20u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08918A20u) goto L_08918A20;
    return;
L_08918A20:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6740)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918A78;
      }
      goto L_08918A30;
    }
L_08918A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] >> 31u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08918A78u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08918A78u) goto L_08918A78;
    return;
L_08918A78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918B38;
      }
      goto L_08918A80;
    }
L_08918A80:
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(8000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918B38;
      }
      goto L_08918A8C;
    }
L_08918A8C:
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08918AA0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08918AA0u) goto L_08918AA0;
    return;
L_08918AA0:
    ctx.gpr[31] = (0x08918AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x08918AA8u) goto L_08918AA8;
    return;
L_08918AA8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08918AB8u);
    ctx.gpr[6] = (0u | 8000u);
    goto L_08918590;
L_08918AB8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 128u);
    ctx.gpr[31] = (0x08918AD0u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08918AD0u) goto L_08918AD0;
    return;
L_08918AD0:
    ctx.gpr[31] = (0x08918AD8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08918AD8u) goto L_08918AD8;
    return;
L_08918AD8:
    ctx.gpr[31] = (0x08918AE0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08918AE0u) goto L_08918AE0;
    return;
L_08918AE0:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6740)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918B38;
      }
      goto L_08918AF0;
    }
L_08918AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] >> 31u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08918B38u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08918B38u) goto L_08918B38;
    return;
L_08918B38:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6764)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08918B98;
      }
      goto L_08918B48;
    }
L_08918B48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6756)));
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(4001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08918B74;
      }
      goto L_08918B64;
    }
L_08918B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918B98;
      }
      goto L_08918B74;
    }
L_08918B74:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 194u);
    ctx.gpr[6] = (0u | 165u);
    ctx.gpr[7] = (0u | 120u);
    ctx.gpr[31] = (0x08918B8Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08918B8Cu) goto L_08918B8C;
    return;
L_08918B8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08918B98u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 674u, 0x08917868u>(ctx, &aot_mem) && ctx.pc == 0x08918B98u) goto L_08918B98;
    return;
L_08918B98:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08918D10;
      }
      goto L_08918BA8;
    }
L_08918BA8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6772)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08918D10;
      }
      goto L_08918BBC;
    }
L_08918BBC:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-6768)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17648));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[18] = (2227u << 16u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 0u);
        goto L_08918BE4;
    }
    goto L_08918BE4;
L_08918BE4:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 0 ? 1u : 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
        goto L_08918BF4;
    }
    goto L_08918BF4;
L_08918BF4:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08918C08u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(9432));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08918C08u) goto L_08918C08;
    return;
L_08918C08:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(9432));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5136));
    ctx.gpr[31] = (0x08918C1Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x08918C1Cu) goto L_08918C1C;
    return;
L_08918C1C:
    ctx.gpr[31] = (0x08918C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 512u, 0x08987034u>(ctx, &aot_mem) && ctx.pc == 0x08918C24u) goto L_08918C24;
    return;
L_08918C24:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[31] = (0x08918C44u);
    ctx.gpr[7] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08918C44u) goto L_08918C44;
    return;
L_08918C44:
    ctx.gpr[31] = (0x08918C4Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08918C4Cu) goto L_08918C4C;
    return;
L_08918C4C:
    ctx.gpr[31] = (0x08918C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08918C54u) goto L_08918C54;
    return;
L_08918C54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08918C60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08918C60u) goto L_08918C60;
    return;
L_08918C60:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17386u << 16u);
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08918C90u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08918C90u) goto L_08918C90;
    return;
L_08918C90:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-24628)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[31] = (0x08918CA8u);
    ctx.gpr[7] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08918CA8u) goto L_08918CA8;
    return;
L_08918CA8:
    ctx.gpr[31] = (0x08918CB0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08918CB0u) goto L_08918CB0;
    return;
L_08918CB0:
    ctx.gpr[31] = (0x08918CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x08918CB8u) goto L_08918CB8;
    return;
L_08918CB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[22] = ctx.fpr[24] - ctx.fpr[22];
      if (branch_taken) {
          goto L_08918CEC;
      }
      goto L_08918CC4;
    }
L_08918CC4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08918CD0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08918CD0u) goto L_08918CD0;
    return;
L_08918CD0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918CE8;
      }
      goto L_08918CDC;
    }
L_08918CDC:
    ctx.gpr[31] = (0x08918CE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08918CE4u) goto L_08918CE4;
    return;
L_08918CE4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08918CE8;
L_08918CE8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08918CEC;
L_08918CEC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08918CFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17656));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08918CFCu) goto L_08918CFC;
    return;
L_08918CFC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08918D10u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08918D10u) goto L_08918D10;
    return;
L_08918D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918E90;
      }
      goto L_08918D18;
    }
L_08918D18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918E88;
      }
      goto L_08918D28;
    }
L_08918D28:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6756)));
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918E88;
      }
      goto L_08918D48;
    }
L_08918D48:
    ctx.gpr[31] = (0x08918D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x08918D50u) goto L_08918D50;
    return;
L_08918D50:
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08918D68u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x08918D68u) goto L_08918D68;
    return;
L_08918D68:
    ctx.gpr[31] = (0x08918D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x08918D70u) goto L_08918D70;
    return;
L_08918D70:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_08918DAC;
      }
      goto L_08918D80;
    }
L_08918D80:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08918D8Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08918D8Cu) goto L_08918D8C;
    return;
L_08918D8C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918DA4;
      }
      goto L_08918D98;
    }
L_08918D98:
    ctx.gpr[31] = (0x08918DA0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08918DA0u) goto L_08918DA0;
    return;
L_08918DA0:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08918DA4;
L_08918DA4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_08918DAC;
L_08918DAC:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08918DBCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17664));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08918DBCu) goto L_08918DBC;
    return;
L_08918DBC:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08918DD0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08918DD0u) goto L_08918DD0;
    return;
L_08918DD0:
    ctx.gpr[31] = (0x08918DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x08918DD8u) goto L_08918DD8;
    return;
L_08918DD8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08918DE8u);
    ctx.gpr[6] = (0u | 5000u);
    goto L_08918590;
L_08918DE8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 128u);
    ctx.gpr[31] = (0x08918E00u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08918E00u) goto L_08918E00;
    return;
L_08918E00:
    ctx.gpr[31] = (0x08918E08u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08918E08u) goto L_08918E08;
    return;
L_08918E08:
    ctx.gpr[31] = (0x08918E10u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08918E10u) goto L_08918E10;
    return;
L_08918E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08918E68;
      }
      goto L_08918E5C;
    }
L_08918E5C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_08918E68;
L_08918E68:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08918E88u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08918E88u) goto L_08918E88;
    return;
L_08918E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08918E90;
      }
      goto L_08918E90;
    }
L_08918E90:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
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
L_08918EBC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27448)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27476)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(27456), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27464), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27460), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(27468), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(27480), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08918F50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08918F74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17672));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08918F74u) goto L_08918F74;
    return;
L_08918F74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08918F80u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x08918F80u) goto L_08918F80;
    return;
L_08918F80:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08918F90u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x08918F90u) goto L_08918F90;
    return;
L_08918F90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08918F9Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 657u, 0x0890BA74u>(ctx, &aot_mem) && ctx.pc == 0x08918F9Cu) goto L_08918F9C;
    return;
L_08918F9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891900C;
      }
      goto L_08918FA4;
    }
L_08918FA4:
    ctx.gpr[31] = (0x08918FACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 548u, 0x0890B378u>(ctx, &aot_mem) && ctx.pc == 0x08918FACu) goto L_08918FAC;
    return;
L_08918FAC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08918FBCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08918FBCu) goto L_08918FBC;
    return;
L_08918FBC:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[6] = (2225u << 16u);
      if (branch_taken) {
          goto L_08918FE0;
      }
      goto L_08918FC8;
    }
L_08918FC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08918FD4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 581u, 0x0890B68Cu>(ctx, &aot_mem) && ctx.pc == 0x08918FD4u) goto L_08918FD4;
    return;
L_08918FD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08918FF0;
      }
      goto L_08918FDC;
    }
L_08918FDC:
    ctx.gpr[6] = (2225u << 16u);
    goto L_08918FE0;
L_08918FE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08918FF0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17680));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x08918FF0u) goto L_08918FF0;
    return;
L_08918FF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08918FFCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08918FFCu) goto L_08918FFC;
    return;
L_08918FFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891900Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 545u, 0x0890B30Cu>(ctx, &aot_mem) && ctx.pc == 0x0891900Cu) goto L_0891900C;
    return;
L_0891900C:
    ctx.gpr[31] = (0x08919014u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 712u, 0x0890BFC8u>(ctx, &aot_mem) && ctx.pc == 0x08919014u) goto L_08919014;
    return;
L_08919014:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08919028u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17704));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08919028u) goto L_08919028;
    return;
L_08919028:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919034u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08919034u) goto L_08919034;
    return;
L_08919034:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919040u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08919040u) goto L_08919040;
    return;
L_08919040:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08919054u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17712));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08919054u) goto L_08919054;
    return;
L_08919054:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919060u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08919060u) goto L_08919060;
    return;
L_08919060:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891906Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0891906Cu) goto L_0891906C;
    return;
L_0891906C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x08919080u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17720));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08919080u) goto L_08919080;
    return;
L_08919080:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891908Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x0891908Cu) goto L_0891908C;
    return;
L_0891908C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919098u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 534u, 0x08A4BBE4u>(ctx, &aot_mem) && ctx.pc == 0x08919098u) goto L_08919098;
    return;
L_08919098:
    ctx.gpr[17] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089190ACu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 516u, 0x08A4BADCu>(ctx, &aot_mem) && ctx.pc == 0x089190ACu) goto L_089190AC;
    return;
L_089190AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089190B8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x089190B8u) goto L_089190B8;
    return;
L_089190B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x089190C8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 26u, 0x0890C234u>(ctx, &aot_mem) && ctx.pc == 0x089190C8u) goto L_089190C8;
    return;
L_089190C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089190D4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x089190D4u) goto L_089190D4;
    return;
L_089190D4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_089190F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08919114u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17672));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08919114u) goto L_08919114;
    return;
L_08919114:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919120u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x08919120u) goto L_08919120;
    return;
L_08919120:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919130u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x08919130u) goto L_08919130;
    return;
L_08919130:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891913Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 657u, 0x0890BA74u>(ctx, &aot_mem) && ctx.pc == 0x0891913Cu) goto L_0891913C;
    return;
L_0891913C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891915C;
      }
      goto L_08919148;
    }
L_08919148:
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0891915Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17728));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x0891915Cu) goto L_0891915C;
    return;
L_0891915C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919168u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08919168u) goto L_08919168;
    return;
L_08919168:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0891917Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17712));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0891917Cu) goto L_0891917C;
    return;
L_0891917C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x08919190u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17720));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08919190u) goto L_08919190;
    return;
L_08919190:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891919Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x0891919Cu) goto L_0891919C;
    return;
L_0891919C:
    ctx.gpr[31] = (0x089191A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BB54u>(ctx, &aot_mem) && ctx.pc == 0x089191A4u) goto L_089191A4;
    return;
L_089191A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089191A8;
L_089191A8:
    ctx.gpr[31] = (0x089191B0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 77u, 0x0890C66Cu>(ctx, &aot_mem) && ctx.pc == 0x089191B0u) goto L_089191B0;
    return;
L_089191B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919238;
      }
      goto L_089191B8;
    }
L_089191B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089191C4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x089191C4u) goto L_089191C4;
    return;
L_089191C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089191D0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x089191D0u) goto L_089191D0;
    return;
L_089191D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089191DCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 657u, 0x0890BA74u>(ctx, &aot_mem) && ctx.pc == 0x089191DCu) goto L_089191DC;
    return;
L_089191DC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089191F8;
      }
      goto L_089191E4;
    }
L_089191E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089191F0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x089191F0u) goto L_089191F0;
    return;
L_089191F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089191A8;
      }
      goto L_089191F8;
    }
L_089191F8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0891920Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17752));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0891920Cu) goto L_0891920C;
    return;
L_0891920C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919218u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08919218u) goto L_08919218;
    return;
L_08919218:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919224u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08919224u) goto L_08919224;
    return;
L_08919224:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919230u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08919230u) goto L_08919230;
    return;
L_08919230:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08919248;
      }
      goto L_08919238;
    }
L_08919238:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919244u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08919244u) goto L_08919244;
    return;
L_08919244:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08919248;
L_08919248:
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
L_08919260:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919284;
      }
      goto L_0891927C;
    }
L_0891927C:
    ctx.gpr[31] = (0x08919284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08919284u) goto L_08919284;
    return;
L_08919284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08919294u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 712u, 0x0890BFC8u>(ctx, &aot_mem) && ctx.pc == 0x08919294u) goto L_08919294;
    return;
L_08919294:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089192A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17760));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x089192A8u) goto L_089192A8;
    return;
L_089192A8:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089192BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28848));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x089192BCu) goto L_089192BC;
    return;
L_089192BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089192C8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x089192C8u) goto L_089192C8;
    return;
L_089192C8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089192DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17768));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x089192DCu) goto L_089192DC;
    return;
L_089192DC:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089192F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28432));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x089192F0u) goto L_089192F0;
    return;
L_089192F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089192FCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x089192FCu) goto L_089192FC;
    return;
L_089192FC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08919310u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17776));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08919310u) goto L_08919310;
    return;
L_08919310:
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08919324u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27732));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08919324u) goto L_08919324;
    return;
L_08919324:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919330u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08919330u) goto L_08919330;
    return;
L_08919330:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x08919344u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17720));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08919344u) goto L_08919344;
    return;
L_08919344:
    ctx.gpr[31] = (0x0891934Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 712u, 0x0890BFC8u>(ctx, &aot_mem) && ctx.pc == 0x0891934Cu) goto L_0891934C;
    return;
L_0891934C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919358u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08919358u) goto L_08919358;
    return;
L_08919358:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919368u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17672));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08919368u) goto L_08919368;
    return;
L_08919368:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919374u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x08919374u) goto L_08919374;
    return;
L_08919374:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919380u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08919380u) goto L_08919380;
    return;
L_08919380:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919390:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089193A0u);
    // nop
    goto L_089193AC;
L_089193A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089193AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089193DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17672));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x089193DCu) goto L_089193DC;
    return;
L_089193DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089193E8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x089193E8u) goto L_089193E8;
    return;
L_089193E8:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089193F8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x089193F8u) goto L_089193F8;
    return;
L_089193F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919404u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08919404u) goto L_08919404;
    return;
L_08919404:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08919418u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17752));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08919418u) goto L_08919418;
    return;
L_08919418:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0891942Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17704));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x0891942Cu) goto L_0891942C;
    return;
L_0891942C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08919440u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17712));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08919440u) goto L_08919440;
    return;
L_08919440:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x08919454u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17720));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08919454u) goto L_08919454;
    return;
L_08919454:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919460u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x08919460u) goto L_08919460;
    return;
L_08919460:
    ctx.gpr[31] = (0x08919468u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BB54u>(ctx, &aot_mem) && ctx.pc == 0x08919468u) goto L_08919468;
    return;
L_08919468:
    ctx.gpr[18] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08919470;
L_08919470:
    ctx.gpr[31] = (0x08919478u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 77u, 0x0890C66Cu>(ctx, &aot_mem) && ctx.pc == 0x08919478u) goto L_08919478;
    return;
L_08919478:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891969C;
      }
      goto L_08919480;
    }
L_08919480:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891948Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x0891948Cu) goto L_0891948C;
    return;
L_0891948C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919498u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x08919498u) goto L_08919498;
    return;
L_08919498:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089194A4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x089194A4u) goto L_089194A4;
    return;
L_089194A4:
    ctx.gpr[19] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089194B4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x089194B4u) goto L_089194B4;
    return;
L_089194B4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919688;
      }
      goto L_089194BC;
    }
L_089194BC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x089194C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x089194C8u) goto L_089194C8;
    return;
L_089194C8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089194D8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x089194D8u) goto L_089194D8;
    return;
L_089194D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089194E4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x089194E4u) goto L_089194E4;
    return;
L_089194E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089194F0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x089194F0u) goto L_089194F0;
    return;
L_089194F0:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08919508;
      }
      goto L_089194F8;
    }
L_089194F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08919508u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 45u, 0x0890C3ECu>(ctx, &aot_mem) && ctx.pc == 0x08919508u) goto L_08919508;
    return;
L_08919508:
    ctx.gpr[31] = (0x08919510u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08919510u) goto L_08919510;
    return;
L_08919510:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891952C;
      }
      goto L_0891951C;
    }
L_0891951C:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08919528u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08919528u) goto L_08919528;
    return;
L_08919528:
    ctx.gpr[20] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_0891952C;
L_0891952C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891967C;
      }
      goto L_08919534;
    }
L_08919534:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919540u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08919540u) goto L_08919540;
    return;
L_08919540:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891954Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x0891954Cu) goto L_0891954C;
    return;
L_0891954C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919558u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 657u, 0x0890BA74u>(ctx, &aot_mem) && ctx.pc == 0x08919558u) goto L_08919558;
    return;
L_08919558:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919568u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08919568u) goto L_08919568;
    return;
L_08919568:
    ctx.gpr[31] = (0x08919570u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08919570u) goto L_08919570;
    return;
L_08919570:
    ctx.gpr[21] = (ctx.gpr[2] - ctx.gpr[19]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08919598;
      }
      goto L_08919580;
    }
L_08919580:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08919590u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 545u, 0x0890B30Cu>(ctx, &aot_mem) && ctx.pc == 0x08919590u) goto L_08919590;
    return;
L_08919590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891959C;
      }
      goto L_08919598;
    }
L_08919598:
    ctx.gpr[21] = (0u | 0u);
    goto L_0891959C;
L_0891959C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089195A8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 384u, 0x088BA17Cu>(ctx, &aot_mem) && ctx.pc == 0x089195A8u) goto L_089195A8;
    return;
L_089195A8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919630;
      }
      goto L_089195B4;
    }
L_089195B4:
    ctx.gpr[31] = (0x089195BCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x089195BCu) goto L_089195BC;
    return;
L_089195BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08919630;
      }
      goto L_089195C4;
    }
L_089195C4:
    ctx.gpr[31] = (0x089195CCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x089195CCu) goto L_089195CC;
    return;
L_089195CC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089195F4;
      }
      goto L_089195D4;
    }
L_089195D4:
    ctx.gpr[31] = (0x089195DCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x089195DCu) goto L_089195DC;
    return;
L_089195DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08919630;
      }
      goto L_089195E4;
    }
L_089195E4:
    ctx.gpr[31] = (0x089195ECu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x089195ECu) goto L_089195EC;
    return;
L_089195EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919630;
      }
      goto L_089195F4;
    }
L_089195F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919600u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08919600u) goto L_08919600;
    return;
L_08919600:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919610u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 545u, 0x0890B30Cu>(ctx, &aot_mem) && ctx.pc == 0x08919610u) goto L_08919610;
    return;
L_08919610:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891961Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0891961Cu) goto L_0891961C;
    return;
L_0891961C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08919628u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08919628u) goto L_08919628;
    return;
L_08919628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891967C;
      }
      goto L_08919630;
    }
L_08919630:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891963Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x0891963Cu) goto L_0891963C;
    return;
L_0891963C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919648u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08919648u) goto L_08919648;
    return;
L_08919648:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919654u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08919654u) goto L_08919654;
    return;
L_08919654:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891967C;
      }
      goto L_0891965C;
    }
L_0891965C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891966Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 545u, 0x0890B30Cu>(ctx, &aot_mem) && ctx.pc == 0x0891966Cu) goto L_0891966C;
    return;
L_0891966C:
    ctx.gpr[31] = (0x08919674u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 75u, 0x0890C64Cu>(ctx, &aot_mem) && ctx.pc == 0x08919674u) goto L_08919674;
    return;
L_08919674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919794;
      }
      goto L_0891967C;
    }
L_0891967C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919688u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08919688u) goto L_08919688;
    return;
L_08919688:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919694u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08919694u) goto L_08919694;
    return;
L_08919694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08919470;
      }
      goto L_0891969C;
    }
L_0891969C:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    goto L_089196A4;
L_089196A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x089196B4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x089196B4u) goto L_089196B4;
    return;
L_089196B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089196C0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x089196C0u) goto L_089196C0;
    return;
L_089196C0:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089196EC;
      }
      goto L_089196C8;
    }
L_089196C8:
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089196D8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 516u, 0x08A4BADCu>(ctx, &aot_mem) && ctx.pc == 0x089196D8u) goto L_089196D8;
    return;
L_089196D8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891975C;
      }
      goto L_089196E4;
    }
L_089196E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919784;
      }
      goto L_089196EC;
    }
L_089196EC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089196FCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x089196FCu) goto L_089196FC;
    return;
L_089196FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919708u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x08919708u) goto L_08919708;
    return;
L_08919708:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919714u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08919714u) goto L_08919714;
    return;
L_08919714:
    ctx.gpr[20] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919724u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08919724u) goto L_08919724;
    return;
L_08919724:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919748;
      }
      goto L_0891972C;
    }
L_0891972C:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919740u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 26u, 0x0890C234u>(ctx, &aot_mem) && ctx.pc == 0x08919740u) goto L_08919740;
    return;
L_08919740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919754;
      }
      goto L_08919748;
    }
L_08919748:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919754u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08919754u) goto L_08919754;
    return;
L_08919754:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089196A4;
      }
      goto L_0891975C;
    }
L_0891975C:
    ctx.gpr[31] = (0x08919764u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BB54u>(ctx, &aot_mem) && ctx.pc == 0x08919764u) goto L_08919764;
    return;
L_08919764:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919778u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 26u, 0x0890C234u>(ctx, &aot_mem) && ctx.pc == 0x08919778u) goto L_08919778;
    return;
L_08919778:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891975C;
      }
      goto L_08919784;
    }
L_08919784:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919790u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08919790u) goto L_08919790;
    return;
L_08919790:
    ctx.gpr[2] = (0u | 0u);
    goto L_08919794;
L_08919794:
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
L_089197B8:
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
L_089197E4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891980C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(51)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919834:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08919860u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 558u, 0x08927438u>(ctx, &aot_mem) && ctx.pc == 0x08919860u) goto L_08919860;
    return;
L_08919860:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891987C;
      }
      goto L_08919868;
    }
L_08919868:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891987C;
      }
      goto L_08919878;
    }
L_08919878:
    ctx.gpr[18] = (0u | 1u);
    goto L_0891987C;
L_0891987C:
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
L_08919898:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089198ACu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 659u, 0x08AC3DE4u>(ctx, &aot_mem) && ctx.pc == 0x089198ACu) goto L_089198AC;
    return;
L_089198AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19020));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(122), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(124), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089198E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08919900u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 659u, 0x08AC3DE4u>(ctx, &aot_mem) && ctx.pc == 0x08919900u) goto L_08919900;
    return;
L_08919900:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19020));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(122), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(124), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08919930u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08919930u) goto L_08919930;
    return;
L_08919930:
    ctx.gpr[31] = (0x08919938u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A822ACu>(ctx, &aot_mem) && ctx.pc == 0x08919938u) goto L_08919938;
    return;
L_08919938:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(50)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[31] = (0x08919984u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08919984u) goto L_08919984;
    return;
L_08919984:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[31] = (0x08919994u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08919994u) goto L_08919994;
    return;
L_08919994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089199B0;
      }
      goto L_089199A4;
    }
L_089199A4:
    ctx.gpr[31] = (0x089199ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0891980C;
L_089199AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089199B0;
L_089199B0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089199C0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 131u, 0x08AC5034u>(ctx, &aot_mem) && ctx.pc == 0x089199C0u) goto L_089199C0;
    return;
L_089199C0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_089199DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08919A58;
      }
      goto L_089199F8;
    }
L_089199F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19020));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08919A1C;
      }
      goto L_08919A14;
    }
L_08919A14:
    ctx.gpr[31] = (0x08919A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 159u, 0x08A8180Cu>(ctx, &aot_mem) && ctx.pc == 0x08919A1Cu) goto L_08919A1C;
    return;
L_08919A1C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08919A48;
      }
      goto L_08919A24;
    }
L_08919A24:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9348));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08919A38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 99u, 0x08AC4CB8u>(ctx, &aot_mem) && ctx.pc == 0x08919A38u) goto L_08919A38;
    return;
L_08919A38:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08919A44u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 668u, 0x08AC3F40u>(ctx, &aot_mem) && ctx.pc == 0x08919A44u) goto L_08919A44;
    return;
L_08919A44:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08919A48;
L_08919A48:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919A58;
      }
      goto L_08919A50;
    }
L_08919A50:
    ctx.gpr[31] = (0x08919A58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08919A58u) goto L_08919A58;
    return;
L_08919A58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919A6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08919A90u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 20u, 0x08AC42F8u>(ctx, &aot_mem) && ctx.pc == 0x08919A90u) goto L_08919A90;
    return;
L_08919A90:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[31] = (0x08919AA8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08919AA8u) goto L_08919AA8;
    return;
L_08919AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08919B08;
      }
      goto L_08919AB8;
    }
L_08919AB8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17792));
    ctx.gpr[31] = (0x08919AC8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    goto L_089197B8;
L_08919AC8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(118)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(117)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08919AF4u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 206u, 0x08A84F08u>(ctx, &aot_mem) && ctx.pc == 0x08919AF4u) goto L_08919AF4;
    return;
L_08919AF4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17832));
    ctx.gpr[31] = (0x08919B08u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_089197B8;
L_08919B08:
    ctx.gpr[31] = (0x08919B10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A822ACu>(ctx, &aot_mem) && ctx.pc == 0x08919B10u) goto L_08919B10;
    return;
L_08919B10:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08919B5C;
      }
      goto L_08919B1C;
    }
L_08919B1C:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
        goto L_08919B78;
    }
    goto L_08919B54;
L_08919B54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919BB4;
      }
      goto L_08919B5C;
    }
L_08919B5C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08919B70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17876));
    goto L_089197B8;
L_08919B70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919C14;
      }
      goto L_08919B78;
    }
L_08919B78:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08919BB4;
      }
      goto L_08919B80;
    }
L_08919B80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919BB4;
      }
      goto L_08919BA4;
    }
L_08919BA4:
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08919BB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17952));
    goto L_089197B8;
L_08919BB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08919C0C;
      }
      goto L_08919BC4;
    }
L_08919BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919C0C;
      }
      goto L_08919BD0;
    }
L_08919BD0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(33))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08919C0C;
      }
      goto L_08919BEC;
    }
L_08919BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(33))))));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08919C04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17984));
    goto L_089197B8;
L_08919C04:
    ctx.gpr[31] = (0x08919C0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 23u, 0x08A80DACu>(ctx, &aot_mem) && ctx.pc == 0x08919C0Cu) goto L_08919C0C;
    return;
L_08919C0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08919C14;
L_08919C14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919C2C:
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
          goto L_08919CB0;
      }
      goto L_08919C80;
    }
L_08919C80:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08919C94u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08919C94u) goto L_08919C94;
    return;
L_08919C94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08919CA8u);
    ctx.gpr[7] = (0u | 255u);
    goto L_0891A414;
L_08919CA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08919CF0;
      }
      goto L_08919CB0;
    }
L_08919CB0:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08919CC4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08919CC4u) goto L_08919CC4;
    return;
L_08919CC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[31] = (0x08919CDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 114u, 0x08AC4E74u>(ctx, &aot_mem) && ctx.pc == 0x08919CDCu) goto L_08919CDC;
    return;
L_08919CDC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08919CF0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0891A35C;
L_08919CF0:
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
L_08919D08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919D94;
      }
      goto L_08919D40;
    }
L_08919D40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08919D94;
L_08919D94:
    ctx.gpr[4] = (ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919DAC;
      }
      goto L_08919DA0;
    }
L_08919DA0:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08919DACu);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 99u, 0x08A5CC64u>(ctx, &aot_mem) && ctx.pc == 0x08919DACu) goto L_08919DAC;
    return;
L_08919DAC:
    ctx.gpr[4] = (ctx.gpr[16] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919DCC;
      }
      goto L_08919DB8;
    }
L_08919DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08919DCC;
L_08919DCC:
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919DEC;
      }
      goto L_08919DD8;
    }
L_08919DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08919DEC;
L_08919DEC:
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
L_08919E04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6933)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08919E4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08919E4Cu) goto L_08919E4C;
    return;
L_08919E4C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08919E58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.gpr[31] = (0x08919EA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18032));
    goto L_089197B8;
L_08919EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08919ED4;
    }
    goto L_08919EB4;
L_08919EB4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x08919EC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08919EC4u) goto L_08919EC4;
    return;
L_08919EC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08919ED4;
L_08919ED4:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[20] = (2232u << 16u);
      if (branch_taken) {
          goto L_08919F14;
      }
      goto L_08919EE4;
    }
L_08919EE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08919F28;
      }
      goto L_08919F0C;
    }
L_08919F0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919FB0;
      }
      goto L_08919F14;
    }
L_08919F14:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08919F20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18056));
    goto L_089197B8;
L_08919F20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A230;
      }
      goto L_08919F28;
    }
L_08919F28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08919F9C;
      }
      goto L_08919F34;
    }
L_08919F34:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08919F40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18104));
    goto L_089197B8;
L_08919F40:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08919F60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18136));
    goto L_089197B8;
L_08919F60:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-6934)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[31] = (0x08919F94u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08919F94u) goto L_08919F94;
    return;
L_08919F94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08919FA8;
      }
      goto L_08919F9C;
    }
L_08919F9C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08919FA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18184));
    goto L_089197B8;
L_08919FA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A230;
      }
      goto L_08919FB0;
    }
L_08919FB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[17] + static_cast<std::uint32_t>(124));
      if (branch_taken) {
          goto L_0891A1E8;
      }
      goto L_08919FBC;
    }
L_08919FBC:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (20352u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(57));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (0u | 0u);
    goto L_08919FE4;
L_08919FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
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
        goto L_0891A018;
    }
    goto L_0891A018;
L_0891A018:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_0891A118;
    }
    goto L_0891A024;
L_0891A024:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0891A030u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x0891A030u) goto L_0891A030;
    return;
L_0891A030:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A10C;
      }
      goto L_0891A03C;
    }
L_0891A03C:
    ctx.gpr[31] = (0x0891A044u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 111u, 0x08A34AF8u>(ctx, &aot_mem) && ctx.pc == 0x0891A044u) goto L_0891A044;
    return;
L_0891A044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891A06C;
      }
      goto L_0891A050;
    }
L_0891A050:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891A060u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0891A060u) goto L_0891A060;
    return;
L_0891A060:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(57)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891A06C;
L_0891A06C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    // nop
      if (branch_taken) {
          goto L_0891A10C;
      }
      goto L_0891A0A8;
    }
L_0891A0A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_0891A0D8;
      }
      goto L_0891A0D0;
    }
L_0891A0D0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_0891A0F4;
      }
      goto L_0891A0D8;
    }
L_0891A0D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
        goto L_0891A0F0;
    }
    goto L_0891A0F0;
L_0891A0F0:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    goto L_0891A0F4;
L_0891A0F4:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_0891A104;
    }
    goto L_0891A104;
L_0891A104:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0891A10C;
L_0891A10C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08919FE4;
      }
      goto L_0891A118;
    }
L_0891A118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
        goto L_0891A154;
    }
    goto L_0891A140;
L_0891A140:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
      if (branch_taken) {
          goto L_0891A17C;
      }
      goto L_0891A154;
    }
L_0891A154:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
        goto L_0891A168;
    }
    goto L_0891A168;
L_0891A168:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_0891A17C;
L_0891A17C:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(160))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[6] = (ctx.gpr[21] << 16u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(122));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(160))))));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x0891A1E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18240));
    goto L_089197B8;
L_0891A1E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A230;
      }
      goto L_0891A1E8;
    }
L_0891A1E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(160))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_0891A230;
      }
      goto L_0891A214;
    }
L_0891A214:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0891A224u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18268));
    goto L_089197B8;
L_0891A224:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(160))))));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    goto L_0891A230;
L_0891A230:
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
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891A26C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891A284u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A822ACu>(ctx, &aot_mem) && ctx.pc == 0x0891A284u) goto L_0891A284;
    return;
L_0891A284:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0891A2B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18316));
    goto L_089197B8;
L_0891A2B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[4] = (ctx.gpr[6] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
        goto L_0891A2F4;
    }
    goto L_0891A2F4;
L_0891A2F4:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x0891A30Cu);
    ctx.gpr[8] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 25u, 0x08A842CCu>(ctx, &aot_mem) && ctx.pc == 0x0891A30Cu) goto L_0891A30C;
    return;
L_0891A30C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A34C;
      }
      goto L_0891A314;
    }
L_0891A314:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A320u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18348));
    goto L_089197B8;
L_0891A320:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A340;
      }
      goto L_0891A32C;
    }
L_0891A32C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A338u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18392));
    goto L_089197B8;
L_0891A338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A34C;
      }
      goto L_0891A340;
    }
L_0891A340:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A34Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18428));
    goto L_089197B8;
L_0891A34C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891A35C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891A398u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 563u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0891A398u) goto L_0891A398;
    return;
L_0891A398:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A3A4;
      }
      goto L_0891A3A0;
    }
L_0891A3A0:
    ctx.gpr[20] = (0u | 2u);
    goto L_0891A3A4;
L_0891A3A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891A3B8;
      }
      goto L_0891A3B4;
    }
L_0891A3B4:
    ctx.gpr[20] = (ctx.gpr[20] | 4u);
    goto L_0891A3B8;
L_0891A3B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(33))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(33))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891A3CC;
      }
      goto L_0891A3C8;
    }
L_0891A3C8:
    ctx.gpr[20] = (ctx.gpr[20] | 8u);
    goto L_0891A3CC;
L_0891A3CC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A3F0;
      }
      goto L_0891A3D4;
    }
L_0891A3D4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891A3E8u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_0891A414;
L_0891A3E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0891A3F4;
      }
      goto L_0891A3F0;
    }
L_0891A3F0:
    ctx.gpr[2] = (0u | 0u);
    goto L_0891A3F4;
L_0891A3F4:
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
L_0891A414:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (ctx.gpr[7] & 1u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0891A510;
      }
      goto L_0891A464;
    }
L_0891A464:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(118)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891A510;
L_0891A510:
    ctx.gpr[4] = (ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A528;
      }
      goto L_0891A51C;
    }
L_0891A51C:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0891A528u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 93u, 0x08A5C76Cu>(ctx, &aot_mem) && ctx.pc == 0x0891A528u) goto L_0891A528;
    return;
L_0891A528:
    ctx.gpr[4] = (ctx.gpr[16] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A55C;
      }
      goto L_0891A534;
    }
L_0891A534:
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
    goto L_0891A55C;
L_0891A55C:
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A59C;
      }
      goto L_0891A568;
    }
L_0891A568:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(33))))));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891A59C;
L_0891A59C:
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
L_0891A5B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891A5E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18468));
    goto L_089197B8;
L_0891A5E0:
    ctx.gpr[17] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[17]));
    ctx.gpr[17] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(6), ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_0891A670;
      }
      goto L_0891A5FC;
    }
L_0891A5FC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A608u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18512));
    goto L_089197B8;
L_0891A608:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x0891A61Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0891A61Cu) goto L_0891A61C;
    return;
L_0891A61C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A668;
      }
      goto L_0891A628;
    }
L_0891A628:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891A638u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 426u, 0x088A9DD4u>(ctx, &aot_mem) && ctx.pc == 0x0891A638u) goto L_0891A638;
    return;
L_0891A638:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), 0u);
      if (branch_taken) {
          goto L_0891A65C;
      }
      goto L_0891A640;
    }
L_0891A640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0891A65Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891A65Cu) goto L_0891A65C;
    return;
L_0891A65C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A668u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18532));
    goto L_089197B8;
L_0891A668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A6BC;
      }
      goto L_0891A670;
    }
L_0891A670:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891A684u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18564));
    goto L_089197B8;
L_0891A684:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891A694u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0891A694u) goto L_0891A694;
    return;
L_0891A694:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A6B0;
      }
      goto L_0891A6A0;
    }
L_0891A6A0:
    ctx.gpr[31] = (0x0891A6A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0891A26C;
L_0891A6A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A6BC;
      }
      goto L_0891A6B0;
    }
L_0891A6B0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A6BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18604));
    goto L_089197B8;
L_0891A6BC:
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
L_0891A6D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891A700u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18636));
    goto L_089197B8;
L_0891A700:
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(6), ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x0891A724u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0891A724u) goto L_0891A724;
    return;
L_0891A724:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A764;
      }
      goto L_0891A730;
    }
L_0891A730:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891A740u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 635u, 0x088A7CBCu>(ctx, &aot_mem) && ctx.pc == 0x0891A740u) goto L_0891A740;
    return;
L_0891A740:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[31] = (0x0891A75Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08919E58;
L_0891A75C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891A770;
      }
      goto L_0891A764;
    }
L_0891A764:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A770u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18668));
    goto L_089197B8;
L_0891A770:
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
L_0891A788:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891A7C4;
      }
      goto L_0891A7B0;
    }
L_0891A7B0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(122))))));
    ctx.gpr[31] = (0x0891A7C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18716));
    goto L_089197B8;
L_0891A7C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(122));
      if (branch_taken) {
          goto L_0891AA28;
      }
      goto L_0891A7D0;
    }
L_0891A7D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AA28;
      }
      goto L_0891A804;
    }
L_0891A804:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x0891A81Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18724));
    goto L_089197B8;
L_0891A81C:
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0891A82Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18748));
    goto L_089197B8;
L_0891A82C:
    ctx.gpr[31] = (0x0891A834u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A822ACu>(ctx, &aot_mem) && ctx.pc == 0x0891A834u) goto L_0891A834;
    return;
L_0891A834:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(51)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891AA28;
      }
      goto L_0891A85C;
    }
L_0891A85C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A868u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18780));
    goto L_089197B8;
L_0891A868:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[6] = (0u | 19u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_0891A88C;
      }
      goto L_0891A880;
    }
L_0891A880:
    ctx.gpr[6] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0891A96C;
      }
      goto L_0891A88C;
    }
L_0891A88C:
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(38)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0891A8AC;
      }
      goto L_0891A8A4;
    }
L_0891A8A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0891A8E4;
      }
      goto L_0891A8AC;
    }
L_0891A8AC:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(274)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0891A8C0;
      }
      goto L_0891A8B8;
    }
L_0891A8B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0891A8E4;
      }
      goto L_0891A8C0;
    }
L_0891A8C0:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0891A8D4;
      }
      goto L_0891A8CC;
    }
L_0891A8CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_0891A8E4;
      }
      goto L_0891A8D4;
    }
L_0891A8D4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(294)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891A8E8;
      }
      goto L_0891A8E0;
    }
L_0891A8E0:
    ctx.gpr[5] = (0u | 8u);
    goto L_0891A8E4;
L_0891A8E4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_0891A8E8;
L_0891A8E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[8] = (0u | 6u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-6932)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0891A934u);
    ctx.gpr[7] = (0u | 1u);
    goto L_0891AAC4;
L_0891A934:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0891A944u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x0891A944u) goto L_0891A944;
    return;
L_0891A944:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0891A964u);
    ctx.gpr[8] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 25u, 0x08A842CCu>(ctx, &aot_mem) && ctx.pc == 0x0891A964u) goto L_0891A964;
    return;
L_0891A964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AA28;
      }
      goto L_0891A96C;
    }
L_0891A96C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-6933)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(38));
      if (branch_taken) {
          goto L_0891A9D8;
      }
      goto L_0891A9AC;
    }
L_0891A9AC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A9B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18808));
    goto L_089197B8;
L_0891A9B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0891A9D0u);
    ctx.gpr[7] = (0u | 1u);
    goto L_0891A5B4;
L_0891A9D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AA28;
      }
      goto L_0891A9D8;
    }
L_0891A9D8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891A9E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18848));
    goto L_089197B8;
L_0891A9E4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0891AA00u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 25u, 0x08A842CCu>(ctx, &aot_mem) && ctx.pc == 0x0891AA00u) goto L_0891AA00;
    return;
L_0891AA00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AA28;
      }
      goto L_0891AA08;
    }
L_0891AA08:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x0891AA18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18892));
    goto L_089197B8;
L_0891AA18:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891AA28u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x0891AA28u) goto L_0891AA28;
    return;
L_0891AA28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[31] = (0x0891AA40u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x0891AA40u) goto L_0891AA40;
    return;
L_0891AA40:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[31] = (0x0891AA50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x0891AA50u) goto L_0891AA50;
    return;
L_0891AA50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_0891AA98;
      }
      goto L_0891AA60;
    }
L_0891AA60:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x0891AA70u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A822ACu>(ctx, &aot_mem) && ctx.pc == 0x0891AA70u) goto L_0891AA70;
    return;
L_0891AA70:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0891AA90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_0891980C;
L_0891AA90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_0891AA98;
L_0891AA98:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0891AAA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 131u, 0x08AC5034u>(ctx, &aot_mem) && ctx.pc == 0x0891AAA8u) goto L_0891AAA8;
    return;
L_0891AAA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891AAC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891AAFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18960));
    goto L_089197B8;
L_0891AAFC:
    ctx.gpr[31] = (0x0891AB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891AB04u) goto L_0891AB04;
    return;
L_0891AB04:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 22u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6956)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[19] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0891AFA4;
      }
      goto L_0891AB3C;
    }
L_0891AB3C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AF74;
      }
      goto L_0891AB44;
    }
L_0891AB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 55u);
      if (branch_taken) {
          goto L_0891AF74;
      }
      goto L_0891AB54;
    }
L_0891AB54:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891AF74;
      }
      goto L_0891AB5C;
    }
L_0891AB5C:
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0891AB78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18980));
    goto L_089197B8;
L_0891AB78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891AF74;
      }
      goto L_0891AB84;
    }
L_0891AB84:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0891AF74;
      }
      goto L_0891AB8C;
    }
L_0891AB8C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19136)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891ABA4:
    ctx.gpr[31] = (0x0891ABACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 310u, 0x089454F4u>(ctx, &aot_mem) && ctx.pc == 0x0891ABACu) goto L_0891ABAC;
    return;
L_0891ABAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891AC90;
      }
      goto L_0891ABB4;
    }
L_0891ABB4:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0891ABD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 325u, 0x089455A0u>(ctx, &aot_mem) && ctx.pc == 0x0891ABD4u) goto L_0891ABD4;
    return;
L_0891ABD4:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25200));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_0891AC18;
      }
      goto L_0891ABF0;
    }
L_0891ABF0:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x0891ABFCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0891ABFCu) goto L_0891ABFC;
    return;
L_0891ABFC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AC14;
      }
      goto L_0891AC08;
    }
L_0891AC08:
    ctx.gpr[31] = (0x0891AC10u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0891AC10u) goto L_0891AC10;
    return;
L_0891AC10:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_0891AC14;
L_0891AC14:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[21]);
    goto L_0891AC18;
L_0891AC18:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0891AC28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19008));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0891AC28u) goto L_0891AC28;
    return;
L_0891AC28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x0891AC38u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 286u, 0x08879A48u>(ctx, &aot_mem) && ctx.pc == 0x0891AC38u) goto L_0891AC38;
    return;
L_0891AC38:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891AC48u);
    ctx.gpr[5] = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x0891AC48u) goto L_0891AC48;
    return;
L_0891AC48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 203u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(51), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(54), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 203u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (0u | 127u);
    ctx.gpr[11] = (0u | 20u);
    ctx.gpr[31] = (0x0891AC90u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 936u, 0x08A9B7A8u>(ctx, &aot_mem) && ctx.pc == 0x0891AC90u) goto L_0891AC90;
    return;
L_0891AC90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AF74;
      }
      goto L_0891AC98;
    }
L_0891AC98:
    ctx.gpr[31] = (0x0891ACA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 310u, 0x089454F4u>(ctx, &aot_mem) && ctx.pc == 0x0891ACA0u) goto L_0891ACA0;
    return;
L_0891ACA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891AD84;
      }
      goto L_0891ACA8;
    }
L_0891ACA8:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0891ACC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 330u, 0x089455F8u>(ctx, &aot_mem) && ctx.pc == 0x0891ACC8u) goto L_0891ACC8;
    return;
L_0891ACC8:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25200));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_0891AD0C;
      }
      goto L_0891ACE4;
    }
L_0891ACE4:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x0891ACF0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0891ACF0u) goto L_0891ACF0;
    return;
L_0891ACF0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AD08;
      }
      goto L_0891ACFC;
    }
L_0891ACFC:
    ctx.gpr[31] = (0x0891AD04u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0891AD04u) goto L_0891AD04;
    return;
L_0891AD04:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_0891AD08;
L_0891AD08:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[21]);
    goto L_0891AD0C;
L_0891AD0C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0891AD1Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19016));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0891AD1Cu) goto L_0891AD1C;
    return;
L_0891AD1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x0891AD2Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 286u, 0x08879A48u>(ctx, &aot_mem) && ctx.pc == 0x0891AD2Cu) goto L_0891AD2C;
    return;
L_0891AD2C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891AD3Cu);
    ctx.gpr[5] = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x0891AD3Cu) goto L_0891AD3C;
    return;
L_0891AD3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 203u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(51), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(54), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 203u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (0u | 127u);
    ctx.gpr[11] = (0u | 20u);
    ctx.gpr[31] = (0x0891AD84u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 936u, 0x08A9B7A8u>(ctx, &aot_mem) && ctx.pc == 0x0891AD84u) goto L_0891AD84;
    return;
L_0891AD84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AF74;
      }
      goto L_0891AD8C;
    }
L_0891AD8C:
    ctx.gpr[31] = (0x0891AD94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 310u, 0x089454F4u>(ctx, &aot_mem) && ctx.pc == 0x0891AD94u) goto L_0891AD94;
    return;
L_0891AD94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891AE78;
      }
      goto L_0891AD9C;
    }
L_0891AD9C:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0891ADBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 335u, 0x08945658u>(ctx, &aot_mem) && ctx.pc == 0x0891ADBCu) goto L_0891ADBC;
    return;
L_0891ADBC:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25200));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_0891AE00;
      }
      goto L_0891ADD8;
    }
L_0891ADD8:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x0891ADE4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0891ADE4u) goto L_0891ADE4;
    return;
L_0891ADE4:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ADFC;
      }
      goto L_0891ADF0;
    }
L_0891ADF0:
    ctx.gpr[31] = (0x0891ADF8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0891ADF8u) goto L_0891ADF8;
    return;
L_0891ADF8:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_0891ADFC;
L_0891ADFC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[21]);
    goto L_0891AE00;
L_0891AE00:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0891AE10u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19024));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0891AE10u) goto L_0891AE10;
    return;
L_0891AE10:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x0891AE20u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 286u, 0x08879A48u>(ctx, &aot_mem) && ctx.pc == 0x0891AE20u) goto L_0891AE20;
    return;
L_0891AE20:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891AE30u);
    ctx.gpr[5] = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x0891AE30u) goto L_0891AE30;
    return;
L_0891AE30:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 203u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(51), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(54), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 203u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (0u | 127u);
    ctx.gpr[11] = (0u | 20u);
    ctx.gpr[31] = (0x0891AE78u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 936u, 0x08A9B7A8u>(ctx, &aot_mem) && ctx.pc == 0x0891AE78u) goto L_0891AE78;
    return;
L_0891AE78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AF74;
      }
      goto L_0891AE80;
    }
L_0891AE80:
    ctx.gpr[31] = (0x0891AE88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 310u, 0x089454F4u>(ctx, &aot_mem) && ctx.pc == 0x0891AE88u) goto L_0891AE88;
    return;
L_0891AE88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891AF6C;
      }
      goto L_0891AE90;
    }
L_0891AE90:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0891AEB0u);
    ctx.gpr[4] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 759u, 0x08917E80u>(ctx, &aot_mem) && ctx.pc == 0x0891AEB0u) goto L_0891AEB0;
    return;
L_0891AEB0:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-25200));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_0891AEF4;
      }
      goto L_0891AECC;
    }
L_0891AECC:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x0891AED8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0891AED8u) goto L_0891AED8;
    return;
L_0891AED8:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AEF0;
      }
      goto L_0891AEE4;
    }
L_0891AEE4:
    ctx.gpr[31] = (0x0891AEECu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0891AEECu) goto L_0891AEEC;
    return;
L_0891AEEC:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_0891AEF0;
L_0891AEF0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[21]);
    goto L_0891AEF4;
L_0891AEF4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0891AF04u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19032));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0891AF04u) goto L_0891AF04;
    return;
L_0891AF04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x0891AF14u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 286u, 0x08879A48u>(ctx, &aot_mem) && ctx.pc == 0x0891AF14u) goto L_0891AF14;
    return;
L_0891AF14:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0891AF24u);
    ctx.gpr[5] = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x0891AF24u) goto L_0891AF24;
    return;
L_0891AF24:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 203u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(51), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(54), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 203u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (0u | 127u);
    ctx.gpr[11] = (0u | 20u);
    ctx.gpr[31] = (0x0891AF6Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 936u, 0x08A9B7A8u>(ctx, &aot_mem) && ctx.pc == 0x0891AF6Cu) goto L_0891AF6C;
    return;
L_0891AF6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891AF74;
      }
      goto L_0891AF74;
    }
L_0891AF74:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B030;
      }
      goto L_0891AF7C;
    }
L_0891AF7C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891AF9Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 132u, 0x088A8764u>(ctx, &aot_mem) && ctx.pc == 0x0891AF9Cu) goto L_0891AF9C;
    return;
L_0891AF9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B030;
      }
      goto L_0891AFA4;
    }
L_0891AFA4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0891AFBCu);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(19040));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 663u, 0x088A7EC8u>(ctx, &aot_mem) && ctx.pc == 0x0891AFBCu) goto L_0891AFBC;
    return;
L_0891AFBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891AFCCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0891AFCCu) goto L_0891AFCC;
    return;
L_0891AFCC:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-21000)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-21000)));
        goto L_0891AFE8;
    }
    goto L_0891AFDC;
L_0891AFDC:
    ctx.gpr[31] = (0x0891AFE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x0891AFE4u) goto L_0891AFE4;
    return;
L_0891AFE4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-21000)));
    goto L_0891AFE8;
L_0891AFE8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x0891AFF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x0891AFF4u) goto L_0891AFF4;
    return;
L_0891AFF4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891B004u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x0891B004u) goto L_0891B004;
    return;
L_0891B004:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891B010u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 781u, 0x0883BFA4u>(ctx, &aot_mem) && ctx.pc == 0x0891B010u) goto L_0891B010;
    return;
L_0891B010:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0891B030;
      }
      goto L_0891B024;
    }
L_0891B024:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891B030u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x0891B030u) goto L_0891B030;
    return;
L_0891B030:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B058:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27492)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27488)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[16] / ctx.fpr[12];
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[7] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27496), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(27516)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (0u | 23u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-6933), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-6933)));
    ctx.gpr[2] = (2232u << 16u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[12] = (2225u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(6264));
    ctx.gpr[3] = (0u | 24u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[12] + static_cast<std::uint32_t>(19080));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-6934), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-6934)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[13] = (2225u << 16u);
    ctx.gpr[7] = (0u | 25u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27504), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[13] + static_cast<std::uint32_t>(19096));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(-6932), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(-6932)));
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27500), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[10] = (15744u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[14] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[14] + static_cast<std::uint32_t>(19112));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[15] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[24] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(27508), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[25] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(27512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(27520), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B170:
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
L_0891B19C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B1A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891B1C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19168));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x0891B1C8u) goto L_0891B1C8;
    return;
L_0891B1C8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6920), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6888), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868), ctx.gpr[17]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7852), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7856), 0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7848), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31600), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6732), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6728), 0u);
    ctx.gpr[31] = (0x0891B22Cu);
    // nop
    goto L_0891B19C;
L_0891B22C:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[31] = (0x0891B238u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11696));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 333u, 0x089D991Cu>(ctx, &aot_mem) && ctx.pc == 0x0891B238u) goto L_0891B238;
    return;
L_0891B238:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x0891B250u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 148u, 0x08864AA0u>(ctx, &aot_mem) && ctx.pc == 0x0891B250u) goto L_0891B250;
    return;
L_0891B250:
    ctx.gpr[31] = (0x0891B258u);
    // nop
    ctx.pc = 0x08B0BB84u;
    return;
L_0891B258:
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27588), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B274;
      }
      goto L_0891B268;
    }
L_0891B268:
    ctx.gpr[31] = (0x0891B270u);
    // nop
    ctx.pc = 0x08B0BBB4u;
    return;
L_0891B270:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27588), ctx.gpr[2]);
    goto L_0891B274;
L_0891B274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27588)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B2E4;
      }
      goto L_0891B280;
    }
L_0891B280:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(19192));
    ctx.gpr[31] = (0x0891B290u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0891B170;
L_0891B290:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891B29Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19224));
    goto L_0891B170;
L_0891B29C:
    ctx.gpr[31] = (0x0891B2A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0891B170;
L_0891B2A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27588)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B2C0;
      }
      goto L_0891B2B4;
    }
L_0891B2B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27588)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().memory_barrier();
    goto L_0891B2C0;
L_0891B2C0:
    ctx.gpr[31] = (0x0891B2C8u);
    // nop
    ctx.pc = 0x08B0B73Cu;
    return;
L_0891B2C8:
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9216u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0891B2E4;
L_0891B2E4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891B2F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19256));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x0891B2F0u) goto L_0891B2F0;
    return;
L_0891B2F0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0891B30C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B314:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7852), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B328:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7852), ctx.gpr[4]);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(11696));
    ctx.gpr[31] = (0x0891B36Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 337u, 0x089D99C0u>(ctx, &aot_mem) && ctx.pc == 0x0891B36Cu) goto L_0891B36C;
    return;
L_0891B36C:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (18576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7848)));
    ctx.gpr[4] = (19124u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7856)));
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[4] = (16128u << 16u);
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891B3D4;
      }
      goto L_0891B3C8;
    }
L_0891B3C8:
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_0891B3E8;
      }
      goto L_0891B3D4;
    }
L_0891B3D4:
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[9] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    goto L_0891B3E8;
L_0891B3E8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6732), ctx.gpr[4]);
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B420;
      }
      goto L_0891B3FC;
    }
L_0891B3FC:
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(27596)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[10] = (72u << 16u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[10]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[10] = (ctx.hi);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(27596), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6732), ctx.gpr[4]);
    goto L_0891B420;
L_0891B420:
    ctx.gpr[9] = (5u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-32768));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(27580)));
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27580), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-6920)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-6888)));
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-25529)));
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B48C;
      }
      goto L_0891B45C;
    }
L_0891B45C:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
      if (branch_taken) {
          goto L_0891B474;
      }
      goto L_0891B468;
    }
L_0891B468:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    goto L_0891B474;
L_0891B474:
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7844), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6732), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0891B48C;
L_0891B48C:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
      if (branch_taken) {
          goto L_0891B4A4;
      }
      goto L_0891B498;
    }
L_0891B498:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    goto L_0891B4A4;
L_0891B4A4:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[13];
        goto L_0891B4CC;
    }
    goto L_0891B4BC;
L_0891B4BC:
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0891B4E0;
      }
      goto L_0891B4CC;
    }
L_0891B4CC:
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[9] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    goto L_0891B4E0;
L_0891B4E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868), ctx.gpr[8]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
      if (branch_taken) {
          goto L_0891B4FC;
      }
      goto L_0891B4F0;
    }
L_0891B4F0:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    goto L_0891B4FC;
L_0891B4FC:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_0891B524;
    }
    goto L_0891B514;
L_0891B514:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0891B538;
      }
      goto L_0891B524;
    }
L_0891B524:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_0891B538;
L_0891B538:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7856), ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0891B554;
      }
      goto L_0891B548;
    }
L_0891B548:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0891B554;
L_0891B554:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-7864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0891B568u);
    // nop
    goto L_0891B19C;
L_0891B568:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7864)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891B5AC;
      }
      goto L_0891B57C;
    }
L_0891B57C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-6920)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-6888)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-25529)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0891B5AC;
      }
      goto L_0891B598;
    }
L_0891B598:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1676)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B5AC;
      }
      goto L_0891B5A4;
    }
L_0891B5A4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-7864), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0891B5AC;
L_0891B5AC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7840), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0891B5BCu);
    // nop
    goto L_0891B19C;
L_0891B5BC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6724))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891B610;
      }
      goto L_0891B5D0;
    }
L_0891B5D0:
    ctx.gpr[4] = (16469u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 21845u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0891B5F4;
    }
    goto L_0891B5F4;
L_0891B5F4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-7864), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7852)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(60));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_0891B60C;
    }
    goto L_0891B60C;
L_0891B60C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868), ctx.gpr[5]);
    goto L_0891B610;
L_0891B610:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7812)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891B63C;
      }
      goto L_0891B624;
    }
L_0891B624:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-7864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7852)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868), ctx.gpr[4]);
    goto L_0891B63C;
L_0891B63C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B674:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31600)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31600), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B690;
      }
      goto L_0891B690;
    }
L_0891B690:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B698:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31600)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31600), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B6B0;
      }
      goto L_0891B6B0;
    }
L_0891B6B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B6B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7848)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891B6E0;
      }
      goto L_0891B6D8;
    }
L_0891B6D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0891B6E4;
      }
      goto L_0891B6E0;
    }
L_0891B6E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_0891B6E4;
L_0891B6E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B6EC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6920), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B6FC:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6920), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27532)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27536), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27528)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27540), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27552), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27556)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27560)));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27568), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27572), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[31] = (0x0891B7E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11696));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 327u, 0x089D98BCu>(ctx, &aot_mem) && ctx.pc == 0x0891B7E0u) goto L_0891B7E0;
    return;
L_0891B7E0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0891B7ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27600));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0891B7ECu) goto L_0891B7EC;
    return;
L_0891B7EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B7F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-5));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B8A0;
      }
      goto L_0891B820;
    }
L_0891B820:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0891B874;
      }
      goto L_0891B828;
    }
L_0891B828:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0891B864;
      }
      goto L_0891B830;
    }
L_0891B830:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891B884;
      }
      goto L_0891B838;
    }
L_0891B838:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0891B894;
      }
      goto L_0891B840;
    }
L_0891B840:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.gpr[6] = (ctx.gpr[6] & 17u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B85C;
      }
      goto L_0891B854;
    }
L_0891B854:
    ctx.gpr[31] = (0x0891B85Cu);
    // nop
    goto L_0891B7F8;
L_0891B85C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B8A0;
      }
      goto L_0891B864;
    }
L_0891B864:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0891B8A0;
      }
      goto L_0891B874;
    }
L_0891B874:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0891B8A0;
      }
      goto L_0891B884;
    }
L_0891B884:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0891B8A0;
      }
      goto L_0891B894;
    }
L_0891B894:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0891B8A0;
L_0891B8A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B8AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891B8F0;
      }
      goto L_0891B8CC;
    }
L_0891B8CC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 254u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0891B8E4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0891B7F8;
L_0891B8E4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B8CC;
      }
      goto L_0891B8F0;
    }
L_0891B8F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891B904:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891B9EC;
      }
      goto L_0891B944;
    }
L_0891B944:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B964;
      }
      goto L_0891B954;
    }
L_0891B954:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B970;
      }
      goto L_0891B964;
    }
L_0891B964:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0891B9DC;
      }
      goto L_0891B970;
    }
L_0891B970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0891B998;
      }
      goto L_0891B984;
    }
L_0891B984:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0891B994u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 3u, 0x08AA8038u>(ctx, &aot_mem) && ctx.pc == 0x0891B994u) goto L_0891B994;
    return;
L_0891B994:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_0891B998;
L_0891B998:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891B9B8;
      }
      goto L_0891B9A0;
    }
L_0891B9A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5)));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 253u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0891B9DC;
      }
      goto L_0891B9B8;
    }
L_0891B9B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_0891B9DC;
L_0891B9DC:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891B944;
      }
      goto L_0891B9E8;
    }
L_0891B9E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0891B9EC;
L_0891B9EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
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
L_0891BA24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_0891BA3C;
      }
      goto L_0891BA34;
    }
L_0891BA34:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0891BA3C;
L_0891BA3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891BA44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(5)));
    ctx.gpr[7] = (ctx.gpr[7] | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891BAC4;
      }
      goto L_0891BA84;
    }
L_0891BA84:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[6] = (0u | 0u);
    goto L_0891BA8C;
L_0891BA8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891BAB0;
      }
      goto L_0891BAA0;
    }
L_0891BAA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.gpr[7] = (ctx.gpr[7] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_0891BAB0;
L_0891BAB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0891BA8C;
      }
      goto L_0891BAC4;
    }
L_0891BAC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0891BB04;
      }
      goto L_0891BAD8;
    }
L_0891BAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891BAD8;
      }
      goto L_0891BB04;
    }
L_0891BB04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0891BB50;
      }
      goto L_0891BB18;
    }
L_0891BB18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891BB3C;
      }
      goto L_0891BB34;
    }
L_0891BB34:
    ctx.gpr[31] = (0x0891BB3Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0891B7F8;
L_0891BB3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891BB18;
      }
      goto L_0891BB50;
    }
L_0891BB50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0891BB90;
      }
      goto L_0891BB64;
    }
L_0891BB64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.gpr[6] = (ctx.gpr[6] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0891BB64;
      }
      goto L_0891BB90;
    }
L_0891BB90:
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
L_0891BBAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891BC38;
      }
      goto L_0891BBDC;
    }
L_0891BBDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(7)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0891BC30;
      }
      goto L_0891BBF0;
    }
L_0891BBF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BC1C;
      }
      goto L_0891BC00;
    }
L_0891BC00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891BC1C;
      }
      goto L_0891BC14;
    }
L_0891BC14:
    ctx.gpr[31] = (0x0891BC1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891B7F8;
L_0891BC1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(7)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0891BBF0;
      }
      goto L_0891BC30;
    }
L_0891BC30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BCDC;
      }
      goto L_0891BC38;
    }
L_0891BC38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891BC54;
      }
      goto L_0891BC4C;
    }
L_0891BC4C:
    ctx.gpr[31] = (0x0891BC54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891B7F8;
L_0891BC54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891BC70;
      }
      goto L_0891BC68;
    }
L_0891BC68:
    ctx.gpr[31] = (0x0891BC70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891B7F8;
L_0891BC70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(7)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_0891BCDC;
      }
      goto L_0891BC84;
    }
L_0891BC84:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    goto L_0891BC88;
L_0891BC88:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BCC8;
      }
      goto L_0891BC98;
    }
L_0891BC98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BCC4;
      }
      goto L_0891BCA8;
    }
L_0891BCA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891BCC4;
      }
      goto L_0891BCBC;
    }
L_0891BCBC:
    ctx.gpr[31] = (0x0891BCC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891B7F8;
L_0891BCC4:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_0891BCC8;
L_0891BCC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(7)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891BC88;
      }
      goto L_0891BCDC;
    }
L_0891BCDC:
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
L_0891BD00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (0u | 24u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 16u);
      if (branch_taken) {
          goto L_0891BD64;
      }
      goto L_0891BD34;
    }
L_0891BD34:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_0891BD68;
    }
    goto L_0891BD40;
L_0891BD40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x0891BD5Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 263u, 0x088B9680u>(ctx, &aot_mem) && ctx.pc == 0x0891BD5Cu) goto L_0891BD5C;
    return;
L_0891BD5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0891BD64;
L_0891BD64:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_0891BD68;
L_0891BD68:
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] >> 29u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 90u);
      if (branch_taken) {
          goto L_0891BDB0;
      }
      goto L_0891BD90;
    }
L_0891BD90:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BDB0;
      }
      goto L_0891BD9C;
    }
L_0891BD9C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x0891BDB0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 260u, 0x088B9610u>(ctx, &aot_mem) && ctx.pc == 0x0891BDB0u) goto L_0891BDB0;
    return;
L_0891BDB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891BDBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891BE04;
      }
      goto L_0891BDE8;
    }
L_0891BDE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891BE04;
      }
      goto L_0891BDFC;
    }
L_0891BDFC:
    ctx.gpr[31] = (0x0891BE04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891B7F8;
L_0891BE04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0891BE44;
      }
      goto L_0891BE20;
    }
L_0891BE20:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[18] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BE34;
      }
      goto L_0891BE30;
    }
L_0891BE30:
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    goto L_0891BE34;
L_0891BE34:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BE20;
      }
      goto L_0891BE44;
    }
L_0891BE44:
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BE90;
      }
      goto L_0891BE50;
    }
L_0891BE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BE7C;
      }
      goto L_0891BE60;
    }
L_0891BE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891BE7C;
      }
      goto L_0891BE74;
    }
L_0891BE74:
    ctx.gpr[31] = (0x0891BE7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891B7F8;
L_0891BE7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BE50;
      }
      goto L_0891BE90;
    }
L_0891BE90:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BEB0;
      }
      goto L_0891BE9C;
    }
L_0891BE9C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BE9C;
      }
      goto L_0891BEB0;
    }
L_0891BEB0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891BEBCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0891BD00;
L_0891BEBC:
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
L_0891BED8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891BF90;
      }
      goto L_0891BEF0;
    }
L_0891BEF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_0891BF70;
      }
      goto L_0891BF04;
    }
L_0891BF04:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_0891BF54;
      }
      goto L_0891BF0C;
    }
L_0891BF0C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_0891BF38;
      }
      goto L_0891BF14;
    }
L_0891BF14:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891BF84;
      }
      goto L_0891BF1C;
    }
L_0891BF1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0891BF30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 108u, 0x0891C864u>(ctx, &aot_mem) && ctx.pc == 0x0891BF30u) goto L_0891BF30;
    return;
L_0891BF30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BF84;
      }
      goto L_0891BF38;
    }
L_0891BF38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0891BF4Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_0891BBAC;
L_0891BF4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BF84;
      }
      goto L_0891BF54;
    }
L_0891BF54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x0891BF68u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_0891BDBC;
L_0891BF68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BF84;
      }
      goto L_0891BF70;
    }
L_0891BF70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x0891BF84u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_0891BA44;
L_0891BF84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891BEF0;
      }
      goto L_0891BF90;
    }
L_0891BF90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891BFA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0891BFC0;
      }
      goto L_0891BFB0;
    }
L_0891BFB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.gpr[6] = (ctx.gpr[6] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_0891BFC0;
L_0891BFC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891BFE4;
      }
      goto L_0891BFD0;
    }
L_0891BFD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891BFE8;
      }
      goto L_0891BFE4;
    }
L_0891BFE4:
    ctx.gpr[2] = (0u | 1u);
    goto L_0891BFE8;
L_0891BFE8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891BFF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.pc = 0x0891C000u; return;
}

void recomp_unit_0069(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0069_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_69(Runtime &runtime) {
    runtime.register_generated_unit(69u, 0x08918000u, 16384u, &recomp_unit_0069, &recomp_unit_0069_entry);
    runtime.register_function(0x08918000u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891801Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918024u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891803Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918050u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918058u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918060u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918070u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918084u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891808Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089180FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918104u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918124u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918144u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918164u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918178u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918188u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918190u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918198u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089181ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918220u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918230u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918238u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918244u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918248u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918250u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918258u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918260u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918268u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891826Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918274u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891827Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918290u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891829Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089182FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918300u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918340u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918350u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918364u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891836Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891837Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089183F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918404u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918410u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891841Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918440u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918444u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918468u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918478u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918480u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918488u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918490u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918498u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089184F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918510u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918534u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918540u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891854Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918570u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918578u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918590u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891859Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089185FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918604u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918608u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918610u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891863Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918648u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918654u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891865Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918668u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891866Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918674u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918680u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918688u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089186F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918704u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891870Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918718u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918724u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918730u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891873Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918750u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918758u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918764u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891876Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918774u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891878Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918794u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089187F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918804u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891880Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918814u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891881Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918828u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918830u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918838u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918840u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918848u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918854u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891885Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918864u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918888u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918890u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918898u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089188F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918930u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918938u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918940u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918948u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918950u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918958u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918960u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918968u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918980u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918988u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918990u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089189F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A18u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918A8Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918AA0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918AA8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918AB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918AD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918AD8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918AE0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918AF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B64u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B8Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918B98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918BA8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918BBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918BE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918BF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C24u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C4Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918C90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CA8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CC4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CDCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918CFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D18u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D68u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D8Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918D98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DA0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DD8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918DE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E68u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E88u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918E90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918EBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918F9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FD4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FDCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FE0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08918FFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891900Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919014u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919028u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919034u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919040u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919054u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919060u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891906Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919080u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891908Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919098u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089190F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919114u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919120u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919130u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891913Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919148u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891915Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919168u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891917Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919190u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891919Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089191F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891920Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919218u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919224u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919230u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919238u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919244u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919248u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919260u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891927Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919284u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919294u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089192FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919310u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919324u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919330u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919344u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891934Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919358u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919368u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919374u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919380u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919390u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089193F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919404u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919418u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891942Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919440u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919454u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919460u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919468u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919470u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919478u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919480u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891948Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919498u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089194F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919508u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919510u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891951Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919528u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891952Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919534u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919540u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891954Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919558u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919568u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919570u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919580u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919590u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919598u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891959Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089195F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919600u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919610u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891961Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919628u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919630u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891963Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919648u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919654u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891965Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891966Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919674u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891967Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919688u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919694u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891969Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089196FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919708u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919714u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919724u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891972Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919740u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919748u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919754u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891975Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919764u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919778u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919784u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919790u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919794u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089197E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891980Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919834u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919860u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919868u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919878u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891987Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919898u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089198ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089198E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919900u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919930u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919938u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919984u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919994u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x089199F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A24u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919A90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AA8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919AF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919B80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BB4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BC4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919BECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C2Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919C94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CA8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CC4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CDCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919CF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919D94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DA0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DB8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DCCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DD8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919DECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E4Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919E58u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919EA8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919EB4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919EC4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919ED4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919EE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919F9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FA8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x08919FE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A018u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A024u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A030u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A03Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A044u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A050u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A060u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A06Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A0F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A104u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A10Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A118u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A140u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A154u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A168u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A17Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A1E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A214u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A224u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A230u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A26Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A284u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A2B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A2F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A30Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A314u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A320u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A32Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A338u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A340u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A34Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A35Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A398u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A3F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A414u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A464u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A510u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A51Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A528u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A534u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A55Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A568u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A59Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A5B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A5E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A5FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A608u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A61Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A628u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A638u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A640u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A65Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A668u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A670u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A684u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A694u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6A8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A6D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A700u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A724u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A730u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A740u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A75Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A764u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A770u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A788u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A7B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A7C4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A7D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A804u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A81Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A82Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A834u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A85Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A868u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A880u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A88Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A8E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A934u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A944u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A964u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A96Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891A9E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA18u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AA98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAA8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAC4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AAFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AB8Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABB4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABD4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ABFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC18u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC28u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC48u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AC98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACA0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACA8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ACFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD08u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD2Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD8Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD94u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AD9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ADBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ADD8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ADE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ADF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ADF8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891ADFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE10u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE78u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE80u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE88u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AE90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AEB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AECCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AED8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AEE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AEECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AEF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AEF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF24u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF6Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF7Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AF9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFA4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFCCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFDCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891AFF4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B004u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B010u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B024u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B030u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B058u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B170u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B19Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B1A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B1C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B22Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B238u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B250u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B258u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B268u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B270u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B274u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B280u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B290u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B29Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2B4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2C0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B2F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B30Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B314u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B328u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B36Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B3C8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B3D4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B3E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B3FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B420u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B45Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B468u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B474u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B48Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B498u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B4A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B4BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B4CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B4E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B4F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B4FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B514u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B524u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B538u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B548u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B554u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B568u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B57Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B598u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5A4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5BCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5D0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B5F4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B60Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B610u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B624u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B63Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B674u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B690u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B698u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B6B0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B6B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B6D8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B6E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B6E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B6ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B6FCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B708u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B7E0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B7ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B7F8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B820u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B828u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B830u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B838u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B840u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B854u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B85Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B864u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B874u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B884u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B894u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8ACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8CCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8E4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B8F0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B904u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B944u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B954u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B964u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B970u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B984u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B994u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B998u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9A0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9B8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9DCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9E8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891B9ECu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA24u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BA8Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BAA0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BAB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BAC4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BAD8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB18u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB3Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB64u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BB90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BBACu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BBDCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BBF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC4Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC68u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC88u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BC98u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCA8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCC4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCC8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BCDCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD00u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD40u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD5Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD64u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD68u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BD9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BDFCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE20u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE34u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE44u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE50u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE60u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE74u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE7Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BE9Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BEB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BEBCu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BED8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BEF0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF04u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF0Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF14u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF1Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF30u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF38u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF4Cu, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF54u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF68u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF70u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF84u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BF90u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFA0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFB0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFC0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFD0u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFE4u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFE8u, &recomp_unit_0069, "recomp_unit_0069");
    runtime.register_function(0x0891BFF0u, &recomp_unit_0069, "recomp_unit_0069");
}
} // namespace psprecomp
