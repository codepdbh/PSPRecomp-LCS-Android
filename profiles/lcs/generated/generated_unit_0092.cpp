#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0092[4090] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0,
    10, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 19, 0, 0, 0, 20,
    0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 31,
    0, 0, 32, 0, 33, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 0,
    0, 39, 0, 0, 40, 0, 41, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0,
    0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 60,
    0, 0, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 70,
    0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 0, 76, 0, 77, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 97,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    112, 0, 0, 113, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 0,
    132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 141, 142, 0, 143, 0, 144, 0,
    0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 0,
    154, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 165, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0,
    0, 169, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 175,
    0, 176, 0, 0, 0, 0, 177, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 181, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 185, 0, 186, 0,
    187, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199, 200, 0,
    0, 0, 0, 201, 0, 0, 202, 0, 203, 204, 0, 0, 0, 205, 0, 0, 206, 0, 207, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 215, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0,
    0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 224, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0,
    0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 233, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0,
    0, 238, 0, 0, 239, 0, 240, 0, 0, 0, 241, 0, 242, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 247,
    0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 251, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0,
    257, 0, 258, 0, 0, 0, 259, 0, 260, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 266, 0,
    267, 0, 0, 0, 268, 0, 269, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 275, 0, 276, 0,
    277, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 282, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0,
    0, 286, 0, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0, 0, 0, 290, 0, 291, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 295,
    0, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 0, 299, 0, 300, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 304, 0, 0,
    0, 0, 305, 0, 0, 306, 0, 307, 0, 0, 0, 308, 0, 309, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0,
    314, 0, 0, 315, 0, 316, 0, 0, 0, 317, 0, 318, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 323, 0,
    0, 324, 0, 325, 0, 0, 0, 326, 0, 327, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 333,
    0, 334, 0, 0, 0, 335, 0, 336, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 342, 0, 343,
    0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 349,
    0, 0, 350, 0, 351, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0,
    0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 367,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 373, 0, 0, 374,
    0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 381, 0,
    0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 385, 386, 0, 387, 0, 0, 0, 0, 0, 388, 389,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 395,
    396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 403, 0, 0, 0, 0, 404, 405,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 412,
    0, 0, 413, 0, 0, 414, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0,
    0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0,
    0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 440, 441, 0, 0, 0, 0, 442, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0,
    0, 448, 0, 0, 449, 0, 450, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 455,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464,
    0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0,
    0, 0, 468, 0, 0, 0, 469, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 480, 0,
    0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0, 490, 0, 0, 0, 491, 0, 492, 0, 0, 493, 494, 0, 0,
    0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0,
    0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 505, 506, 0, 0, 0, 507, 0, 0, 508, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0,
    511, 0, 0, 512, 0, 0, 513, 0, 514, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 519, 0, 0, 0, 520, 0, 0, 0,
    0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 524, 0, 0, 0, 0, 0, 525, 0, 526, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 529,
    0, 0, 530, 0, 531, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 0, 0, 536, 0, 537, 0, 538, 0, 0, 0, 0, 0, 539,
    0, 0, 540, 0, 0, 541, 0, 542, 0, 0, 543, 0, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 546, 547, 0, 0, 0, 0, 548, 0,
    549, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 554, 0, 555, 0, 0, 556, 0, 0, 0,
    0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 559, 560, 0, 0, 0, 0, 561, 0, 562, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 565, 0,
    0, 0, 0, 566, 567, 0, 0, 0, 0, 568, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 573, 0, 574, 0, 0, 575,
    0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 580, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0,
    584, 585, 0, 0, 0, 0, 586, 0, 587, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 591, 592, 0, 0, 0, 0, 593,
    0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 596, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0,
    0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 0,
    0, 614, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 619, 0, 0, 620, 0, 621, 0, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0,
    0, 626, 0, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0,
    0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0,
    643, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 649, 650, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0,
    0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 658, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0,
    0, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 670, 671, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 673, 0, 0, 674, 0, 675, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0,
    0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 681, 0, 682, 0, 683, 0, 0,
    0, 0, 0, 684, 685, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0,
    0, 0, 0, 0, 690, 0, 691, 0, 692, 0, 0, 0, 0, 0, 693, 694, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 701, 0,
    0, 0, 0, 702, 0, 0, 0, 0, 703, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0, 712, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0,
    0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0,
    0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0,
    0, 0, 726, 0, 727, 0, 0, 0, 0, 728, 0, 729, 0, 0, 730, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 733, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0,
    738, 0, 739, 0, 740, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0,
    0, 0, 745, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 748, 749, 0, 750, 0, 0, 0, 0, 0, 751, 0,
    0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 756, 757, 0, 758, 0, 0, 759, 0, 0, 0, 760, 0,
    761, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 764, 0, 765, 0, 0, 766, 0, 0, 0, 767, 0, 768, 0, 769, 0, 0, 770, 0,
    771, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 774, 0, 0, 0, 775, 0, 776, 0, 0, 0, 0, 777, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 780,
};
void recomp_unit_0092_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08974000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0092[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08974000;
    case 2u: goto L_0897401C;
    case 3u: goto L_08974028;
    case 4u: goto L_08974038;
    case 5u: goto L_08974048;
    case 6u: goto L_08974054;
    case 7u: goto L_0897405C;
    case 8u: goto L_0897406C;
    case 9u: goto L_08974078;
    case 10u: goto L_08974080;
    case 11u: goto L_08974090;
    case 12u: goto L_0897409C;
    case 13u: goto L_089740A4;
    case 14u: goto L_089740B4;
    case 15u: goto L_089740C0;
    case 16u: goto L_089740C8;
    case 17u: goto L_089740D8;
    case 18u: goto L_089740E4;
    case 19u: goto L_089740EC;
    case 20u: goto L_089740FC;
    case 21u: goto L_08974108;
    case 22u: goto L_08974110;
    case 23u: goto L_08974120;
    case 24u: goto L_0897412C;
    case 25u: goto L_08974134;
    case 26u: goto L_08974144;
    case 27u: goto L_08974150;
    case 28u: goto L_08974158;
    case 29u: goto L_08974168;
    case 30u: goto L_08974174;
    case 31u: goto L_0897417C;
    case 32u: goto L_08974188;
    case 33u: goto L_08974190;
    case 34u: goto L_08974194;
    case 35u: goto L_089741A0;
    case 36u: goto L_089741D8;
    case 37u: goto L_089741E4;
    case 38u: goto L_089741F4;
    case 39u: goto L_08974204;
    case 40u: goto L_08974210;
    case 41u: goto L_08974218;
    case 42u: goto L_08974220;
    case 43u: goto L_08974230;
    case 44u: goto L_0897423C;
    case 45u: goto L_08974244;
    case 46u: goto L_08974254;
    case 47u: goto L_08974260;
    case 48u: goto L_08974268;
    case 49u: goto L_08974278;
    case 50u: goto L_08974284;
    case 51u: goto L_0897428C;
    case 52u: goto L_0897429C;
    case 53u: goto L_089742A8;
    case 54u: goto L_089742B0;
    case 55u: goto L_089742C0;
    case 56u: goto L_089742D0;
    case 57u: goto L_089742D8;
    case 58u: goto L_089742E8;
    case 59u: goto L_089742F4;
    case 60u: goto L_089742FC;
    case 61u: goto L_0897430C;
    case 62u: goto L_0897431C;
    case 63u: goto L_08974324;
    case 64u: goto L_08974334;
    case 65u: goto L_08974340;
    case 66u: goto L_08974348;
    case 67u: goto L_08974358;
    case 68u: goto L_08974364;
    case 69u: goto L_0897436C;
    case 70u: goto L_0897437C;
    case 71u: goto L_08974388;
    case 72u: goto L_08974390;
    case 73u: goto L_089743A0;
    case 74u: goto L_089743AC;
    case 75u: goto L_089743B4;
    case 76u: goto L_089743C0;
    case 77u: goto L_089743C8;
    case 78u: goto L_089743CC;
    case 79u: goto L_089743E0;
    case 80u: goto L_08974454;
    case 81u: goto L_08974470;
    case 82u: goto L_0897448C;
    case 83u: goto L_08974498;
    case 84u: goto L_089744A4;
    case 85u: goto L_089744B4;
    case 86u: goto L_089744BC;
    case 87u: goto L_089744C4;
    case 88u: goto L_089744CC;
    case 89u: goto L_089744E0;
    case 90u: goto L_089744F8;
    case 91u: goto L_0897450C;
    case 92u: goto L_08974534;
    case 93u: goto L_08974540;
    case 94u: goto L_08974550;
    case 95u: goto L_08974558;
    case 96u: goto L_08974564;
    case 97u: goto L_0897457C;
    case 98u: goto L_08974580;
    case 99u: goto L_089745AC;
    case 100u: goto L_089745C4;
    case 101u: goto L_089745D0;
    case 102u: goto L_089745E0;
    case 103u: goto L_089745E8;
    case 104u: goto L_08974660;
    case 105u: goto L_089746A4;
    case 106u: goto L_089746BC;
    case 107u: goto L_089746C4;
    case 108u: goto L_089746CC;
    case 109u: goto L_089746D0;
    case 110u: goto L_08974754;
    case 111u: goto L_08974768;
    case 112u: goto L_08974780;
    case 113u: goto L_0897478C;
    case 114u: goto L_08974790;
    case 115u: goto L_08974824;
    case 116u: goto L_08974830;
    case 117u: goto L_08974844;
    case 118u: goto L_08974858;
    case 119u: goto L_0897486C;
    case 120u: goto L_08974874;
    case 121u: goto L_08974880;
    case 122u: goto L_089748A0;
    case 123u: goto L_089748D4;
    case 124u: goto L_08974900;
    case 125u: goto L_0897491C;
    case 126u: goto L_08974928;
    case 127u: goto L_08974940;
    case 128u: goto L_0897494C;
    case 129u: goto L_08974958;
    case 130u: goto L_0897496C;
    case 131u: goto L_08974974;
    case 132u: goto L_08974980;
    case 133u: goto L_08974998;
    case 134u: goto L_089749A8;
    case 135u: goto L_089749B0;
    case 136u: goto L_089749B8;
    case 137u: goto L_089749C0;
    case 138u: goto L_089749CC;
    case 139u: goto L_089749D4;
    case 140u: goto L_089749DC;
    case 141u: goto L_089749E4;
    case 142u: goto L_089749E8;
    case 143u: goto L_089749F0;
    case 144u: goto L_089749F8;
    case 145u: goto L_08974A08;
    case 146u: goto L_08974A2C;
    case 147u: goto L_08974A34;
    case 148u: goto L_08974A3C;
    case 149u: goto L_08974A44;
    case 150u: goto L_08974A50;
    case 151u: goto L_08974A58;
    case 152u: goto L_08974A60;
    case 153u: goto L_08974A70;
    case 154u: goto L_08974A80;
    case 155u: goto L_08974A8C;
    case 156u: goto L_08974AA0;
    case 157u: goto L_08974AAC;
    case 158u: goto L_08974AC4;
    case 159u: goto L_08974AE4;
    case 160u: goto L_08974AF0;
    case 161u: goto L_08974B18;
    case 162u: goto L_08974B28;
    case 163u: goto L_08974B30;
    case 164u: goto L_08974B40;
    case 165u: goto L_08974B44;
    case 166u: goto L_08974B58;
    case 167u: goto L_08974B68;
    case 168u: goto L_08974B74;
    case 169u: goto L_08974B84;
    case 170u: goto L_08974B88;
    case 171u: goto L_08974B9C;
    case 172u: goto L_08974BC4;
    case 173u: goto L_08974BD8;
    case 174u: goto L_08974BF8;
    case 175u: goto L_08974BFC;
    case 176u: goto L_08974C04;
    case 177u: goto L_08974C18;
    case 178u: goto L_08974C20;
    case 179u: goto L_08974C2C;
    case 180u: goto L_08974C3C;
    case 181u: goto L_08974C44;
    case 182u: goto L_08974C48;
    case 183u: goto L_08974C58;
    case 184u: goto L_08974C68;
    case 185u: goto L_08974C70;
    case 186u: goto L_08974C78;
    case 187u: goto L_08974C80;
    case 188u: goto L_08974C84;
    case 189u: goto L_08974C8C;
    case 190u: goto L_08974C94;
    case 191u: goto L_08974C9C;
    case 192u: goto L_08974CA4;
    case 193u: goto L_08974CAC;
    case 194u: goto L_08974CB4;
    case 195u: goto L_08974CC4;
    case 196u: goto L_08974CCC;
    case 197u: goto L_08974CE0;
    case 198u: goto L_08974CEC;
    case 199u: goto L_08974CF4;
    case 200u: goto L_08974CF8;
    case 201u: goto L_08974D0C;
    case 202u: goto L_08974D18;
    case 203u: goto L_08974D20;
    case 204u: goto L_08974D24;
    case 205u: goto L_08974D34;
    case 206u: goto L_08974D40;
    case 207u: goto L_08974D48;
    case 208u: goto L_08974D4C;
    case 209u: goto L_08974D5C;
    case 210u: goto L_08974D6C;
    case 211u: goto L_08974D78;
    case 212u: goto L_08974D88;
    case 213u: goto L_08974DA0;
    case 214u: goto L_08974DB0;
    case 215u: goto L_08974DB8;
    case 216u: goto L_08974DBC;
    case 217u: goto L_08974DD4;
    case 218u: goto L_08974DE4;
    case 219u: goto L_08974DF0;
    case 220u: goto L_08974E04;
    case 221u: goto L_08974E10;
    case 222u: goto L_08974E28;
    case 223u: goto L_08974E38;
    case 224u: goto L_08974E40;
    case 225u: goto L_08974E44;
    case 226u: goto L_08974E5C;
    case 227u: goto L_08974E6C;
    case 228u: goto L_08974E78;
    case 229u: goto L_08974E8C;
    case 230u: goto L_08974E98;
    case 231u: goto L_08974EA0;
    case 232u: goto L_08974EB0;
    case 233u: goto L_08974EB8;
    case 234u: goto L_08974EBC;
    case 235u: goto L_08974ED4;
    case 236u: goto L_08974EE4;
    case 237u: goto L_08974EF0;
    case 238u: goto L_08974F04;
    case 239u: goto L_08974F10;
    case 240u: goto L_08974F18;
    case 241u: goto L_08974F28;
    case 242u: goto L_08974F30;
    case 243u: goto L_08974F34;
    case 244u: goto L_08974F4C;
    case 245u: goto L_08974F5C;
    case 246u: goto L_08974F68;
    case 247u: goto L_08974F7C;
    case 248u: goto L_08974F88;
    case 249u: goto L_08974F90;
    case 250u: goto L_08974FA0;
    case 251u: goto L_08974FA8;
    case 252u: goto L_08974FAC;
    case 253u: goto L_08974FC4;
    case 254u: goto L_08974FD4;
    case 255u: goto L_08974FE0;
    case 256u: goto L_08974FF4;
    case 257u: goto L_08975000;
    case 258u: goto L_08975008;
    case 259u: goto L_08975018;
    case 260u: goto L_08975020;
    case 261u: goto L_08975024;
    case 262u: goto L_0897503C;
    case 263u: goto L_0897504C;
    case 264u: goto L_08975058;
    case 265u: goto L_0897506C;
    case 266u: goto L_08975078;
    case 267u: goto L_08975080;
    case 268u: goto L_08975090;
    case 269u: goto L_08975098;
    case 270u: goto L_0897509C;
    case 271u: goto L_089750B4;
    case 272u: goto L_089750C4;
    case 273u: goto L_089750D0;
    case 274u: goto L_089750E4;
    case 275u: goto L_089750F0;
    case 276u: goto L_089750F8;
    case 277u: goto L_08975100;
    case 278u: goto L_0897510C;
    case 279u: goto L_0897511C;
    case 280u: goto L_08975134;
    case 281u: goto L_08975144;
    case 282u: goto L_0897514C;
    case 283u: goto L_08975150;
    case 284u: goto L_08975168;
    case 285u: goto L_08975178;
    case 286u: goto L_08975184;
    case 287u: goto L_08975198;
    case 288u: goto L_089751A4;
    case 289u: goto L_089751AC;
    case 290u: goto L_089751BC;
    case 291u: goto L_089751C4;
    case 292u: goto L_089751C8;
    case 293u: goto L_089751E0;
    case 294u: goto L_089751F0;
    case 295u: goto L_089751FC;
    case 296u: goto L_08975210;
    case 297u: goto L_0897521C;
    case 298u: goto L_08975224;
    case 299u: goto L_08975234;
    case 300u: goto L_0897523C;
    case 301u: goto L_08975240;
    case 302u: goto L_08975258;
    case 303u: goto L_08975268;
    case 304u: goto L_08975274;
    case 305u: goto L_08975288;
    case 306u: goto L_08975294;
    case 307u: goto L_0897529C;
    case 308u: goto L_089752AC;
    case 309u: goto L_089752B4;
    case 310u: goto L_089752B8;
    case 311u: goto L_089752D0;
    case 312u: goto L_089752E0;
    case 313u: goto L_089752EC;
    case 314u: goto L_08975300;
    case 315u: goto L_0897530C;
    case 316u: goto L_08975314;
    case 317u: goto L_08975324;
    case 318u: goto L_0897532C;
    case 319u: goto L_08975330;
    case 320u: goto L_08975348;
    case 321u: goto L_08975358;
    case 322u: goto L_08975364;
    case 323u: goto L_08975378;
    case 324u: goto L_08975384;
    case 325u: goto L_0897538C;
    case 326u: goto L_0897539C;
    case 327u: goto L_089753A4;
    case 328u: goto L_089753A8;
    case 329u: goto L_089753C0;
    case 330u: goto L_089753D0;
    case 331u: goto L_089753DC;
    case 332u: goto L_089753F0;
    case 333u: goto L_089753FC;
    case 334u: goto L_08975404;
    case 335u: goto L_08975414;
    case 336u: goto L_0897541C;
    case 337u: goto L_08975420;
    case 338u: goto L_08975438;
    case 339u: goto L_08975448;
    case 340u: goto L_08975454;
    case 341u: goto L_08975468;
    case 342u: goto L_08975474;
    case 343u: goto L_0897547C;
    case 344u: goto L_08975484;
    case 345u: goto L_0897549C;
    case 346u: goto L_089754C8;
    case 347u: goto L_089754E0;
    case 348u: goto L_089754F0;
    case 349u: goto L_089754FC;
    case 350u: goto L_08975508;
    case 351u: goto L_08975510;
    case 352u: goto L_0897551C;
    case 353u: goto L_08975528;
    case 354u: goto L_08975534;
    case 355u: goto L_0897554C;
    case 356u: goto L_08975554;
    case 357u: goto L_08975594;
    case 358u: goto L_089755BC;
    case 359u: goto L_089755E0;
    case 360u: goto L_08975604;
    case 361u: goto L_08975638;
    case 362u: goto L_0897564C;
    case 363u: goto L_089756C8;
    case 364u: goto L_089756D0;
    case 365u: goto L_089756D8;
    case 366u: goto L_089756F8;
    case 367u: goto L_089756FC;
    case 368u: goto L_08975724;
    case 369u: goto L_0897572C;
    case 370u: goto L_089757B0;
    case 371u: goto L_089757D8;
    case 372u: goto L_089757E8;
    case 373u: goto L_089757F0;
    case 374u: goto L_089757FC;
    case 375u: goto L_0897581C;
    case 376u: goto L_08975848;
    case 377u: goto L_08975884;
    case 378u: goto L_089758AC;
    case 379u: goto L_089758D8;
    case 380u: goto L_089758E4;
    case 381u: goto L_089758F8;
    case 382u: goto L_08975918;
    case 383u: goto L_08975930;
    case 384u: goto L_0897593C;
    case 385u: goto L_08975954;
    case 386u: goto L_08975958;
    case 387u: goto L_08975960;
    case 388u: goto L_08975978;
    case 389u: goto L_0897597C;
    case 390u: goto L_08975990;
    case 391u: goto L_089759B8;
    case 392u: goto L_089759CC;
    case 393u: goto L_089759D8;
    case 394u: goto L_089759EC;
    case 395u: goto L_089759FC;
    case 396u: goto L_08975A00;
    case 397u: goto L_08975A14;
    case 398u: goto L_08975A28;
    case 399u: goto L_08975A30;
    case 400u: goto L_08975A40;
    case 401u: goto L_08975A50;
    case 402u: goto L_08975A5C;
    case 403u: goto L_08975A64;
    case 404u: goto L_08975A78;
    case 405u: goto L_08975A7C;
    case 406u: goto L_08975AA4;
    case 407u: goto L_08975AD4;
    case 408u: goto L_08975AD8;
    case 409u: goto L_08975B18;
    case 410u: goto L_08975B68;
    case 411u: goto L_08975B70;
    case 412u: goto L_08975B7C;
    case 413u: goto L_08975B88;
    case 414u: goto L_08975B94;
    case 415u: goto L_08975BA4;
    case 416u: goto L_08975BB0;
    case 417u: goto L_08975BD4;
    case 418u: goto L_08975BDC;
    case 419u: goto L_08975C08;
    case 420u: goto L_08975C14;
    case 421u: goto L_08975C34;
    case 422u: goto L_08975C3C;
    case 423u: goto L_08975C48;
    case 424u: goto L_08975C74;
    case 425u: goto L_08975CA4;
    case 426u: goto L_08975D18;
    case 427u: goto L_08975D38;
    case 428u: goto L_08975D60;
    case 429u: goto L_08975D84;
    case 430u: goto L_08975DAC;
    case 431u: goto L_08975DC4;
    case 432u: goto L_08975DD0;
    case 433u: goto L_08975DE4;
    case 434u: goto L_08975DEC;
    case 435u: goto L_08975E08;
    case 436u: goto L_08975E20;
    case 437u: goto L_08975E28;
    case 438u: goto L_08975E40;
    case 439u: goto L_08975E48;
    case 440u: goto L_08975E60;
    case 441u: goto L_08975E64;
    case 442u: goto L_08975E78;
    case 443u: goto L_08975EB8;
    case 444u: goto L_08975EC4;
    case 445u: goto L_08975ED4;
    case 446u: goto L_08975EE8;
    case 447u: goto L_08975EF4;
    case 448u: goto L_08975F04;
    case 449u: goto L_08975F10;
    case 450u: goto L_08975F18;
    case 451u: goto L_08975F20;
    case 452u: goto L_08975F34;
    case 453u: goto L_08975F58;
    case 454u: goto L_08975F78;
    case 455u: goto L_08975F7C;
    case 456u: goto L_08975FB0;
    case 457u: goto L_0897602C;
    case 458u: goto L_08976060;
    case 459u: goto L_0897607C;
    case 460u: goto L_089760A4;
    case 461u: goto L_089760AC;
    case 462u: goto L_089760D4;
    case 463u: goto L_089760F0;
    case 464u: goto L_089760FC;
    case 465u: goto L_08976110;
    case 466u: goto L_08976168;
    case 467u: goto L_08976174;
    case 468u: goto L_08976188;
    case 469u: goto L_08976198;
    case 470u: goto L_0897619C;
    case 471u: goto L_089761B0;
    case 472u: goto L_089761C4;
    case 473u: goto L_089761CC;
    case 474u: goto L_089761DC;
    case 475u: goto L_08976214;
    case 476u: goto L_08976238;
    case 477u: goto L_0897624C;
    case 478u: goto L_0897625C;
    case 479u: goto L_08976264;
    case 480u: goto L_08976278;
    case 481u: goto L_0897629C;
    case 482u: goto L_089762BC;
    case 483u: goto L_089762C8;
    case 484u: goto L_089762D0;
    case 485u: goto L_089762EC;
    case 486u: goto L_08976338;
    case 487u: goto L_08976368;
    case 488u: goto L_0897643C;
    case 489u: goto L_08976444;
    case 490u: goto L_0897644C;
    case 491u: goto L_0897645C;
    case 492u: goto L_08976464;
    case 493u: goto L_08976470;
    case 494u: goto L_08976474;
    case 495u: goto L_08976484;
    case 496u: goto L_08976494;
    case 497u: goto L_089764B4;
    case 498u: goto L_08976508;
    case 499u: goto L_08976510;
    case 500u: goto L_08976560;
    case 501u: goto L_08976568;
    case 502u: goto L_08976584;
    case 503u: goto L_0897658C;
    case 504u: goto L_089765A8;
    case 505u: goto L_089765B0;
    case 506u: goto L_089765B4;
    case 507u: goto L_089765C4;
    case 508u: goto L_089765D0;
    case 509u: goto L_089765DC;
    case 510u: goto L_089765E4;
    case 511u: goto L_08976600;
    case 512u: goto L_0897660C;
    case 513u: goto L_08976618;
    case 514u: goto L_08976620;
    case 515u: goto L_08976628;
    case 516u: goto L_08976640;
    case 517u: goto L_0897664C;
    case 518u: goto L_08976658;
    case 519u: goto L_08976660;
    case 520u: goto L_08976670;
    case 521u: goto L_08976684;
    case 522u: goto L_08976694;
    case 523u: goto L_089766AC;
    case 524u: goto L_089766B0;
    case 525u: goto L_089766C8;
    case 526u: goto L_089766D0;
    case 527u: goto L_089766D8;
    case 528u: goto L_089766F0;
    case 529u: goto L_089766FC;
    case 530u: goto L_08976708;
    case 531u: goto L_08976710;
    case 532u: goto L_08976718;
    case 533u: goto L_08976720;
    case 534u: goto L_0897673C;
    case 535u: goto L_08976748;
    case 536u: goto L_08976754;
    case 537u: goto L_0897675C;
    case 538u: goto L_08976764;
    case 539u: goto L_0897677C;
    case 540u: goto L_08976788;
    case 541u: goto L_08976794;
    case 542u: goto L_0897679C;
    case 543u: goto L_089767A8;
    case 544u: goto L_089767BC;
    case 545u: goto L_089767CC;
    case 546u: goto L_089767E0;
    case 547u: goto L_089767E4;
    case 548u: goto L_089767F8;
    case 549u: goto L_08976800;
    case 550u: goto L_08976824;
    case 551u: goto L_0897682C;
    case 552u: goto L_08976844;
    case 553u: goto L_08976850;
    case 554u: goto L_0897685C;
    case 555u: goto L_08976864;
    case 556u: goto L_08976870;
    case 557u: goto L_08976884;
    case 558u: goto L_08976894;
    case 559u: goto L_089768A8;
    case 560u: goto L_089768AC;
    case 561u: goto L_089768C0;
    case 562u: goto L_089768C8;
    case 563u: goto L_089768D4;
    case 564u: goto L_089768E8;
    case 565u: goto L_089768F8;
    case 566u: goto L_0897690C;
    case 567u: goto L_08976910;
    case 568u: goto L_08976924;
    case 569u: goto L_08976930;
    case 570u: goto L_08976938;
    case 571u: goto L_08976950;
    case 572u: goto L_0897695C;
    case 573u: goto L_08976968;
    case 574u: goto L_08976970;
    case 575u: goto L_0897697C;
    case 576u: goto L_08976984;
    case 577u: goto L_0897699C;
    case 578u: goto L_089769A8;
    case 579u: goto L_089769B4;
    case 580u: goto L_089769BC;
    case 581u: goto L_089769C8;
    case 582u: goto L_089769DC;
    case 583u: goto L_089769EC;
    case 584u: goto L_08976A00;
    case 585u: goto L_08976A04;
    case 586u: goto L_08976A18;
    case 587u: goto L_08976A20;
    case 588u: goto L_08976A2C;
    case 589u: goto L_08976A40;
    case 590u: goto L_08976A50;
    case 591u: goto L_08976A64;
    case 592u: goto L_08976A68;
    case 593u: goto L_08976A7C;
    case 594u: goto L_08976A84;
    case 595u: goto L_08976AE8;
    case 596u: goto L_08976AF0;
    case 597u: goto L_08976B20;
    case 598u: goto L_08976B34;
    case 599u: goto L_08976B48;
    case 600u: goto L_08976B5C;
    case 601u: goto L_08976B70;
    case 602u: goto L_08976B84;
    case 603u: goto L_08976BA0;
    case 604u: goto L_08976BB0;
    case 605u: goto L_08976BC4;
    case 606u: goto L_08976BFC;
    case 607u: goto L_08976C60;
    case 608u: goto L_08976C70;
    case 609u: goto L_08976CA0;
    case 610u: goto L_08976CB4;
    case 611u: goto L_08976CC8;
    case 612u: goto L_08976CDC;
    case 613u: goto L_08976CF0;
    case 614u: goto L_08976D04;
    case 615u: goto L_08976D20;
    case 616u: goto L_08976D30;
    case 617u: goto L_08976D44;
    case 618u: goto L_08976D7C;
    case 619u: goto L_08976E08;
    case 620u: goto L_08976E14;
    case 621u: goto L_08976E1C;
    case 622u: goto L_08976E30;
    case 623u: goto L_08976E3C;
    case 624u: goto L_08976E50;
    case 625u: goto L_08976E70;
    case 626u: goto L_08976E84;
    case 627u: goto L_08976E94;
    case 628u: goto L_08976EA8;
    case 629u: goto L_08976F5C;
    case 630u: goto L_08976F64;
    case 631u: goto L_08976F98;
    case 632u: goto L_08976FBC;
    case 633u: goto L_08976FC4;
    case 634u: goto L_08976FF8;
    case 635u: goto L_08977008;
    case 636u: goto L_08977038;
    case 637u: goto L_0897706C;
    case 638u: goto L_0897709C;
    case 639u: goto L_08977114;
    case 640u: goto L_08977124;
    case 641u: goto L_08977150;
    case 642u: goto L_08977164;
    case 643u: goto L_08977180;
    case 644u: goto L_08977190;
    case 645u: goto L_089771A4;
    case 646u: goto L_089771AC;
    case 647u: goto L_089771F4;
    case 648u: goto L_08977260;
    case 649u: goto L_08977270;
    case 650u: goto L_08977274;
    case 651u: goto L_089772B8;
    case 652u: goto L_089772C4;
    case 653u: goto L_089772D4;
    case 654u: goto L_089772DC;
    case 655u: goto L_089772F4;
    case 656u: goto L_08977310;
    case 657u: goto L_0897736C;
    case 658u: goto L_08977374;
    case 659u: goto L_089773A4;
    case 660u: goto L_089773B8;
    case 661u: goto L_089773CC;
    case 662u: goto L_089773E0;
    case 663u: goto L_089773F4;
    case 664u: goto L_08977408;
    case 665u: goto L_08977420;
    case 666u: goto L_0897742C;
    case 667u: goto L_08977440;
    case 668u: goto L_08977474;
    case 669u: goto L_089774C8;
    case 670u: goto L_089774D8;
    case 671u: goto L_089774DC;
    case 672u: goto L_0897751C;
    case 673u: goto L_08977528;
    case 674u: goto L_08977534;
    case 675u: goto L_0897753C;
    case 676u: goto L_08977554;
    case 677u: goto L_0897756C;
    case 678u: goto L_08977584;
    case 679u: goto L_08977594;
    case 680u: goto L_089775C4;
    case 681u: goto L_089775E4;
    case 682u: goto L_089775EC;
    case 683u: goto L_089775F4;
    case 684u: goto L_0897760C;
    case 685u: goto L_08977610;
    case 686u: goto L_08977618;
    case 687u: goto L_08977630;
    case 688u: goto L_08977640;
    case 689u: goto L_08977670;
    case 690u: goto L_08977690;
    case 691u: goto L_08977698;
    case 692u: goto L_089776A0;
    case 693u: goto L_089776B8;
    case 694u: goto L_089776BC;
    case 695u: goto L_089776C4;
    case 696u: goto L_089776DC;
    case 697u: goto L_089776F0;
    case 698u: goto L_08977718;
    case 699u: goto L_08977738;
    case 700u: goto L_08977758;
    case 701u: goto L_08977778;
    case 702u: goto L_0897778C;
    case 703u: goto L_089777A0;
    case 704u: goto L_089777A8;
    case 705u: goto L_089777BC;
    case 706u: goto L_089777CC;
    case 707u: goto L_0897780C;
    case 708u: goto L_08977830;
    case 709u: goto L_08977844;
    case 710u: goto L_08977858;
    case 711u: goto L_08977864;
    case 712u: goto L_08977878;
    case 713u: goto L_08977914;
    case 714u: goto L_08977920;
    case 715u: goto L_0897795C;
    case 716u: goto L_08977974;
    case 717u: goto L_0897798C;
    case 718u: goto L_08977A18;
    case 719u: goto L_08977A28;
    case 720u: goto L_08977AB8;
    case 721u: goto L_08977AF8;
    case 722u: goto L_08977B18;
    case 723u: goto L_08977B34;
    case 724u: goto L_08977B4C;
    case 725u: goto L_08977B6C;
    case 726u: goto L_08977B88;
    case 727u: goto L_08977B90;
    case 728u: goto L_08977BA4;
    case 729u: goto L_08977BAC;
    case 730u: goto L_08977BB8;
    case 731u: goto L_08977BC4;
    case 732u: goto L_08977BEC;
    case 733u: goto L_08977BF4;
    case 734u: goto L_08977C20;
    case 735u: goto L_08977C34;
    case 736u: goto L_08977C3C;
    case 737u: goto L_08977C78;
    case 738u: goto L_08977C80;
    case 739u: goto L_08977C88;
    case 740u: goto L_08977C90;
    case 741u: goto L_08977C98;
    case 742u: goto L_08977CC0;
    case 743u: goto L_08977CC8;
    case 744u: goto L_08977CF4;
    case 745u: goto L_08977D08;
    case 746u: goto L_08977D10;
    case 747u: goto L_08977D4C;
    case 748u: goto L_08977D54;
    case 749u: goto L_08977D58;
    case 750u: goto L_08977D60;
    case 751u: goto L_08977D78;
    case 752u: goto L_08977D8C;
    case 753u: goto L_08977DB0;
    case 754u: goto L_08977E18;
    case 755u: goto L_08977E44;
    case 756u: goto L_08977E50;
    case 757u: goto L_08977E54;
    case 758u: goto L_08977E5C;
    case 759u: goto L_08977E68;
    case 760u: goto L_08977E78;
    case 761u: goto L_08977E80;
    case 762u: goto L_08977E88;
    case 763u: goto L_08977EB4;
    case 764u: goto L_08977EB8;
    case 765u: goto L_08977EC0;
    case 766u: goto L_08977ECC;
    case 767u: goto L_08977EDC;
    case 768u: goto L_08977EE4;
    case 769u: goto L_08977EEC;
    case 770u: goto L_08977EF8;
    case 771u: goto L_08977F00;
    case 772u: goto L_08977F08;
    case 773u: goto L_08977F40;
    case 774u: goto L_08977F4C;
    case 775u: goto L_08977F5C;
    case 776u: goto L_08977F64;
    case 777u: goto L_08977F78;
    case 778u: goto L_08977FA8;
    case 779u: goto L_08977FC0;
    case 780u: goto L_08977FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08974000:
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897401Cu);
    ctx.gpr[10] = (0u | 1u);
    ctx.pc = 0x08B0B6ECu;
    return;
L_0897401C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08974190;
      }
      goto L_08974028;
    }
L_08974028:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1801));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974188;
      }
      goto L_08974038;
    }
L_08974038:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1809));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897405C;
      }
      goto L_08974048;
    }
L_08974048:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974054u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27068));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x08974054u) goto L_08974054;
    return;
L_08974054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974188;
      }
      goto L_0897405C;
    }
L_0897405C:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1810));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974080;
      }
      goto L_0897406C;
    }
L_0897406C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974078u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27016));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x08974078u) goto L_08974078;
    return;
L_08974078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974188;
      }
      goto L_08974080;
    }
L_08974080:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1793));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089740A4;
      }
      goto L_08974090;
    }
L_08974090:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0897409Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26960));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x0897409Cu) goto L_0897409C;
    return;
L_0897409C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974188;
      }
      goto L_089740A4;
    }
L_089740A4:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1799));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089740C8;
      }
      goto L_089740B4;
    }
L_089740B4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089740C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26904));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x089740C0u) goto L_089740C0;
    return;
L_089740C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974188;
      }
      goto L_089740C8;
    }
L_089740C8:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1800));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089740EC;
      }
      goto L_089740D8;
    }
L_089740D8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089740E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26848));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x089740E4u) goto L_089740E4;
    return;
L_089740E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974188;
      }
      goto L_089740EC;
    }
L_089740EC:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1813));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974110;
      }
      goto L_089740FC;
    }
L_089740FC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974108u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26792));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x08974108u) goto L_08974108;
    return;
L_08974108:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974188;
      }
      goto L_08974110;
    }
L_08974110:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974134;
      }
      goto L_08974120;
    }
L_08974120:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0897412Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26744));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x0897412Cu) goto L_0897412C;
    return;
L_0897412C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974188;
      }
      goto L_08974134;
    }
L_08974134:
    ctx.gpr[5] = (32832u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1798));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974158;
      }
      goto L_08974144;
    }
L_08974144:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974150u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26700));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x08974150u) goto L_08974150;
    return;
L_08974150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974188;
      }
      goto L_08974158;
    }
L_08974158:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1817));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897417C;
      }
      goto L_08974168;
    }
L_08974168:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974174u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26644));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x08974174u) goto L_08974174;
    return;
L_08974174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974188;
      }
      goto L_0897417C;
    }
L_0897417C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974188u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26588));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x08974188u) goto L_08974188;
    return;
L_08974188:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08974194;
      }
      goto L_08974190;
    }
L_08974190:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08974194;
L_08974194:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089741A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089741D8u);
    ctx.gpr[10] = (0u | 1u);
    ctx.pc = 0x08B0B6E4u;
    return;
L_089741D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089743C8;
      }
      goto L_089741E4;
    }
L_089741E4:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1801));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974218;
      }
      goto L_089741F4;
    }
L_089741F4:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1809));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974220;
      }
      goto L_08974204;
    }
L_08974204:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974210u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26552));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x08974210u) goto L_08974210;
    return;
L_08974210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089743C0;
      }
      goto L_08974218;
    }
L_08974218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089743CC;
      }
      goto L_08974220;
    }
L_08974220:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1810));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974244;
      }
      goto L_08974230;
    }
L_08974230:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0897423Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26504));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x0897423Cu) goto L_0897423C;
    return;
L_0897423C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089743C0;
      }
      goto L_08974244;
    }
L_08974244:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1793));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974268;
      }
      goto L_08974254;
    }
L_08974254:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974260u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26452));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x08974260u) goto L_08974260;
    return;
L_08974260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089743C0;
      }
      goto L_08974268;
    }
L_08974268:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1799));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897428C;
      }
      goto L_08974278;
    }
L_08974278:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974284u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26396));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x08974284u) goto L_08974284;
    return;
L_08974284:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089743C0;
      }
      goto L_0897428C;
    }
L_0897428C:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1794));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089742B0;
      }
      goto L_0897429C;
    }
L_0897429C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089742A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26344));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x089742A8u) goto L_089742A8;
    return;
L_089742A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089743C0;
      }
      goto L_089742B0;
    }
L_089742B0:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1795));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089742D8;
      }
      goto L_089742C0;
    }
L_089742C0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[31] = (0x089742D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26296));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x089742D0u) goto L_089742D0;
    return;
L_089742D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089743C0;
      }
      goto L_089742D8;
    }
L_089742D8:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1797));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089742FC;
      }
      goto L_089742E8;
    }
L_089742E8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089742F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26240));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x089742F4u) goto L_089742F4;
    return;
L_089742F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089743C0;
      }
      goto L_089742FC;
    }
L_089742FC:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974324;
      }
      goto L_0897430C;
    }
L_0897430C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897431Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26188));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x0897431Cu) goto L_0897431C;
    return;
L_0897431C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089743C0;
      }
      goto L_08974324;
    }
L_08974324:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1800));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974348;
      }
      goto L_08974334;
    }
L_08974334:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974340u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26144));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x08974340u) goto L_08974340;
    return;
L_08974340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089743C0;
      }
      goto L_08974348;
    }
L_08974348:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1813));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897436C;
      }
      goto L_08974358;
    }
L_08974358:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974364u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26092));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x08974364u) goto L_08974364;
    return;
L_08974364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089743C0;
      }
      goto L_0897436C;
    }
L_0897436C:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08974390;
      }
      goto L_0897437C;
    }
L_0897437C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974388u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26048));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x08974388u) goto L_08974388;
    return;
L_08974388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089743C0;
      }
      goto L_08974390;
    }
L_08974390:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1817));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089743B4;
      }
      goto L_089743A0;
    }
L_089743A0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089743ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26008));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x089743ACu) goto L_089743AC;
    return;
L_089743AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089743C0;
      }
      goto L_089743B4;
    }
L_089743B4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089743C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25956));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 625u, 0x08973ECCu>(ctx, &aot_mem) && ctx.pc == 0x089743C0u) goto L_089743C0;
    return;
L_089743C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089743CC;
      }
      goto L_089743C8;
    }
L_089743C8:
    ctx.gpr[2] = (0u | 1u);
    goto L_089743CC;
L_089743CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089743E0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974454:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974470:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089744CC;
      }
      goto L_0897448C;
    }
L_0897448C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_089744BC;
      }
      goto L_08974498;
    }
L_08974498:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089744A4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x089744A4u) goto L_089744A4;
    return;
L_089744A4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089744B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x089744B4u) goto L_089744B4;
    return;
L_089744B4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_089744BC;
L_089744BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089744CC;
      }
      goto L_089744C4;
    }
L_089744C4:
    ctx.gpr[31] = (0x089744CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x089744CCu) goto L_089744CC;
    return;
L_089744CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089744E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089744F8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x089744F8u) goto L_089744F8;
    return;
L_089744F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897450C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08974558;
      }
      goto L_08974534;
    }
L_08974534:
    ctx.gpr[4] = (ctx.gpr[4] | 3u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08974580;
      }
      goto L_08974540;
    }
L_08974540:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[31] = (0x08974550u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08974550u) goto L_08974550;
    return;
L_08974550:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08974580;
      }
      goto L_08974558;
    }
L_08974558:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08974580;
      }
      goto L_08974564;
    }
L_08974564:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0897457Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x0897457Cu) goto L_0897457C;
    return;
L_0897457C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08974580;
L_08974580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089745ACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x089745ACu) goto L_089745AC;
    return;
L_089745AC:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089745C4:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089745E0;
      }
      goto L_089745D0;
    }
L_089745D0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] | 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089745E0;
L_089745E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089745E8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089746C4;
      }
      goto L_089746A4;
    }
L_089746A4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089746CC;
      }
      goto L_089746BC;
    }
L_089746BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089746D0;
      }
      goto L_089746C4;
    }
L_089746C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089748A0;
      }
      goto L_089746CC;
    }
L_089746CC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089746D0;
L_089746D0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089748A0;
      }
      goto L_08974754;
    }
L_08974754:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (0u | 16u);
    ctx.gpr[20] = (0u | 10u);
    goto L_08974768;
L_08974768:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_0897478C;
    }
    goto L_08974780;
L_08974780:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08974790;
      }
      goto L_0897478C;
    }
L_0897478C:
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
    goto L_08974790;
L_08974790:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<4u, 0u, 1u, 4u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<4u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08974874;
      }
      goto L_08974824;
    }
L_08974824:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08974830u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_089745E8;
L_08974830:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08974844u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_089745E8;
L_08974844:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08974858u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_089745E8;
L_08974858:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0897486Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_089745E8;
L_0897486C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08974874;
L_08974874:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08974880u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_089743E0;
L_08974880:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08974768;
      }
      goto L_089748A0;
    }
L_089748A0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089748D4:
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
L_08974900:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897491Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 704u, 0x08AA34C8u>(ctx, &aot_mem) && ctx.pc == 0x0897491Cu) goto L_0897491C;
    return;
L_0897491C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974928:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08974940u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08974940u) goto L_08974940;
    return;
L_08974940:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897494C:
    ctx.gpr[4] = (2228u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-26655)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974958:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897496Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25920));
    goto L_089748D4;
L_0897496C:
    ctx.gpr[31] = (0x08974974u);
    // nop
    goto L_08974980;
L_08974974:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974980:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08974998u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25880));
    goto L_089748D4;
L_08974998:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089749B8;
    }
    goto L_089749A8;
L_089749A8:
    ctx.gpr[31] = (0x089749B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089749B0u) goto L_089749B0;
    return;
L_089749B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089749B8;
L_089749B8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089749D4;
      }
      goto L_089749C0;
    }
L_089749C0:
    ctx.gpr[5] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-26655), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089749DC;
      }
      goto L_089749CC;
    }
L_089749CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089749E8;
      }
      goto L_089749D4;
    }
L_089749D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089749F8;
      }
      goto L_089749DC;
    }
L_089749DC:
    ctx.gpr[31] = (0x089749E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089749E4u) goto L_089749E4;
    return;
L_089749E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    goto L_089749E8;
L_089749E8:
    ctx.gpr[31] = (0x089749F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 779u, 0x0883BF78u>(ctx, &aot_mem) && ctx.pc == 0x089749F0u) goto L_089749F0;
    return;
L_089749F0:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-26656), static_cast<std::uint8_t>(0u));
    goto L_089749F8;
L_089749F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974A08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-21000)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_08974A3C;
    }
    goto L_08974A2C;
L_08974A2C:
    ctx.gpr[31] = (0x08974A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08974A34u) goto L_08974A34;
    return;
L_08974A34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08974A3C;
L_08974A3C:
    ctx.gpr[31] = (0x08974A44u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08974A44u) goto L_08974A44;
    return;
L_08974A44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08974A60;
      }
      goto L_08974A50;
    }
L_08974A50:
    ctx.gpr[31] = (0x08974A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08974A58u) goto L_08974A58;
    return;
L_08974A58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[4] = (2226u << 16u);
    goto L_08974A60;
L_08974A60:
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25868));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08974A70u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08974A70u) goto L_08974A70;
    return;
L_08974A70:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08974A80u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08974A80u) goto L_08974A80;
    return;
L_08974A80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08974A8Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 781u, 0x0883BFA4u>(ctx, &aot_mem) && ctx.pc == 0x08974A8Cu) goto L_08974A8C;
    return;
L_08974A8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08974AAC;
      }
      goto L_08974AA0;
    }
L_08974AA0:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08974AACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08974AACu) goto L_08974AAC;
    return;
L_08974AAC:
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
L_08974AC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08974AE4u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08974AE4u) goto L_08974AE4;
    return;
L_08974AE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08974B18;
      }
      goto L_08974AF0;
    }
L_08974AF0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9476));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9460));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2199u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18776));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08974B18;
L_08974B18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08974B40;
      }
      goto L_08974B28;
    }
L_08974B28:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08974B44;
      }
      goto L_08974B30;
    }
L_08974B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08974B40;
L_08974B40:
    ctx.gpr[4] = (2233u << 16u);
    goto L_08974B44;
L_08974B44:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08974B9C;
      }
      goto L_08974B58;
    }
L_08974B58:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2233u << 16u);
        goto L_08974B88;
    }
    goto L_08974B68;
L_08974B68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08974B84;
      }
      goto L_08974B74;
    }
L_08974B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08974B84;
L_08974B84:
    ctx.gpr[4] = (2233u << 16u);
    goto L_08974B88;
L_08974B88:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(304), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08974BC4;
      }
      goto L_08974B9C;
    }
L_08974B9C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(300));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08974BC4u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 139u, 0x08B0098Cu>(ctx, &aot_mem) && ctx.pc == 0x08974BC4u) goto L_08974BC4;
    return;
L_08974BC4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(297)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08974BFC;
    }
    goto L_08974BD8;
L_08974BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08974BF8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08974BF8u) goto L_08974BF8;
    return;
L_08974BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08974BFC;
L_08974BFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974C20;
      }
      goto L_08974C04;
    }
L_08974C04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08974C20;
      }
      goto L_08974C18;
    }
L_08974C18:
    ctx.gpr[31] = (0x08974C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08974C20u) goto L_08974C20;
    return;
L_08974C20:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08974C2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25852));
    goto L_089748D4;
L_08974C2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08974C48;
      }
      goto L_08974C3C;
    }
L_08974C3C:
    ctx.gpr[31] = (0x08974C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08974C44u) goto L_08974C44;
    return;
L_08974C44:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08974C48;
L_08974C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08974C70;
      }
      goto L_08974C58;
    }
L_08974C58:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08974C78;
      }
      goto L_08974C68;
    }
L_08974C68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08974C84;
      }
      goto L_08974C70;
    }
L_08974C70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975484;
      }
      goto L_08974C78;
    }
L_08974C78:
    ctx.gpr[31] = (0x08974C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08974C80u) goto L_08974C80;
    return;
L_08974C80:
    ctx.gpr[16] = (2230u << 16u);
    goto L_08974C84;
L_08974C84:
    ctx.gpr[31] = (0x08974C8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 770u, 0x0883BED8u>(ctx, &aot_mem) && ctx.pc == 0x08974C8Cu) goto L_08974C8C;
    return;
L_08974C8C:
    ctx.gpr[31] = (0x08974C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 41u, 0x08AD031Cu>(ctx, &aot_mem) && ctx.pc == 0x08974C94u) goto L_08974C94;
    return;
L_08974C94:
    ctx.gpr[31] = (0x08974C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 122u, 0x08AD4EBCu>(ctx, &aot_mem) && ctx.pc == 0x08974C9Cu) goto L_08974C9C;
    return;
L_08974C9C:
    ctx.gpr[31] = (0x08974CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 154u, 0x0892D880u>(ctx, &aot_mem) && ctx.pc == 0x08974CA4u) goto L_08974CA4;
    return;
L_08974CA4:
    ctx.gpr[31] = (0x08974CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 11u, 0x08998148u>(ctx, &aot_mem) && ctx.pc == 0x08974CACu) goto L_08974CAC;
    return;
L_08974CAC:
    ctx.gpr[31] = (0x08974CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 298u, 0x08919260u>(ctx, &aot_mem) && ctx.pc == 0x08974CB4u) goto L_08974CB4;
    return;
L_08974CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[16] = (2226u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25840));
      if (branch_taken) {
          goto L_08974CCC;
      }
      goto L_08974CC4;
    }
L_08974CC4:
    ctx.gpr[31] = (0x08974CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08974CCCu) goto L_08974CCC;
    return;
L_08974CCC:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08974CE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08974CE0u) goto L_08974CE0;
    return;
L_08974CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08974CF8;
      }
      goto L_08974CEC;
    }
L_08974CEC:
    ctx.gpr[31] = (0x08974CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08974CF4u) goto L_08974CF4;
    return;
L_08974CF4:
    ctx.gpr[16] = (2230u << 16u);
    goto L_08974CF8;
L_08974CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08974D0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25696));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08974D0Cu) goto L_08974D0C;
    return;
L_08974D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08974D24;
      }
      goto L_08974D18;
    }
L_08974D18:
    ctx.gpr[31] = (0x08974D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08974D20u) goto L_08974D20;
    return;
L_08974D20:
    ctx.gpr[16] = (2230u << 16u);
    goto L_08974D24;
L_08974D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x08974D34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x08974D34u) goto L_08974D34;
    return;
L_08974D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08974D4C;
      }
      goto L_08974D40;
    }
L_08974D40:
    ctx.gpr[31] = (0x08974D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08974D48u) goto L_08974D48;
    return;
L_08974D48:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08974D4C;
L_08974D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    ctx.gpr[31] = (0x08974D5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x08974D5Cu) goto L_08974D5C;
    return;
L_08974D5C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28448)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975100;
      }
      goto L_08974D6C;
    }
L_08974D6C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08974D78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x08974D78u) goto L_08974D78;
    return;
L_08974D78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089750F8;
      }
      goto L_08974D88;
    }
L_08974D88:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25056)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08974DA0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08974DBC;
      }
      goto L_08974DB0;
    }
L_08974DB0:
    ctx.gpr[31] = (0x08974DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08974DB8u) goto L_08974DB8;
    return;
L_08974DB8:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08974DBC;
L_08974DBC:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25684));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974DD4u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21000)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08974DD4u) goto L_08974DD4;
    return;
L_08974DD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974DE4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08974DE4u) goto L_08974DE4;
    return;
L_08974DE4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08974DF0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08974DF0u) goto L_08974DF0;
    return;
L_08974DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08974E10;
      }
      goto L_08974E04;
    }
L_08974E04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08974E10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08974E10u) goto L_08974E10;
    return;
L_08974E10:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-26656), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2228u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-26655), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08975484;
      }
      goto L_08974E28;
    }
L_08974E28:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08974E44;
      }
      goto L_08974E38;
    }
L_08974E38:
    ctx.gpr[31] = (0x08974E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08974E40u) goto L_08974E40;
    return;
L_08974E40:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08974E44;
L_08974E44:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25648));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974E5Cu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21000)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08974E5Cu) goto L_08974E5C;
    return;
L_08974E5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974E6Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08974E6Cu) goto L_08974E6C;
    return;
L_08974E6C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08974E78u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08974E78u) goto L_08974E78;
    return;
L_08974E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08974E98;
      }
      goto L_08974E8C;
    }
L_08974E8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08974E98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08974E98u) goto L_08974E98;
    return;
L_08974E98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E10;
      }
      goto L_08974EA0;
    }
L_08974EA0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08974EBC;
      }
      goto L_08974EB0;
    }
L_08974EB0:
    ctx.gpr[31] = (0x08974EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08974EB8u) goto L_08974EB8;
    return;
L_08974EB8:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08974EBC;
L_08974EBC:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25612));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974ED4u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21000)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08974ED4u) goto L_08974ED4;
    return;
L_08974ED4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974EE4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08974EE4u) goto L_08974EE4;
    return;
L_08974EE4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08974EF0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08974EF0u) goto L_08974EF0;
    return;
L_08974EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08974F10;
      }
      goto L_08974F04;
    }
L_08974F04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08974F10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08974F10u) goto L_08974F10;
    return;
L_08974F10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E10;
      }
      goto L_08974F18;
    }
L_08974F18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08974F34;
      }
      goto L_08974F28;
    }
L_08974F28:
    ctx.gpr[31] = (0x08974F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08974F30u) goto L_08974F30;
    return;
L_08974F30:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08974F34;
L_08974F34:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25572));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974F4Cu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21000)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08974F4Cu) goto L_08974F4C;
    return;
L_08974F4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974F5Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08974F5Cu) goto L_08974F5C;
    return;
L_08974F5C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08974F68u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08974F68u) goto L_08974F68;
    return;
L_08974F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08974F88;
      }
      goto L_08974F7C;
    }
L_08974F7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08974F88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08974F88u) goto L_08974F88;
    return;
L_08974F88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E10;
      }
      goto L_08974F90;
    }
L_08974F90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08974FAC;
      }
      goto L_08974FA0;
    }
L_08974FA0:
    ctx.gpr[31] = (0x08974FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08974FA8u) goto L_08974FA8;
    return;
L_08974FA8:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08974FAC;
L_08974FAC:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25532));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974FC4u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21000)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08974FC4u) goto L_08974FC4;
    return;
L_08974FC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08974FD4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08974FD4u) goto L_08974FD4;
    return;
L_08974FD4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08974FE0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08974FE0u) goto L_08974FE0;
    return;
L_08974FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08975000;
      }
      goto L_08974FF4;
    }
L_08974FF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08975000u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08975000u) goto L_08975000;
    return;
L_08975000:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E10;
      }
      goto L_08975008;
    }
L_08975008:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08975024;
      }
      goto L_08975018;
    }
L_08975018:
    ctx.gpr[31] = (0x08975020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08975020u) goto L_08975020;
    return;
L_08975020:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08975024;
L_08975024:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25504));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897503Cu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21000)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x0897503Cu) goto L_0897503C;
    return;
L_0897503C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897504Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x0897504Cu) goto L_0897504C;
    return;
L_0897504C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08975058u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08975058u) goto L_08975058;
    return;
L_08975058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08975078;
      }
      goto L_0897506C;
    }
L_0897506C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08975078u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08975078u) goto L_08975078;
    return;
L_08975078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E10;
      }
      goto L_08975080;
    }
L_08975080:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_0897509C;
      }
      goto L_08975090;
    }
L_08975090:
    ctx.gpr[31] = (0x08975098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08975098u) goto L_08975098;
    return;
L_08975098:
    ctx.gpr[4] = (2226u << 16u);
    goto L_0897509C;
L_0897509C:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25468));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089750B4u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21000)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x089750B4u) goto L_089750B4;
    return;
L_089750B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089750C4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x089750C4u) goto L_089750C4;
    return;
L_089750C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089750D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x089750D0u) goto L_089750D0;
    return;
L_089750D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089750F0;
      }
      goto L_089750E4;
    }
L_089750E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089750F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x089750F0u) goto L_089750F0;
    return;
L_089750F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E10;
      }
      goto L_089750F8;
    }
L_089750F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E10;
      }
      goto L_08975100;
    }
L_08975100:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x0897510Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0897510Cu) goto L_0897510C;
    return;
L_0897510C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897547C;
      }
      goto L_0897511C;
    }
L_0897511C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25024)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975134:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08975150;
      }
      goto L_08975144;
    }
L_08975144:
    ctx.gpr[31] = (0x0897514Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x0897514Cu) goto L_0897514C;
    return;
L_0897514C:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08975150;
L_08975150:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25432));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975168u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21000)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08975168u) goto L_08975168;
    return;
L_08975168:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975178u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08975178u) goto L_08975178;
    return;
L_08975178:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08975184u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08975184u) goto L_08975184;
    return;
L_08975184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089751A4;
      }
      goto L_08975198;
    }
L_08975198:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x089751A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x089751A4u) goto L_089751A4;
    return;
L_089751A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E10;
      }
      goto L_089751AC;
    }
L_089751AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_089751C8;
      }
      goto L_089751BC;
    }
L_089751BC:
    ctx.gpr[31] = (0x089751C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089751C4u) goto L_089751C4;
    return;
L_089751C4:
    ctx.gpr[4] = (2226u << 16u);
    goto L_089751C8;
L_089751C8:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25380));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089751E0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21000)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x089751E0u) goto L_089751E0;
    return;
L_089751E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089751F0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x089751F0u) goto L_089751F0;
    return;
L_089751F0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089751FCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x089751FCu) goto L_089751FC;
    return;
L_089751FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0897521C;
      }
      goto L_08975210;
    }
L_08975210:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0897521Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x0897521Cu) goto L_0897521C;
    return;
L_0897521C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E10;
      }
      goto L_08975224;
    }
L_08975224:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08975240;
      }
      goto L_08975234;
    }
L_08975234:
    ctx.gpr[31] = (0x0897523Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x0897523Cu) goto L_0897523C;
    return;
L_0897523C:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08975240;
L_08975240:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25328));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975258u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21000)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08975258u) goto L_08975258;
    return;
L_08975258:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975268u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08975268u) goto L_08975268;
    return;
L_08975268:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08975274u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08975274u) goto L_08975274;
    return;
L_08975274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08975294;
      }
      goto L_08975288;
    }
L_08975288:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08975294u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08975294u) goto L_08975294;
    return;
L_08975294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E10;
      }
      goto L_0897529C;
    }
L_0897529C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_089752B8;
      }
      goto L_089752AC;
    }
L_089752AC:
    ctx.gpr[31] = (0x089752B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089752B4u) goto L_089752B4;
    return;
L_089752B4:
    ctx.gpr[4] = (2226u << 16u);
    goto L_089752B8;
L_089752B8:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25272));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089752D0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21000)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x089752D0u) goto L_089752D0;
    return;
L_089752D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089752E0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x089752E0u) goto L_089752E0;
    return;
L_089752E0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089752ECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x089752ECu) goto L_089752EC;
    return;
L_089752EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0897530C;
      }
      goto L_08975300;
    }
L_08975300:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0897530Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x0897530Cu) goto L_0897530C;
    return;
L_0897530C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E10;
      }
      goto L_08975314;
    }
L_08975314:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08975330;
      }
      goto L_08975324;
    }
L_08975324:
    ctx.gpr[31] = (0x0897532Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x0897532Cu) goto L_0897532C;
    return;
L_0897532C:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08975330;
L_08975330:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25216));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975348u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21000)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08975348u) goto L_08975348;
    return;
L_08975348:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975358u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08975358u) goto L_08975358;
    return;
L_08975358:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08975364u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08975364u) goto L_08975364;
    return;
L_08975364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08975384;
      }
      goto L_08975378;
    }
L_08975378:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08975384u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08975384u) goto L_08975384;
    return;
L_08975384:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E10;
      }
      goto L_0897538C;
    }
L_0897538C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_089753A8;
      }
      goto L_0897539C;
    }
L_0897539C:
    ctx.gpr[31] = (0x089753A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089753A4u) goto L_089753A4;
    return;
L_089753A4:
    ctx.gpr[4] = (2226u << 16u);
    goto L_089753A8;
L_089753A8:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25168));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089753C0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21000)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x089753C0u) goto L_089753C0;
    return;
L_089753C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089753D0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x089753D0u) goto L_089753D0;
    return;
L_089753D0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089753DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x089753DCu) goto L_089753DC;
    return;
L_089753DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089753FC;
      }
      goto L_089753F0;
    }
L_089753F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x089753FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x089753FCu) goto L_089753FC;
    return;
L_089753FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E10;
      }
      goto L_08975404;
    }
L_08975404:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_08975420;
      }
      goto L_08975414;
    }
L_08975414:
    ctx.gpr[31] = (0x0897541Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x0897541Cu) goto L_0897541C;
    return;
L_0897541C:
    ctx.gpr[4] = (2226u << 16u);
    goto L_08975420;
L_08975420:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25116));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975438u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-21000)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08975438u) goto L_08975438;
    return;
L_08975438:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08975448u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08975448u) goto L_08975448;
    return;
L_08975448:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08975454u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 784u, 0x0883BFCCu>(ctx, &aot_mem) && ctx.pc == 0x08975454u) goto L_08975454;
    return;
L_08975454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08975474;
      }
      goto L_08975468;
    }
L_08975468:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08975474u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08975474u) goto L_08975474;
    return;
L_08975474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E10;
      }
      goto L_0897547C;
    }
L_0897547C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08974E10;
      }
      goto L_08975484;
    }
L_08975484:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897549C:
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
L_089754C8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[7] = (16128u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] & 7u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 56u);
      if (branch_taken) {
          goto L_08975508;
      }
      goto L_089754E0;
    }
L_089754E0:
    ctx.gpr[4] = (ctx.gpr[5] >> 3u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_089754FC;
      }
      goto L_089754F0;
    }
L_089754F0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089754FC;
L_089754FC:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[0];
      if (branch_taken) {
          goto L_0897554C;
      }
      goto L_08975508;
    }
L_08975508:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
        goto L_08975534;
    }
    goto L_08975510;
L_08975510:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08975528;
      }
      goto L_0897551C;
    }
L_0897551C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08975528;
L_08975528:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[0];
      if (branch_taken) {
          goto L_0897554C;
      }
      goto L_08975534;
    }
L_08975534:
    ctx.gpr[5] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = ctx.fpr[13] / ctx.fpr[14];
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    goto L_0897554C;
L_0897554C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975554:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[6] = (16968u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08975594;
    }
    goto L_08975594;
L_08975594:
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[15];
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_089755BC;
    }
    goto L_089755BC;
L_089755BC:
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[6] = (0u | 99u);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 99 ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
        goto L_089755E0;
    }
    goto L_089755E0;
L_089755E0:
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[8] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 99 ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
        goto L_08975604;
    }
    goto L_08975604;
L_08975604:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975638:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089756D0;
      }
      goto L_0897564C;
    }
L_0897564C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089756D8;
      }
      goto L_089756C8;
    }
L_089756C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975724;
      }
      goto L_089756D0;
    }
L_089756D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08975724;
      }
      goto L_089756D8;
    }
L_089756D8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975724;
      }
      goto L_089756F8;
    }
L_089756F8:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    goto L_089756FC;
L_089756FC:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_089756FC;
      }
      goto L_08975724;
    }
L_08975724:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897572C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    ctx.gpr[3] = (ctx.gpr[7] & 255u);
    ctx.gpr[2] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[23]);
    ctx.gpr[11] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[30]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[6] & 255u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    ctx.gpr[30] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089757F0;
      }
      goto L_089757B0;
    }
L_089757B0:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x089757D8u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    goto L_0897572C;
L_089757D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089757F0;
      }
      goto L_089757E8;
    }
L_089757E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08975AD8;
      }
      goto L_089757F0;
    }
L_089757F0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x089757FCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 132u, 0x089FD348u>(ctx, &aot_mem) && ctx.pc == 0x089757FCu) goto L_089757FC;
    return;
L_089757FC:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0897581Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08975554;
L_0897581C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
      if (branch_taken) {
          goto L_08975AD4;
      }
      goto L_08975848;
    }
L_08975848:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
    goto L_08975884;
L_08975884:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08975AA4;
      }
      goto L_089758AC;
    }
L_089758AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1200));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_089758D8;
L_089758D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(10292)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
        goto L_08975A7C;
    }
    goto L_089758E4;
L_089758E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10300)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08975A78;
      }
      goto L_089758F8;
    }
L_089758F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(10292)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(114)));
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[6] = (ctx.gpr[16] << 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08975930;
      }
      goto L_08975918;
    }
L_08975918:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975A64;
      }
      goto L_08975930;
    }
L_08975930:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(113)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_08975958;
    }
    goto L_0897593C;
L_0897593C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975A64;
      }
      goto L_08975954;
    }
L_08975954:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_08975958;
L_08975958:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0897597C;
    }
    goto L_08975960;
L_08975960:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975A64;
      }
      goto L_08975978;
    }
L_08975978:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0897597C;
L_0897597C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08975A64;
      }
      goto L_08975990;
    }
L_08975990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089759B8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x089759B8u) goto L_089759B8;
    return;
L_089759B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
        goto L_089759D8;
    }
    goto L_089759CC;
L_089759CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_089759D8;
      }
      goto L_089759D8;
    }
L_089759D8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_089759FC;
    }
    goto L_089759EC;
L_089759EC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08975A00;
      }
      goto L_089759FC;
    }
L_089759FC:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08975A00;
L_08975A00:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_08975A28;
    }
    goto L_08975A14;
L_08975A14:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08975A30;
      }
      goto L_08975A28;
    }
L_08975A28:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08975A30;
L_08975A30:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08975A64;
      }
      goto L_08975A40;
    }
L_08975A40:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08975A5C;
      }
      goto L_08975A50;
    }
L_08975A50:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08975A64;
      }
      goto L_08975A5C;
    }
L_08975A5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08975AD8;
      }
      goto L_08975A64;
    }
L_08975A64:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10300)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089758F8;
      }
      goto L_08975A78;
    }
L_08975A78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_08975A7C;
L_08975A7C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1200));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1200));
      if (branch_taken) {
          goto L_089758D8;
      }
      goto L_08975AA4;
    }
L_08975AA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08975884;
      }
      goto L_08975AD4;
    }
L_08975AD4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_08975AD8;
L_08975AD8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975B18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[21] = (ctx.gpr[10] & 255u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08975B7C;
      }
      goto L_08975B68;
    }
L_08975B68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08975B94;
      }
      goto L_08975B70;
    }
L_08975B70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08975B94;
      }
      goto L_08975B7C;
    }
L_08975B7C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975B94;
      }
      goto L_08975B88;
    }
L_08975B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08975B94;
      }
      goto L_08975B94;
    }
L_08975B94:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08975BD4;
      }
      goto L_08975BA4;
    }
L_08975BA4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    goto L_08975BB0;
L_08975BB0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[9] = (ctx.gpr[9] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08975BB0;
      }
      goto L_08975BD4;
    }
L_08975BD4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08975C48;
      }
      goto L_08975BDC;
    }
L_08975BDC:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[31] = (0x08975C08u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    goto L_0897572C;
L_08975C08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08975C34;
      }
      goto L_08975C14;
    }
L_08975C14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08975C3C;
      }
      goto L_08975C34;
    }
L_08975C34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08975C74;
      }
      goto L_08975C3C;
    }
L_08975C3C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    // nop
      if (branch_taken) {
          goto L_08975BDC;
      }
      goto L_08975C48;
    }
L_08975C48:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[31] = (0x08975C74u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    goto L_0897572C;
L_08975C74:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975CA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[30]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[9] & 255u);
    ctx.gpr[21] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[20] = (ctx.gpr[11] & 255u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[7] | 0u);
    ctx.gpr[30] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08975D18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 132u, 0x089FD348u>(ctx, &aot_mem) && ctx.pc == 0x08975D18u) goto L_08975D18;
    return;
L_08975D18:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08975D38u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    goto L_08975554;
L_08975D38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_08975F78;
      }
      goto L_08975D60;
    }
L_08975D60:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_08975D84;
L_08975D84:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(1200));
      if (branch_taken) {
          goto L_08975F58;
      }
      goto L_08975DAC;
    }
L_08975DAC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[11] = (ctx.lo);
    ctx.gpr[11] = (ctx.gpr[16] + ctx.gpr[11]);
    ctx.gpr[3] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[11] = (ctx.gpr[3] + ctx.gpr[6]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[7]);
    goto L_08975DC4;
L_08975DC4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(10292)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975F34;
      }
      goto L_08975DD0;
    }
L_08975DD0:
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(10300)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[15] = (ctx.gpr[17] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08975F34;
      }
      goto L_08975DE4;
    }
L_08975DE4:
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[15] = (ctx.gpr[30] + ctx.gpr[15]);
    goto L_08975DEC;
L_08975DEC:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(10292)));
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[12]);
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[13] << 4u);
    ctx.gpr[24] = (ctx.gpr[13] << 2u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[24]);
      if (branch_taken) {
          goto L_08975E20;
      }
      goto L_08975E08;
    }
L_08975E08:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[14]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[24] = (ctx.gpr[24] & 32u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975F20;
      }
      goto L_08975E20;
    }
L_08975E20:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08975E40;
      }
      goto L_08975E28;
    }
L_08975E28:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[14]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[24] = (ctx.gpr[24] & 64u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975F20;
      }
      goto L_08975E40;
    }
L_08975E40:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08975E64;
    }
    goto L_08975E48;
L_08975E48:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[14]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[24] = (ctx.gpr[24] & 4u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    // nop
      if (branch_taken) {
          goto L_08975F20;
      }
      goto L_08975E60;
    }
L_08975E60:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08975E64;
L_08975E64:
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[14]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[24] = (ctx.gpr[24] & 1u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[24];
    // nop
      if (branch_taken) {
          goto L_08975F20;
      }
      goto L_08975E78;
    }
L_08975E78:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[24] + ctx.gpr[14]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(8)));
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_08975EC4;
    }
    goto L_08975EB8;
L_08975EB8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08975EC4;
      }
      goto L_08975EC4;
    }
L_08975EC4:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08975F10;
      }
      goto L_08975ED4;
    }
L_08975ED4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08975EF4;
    }
    goto L_08975EE8;
L_08975EE8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08975EF4;
      }
      goto L_08975EF4;
    }
L_08975EF4:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08975F10;
      }
      goto L_08975F04;
    }
L_08975F04:
    aot_mem.aot_store16(ctx.gpr[15] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(2));
    goto L_08975F10;
L_08975F10:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08975F20;
      }
      goto L_08975F18;
    }
L_08975F18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08975F7C;
      }
      goto L_08975F20;
    }
L_08975F20:
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(10300)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08975DEC;
      }
      goto L_08975F34;
    }
L_08975F34:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1200));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1200));
      if (branch_taken) {
          goto L_08975DC4;
      }
      goto L_08975F58;
    }
L_08975F58:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08975D84;
      }
      goto L_08975F78;
    }
L_08975F78:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08975F7C;
L_08975F7C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08975FB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[21] << 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[19]);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[31]);
    ctx.gpr[5] = (17948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0897602Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 132u, 0x089FD348u>(ctx, &aot_mem) && ctx.pc == 0x0897602Cu) goto L_0897602C;
    return;
L_0897602C:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (49568u << 16u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08976060;
L_08976060:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0897607Cu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_08975554;
L_0897607C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089762BC;
      }
      goto L_089760A4;
    }
L_089760A4:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    goto L_089760AC;
L_089760AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1200));
      if (branch_taken) {
          goto L_0897629C;
      }
      goto L_089760D4;
    }
L_089760D4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[19] + ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[22]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[21]);
    goto L_089760F0;
L_089760F0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(10292)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976278;
      }
      goto L_089760FC;
    }
L_089760FC:
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(10300)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08976278;
      }
      goto L_08976110;
    }
L_08976110:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(10292)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[11] << 4u);
    ctx.gpr[12] = (ctx.gpr[11] << 2u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
        goto L_08976174;
    }
    goto L_08976168;
L_08976168:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08976174;
      }
      goto L_08976174;
    }
L_08976174:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08976198;
    }
    goto L_08976188;
L_08976188:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_0897619C;
      }
      goto L_08976198;
    }
L_08976198:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0897619C;
L_0897619C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_089761C4;
    }
    goto L_089761B0;
L_089761B0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_089761CC;
      }
      goto L_089761C4;
    }
L_089761C4:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089761CC;
L_089761CC:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976264;
      }
      goto L_089761DC;
    }
L_089761DC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[18];
    ctx.fpr[15] = std::sqrt(ctx.fpr[15]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
        goto L_08976238;
    }
    goto L_08976214;
L_08976214:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_0897624C;
      }
      goto L_08976238;
    }
L_08976238:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0897624C;
L_0897624C:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976264;
      }
      goto L_0897625C;
    }
L_0897625C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[11] | 0u);
    goto L_08976264;
L_08976264:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(10300)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08976110;
      }
      goto L_08976278;
    }
L_08976278:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1200));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1200));
      if (branch_taken) {
          goto L_089760F0;
      }
      goto L_0897629C;
    }
L_0897629C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089760AC;
      }
      goto L_089762BC;
    }
L_089762BC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089762D0;
      }
      goto L_089762C8;
    }
L_089762C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089762EC;
      }
      goto L_089762D0;
    }
L_089762D0:
    ctx.gpr[4] = (18371u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20352u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976060;
      }
      goto L_089762EC;
    }
L_089762EC:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976338:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08976444;
      }
      goto L_08976368;
    }
L_08976368:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 16383u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[0])) && ctx.fpr[13] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897644C;
      }
      goto L_0897643C;
    }
L_0897643C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08976464;
      }
      goto L_08976444;
    }
L_08976444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976484;
      }
      goto L_0897644C;
    }
L_0897644C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) && ctx.fpr[12] == ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08976464;
    }
    goto L_0897645C;
L_0897645C:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08976474;
      }
      goto L_08976464;
    }
L_08976464:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08976470u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08976470u) goto L_08976470;
    return;
L_08976470:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08976474;
L_08976474:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[20] / ctx.fpr[0];
    goto L_08976484;
L_08976484:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] & 255u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08976510;
      }
      goto L_089764B4;
    }
L_089764B4:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[3] = (ctx.gpr[6] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-15072));
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-6196));
    ctx.gpr[5] = (17194u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[31] = (0x08976508u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_08977DB0;
L_08976508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976560;
      }
      goto L_08976510;
    }
L_08976510:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[3] = (ctx.gpr[6] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-6194));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[31] = (0x08976560u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_08977DB0;
L_08976560:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897658C;
      }
      goto L_08976568;
    }
L_08976568:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089765B0;
      }
      goto L_08976584;
    }
L_08976584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089765B4;
      }
      goto L_0897658C;
    }
L_0897658C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089765B0;
      }
      goto L_089765A8;
    }
L_089765A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089765B4;
      }
      goto L_089765B0;
    }
L_089765B0:
    ctx.gpr[2] = (0u | 0u);
    goto L_089765B4;
L_089765B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089765C4:
    ctx.gpr[4] = (16256u << 16u);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089765D0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
      if (branch_taken) {
          goto L_089765E4;
      }
      goto L_089765DC;
    }
L_089765DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08976618;
      }
      goto L_089765E4;
    }
L_089765E4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 512 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
      if (branch_taken) {
          goto L_0897660C;
      }
      goto L_08976600;
    }
L_08976600:
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08976618;
      }
      goto L_0897660C;
    }
L_0897660C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-10240));
    goto L_08976618;
L_08976618:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < 512 ? 1u : 0u);
      if (branch_taken) {
          goto L_08976628;
      }
      goto L_08976620;
    }
L_08976620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08976658;
      }
      goto L_08976628;
    }
L_08976628:
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_0897664C;
      }
      goto L_08976640;
    }
L_08976640:
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08976658;
      }
      goto L_0897664C;
    }
L_0897664C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-10240));
    goto L_08976658;
L_08976658:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_08976670;
      }
      goto L_08976660;
    }
L_08976660:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
      if (branch_taken) {
          goto L_089766C8;
      }
      goto L_08976670;
    }
L_08976670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    ctx.gpr[10] = (ctx.gpr[9] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (0u | 20u);
      if (branch_taken) {
          goto L_089766AC;
      }
      goto L_08976684;
    }
L_08976684:
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(10290));
    ctx.gpr[10] = (ctx.gpr[9] < ctx.gpr[10] ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_089766B0;
    }
    goto L_08976694;
L_08976694:
    ctx.gpr[4] = (ctx.gpr[9] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
      if (branch_taken) {
          goto L_089766C8;
      }
      goto L_089766AC;
    }
L_089766AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089766B0;
L_089766B0:
    ctx.gpr[4] = (ctx.gpr[9] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    goto L_089766C8;
L_089766C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
      if (branch_taken) {
          goto L_089766D8;
      }
      goto L_089766D0;
    }
L_089766D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08976708;
      }
      goto L_089766D8;
    }
L_089766D8:
    ctx.gpr[9] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 512 ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_089766FC;
      }
      goto L_089766F0;
    }
L_089766F0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08976708;
      }
      goto L_089766FC;
    }
L_089766FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10240));
    goto L_08976708;
L_08976708:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089767F8;
      }
      goto L_08976710;
    }
L_08976710:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08976720;
      }
      goto L_08976718;
    }
L_08976718:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08976754;
      }
      goto L_08976720;
    }
L_08976720:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 512 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08976748;
      }
      goto L_0897673C;
    }
L_0897673C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08976754;
      }
      goto L_08976748;
    }
L_08976748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10240));
    goto L_08976754;
L_08976754:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 512 ? 1u : 0u);
      if (branch_taken) {
          goto L_08976764;
      }
      goto L_0897675C;
    }
L_0897675C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08976794;
      }
      goto L_08976764;
    }
L_08976764:
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
      if (branch_taken) {
          goto L_08976788;
      }
      goto L_0897677C;
    }
L_0897677C:
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08976794;
      }
      goto L_08976788;
    }
L_08976788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-10240));
    goto L_08976794;
L_08976794:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_089767A8;
      }
      goto L_0897679C;
    }
L_0897679C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089767F8;
      }
      goto L_089767A8;
    }
L_089767A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (0u | 20u);
      if (branch_taken) {
          goto L_089767E0;
      }
      goto L_089767BC;
    }
L_089767BC:
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(10290));
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_089767E4;
    }
    goto L_089767CC;
L_089767CC:
    ctx.gpr[4] = (ctx.gpr[8] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089767F8;
      }
      goto L_089767E0;
    }
L_089767E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089767E4;
L_089767E4:
    ctx.gpr[4] = (ctx.gpr[8] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089767F8;
L_089767F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976800:
    ctx.gpr[7] = (ctx.gpr[6] & 511u);
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) >= 0;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < 512 ? 1u : 0u);
      if (branch_taken) {
          goto L_0897682C;
      }
      goto L_08976824;
    }
L_08976824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_0897685C;
      }
      goto L_0897682C;
    }
L_0897682C:
    ctx.gpr[7] = (ctx.gpr[10] << 4u);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[7] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26612)));
      if (branch_taken) {
          goto L_08976850;
      }
      goto L_08976844;
    }
L_08976844:
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_0897685C;
      }
      goto L_08976850;
    }
L_08976850:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-10240));
    goto L_0897685C;
L_0897685C:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (2228u << 16u);
      if (branch_taken) {
          goto L_08976870;
      }
      goto L_08976864;
    }
L_08976864:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_089768C0;
      }
      goto L_08976870;
    }
L_08976870:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(50));
    ctx.gpr[11] = (ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (0u | 20u);
      if (branch_taken) {
          goto L_089768A8;
      }
      goto L_08976884;
    }
L_08976884:
    ctx.gpr[11] = (ctx.gpr[7] + static_cast<std::uint32_t>(10290));
    ctx.gpr[11] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_089768AC;
    }
    goto L_08976894;
L_08976894:
    ctx.gpr[7] = (ctx.gpr[10] - ctx.gpr[9]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_089768C0;
      }
      goto L_089768A8;
    }
L_089768A8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_089768AC;
L_089768AC:
    ctx.gpr[7] = (ctx.gpr[10] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_089768C0;
L_089768C0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (2228u << 16u);
      if (branch_taken) {
          goto L_089768D4;
      }
      goto L_089768C8;
    }
L_089768C8:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08976924;
      }
      goto L_089768D4;
    }
L_089768D4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(50));
    ctx.gpr[10] = (ctx.gpr[4] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (0u | 20u);
      if (branch_taken) {
          goto L_0897690C;
      }
      goto L_089768E8;
    }
L_089768E8:
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(10290));
    ctx.gpr[10] = (ctx.gpr[4] < ctx.gpr[10] ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_08976910;
    }
    goto L_089768F8;
L_089768F8:
    ctx.gpr[7] = (ctx.gpr[4] - ctx.gpr[9]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08976924;
      }
      goto L_0897690C;
    }
L_0897690C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08976910;
L_08976910:
    ctx.gpr[7] = (ctx.gpr[4] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_08976924;
L_08976924:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 512 ? 1u : 0u);
      if (branch_taken) {
          goto L_08976938;
      }
      goto L_08976930;
    }
L_08976930:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08976968;
      }
      goto L_08976938;
    }
L_08976938:
    ctx.gpr[10] = (ctx.gpr[8] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26612)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0897695C;
      }
      goto L_08976950;
    }
L_08976950:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08976968;
      }
      goto L_0897695C;
    }
L_0897695C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-10240));
    goto L_08976968;
L_08976968:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976A18;
      }
      goto L_08976970;
    }
L_08976970:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) >= 0;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < 512 ? 1u : 0u);
      if (branch_taken) {
          goto L_08976984;
      }
      goto L_0897697C;
    }
L_0897697C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_089769B4;
      }
      goto L_08976984;
    }
L_08976984:
    ctx.gpr[9] = (ctx.gpr[10] << 4u);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26612)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_089769A8;
      }
      goto L_0897699C;
    }
L_0897699C:
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_089769B4;
      }
      goto L_089769A8;
    }
L_089769A8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-10240));
    goto L_089769B4;
L_089769B4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (2228u << 16u);
      if (branch_taken) {
          goto L_089769C8;
      }
      goto L_089769BC;
    }
L_089769BC:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08976A18;
      }
      goto L_089769C8;
    }
L_089769C8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(50));
    ctx.gpr[11] = (ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (0u | 20u);
      if (branch_taken) {
          goto L_08976A00;
      }
      goto L_089769DC;
    }
L_089769DC:
    ctx.gpr[11] = (ctx.gpr[7] + static_cast<std::uint32_t>(10290));
    ctx.gpr[11] = (ctx.gpr[5] < ctx.gpr[11] ? 1u : 0u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_08976A04;
    }
    goto L_089769EC;
L_089769EC:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[9]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08976A18;
      }
      goto L_08976A00;
    }
L_08976A00:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08976A04;
L_08976A04:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_08976A18;
L_08976A18:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (2228u << 16u);
      if (branch_taken) {
          goto L_08976A2C;
      }
      goto L_08976A20;
    }
L_08976A20:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08976A7C;
      }
      goto L_08976A2C;
    }
L_08976A2C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(50));
    ctx.gpr[10] = (ctx.gpr[5] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (0u | 20u);
      if (branch_taken) {
          goto L_08976A64;
      }
      goto L_08976A40;
    }
L_08976A40:
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(10290));
    ctx.gpr[10] = (ctx.gpr[5] < ctx.gpr[10] ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_08976A68;
    }
    goto L_08976A50;
L_08976A50:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[9]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08976A7C;
      }
      goto L_08976A64;
    }
L_08976A64:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08976A68;
L_08976A68:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_08976A7C;
L_08976A7C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976A84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_08976BC4;
      }
      goto L_08976AE8;
    }
L_08976AE8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 0u);
    goto L_08976AF0;
L_08976AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976BB0;
      }
      goto L_08976B20;
    }
L_08976B20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976BB0;
      }
      goto L_08976B34;
    }
L_08976B34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976BB0;
      }
      goto L_08976B48;
    }
L_08976B48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976BB0;
      }
      goto L_08976B5C;
    }
L_08976B5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976BB0;
      }
      goto L_08976B70;
    }
L_08976B70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976BB0;
      }
      goto L_08976B84;
    }
L_08976B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (ctx.gpr[4] >> 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08976BB0;
      }
      goto L_08976BA0;
    }
L_08976BA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08976BB0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_089771F4;
L_08976BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08976AF0;
      }
      goto L_08976BC4;
    }
L_08976BC4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
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
L_08976BFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_08976D44;
      }
      goto L_08976C60;
    }
L_08976C60:
    ctx.gpr[18] = (ctx.gpr[19] << 4u);
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    goto L_08976C70;
L_08976C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976D30;
      }
      goto L_08976CA0;
    }
L_08976CA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976D30;
      }
      goto L_08976CB4;
    }
L_08976CB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976D30;
      }
      goto L_08976CC8;
    }
L_08976CC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976D30;
      }
      goto L_08976CDC;
    }
L_08976CDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976D30;
      }
      goto L_08976CF0;
    }
L_08976CF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976D30;
      }
      goto L_08976D04;
    }
L_08976D04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (ctx.gpr[4] >> 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08976D30;
      }
      goto L_08976D20;
    }
L_08976D20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08976D30u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_089771F4;
L_08976D30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08976C70;
      }
      goto L_08976D44;
    }
L_08976D44:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
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
L_08976D7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[6]);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[0] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[16]);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
      if (branch_taken) {
          goto L_08976E14;
      }
      goto L_08976E08;
    }
L_08976E08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08976E1C;
      }
      goto L_08976E14;
    }
L_08976E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_08976E1C;
L_08976E1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
      if (branch_taken) {
          goto L_08976E3C;
      }
      goto L_08976E30;
    }
L_08976E30:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08976E3C;
L_08976E3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[2];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08976E50u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08976E50u) goto L_08976E50;
    return;
L_08976E50:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[0] + ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_08976E84;
      }
      goto L_08976E70;
    }
L_08976E70:
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976E70;
      }
      goto L_08976E84;
    }
L_08976E84:
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976EA8;
      }
      goto L_08976E94;
    }
L_08976E94:
    ctx.fpr[26] = ctx.fpr[26] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976E94;
      }
      goto L_08976EA8;
    }
L_08976EA8:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[26] = std::sqrt(ctx.fpr[12]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976F64;
      }
      goto L_08976F5C;
    }
L_08976F5C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08976F98;
      }
      goto L_08976F64;
    }
L_08976F64:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08976F98;
L_08976F98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08976FC4;
      }
      goto L_08976FBC;
    }
L_08976FBC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08976FF8;
      }
      goto L_08976FC4;
    }
L_08976FC4:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08976FF8;
L_08976FF8:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[16]);
      if (branch_taken) {
          goto L_089771AC;
      }
      goto L_08977008;
    }
L_08977008:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[16] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[20] = (ctx.gpr[19] & 255u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08977038;
L_08977038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08977190;
      }
      goto L_0897706C;
    }
L_0897706C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08977190;
      }
      goto L_0897709C;
    }
L_0897709C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[22];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08977190;
      }
      goto L_08977114;
    }
L_08977114:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08977190;
      }
      goto L_08977124;
    }
L_08977124:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08977190;
      }
      goto L_08977150;
    }
L_08977150:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08977190;
      }
      goto L_08977164;
    }
L_08977164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (ctx.gpr[4] >> 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08977190;
      }
      goto L_08977180;
    }
L_08977180:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08977190u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_089771F4;
L_08977190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08977038;
      }
      goto L_089771A4;
    }
L_089771A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089771AC;
L_089771AC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089771F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[7] = (ctx.gpr[19] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089772F4;
      }
      goto L_08977260;
    }
L_08977260:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089772F4;
      }
      goto L_08977270;
    }
L_08977270:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    goto L_08977274;
L_08977274:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 16383u);
    ctx.gpr[7] = (ctx.gpr[6] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[8] = (ctx.gpr[6] & 32u);
    ctx.gpr[8] = (ctx.gpr[8] >> 5u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[19];
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
      if (branch_taken) {
          goto L_089772DC;
      }
      goto L_089772B8;
    }
L_089772B8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089772DC;
      }
      goto L_089772C4;
    }
L_089772C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x089772D4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_089771F4;
L_089772D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_089772DC;
L_089772DC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
        goto L_08977274;
    }
    goto L_089772F4;
L_089772F4:
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
L_08977310:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_08977440;
      }
      goto L_0897736C;
    }
L_0897736C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 0u);
    goto L_08977374;
L_08977374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897742C;
      }
      goto L_089773A4;
    }
L_089773A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897742C;
      }
      goto L_089773B8;
    }
L_089773B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897742C;
      }
      goto L_089773CC;
    }
L_089773CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897742C;
      }
      goto L_089773E0;
    }
L_089773E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897742C;
      }
      goto L_089773F4;
    }
L_089773F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897742C;
      }
      goto L_08977408;
    }
L_08977408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897742C;
      }
      goto L_08977420;
    }
L_08977420:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897742Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08977474;
L_0897742C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08977374;
      }
      goto L_08977440;
    }
L_08977440:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977474:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977554;
      }
      goto L_089774C8;
    }
L_089774C8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977554;
      }
      goto L_089774D8;
    }
L_089774D8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    goto L_089774DC;
L_089774DC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 16383u);
    ctx.gpr[7] = (ctx.gpr[6] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[7] << 4u);
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[8] = (ctx.gpr[6] & 64u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
      if (branch_taken) {
          goto L_0897753C;
      }
      goto L_0897751C;
    }
L_0897751C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897753C;
      }
      goto L_08977528;
    }
L_08977528:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08977534u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_08977474;
L_08977534:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_0897753C;
L_0897753C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
        goto L_089774DC;
    }
    goto L_08977554;
L_08977554:
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
L_0897756C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897760C;
      }
      goto L_08977584;
    }
L_08977584:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[9]);
    goto L_08977594;
L_08977594:
    ctx.gpr[11] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] & 16383u);
    ctx.gpr[11] = (ctx.gpr[11] << 16u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[2] = (ctx.gpr[11] << 4u);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[11] = (ctx.gpr[2] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[7] + ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089775F4;
      }
      goto L_089775C4;
    }
L_089775C4:
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089775EC;
      }
      goto L_089775E4;
    }
L_089775E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08977610;
      }
      goto L_089775EC;
    }
L_089775EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08977610;
      }
      goto L_089775F4;
    }
L_089775F4:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08977594;
      }
      goto L_0897760C;
    }
L_0897760C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08977610;
L_08977610:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977618:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089776B8;
      }
      goto L_08977630;
    }
L_08977630:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[9]);
    goto L_08977640;
L_08977640:
    ctx.gpr[11] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] & 16383u);
    ctx.gpr[11] = (ctx.gpr[11] << 16u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[2] = (ctx.gpr[11] << 4u);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[11] = (ctx.gpr[2] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[7] + ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089776A0;
      }
      goto L_08977670;
    }
L_08977670:
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977698;
      }
      goto L_08977690;
    }
L_08977690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089776BC;
      }
      goto L_08977698;
    }
L_08977698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089776BC;
      }
      goto L_089776A0;
    }
L_089776A0:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08977640;
      }
      goto L_089776B8;
    }
L_089776B8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089776BC;
L_089776BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089776C4:
    ctx.gpr[8] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[8] & 1u);
      if (branch_taken) {
          goto L_089777A0;
      }
      goto L_089776DC;
    }
L_089776DC:
    ctx.gpr[9] = (15872u << 16u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (0u | 0u);
    goto L_089776F0;
L_089776F0:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897778C;
      }
      goto L_08977718;
    }
L_08977718:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897778C;
      }
      goto L_08977738;
    }
L_08977738:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897778C;
      }
      goto L_08977758;
    }
L_08977758:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897778C;
      }
      goto L_08977778;
    }
L_08977778:
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(9))))));
    ctx.gpr[10] = (ctx.gpr[10] & ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[10]));
    goto L_0897778C;
L_0897778C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089776F0;
      }
      goto L_089777A0;
    }
L_089777A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089777A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08977858;
      }
      goto L_089777BC;
    }
L_089777BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977858;
      }
      goto L_089777CC;
    }
L_089777CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977844;
      }
      goto L_0897780C;
    }
L_0897780C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977878;
      }
      goto L_08977830;
    }
L_08977830:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977A18;
      }
      goto L_08977844;
    }
L_08977844:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977A18;
      }
      goto L_08977858;
    }
L_08977858:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08977864u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24992));
    goto L_0897549C;
L_08977864:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08977A18;
      }
      goto L_08977878;
    }
L_08977878:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 16383u);
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (16256u << 16u);
      if (branch_taken) {
          goto L_08977920;
      }
      goto L_08977914;
    }
L_08977914:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897795C;
      }
      goto L_08977920;
    }
L_08977920:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897795C;
L_0897795C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897798C;
      }
      goto L_08977974;
    }
L_08977974:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897798C;
L_0897798C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977A18;
      }
      goto L_08977A18;
    }
L_08977A18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977A28:
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
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
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] & 15u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-7));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[7] = (15357u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 62390u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 4u));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977AB8:
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[11] = (ctx.gpr[6] & 15u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 4u));
    ctx.gpr[3] = (15357u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[3] = (ctx.gpr[3] | 62390u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-7));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7));
      if (branch_taken) {
          goto L_08977B18;
      }
      goto L_08977AF8;
    }
L_08977AF8:
    ctx.gpr[9] = (ctx.gpr[10] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08977B34;
      }
      goto L_08977B18;
    }
L_08977B18:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[9] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08977B34;
L_08977B34:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08977B6C;
      }
      goto L_08977B4C;
    }
L_08977B4C:
    ctx.gpr[4] = (ctx.gpr[10] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08977B88;
      }
      goto L_08977B6C;
    }
L_08977B6C:
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    goto L_08977B88;
L_08977B88:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977B90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 48u);
      if (branch_taken) {
          goto L_08977BAC;
      }
      goto L_08977BA4;
    }
L_08977BA4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08977D54;
      }
      goto L_08977BAC;
    }
L_08977BAC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977C78;
      }
      goto L_08977BB8;
    }
L_08977BB8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(356)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[8] = (2228u << 16u);
      if (branch_taken) {
          goto L_08977C78;
      }
      goto L_08977BC4;
    }
L_08977BC4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (ctx.gpr[10] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[10] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    goto L_08977BEC;
L_08977BEC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977C34;
      }
      goto L_08977BF4;
    }
L_08977BF4:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[9]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[3] + ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] & 16383u);
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08977C34;
      }
      goto L_08977C20;
    }
L_08977C20:
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[5] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08977BEC;
      }
      goto L_08977C34;
    }
L_08977C34:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977C78;
      }
      goto L_08977C3C;
    }
L_08977C3C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(9))))));
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977C88;
      }
      goto L_08977C78;
    }
L_08977C78:
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
        goto L_08977C90;
    }
    goto L_08977C80;
L_08977C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977D54;
      }
      goto L_08977C88;
    }
L_08977C88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08977D58;
      }
      goto L_08977C90;
    }
L_08977C90:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (2228u << 16u);
      if (branch_taken) {
          goto L_08977D54;
      }
      goto L_08977C98;
    }
L_08977C98:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (ctx.gpr[10] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[10] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    goto L_08977CC0;
L_08977CC0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977D08;
      }
      goto L_08977CC8;
    }
L_08977CC8:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] & 16383u);
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08977D08;
      }
      goto L_08977CF4;
    }
L_08977CF4:
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[5] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08977CC0;
      }
      goto L_08977D08;
    }
L_08977D08:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977D54;
      }
      goto L_08977D10;
    }
L_08977D10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9))))));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977D54;
      }
      goto L_08977D4C;
    }
L_08977D4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08977D58;
      }
      goto L_08977D54;
    }
L_08977D54:
    ctx.gpr[2] = (0u | 0u);
    goto L_08977D58;
L_08977D58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977D60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08977D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08977D78u) goto L_08977D78;
    return;
L_08977D78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.gpr[31] = (0x08977D8Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08977D8Cu) goto L_08977D8C;
    return;
L_08977D8C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977DB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[11] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (ctx.gpr[10] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08977E50;
      }
      goto L_08977E18;
    }
L_08977E18:
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
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08977E44u);
    ctx.gpr[10] = (0u | 0u);
    goto L_0897572C;
L_08977E44:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977E54;
      }
      goto L_08977E50;
    }
L_08977E50:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08977E54;
L_08977E54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08977E80;
      }
      goto L_08977E5C;
    }
L_08977E5C:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977E78;
      }
      goto L_08977E68;
    }
L_08977E68:
    ctx.gpr[4] = (18371u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08977E78;
L_08977E78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 38u, 0x08978390u>(ctx, &aot_mem); return;
      }
      goto L_08977E80;
    }
L_08977E80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08977EB8;
      }
      goto L_08977E88;
    }
L_08977E88:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08977EB4u);
    ctx.gpr[10] = (0u | 0u);
    goto L_0897572C;
L_08977EB4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08977EB8;
L_08977EB8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08977EE4;
      }
      goto L_08977EC0;
    }
L_08977EC0:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977EDC;
      }
      goto L_08977ECC;
    }
L_08977ECC:
    ctx.gpr[4] = (18371u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08977EDC;
L_08977EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 38u, 0x08978390u>(ctx, &aot_mem); return;
      }
      goto L_08977EE4;
    }
L_08977EE4:
    if (ctx.gpr[16] != ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
        goto L_08977F08;
    }
    goto L_08977EEC;
L_08977EEC:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977F00;
      }
      goto L_08977EF8;
    }
L_08977EF8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08977F00;
L_08977F00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 38u, 0x08978390u>(ctx, &aot_mem); return;
      }
      goto L_08977F08;
    }
L_08977F08:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(15)));
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[7] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(15)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08977F64;
      }
      goto L_08977F40;
    }
L_08977F40:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977F5C;
      }
      goto L_08977F4C;
    }
L_08977F4C:
    ctx.gpr[4] = (18371u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08977F5C;
L_08977F5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 38u, 0x08978390u>(ctx, &aot_mem); return;
      }
      goto L_08977F64;
    }
L_08977F64:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (2231u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-6624));
    ctx.gpr[22] = (0u | 32766u);
    goto L_08977F78;
L_08977F78:
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 512 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977F78;
      }
      goto L_08977FA8;
    }
L_08977FA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08977FC0u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08976800;
L_08977FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[21] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[30] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08977FE4;
L_08977FE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(50));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.pc = 0x08978000u; return;
}

void recomp_unit_0092(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0092_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_92(Runtime &runtime) {
    runtime.register_generated_unit(92u, 0x08974000u, 16384u, &recomp_unit_0092, &recomp_unit_0092_entry);
    runtime.register_function(0x08974000u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897401Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974028u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974038u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974048u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974054u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897405Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897406Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974078u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974080u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974090u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897409Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089740A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089740B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089740C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089740C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089740D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089740E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089740ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089740FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974108u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974110u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974120u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897412Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974134u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974144u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974150u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974158u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974168u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974174u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897417Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974188u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974190u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974194u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089741A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089741D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089741E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089741F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974204u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974210u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974218u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974220u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974230u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897423Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974244u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974254u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974260u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974268u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974278u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974284u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897428Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897429Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089742FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897430Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897431Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974324u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974334u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974340u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974348u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974358u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974364u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897436Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897437Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974388u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974390u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089743E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974454u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974470u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897448Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974498u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089744A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089744B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089744BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089744C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089744CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089744E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089744F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897450Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974534u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974540u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974550u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974558u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974564u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897457Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974580u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089745ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089745C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089745D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089745E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089745E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974660u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089746A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089746BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089746C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089746CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089746D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974754u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974768u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974780u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897478Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974790u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974824u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974830u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974844u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974858u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897486Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974874u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974880u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089748A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089748D4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974900u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897491Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974928u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974940u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897494Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974958u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897496Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974974u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974980u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974998u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749D4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089749F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A08u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A2Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A3Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A44u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A50u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A58u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A60u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A70u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A80u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974A8Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974AA0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974AACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974AC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974AE4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974AF0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B30u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B44u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B58u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B68u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B74u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B84u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B88u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974B9Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974BC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974BD8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974BF8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974BFCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C04u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C20u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C2Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C3Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C44u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C48u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C58u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C68u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C70u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C80u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C84u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C8Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C94u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974C9Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CA4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CB4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CCCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CE0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CF4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974CF8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D0Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D20u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D24u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D48u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D6Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974D88u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DA0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DB8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DBCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DD4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DE4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974DF0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E04u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E10u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E38u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E44u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E6Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E8Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974E98u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974EA0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974EB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974EB8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974EBCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974ED4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974EE4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974EF0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F04u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F10u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F30u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F68u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F7Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F88u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974F90u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FA0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FD4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FE0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08974FF4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975000u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975008u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975018u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975020u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975024u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897503Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897504Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975058u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897506Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975078u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975080u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975090u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975098u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897509Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089750F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975100u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897510Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897511Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975134u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975144u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897514Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975150u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975168u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975178u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975184u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975198u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089751FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975210u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897521Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975224u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975234u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897523Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975240u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975258u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975268u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975274u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975288u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975294u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897529Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089752ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975300u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897530Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975314u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975324u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897532Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975330u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975348u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975358u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975364u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975378u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975384u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897538Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897539Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089753FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975404u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975414u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897541Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975420u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975438u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975448u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975454u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975468u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975474u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897547Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975484u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897549Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089754FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975508u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975510u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897551Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975528u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975534u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897554Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975554u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975594u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089755BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089755E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975604u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975638u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897564Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089756C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089756D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089756D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089756F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089756FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975724u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897572Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089757B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089757D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089757E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089757F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089757FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897581Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975848u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975884u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089758ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089758D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089758E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089758F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975918u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975930u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897593Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975954u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975958u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975960u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975978u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897597Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975990u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089759B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089759CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089759D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089759ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089759FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A00u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A14u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A30u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A50u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A64u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975A7Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975AA4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975AD4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975AD8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B68u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B70u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B7Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B88u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975B94u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975BA4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975BB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975BD4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975BDCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C08u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C14u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C3Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C48u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975C74u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975CA4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975D18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975D38u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975D60u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975D84u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975DACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975DC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975DD0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975DE4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975DECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E08u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E20u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E48u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E60u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E64u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975E78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975EB8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975EC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975ED4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975EE8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975EF4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F04u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F10u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F20u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F58u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975F7Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08975FB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897602Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976060u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897607Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089760A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089760ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089760D4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089760F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089760FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976110u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976168u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976174u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976188u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976198u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897619Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089761B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089761C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089761CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089761DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976214u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976238u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897624Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897625Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976264u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976278u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897629Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089762BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089762C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089762D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089762ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976338u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976368u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897643Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976444u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897644Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897645Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976464u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976470u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976474u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976484u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976494u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089764B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976508u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976510u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976560u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976568u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976584u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897658Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089765A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089765B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089765B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089765C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089765D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089765DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089765E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976600u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897660Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976618u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976620u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976628u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976640u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897664Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976658u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976660u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976670u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976684u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976694u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766B0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766D0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089766FCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976708u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976710u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976718u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976720u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897673Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976748u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976754u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897675Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976764u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897677Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976788u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976794u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897679Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089767F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976800u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976824u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897682Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976844u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976850u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897685Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976864u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976870u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976884u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976894u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768C0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768D4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768E8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089768F8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897690Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976910u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976924u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976930u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976938u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976950u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897695Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976968u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976970u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897697Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976984u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897699Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769B4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089769ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A00u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A04u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A20u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A2Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A50u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A64u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A68u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A7Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976A84u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976AE8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976AF0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B20u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B48u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B70u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976B84u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976BA0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976BB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976BC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976BFCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C60u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976C70u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976CA0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976CB4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976CC8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976CDCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976CF0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D04u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D20u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D30u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D44u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976D7Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E08u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E14u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E1Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E30u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E3Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E50u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E70u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E84u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976E94u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976EA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976F5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976F64u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976F98u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976FBCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976FC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08976FF8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977008u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977038u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897706Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897709Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977114u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977124u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977150u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977164u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977180u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977190u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089771A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089771ACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089771F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977260u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977270u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977274u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089772B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089772C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089772D4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089772DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089772F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977310u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897736Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977374u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089773A4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089773B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089773CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089773E0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089773F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977408u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977420u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897742Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977440u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977474u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089774C8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089774D8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089774DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897751Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977528u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977534u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897753Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977554u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897756Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977584u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977594u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089775C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089775E4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089775ECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089775F4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897760Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977610u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977618u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977630u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977640u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977670u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977690u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977698u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089776A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089776B8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089776BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089776C4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089776DCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089776F0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977718u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977738u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977758u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977778u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897778Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089777A0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089777A8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089777BCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x089777CCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897780Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977830u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977844u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977858u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977864u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977878u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977914u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977920u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897795Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977974u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x0897798Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977A18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977A28u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977AB8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977AF8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977B18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977B34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977B4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977B6Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977B88u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977B90u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977BA4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977BACu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977BB8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977BC4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977BECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977BF4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C20u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C34u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C3Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C80u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C88u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C90u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977C98u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977CC0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977CC8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977CF4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D08u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D10u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D54u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D58u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D60u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977D8Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977DB0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E18u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E44u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E50u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E54u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E68u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E80u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977E88u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977EB4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977EB8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977EC0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977ECCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977EDCu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977EE4u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977EECu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977EF8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F00u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F08u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F40u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F4Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F5Cu, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F64u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977F78u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977FA8u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977FC0u, &recomp_unit_0092, "recomp_unit_0092");
    runtime.register_function(0x08977FE4u, &recomp_unit_0092, "recomp_unit_0092");
}
} // namespace psprecomp
