#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0105[4094] = {
    1, 0, 2, 0, 3, 4, 0, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 9, 0, 0, 10,
    0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0,
    0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 36,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40,
    0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 46, 0, 47, 48, 0, 49, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58,
    0, 59, 60, 0, 61, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 66, 67, 0, 68, 69, 0, 70,
    0, 71, 0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 80,
    0, 81, 0, 0, 82, 0, 0, 83, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0,
    0, 90, 0, 91, 92, 0, 0, 0, 93, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0,
    0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 126, 0, 0, 127, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 149, 0, 150, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 158, 0, 159,
    0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 166, 0, 167, 0, 0, 0, 0, 168, 0, 0,
    0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179,
    0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 186, 0, 187, 0, 0, 0,
    0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0,
    198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 202, 203, 0, 0, 0, 204, 0, 205, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 209,
    0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0,
    0, 219, 0, 0, 220, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0, 0,
    229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 233, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 238, 0, 0, 0, 0, 239,
    0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 249,
    0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0,
    0, 260, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0,
    0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 272, 0, 273, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0,
    0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0,
    284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0,
    0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 294, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297,
    0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304,
    0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311,
    0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 316, 0, 317, 0, 0,
    0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 325, 0,
    0, 0, 326, 0, 0, 327, 0, 328, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0,
    0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 350,
    0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0,
    0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 365, 0, 366, 367, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 371, 0, 372, 0, 0, 0, 0, 373, 374, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 378, 379, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 392, 0, 0, 0, 0, 393, 0,
    394, 0, 395, 0, 0, 0, 396, 0, 397, 0, 0, 0, 398, 399, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 404, 0, 405, 0,
    0, 406, 407, 0, 408, 0, 0, 409, 410, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 421, 0, 422, 0, 0,
    0, 423, 424, 0, 0, 425, 0, 0, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 430, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 432, 0, 433, 0, 0, 434, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0,
    0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 443, 0, 444, 0, 445, 0, 0, 446, 0,
    0, 447, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0,
    455, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 459, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 468, 0, 0, 0,
    469, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 473, 0, 0, 0, 474, 0, 475, 0, 0, 476, 0, 477, 0, 478, 0, 0, 479, 0,
    480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0,
    486, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 490, 491, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0,
    495, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 500, 0, 501, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 504,
    0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0,
    514, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 523, 0, 524, 525, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 528, 0, 0, 529, 0, 0, 530, 531,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 534, 0, 0, 535, 0, 536, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 539,
    0, 0, 540, 0, 541, 0, 0, 542, 0, 0, 0, 543, 0, 544, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 547, 0, 548, 0, 0, 0, 549,
    0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 552, 0, 553, 554, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 557, 558, 0,
    559, 0, 0, 560, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 563, 0, 564, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 568,
    0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 576,
    0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 578, 579, 0, 0, 0, 580, 0, 581, 0, 0, 0, 582, 0, 0, 583, 584, 0, 0, 0, 0, 0, 585,
    0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 589, 590, 0, 0, 0, 0, 0, 0, 591, 0,
    0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0, 598, 599, 0,
    600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0,
    0, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 612, 613,
    614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 620,
    0, 621, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 624, 0, 0, 625, 0, 0, 0, 0, 0, 626, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 633, 0, 634, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0,
    637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 640, 0, 641, 0, 0, 0, 642, 0, 0, 643, 0, 0, 0, 0, 644, 0, 645, 0,
    0, 0, 0, 646, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0,
    0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0,
    0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 0, 665, 0,
    0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 673, 0,
    0, 0, 0, 0, 0, 0, 0, 674, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 677, 0, 678, 0, 0, 679, 0, 0,
    680, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 683, 0, 684, 0, 685, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0,
    0, 688, 0, 0, 0, 689, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 694,
    0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0,
    0, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0,
    706, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 0, 710, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0,
    0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 717, 0, 0, 0, 0, 0, 0, 0, 718, 0,
    0, 0, 0, 0, 719, 0, 0, 720, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 725, 0, 0, 0,
    0, 726, 0, 0, 727, 0, 728, 0, 729, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0,
    733, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 735, 736, 0, 0, 0, 0, 0, 0, 737, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    739, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744,
    0, 0, 745, 0, 746, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 0, 749, 0, 750, 0, 0, 751, 0, 0, 0, 752, 0, 0, 0, 753, 0, 0,
    0, 754, 0, 755, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 758, 0, 0, 0, 759, 0, 760, 0, 0, 761, 0, 0, 762, 0, 0,
    763, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 0, 767, 0, 768, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 771, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0,
    774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 776, 0, 0, 0, 0, 777, 0, 778, 0, 779,
    0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 784, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 790, 0, 0, 0, 0, 0, 0, 0, 791, 0,
    792, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 795, 0, 0, 0, 796, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 799, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 804,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 806, 0, 0, 807, 0, 0, 0, 808, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 810, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813,
    0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 815, 0, 816, 0, 0, 817, 818, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 821, 0, 0, 822, 0, 0, 0, 823, 0, 824, 0, 825,
    0, 826, 0, 827, 0, 0, 0, 828, 0, 829, 0, 830, 0, 831, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 0, 838, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 839, 0, 840, 0, 841, 0, 842, 0, 0, 843, 0, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0, 0, 0, 846,
};
void recomp_unit_0105_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089A8000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0105[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A8000;
    case 2u: goto L_089A8008;
    case 3u: goto L_089A8010;
    case 4u: goto L_089A8014;
    case 5u: goto L_089A801C;
    case 6u: goto L_089A8020;
    case 7u: goto L_089A8054;
    case 8u: goto L_089A8060;
    case 9u: goto L_089A8070;
    case 10u: goto L_089A807C;
    case 11u: goto L_089A8084;
    case 12u: goto L_089A808C;
    case 13u: goto L_089A809C;
    case 14u: goto L_089A80B4;
    case 15u: goto L_089A80C4;
    case 16u: goto L_089A80D4;
    case 17u: goto L_089A80D8;
    case 18u: goto L_089A80EC;
    case 19u: goto L_089A8104;
    case 20u: goto L_089A8110;
    case 21u: goto L_089A8120;
    case 22u: goto L_089A812C;
    case 23u: goto L_089A8134;
    case 24u: goto L_089A813C;
    case 25u: goto L_089A8188;
    case 26u: goto L_089A8190;
    case 27u: goto L_089A81B8;
    case 28u: goto L_089A81D4;
    case 29u: goto L_089A81F8;
    case 30u: goto L_089A8210;
    case 31u: goto L_089A822C;
    case 32u: goto L_089A8230;
    case 33u: goto L_089A8248;
    case 34u: goto L_089A8260;
    case 35u: goto L_089A8278;
    case 36u: goto L_089A827C;
    case 37u: goto L_089A82A0;
    case 38u: goto L_089A82CC;
    case 39u: goto L_089A82E4;
    case 40u: goto L_089A82FC;
    case 41u: goto L_089A8304;
    case 42u: goto L_089A832C;
    case 43u: goto L_089A8334;
    case 44u: goto L_089A8338;
    case 45u: goto L_089A8380;
    case 46u: goto L_089A8394;
    case 47u: goto L_089A839C;
    case 48u: goto L_089A83A0;
    case 49u: goto L_089A83A8;
    case 50u: goto L_089A83AC;
    case 51u: goto L_089A83B8;
    case 52u: goto L_089A83C4;
    case 53u: goto L_089A83DC;
    case 54u: goto L_089A83E8;
    case 55u: goto L_089A83F0;
    case 56u: goto L_089A8420;
    case 57u: goto L_089A8468;
    case 58u: goto L_089A847C;
    case 59u: goto L_089A8484;
    case 60u: goto L_089A8488;
    case 61u: goto L_089A8490;
    case 62u: goto L_089A8494;
    case 63u: goto L_089A849C;
    case 64u: goto L_089A84C8;
    case 65u: goto L_089A84DC;
    case 66u: goto L_089A84E4;
    case 67u: goto L_089A84E8;
    case 68u: goto L_089A84F0;
    case 69u: goto L_089A84F4;
    case 70u: goto L_089A84FC;
    case 71u: goto L_089A8504;
    case 72u: goto L_089A850C;
    case 73u: goto L_089A8524;
    case 74u: goto L_089A852C;
    case 75u: goto L_089A8544;
    case 76u: goto L_089A854C;
    case 77u: goto L_089A855C;
    case 78u: goto L_089A8568;
    case 79u: goto L_089A8574;
    case 80u: goto L_089A857C;
    case 81u: goto L_089A8584;
    case 82u: goto L_089A8590;
    case 83u: goto L_089A859C;
    case 84u: goto L_089A85A0;
    case 85u: goto L_089A85AC;
    case 86u: goto L_089A85C8;
    case 87u: goto L_089A85D8;
    case 88u: goto L_089A85E8;
    case 89u: goto L_089A85F8;
    case 90u: goto L_089A8604;
    case 91u: goto L_089A860C;
    case 92u: goto L_089A8610;
    case 93u: goto L_089A8620;
    case 94u: goto L_089A8624;
    case 95u: goto L_089A8634;
    case 96u: goto L_089A8650;
    case 97u: goto L_089A8668;
    case 98u: goto L_089A8674;
    case 99u: goto L_089A8690;
    case 100u: goto L_089A8698;
    case 101u: goto L_089A8754;
    case 102u: goto L_089A8760;
    case 103u: goto L_089A877C;
    case 104u: goto L_089A8788;
    case 105u: goto L_089A87A4;
    case 106u: goto L_089A87B0;
    case 107u: goto L_089A87B8;
    case 108u: goto L_089A8874;
    case 109u: goto L_089A8880;
    case 110u: goto L_089A889C;
    case 111u: goto L_089A88A8;
    case 112u: goto L_089A88C4;
    case 113u: goto L_089A88D0;
    case 114u: goto L_089A88D8;
    case 115u: goto L_089A8994;
    case 116u: goto L_089A89A0;
    case 117u: goto L_089A89BC;
    case 118u: goto L_089A89C8;
    case 119u: goto L_089A89E4;
    case 120u: goto L_089A89F0;
    case 121u: goto L_089A89F8;
    case 122u: goto L_089A8AB4;
    case 123u: goto L_089A8AC0;
    case 124u: goto L_089A8ADC;
    case 125u: goto L_089A8AE8;
    case 126u: goto L_089A8B04;
    case 127u: goto L_089A8B10;
    case 128u: goto L_089A8B18;
    case 129u: goto L_089A8B24;
    case 130u: goto L_089A8B30;
    case 131u: goto L_089A8B7C;
    case 132u: goto L_089A8C00;
    case 133u: goto L_089A8C08;
    case 134u: goto L_089A8C28;
    case 135u: goto L_089A8C38;
    case 136u: goto L_089A8C54;
    case 137u: goto L_089A8C64;
    case 138u: goto L_089A8C80;
    case 139u: goto L_089A8C8C;
    case 140u: goto L_089A8C98;
    case 141u: goto L_089A8CA4;
    case 142u: goto L_089A8D7C;
    case 143u: goto L_089A8D84;
    case 144u: goto L_089A8DA4;
    case 145u: goto L_089A8DB4;
    case 146u: goto L_089A8DD0;
    case 147u: goto L_089A8DE0;
    case 148u: goto L_089A8DFC;
    case 149u: goto L_089A8E08;
    case 150u: goto L_089A8E10;
    case 151u: goto L_089A8E14;
    case 152u: goto L_089A8E20;
    case 153u: goto L_089A8E2C;
    case 154u: goto L_089A8E38;
    case 155u: goto L_089A8E44;
    case 156u: goto L_089A8E54;
    case 157u: goto L_089A8E70;
    case 158u: goto L_089A8E74;
    case 159u: goto L_089A8E7C;
    case 160u: goto L_089A8E84;
    case 161u: goto L_089A8E9C;
    case 162u: goto L_089A8EAC;
    case 163u: goto L_089A8EB4;
    case 164u: goto L_089A8EC4;
    case 165u: goto L_089A8ED4;
    case 166u: goto L_089A8ED8;
    case 167u: goto L_089A8EE0;
    case 168u: goto L_089A8EF4;
    case 169u: goto L_089A8F04;
    case 170u: goto L_089A8F10;
    case 171u: goto L_089A8F1C;
    case 172u: goto L_089A8F28;
    case 173u: goto L_089A8F34;
    case 174u: goto L_089A8F3C;
    case 175u: goto L_089A8F4C;
    case 176u: goto L_089A8F58;
    case 177u: goto L_089A8F64;
    case 178u: goto L_089A8F70;
    case 179u: goto L_089A8F7C;
    case 180u: goto L_089A8F84;
    case 181u: goto L_089A8FAC;
    case 182u: goto L_089A8FBC;
    case 183u: goto L_089A8FC4;
    case 184u: goto L_089A8FD4;
    case 185u: goto L_089A8FE4;
    case 186u: goto L_089A8FE8;
    case 187u: goto L_089A8FF0;
    case 188u: goto L_089A9004;
    case 189u: goto L_089A9014;
    case 190u: goto L_089A9020;
    case 191u: goto L_089A902C;
    case 192u: goto L_089A9038;
    case 193u: goto L_089A9044;
    case 194u: goto L_089A904C;
    case 195u: goto L_089A905C;
    case 196u: goto L_089A9068;
    case 197u: goto L_089A9074;
    case 198u: goto L_089A9080;
    case 199u: goto L_089A908C;
    case 200u: goto L_089A9094;
    case 201u: goto L_089A90A8;
    case 202u: goto L_089A90B0;
    case 203u: goto L_089A90B4;
    case 204u: goto L_089A90C4;
    case 205u: goto L_089A90CC;
    case 206u: goto L_089A90D4;
    case 207u: goto L_089A90E4;
    case 208u: goto L_089A90F4;
    case 209u: goto L_089A90FC;
    case 210u: goto L_089A9108;
    case 211u: goto L_089A911C;
    case 212u: goto L_089A912C;
    case 213u: goto L_089A9138;
    case 214u: goto L_089A9144;
    case 215u: goto L_089A9150;
    case 216u: goto L_089A915C;
    case 217u: goto L_089A916C;
    case 218u: goto L_089A9178;
    case 219u: goto L_089A9184;
    case 220u: goto L_089A9190;
    case 221u: goto L_089A919C;
    case 222u: goto L_089A91A4;
    case 223u: goto L_089A91B4;
    case 224u: goto L_089A91C0;
    case 225u: goto L_089A91CC;
    case 226u: goto L_089A91D8;
    case 227u: goto L_089A91E4;
    case 228u: goto L_089A91F4;
    case 229u: goto L_089A9200;
    case 230u: goto L_089A920C;
    case 231u: goto L_089A9218;
    case 232u: goto L_089A9224;
    case 233u: goto L_089A922C;
    case 234u: goto L_089A9234;
    case 235u: goto L_089A9244;
    case 236u: goto L_089A9254;
    case 237u: goto L_089A925C;
    case 238u: goto L_089A9268;
    case 239u: goto L_089A927C;
    case 240u: goto L_089A928C;
    case 241u: goto L_089A9298;
    case 242u: goto L_089A92A4;
    case 243u: goto L_089A92B0;
    case 244u: goto L_089A92BC;
    case 245u: goto L_089A92CC;
    case 246u: goto L_089A92D8;
    case 247u: goto L_089A92E4;
    case 248u: goto L_089A92F0;
    case 249u: goto L_089A92FC;
    case 250u: goto L_089A9304;
    case 251u: goto L_089A9314;
    case 252u: goto L_089A9320;
    case 253u: goto L_089A932C;
    case 254u: goto L_089A9338;
    case 255u: goto L_089A9344;
    case 256u: goto L_089A9354;
    case 257u: goto L_089A9360;
    case 258u: goto L_089A936C;
    case 259u: goto L_089A9378;
    case 260u: goto L_089A9384;
    case 261u: goto L_089A9388;
    case 262u: goto L_089A9398;
    case 263u: goto L_089A93A0;
    case 264u: goto L_089A93BC;
    case 265u: goto L_089A93D4;
    case 266u: goto L_089A93E4;
    case 267u: goto L_089A93EC;
    case 268u: goto L_089A93F4;
    case 269u: goto L_089A9404;
    case 270u: goto L_089A9414;
    case 271u: goto L_089A9424;
    case 272u: goto L_089A9430;
    case 273u: goto L_089A9438;
    case 274u: goto L_089A9440;
    case 275u: goto L_089A9450;
    case 276u: goto L_089A9460;
    case 277u: goto L_089A946C;
    case 278u: goto L_089A9478;
    case 279u: goto L_089A948C;
    case 280u: goto L_089A94AC;
    case 281u: goto L_089A94C0;
    case 282u: goto L_089A94E0;
    case 283u: goto L_089A94F0;
    case 284u: goto L_089A9500;
    case 285u: goto L_089A950C;
    case 286u: goto L_089A9518;
    case 287u: goto L_089A952C;
    case 288u: goto L_089A9540;
    case 289u: goto L_089A9560;
    case 290u: goto L_089A9574;
    case 291u: goto L_089A9594;
    case 292u: goto L_089A95BC;
    case 293u: goto L_089A95CC;
    case 294u: goto L_089A95D4;
    case 295u: goto L_089A95DC;
    case 296u: goto L_089A95EC;
    case 297u: goto L_089A95FC;
    case 298u: goto L_089A960C;
    case 299u: goto L_089A961C;
    case 300u: goto L_089A9628;
    case 301u: goto L_089A9634;
    case 302u: goto L_089A9648;
    case 303u: goto L_089A9668;
    case 304u: goto L_089A967C;
    case 305u: goto L_089A969C;
    case 306u: goto L_089A96AC;
    case 307u: goto L_089A96BC;
    case 308u: goto L_089A96C8;
    case 309u: goto L_089A96D4;
    case 310u: goto L_089A96E8;
    case 311u: goto L_089A96FC;
    case 312u: goto L_089A971C;
    case 313u: goto L_089A9730;
    case 314u: goto L_089A9750;
    case 315u: goto L_089A9764;
    case 316u: goto L_089A976C;
    case 317u: goto L_089A9774;
    case 318u: goto L_089A9784;
    case 319u: goto L_089A9794;
    case 320u: goto L_089A97A8;
    case 321u: goto L_089A97C8;
    case 322u: goto L_089A97D0;
    case 323u: goto L_089A97E0;
    case 324u: goto L_089A97F0;
    case 325u: goto L_089A97F8;
    case 326u: goto L_089A9808;
    case 327u: goto L_089A9814;
    case 328u: goto L_089A981C;
    case 329u: goto L_089A9824;
    case 330u: goto L_089A9834;
    case 331u: goto L_089A9844;
    case 332u: goto L_089A9850;
    case 333u: goto L_089A985C;
    case 334u: goto L_089A9870;
    case 335u: goto L_089A9890;
    case 336u: goto L_089A98A4;
    case 337u: goto L_089A98C4;
    case 338u: goto L_089A98CC;
    case 339u: goto L_089A98D4;
    case 340u: goto L_089A98E4;
    case 341u: goto L_089A98F4;
    case 342u: goto L_089A9908;
    case 343u: goto L_089A9928;
    case 344u: goto L_089A9930;
    case 345u: goto L_089A9940;
    case 346u: goto L_089A9950;
    case 347u: goto L_089A9958;
    case 348u: goto L_089A9968;
    case 349u: goto L_089A9974;
    case 350u: goto L_089A997C;
    case 351u: goto L_089A9984;
    case 352u: goto L_089A9994;
    case 353u: goto L_089A99A4;
    case 354u: goto L_089A99B0;
    case 355u: goto L_089A99BC;
    case 356u: goto L_089A99D0;
    case 357u: goto L_089A99E4;
    case 358u: goto L_089A9A04;
    case 359u: goto L_089A9A20;
    case 360u: goto L_089A9A28;
    case 361u: goto L_089A9A34;
    case 362u: goto L_089A9A80;
    case 363u: goto L_089A9A9C;
    case 364u: goto L_089A9AB0;
    case 365u: goto L_089A9AB8;
    case 366u: goto L_089A9AC0;
    case 367u: goto L_089A9AC4;
    case 368u: goto L_089A9ACC;
    case 369u: goto L_089A9AE0;
    case 370u: goto L_089A9AF0;
    case 371u: goto L_089A9B08;
    case 372u: goto L_089A9B10;
    case 373u: goto L_089A9B24;
    case 374u: goto L_089A9B28;
    case 375u: goto L_089A9B2C;
    case 376u: goto L_089A9B98;
    case 377u: goto L_089A9BA0;
    case 378u: goto L_089A9BB4;
    case 379u: goto L_089A9BB8;
    case 380u: goto L_089A9BCC;
    case 381u: goto L_089A9BD8;
    case 382u: goto L_089A9C04;
    case 383u: goto L_089A9C10;
    case 384u: goto L_089A9C28;
    case 385u: goto L_089A9C3C;
    case 386u: goto L_089A9C48;
    case 387u: goto L_089A9C50;
    case 388u: goto L_089A9C98;
    case 389u: goto L_089A9CC0;
    case 390u: goto L_089A9CD0;
    case 391u: goto L_089A9CE0;
    case 392u: goto L_089A9CE4;
    case 393u: goto L_089A9CF8;
    case 394u: goto L_089A9D00;
    case 395u: goto L_089A9D08;
    case 396u: goto L_089A9D18;
    case 397u: goto L_089A9D20;
    case 398u: goto L_089A9D30;
    case 399u: goto L_089A9D34;
    case 400u: goto L_089A9D40;
    case 401u: goto L_089A9D4C;
    case 402u: goto L_089A9D58;
    case 403u: goto L_089A9D68;
    case 404u: goto L_089A9D70;
    case 405u: goto L_089A9D78;
    case 406u: goto L_089A9D84;
    case 407u: goto L_089A9D88;
    case 408u: goto L_089A9D90;
    case 409u: goto L_089A9D9C;
    case 410u: goto L_089A9DA0;
    case 411u: goto L_089A9DA8;
    case 412u: goto L_089A9DB0;
    case 413u: goto L_089A9DDC;
    case 414u: goto L_089A9DE4;
    case 415u: goto L_089A9E00;
    case 416u: goto L_089A9E18;
    case 417u: goto L_089A9E34;
    case 418u: goto L_089A9E4C;
    case 419u: goto L_089A9E58;
    case 420u: goto L_089A9E64;
    case 421u: goto L_089A9E6C;
    case 422u: goto L_089A9E74;
    case 423u: goto L_089A9E84;
    case 424u: goto L_089A9E88;
    case 425u: goto L_089A9E94;
    case 426u: goto L_089A9EA4;
    case 427u: goto L_089A9EB0;
    case 428u: goto L_089A9EBC;
    case 429u: goto L_089A9EC8;
    case 430u: goto L_089A9ED4;
    case 431u: goto L_089A9ED8;
    case 432u: goto L_089A9F10;
    case 433u: goto L_089A9F18;
    case 434u: goto L_089A9F24;
    case 435u: goto L_089A9F2C;
    case 436u: goto L_089A9F38;
    case 437u: goto L_089A9F44;
    case 438u: goto L_089A9F54;
    case 439u: goto L_089A9F78;
    case 440u: goto L_089A9F90;
    case 441u: goto L_089A9FC8;
    case 442u: goto L_089A9FD4;
    case 443u: goto L_089A9FDC;
    case 444u: goto L_089A9FE4;
    case 445u: goto L_089A9FEC;
    case 446u: goto L_089A9FF8;
    case 447u: goto L_089AA004;
    case 448u: goto L_089AA010;
    case 449u: goto L_089AA024;
    case 450u: goto L_089AA04C;
    case 451u: goto L_089AA054;
    case 452u: goto L_089AA0B0;
    case 453u: goto L_089AA0D8;
    case 454u: goto L_089AA0F0;
    case 455u: goto L_089AA100;
    case 456u: goto L_089AA10C;
    case 457u: goto L_089AA124;
    case 458u: goto L_089AA134;
    case 459u: goto L_089AA138;
    case 460u: goto L_089AA13C;
    case 461u: goto L_089AA180;
    case 462u: goto L_089AA194;
    case 463u: goto L_089AA1A8;
    case 464u: goto L_089AA1B4;
    case 465u: goto L_089AA1C0;
    case 466u: goto L_089AA1E4;
    case 467u: goto L_089AA1EC;
    case 468u: goto L_089AA1F0;
    case 469u: goto L_089AA200;
    case 470u: goto L_089AA208;
    case 471u: goto L_089AA224;
    case 472u: goto L_089AA234;
    case 473u: goto L_089AA238;
    case 474u: goto L_089AA248;
    case 475u: goto L_089AA250;
    case 476u: goto L_089AA25C;
    case 477u: goto L_089AA264;
    case 478u: goto L_089AA26C;
    case 479u: goto L_089AA278;
    case 480u: goto L_089AA280;
    case 481u: goto L_089AA2B0;
    case 482u: goto L_089AA2BC;
    case 483u: goto L_089AA2CC;
    case 484u: goto L_089AA2D8;
    case 485u: goto L_089AA2F0;
    case 486u: goto L_089AA300;
    case 487u: goto L_089AA30C;
    case 488u: goto L_089AA318;
    case 489u: goto L_089AA338;
    case 490u: goto L_089AA340;
    case 491u: goto L_089AA344;
    case 492u: goto L_089AA350;
    case 493u: goto L_089AA368;
    case 494u: goto L_089AA378;
    case 495u: goto L_089AA380;
    case 496u: goto L_089AA394;
    case 497u: goto L_089AA39C;
    case 498u: goto L_089AA3AC;
    case 499u: goto L_089AA3B4;
    case 500u: goto L_089AA3C8;
    case 501u: goto L_089AA3D0;
    case 502u: goto L_089AA3DC;
    case 503u: goto L_089AA3F0;
    case 504u: goto L_089AA3FC;
    case 505u: goto L_089AA404;
    case 506u: goto L_089AA41C;
    case 507u: goto L_089AA428;
    case 508u: goto L_089AA458;
    case 509u: goto L_089AA4B0;
    case 510u: goto L_089AA4C0;
    case 511u: goto L_089AA4D0;
    case 512u: goto L_089AA4E0;
    case 513u: goto L_089AA4F0;
    case 514u: goto L_089AA500;
    case 515u: goto L_089AA510;
    case 516u: goto L_089AA51C;
    case 517u: goto L_089AA52C;
    case 518u: goto L_089AA54C;
    case 519u: goto L_089AA58C;
    case 520u: goto L_089AA598;
    case 521u: goto L_089AA5B4;
    case 522u: goto L_089AA5C4;
    case 523u: goto L_089AA618;
    case 524u: goto L_089AA620;
    case 525u: goto L_089AA624;
    case 526u: goto L_089AA648;
    case 527u: goto L_089AA658;
    case 528u: goto L_089AA660;
    case 529u: goto L_089AA66C;
    case 530u: goto L_089AA678;
    case 531u: goto L_089AA67C;
    case 532u: goto L_089AA6A8;
    case 533u: goto L_089AA6B0;
    case 534u: goto L_089AA6BC;
    case 535u: goto L_089AA6C8;
    case 536u: goto L_089AA6D0;
    case 537u: goto L_089AA6DC;
    case 538u: goto L_089AA6E8;
    case 539u: goto L_089AA6FC;
    case 540u: goto L_089AA708;
    case 541u: goto L_089AA710;
    case 542u: goto L_089AA71C;
    case 543u: goto L_089AA72C;
    case 544u: goto L_089AA734;
    case 545u: goto L_089AA748;
    case 546u: goto L_089AA754;
    case 547u: goto L_089AA764;
    case 548u: goto L_089AA76C;
    case 549u: goto L_089AA77C;
    case 550u: goto L_089AA78C;
    case 551u: goto L_089AA79C;
    case 552u: goto L_089AA7AC;
    case 553u: goto L_089AA7B4;
    case 554u: goto L_089AA7B8;
    case 555u: goto L_089AA7C8;
    case 556u: goto L_089AA7E4;
    case 557u: goto L_089AA7F4;
    case 558u: goto L_089AA7F8;
    case 559u: goto L_089AA800;
    case 560u: goto L_089AA80C;
    case 561u: goto L_089AA81C;
    case 562u: goto L_089AA828;
    case 563u: goto L_089AA838;
    case 564u: goto L_089AA840;
    case 565u: goto L_089AA84C;
    case 566u: goto L_089AA85C;
    case 567u: goto L_089AA86C;
    case 568u: goto L_089AA87C;
    case 569u: goto L_089AA88C;
    case 570u: goto L_089AA89C;
    case 571u: goto L_089AA8AC;
    case 572u: goto L_089AA8BC;
    case 573u: goto L_089AA8CC;
    case 574u: goto L_089AA8DC;
    case 575u: goto L_089AA8EC;
    case 576u: goto L_089AA8FC;
    case 577u: goto L_089AA908;
    case 578u: goto L_089AA928;
    case 579u: goto L_089AA92C;
    case 580u: goto L_089AA93C;
    case 581u: goto L_089AA944;
    case 582u: goto L_089AA954;
    case 583u: goto L_089AA960;
    case 584u: goto L_089AA964;
    case 585u: goto L_089AA97C;
    case 586u: goto L_089AA998;
    case 587u: goto L_089AA9B4;
    case 588u: goto L_089AA9BC;
    case 589u: goto L_089AA9D8;
    case 590u: goto L_089AA9DC;
    case 591u: goto L_089AA9F8;
    case 592u: goto L_089AAA0C;
    case 593u: goto L_089AAA1C;
    case 594u: goto L_089AAA2C;
    case 595u: goto L_089AAA44;
    case 596u: goto L_089AAA5C;
    case 597u: goto L_089AAA64;
    case 598u: goto L_089AAA74;
    case 599u: goto L_089AAA78;
    case 600u: goto L_089AAA80;
    case 601u: goto L_089AAA94;
    case 602u: goto L_089AAAA8;
    case 603u: goto L_089AAAC4;
    case 604u: goto L_089AAAF8;
    case 605u: goto L_089AAB10;
    case 606u: goto L_089AAB20;
    case 607u: goto L_089AAB30;
    case 608u: goto L_089AAB48;
    case 609u: goto L_089AAB50;
    case 610u: goto L_089AAB60;
    case 611u: goto L_089AAB70;
    case 612u: goto L_089AAB78;
    case 613u: goto L_089AAB7C;
    case 614u: goto L_089AAB80;
    case 615u: goto L_089AAC34;
    case 616u: goto L_089AAC40;
    case 617u: goto L_089AAC50;
    case 618u: goto L_089AAC60;
    case 619u: goto L_089AAC70;
    case 620u: goto L_089AAC7C;
    case 621u: goto L_089AAC84;
    case 622u: goto L_089AAC94;
    case 623u: goto L_089AACA4;
    case 624u: goto L_089AACB0;
    case 625u: goto L_089AACBC;
    case 626u: goto L_089AACD4;
    case 627u: goto L_089AACD8;
    case 628u: goto L_089AAD08;
    case 629u: goto L_089AAD50;
    case 630u: goto L_089AAD5C;
    case 631u: goto L_089AAD6C;
    case 632u: goto L_089AADB4;
    case 633u: goto L_089AADB8;
    case 634u: goto L_089AADC0;
    case 635u: goto L_089AADE0;
    case 636u: goto L_089AADF0;
    case 637u: goto L_089AAE00;
    case 638u: goto L_089AAE18;
    case 639u: goto L_089AAE28;
    case 640u: goto L_089AAE38;
    case 641u: goto L_089AAE40;
    case 642u: goto L_089AAE50;
    case 643u: goto L_089AAE5C;
    case 644u: goto L_089AAE70;
    case 645u: goto L_089AAE78;
    case 646u: goto L_089AAE8C;
    case 647u: goto L_089AAE94;
    case 648u: goto L_089AAEA4;
    case 649u: goto L_089AAEB8;
    case 650u: goto L_089AAED4;
    case 651u: goto L_089AAEE0;
    case 652u: goto L_089AAEF4;
    case 653u: goto L_089AAF08;
    case 654u: goto L_089AAF28;
    case 655u: goto L_089AAF40;
    case 656u: goto L_089AAF4C;
    case 657u: goto L_089AAF64;
    case 658u: goto L_089AAF88;
    case 659u: goto L_089AAF9C;
    case 660u: goto L_089AAFA8;
    case 661u: goto L_089AAFC0;
    case 662u: goto L_089AAFC8;
    case 663u: goto L_089AAFD8;
    case 664u: goto L_089AAFE4;
    case 665u: goto L_089AAFF8;
    case 666u: goto L_089AB014;
    case 667u: goto L_089AB020;
    case 668u: goto L_089AB02C;
    case 669u: goto L_089AB034;
    case 670u: goto L_089AB044;
    case 671u: goto L_089AB060;
    case 672u: goto L_089AB06C;
    case 673u: goto L_089AB078;
    case 674u: goto L_089AB09C;
    case 675u: goto L_089AB0A0;
    case 676u: goto L_089AB0D0;
    case 677u: goto L_089AB0E0;
    case 678u: goto L_089AB0E8;
    case 679u: goto L_089AB0F4;
    case 680u: goto L_089AB100;
    case 681u: goto L_089AB110;
    case 682u: goto L_089AB124;
    case 683u: goto L_089AB144;
    case 684u: goto L_089AB14C;
    case 685u: goto L_089AB154;
    case 686u: goto L_089AB16C;
    case 687u: goto L_089AB174;
    case 688u: goto L_089AB184;
    case 689u: goto L_089AB194;
    case 690u: goto L_089AB198;
    case 691u: goto L_089AB1AC;
    case 692u: goto L_089AB1D0;
    case 693u: goto L_089AB1D8;
    case 694u: goto L_089AB1FC;
    case 695u: goto L_089AB218;
    case 696u: goto L_089AB240;
    case 697u: goto L_089AB254;
    case 698u: goto L_089AB26C;
    case 699u: goto L_089AB278;
    case 700u: goto L_089AB28C;
    case 701u: goto L_089AB2A4;
    case 702u: goto L_089AB2BC;
    case 703u: goto L_089AB2C8;
    case 704u: goto L_089AB2E4;
    case 705u: goto L_089AB2F4;
    case 706u: goto L_089AB300;
    case 707u: goto L_089AB308;
    case 708u: goto L_089AB330;
    case 709u: goto L_089AB338;
    case 710u: goto L_089AB34C;
    case 711u: goto L_089AB354;
    case 712u: goto L_089AB378;
    case 713u: goto L_089AB38C;
    case 714u: goto L_089AB3A8;
    case 715u: goto L_089AB3B8;
    case 716u: goto L_089AB3D0;
    case 717u: goto L_089AB3D8;
    case 718u: goto L_089AB3F8;
    case 719u: goto L_089AB410;
    case 720u: goto L_089AB41C;
    case 721u: goto L_089AB428;
    case 722u: goto L_089AB438;
    case 723u: goto L_089AB44C;
    case 724u: goto L_089AB45C;
    case 725u: goto L_089AB470;
    case 726u: goto L_089AB484;
    case 727u: goto L_089AB490;
    case 728u: goto L_089AB498;
    case 729u: goto L_089AB4A0;
    case 730u: goto L_089AB4B8;
    case 731u: goto L_089AB4C4;
    case 732u: goto L_089AB4EC;
    case 733u: goto L_089AB500;
    case 734u: goto L_089AB520;
    case 735u: goto L_089AB530;
    case 736u: goto L_089AB534;
    case 737u: goto L_089AB550;
    case 738u: goto L_089AB558;
    case 739u: goto L_089AB580;
    case 740u: goto L_089AB59C;
    case 741u: goto L_089AB5C0;
    case 742u: goto L_089AB5D4;
    case 743u: goto L_089AB604;
    case 744u: goto L_089AB67C;
    case 745u: goto L_089AB688;
    case 746u: goto L_089AB690;
    case 747u: goto L_089AB6A0;
    case 748u: goto L_089AB6A8;
    case 749u: goto L_089AB6C0;
    case 750u: goto L_089AB6C8;
    case 751u: goto L_089AB6D4;
    case 752u: goto L_089AB6E4;
    case 753u: goto L_089AB6F4;
    case 754u: goto L_089AB704;
    case 755u: goto L_089AB70C;
    case 756u: goto L_089AB714;
    case 757u: goto L_089AB73C;
    case 758u: goto L_089AB744;
    case 759u: goto L_089AB754;
    case 760u: goto L_089AB75C;
    case 761u: goto L_089AB768;
    case 762u: goto L_089AB774;
    case 763u: goto L_089AB780;
    case 764u: goto L_089AB790;
    case 765u: goto L_089AB7AC;
    case 766u: goto L_089AB7BC;
    case 767u: goto L_089AB7CC;
    case 768u: goto L_089AB7D4;
    case 769u: goto L_089AB7E0;
    case 770u: goto L_089AB820;
    case 771u: goto L_089AB82C;
    case 772u: goto L_089AB834;
    case 773u: goto L_089AB868;
    case 774u: goto L_089AB880;
    case 775u: goto L_089AB8C8;
    case 776u: goto L_089AB8D8;
    case 777u: goto L_089AB8EC;
    case 778u: goto L_089AB8F4;
    case 779u: goto L_089AB8FC;
    case 780u: goto L_089AB904;
    case 781u: goto L_089AB930;
    case 782u: goto L_089AB94C;
    case 783u: goto L_089AB9B4;
    case 784u: goto L_089AB9BC;
    case 785u: goto L_089AB9CC;
    case 786u: goto L_089AB9DC;
    case 787u: goto L_089ABA04;
    case 788u: goto L_089ABA2C;
    case 789u: goto L_089ABA50;
    case 790u: goto L_089ABA58;
    case 791u: goto L_089ABA78;
    case 792u: goto L_089ABA80;
    case 793u: goto L_089ABA90;
    case 794u: goto L_089ABAD0;
    case 795u: goto L_089ABAD8;
    case 796u: goto L_089ABAE8;
    case 797u: goto L_089ABB10;
    case 798u: goto L_089ABB38;
    case 799u: goto L_089ABB54;
    case 800u: goto L_089ABB60;
    case 801u: goto L_089ABB88;
    case 802u: goto L_089ABBA8;
    case 803u: goto L_089ABBBC;
    case 804u: goto L_089ABBFC;
    case 805u: goto L_089ABC3C;
    case 806u: goto L_089ABC50;
    case 807u: goto L_089ABC5C;
    case 808u: goto L_089ABC6C;
    case 809u: goto L_089ABC94;
    case 810u: goto L_089ABCAC;
    case 811u: goto L_089ABCBC;
    case 812u: goto L_089ABCC4;
    case 813u: goto L_089ABD7C;
    case 814u: goto L_089ABD98;
    case 815u: goto L_089ABDAC;
    case 816u: goto L_089ABDB4;
    case 817u: goto L_089ABDC0;
    case 818u: goto L_089ABDC4;
    case 819u: goto L_089ABE0C;
    case 820u: goto L_089ABE48;
    case 821u: goto L_089ABE50;
    case 822u: goto L_089ABE5C;
    case 823u: goto L_089ABE6C;
    case 824u: goto L_089ABE74;
    case 825u: goto L_089ABE7C;
    case 826u: goto L_089ABE84;
    case 827u: goto L_089ABE8C;
    case 828u: goto L_089ABE9C;
    case 829u: goto L_089ABEA4;
    case 830u: goto L_089ABEAC;
    case 831u: goto L_089ABEB4;
    case 832u: goto L_089ABECC;
    case 833u: goto L_089ABED4;
    case 834u: goto L_089ABEF0;
    case 835u: goto L_089ABF3C;
    case 836u: goto L_089ABF50;
    case 837u: goto L_089ABF60;
    case 838u: goto L_089ABF70;
    case 839u: goto L_089ABF98;
    case 840u: goto L_089ABFA0;
    case 841u: goto L_089ABFA8;
    case 842u: goto L_089ABFB0;
    case 843u: goto L_089ABFBC;
    case 844u: goto L_089ABFD0;
    case 845u: goto L_089ABFE0;
    case 846u: goto L_089ABFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A8000:
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089A8014;
    }
    goto L_089A8008;
L_089A8008:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089A8020;
      }
      goto L_089A8010;
    }
L_089A8010:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A8014;
L_089A8014:
    ctx.gpr[31] = (0x089A801Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089A801Cu) goto L_089A801C;
    return;
L_089A801C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089A8020;
L_089A8020:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_089A8060;
      }
      goto L_089A8054;
    }
L_089A8054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A808C;
      }
      goto L_089A8060;
    }
L_089A8060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C50;
      }
      goto L_089A8070;
    }
L_089A8070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C50;
      }
      goto L_089A807C;
    }
L_089A807C:
    ctx.gpr[31] = (0x089A8084u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089A8084u) goto L_089A8084;
    return;
L_089A8084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C50;
      }
      goto L_089A808C;
    }
L_089A808C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
        goto L_089A813C;
    }
    goto L_089A809C;
L_089A809C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
        goto L_089A813C;
    }
    goto L_089A80B4;
L_089A80B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089A80D4;
      }
      goto L_089A80C4;
    }
L_089A80C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A80D8;
      }
      goto L_089A80D4;
    }
L_089A80D4:
    ctx.gpr[4] = (0u | 1u);
    goto L_089A80D8;
L_089A80D8:
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A80ECu);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 377u, 0x089A1A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089A80ECu) goto L_089A80EC;
    return;
L_089A80EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
      if (branch_taken) {
          goto L_089A8110;
      }
      goto L_089A8104;
    }
L_089A8104:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A8110u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089A8110u) goto L_089A8110;
    return;
L_089A8110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C50;
      }
      goto L_089A8120;
    }
L_089A8120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C50;
      }
      goto L_089A812C;
    }
L_089A812C:
    ctx.gpr[31] = (0x089A8134u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089A8134u) goto L_089A8134;
    return;
L_089A8134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C50;
      }
      goto L_089A813C;
    }
L_089A813C:
    ctx.gpr[4] = (16051u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A8190;
      }
      goto L_089A8188;
    }
L_089A8188:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089A8190;
L_089A8190:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_089A81D4;
    }
    goto L_089A81B8;
L_089A81B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_089A81D4;
L_089A81D4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A8210;
      }
      goto L_089A81F8;
    }
L_089A81F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_089A8210;
L_089A8210:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A8230;
      }
      goto L_089A822C;
    }
L_089A822C:
    ctx.gpr[19] = (0u | 1u);
    goto L_089A8230;
L_089A8230:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_089A827C;
      }
      goto L_089A8248;
    }
L_089A8248:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_089A827C;
      }
      goto L_089A8260;
    }
L_089A8260:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A83F0;
      }
      goto L_089A8278;
    }
L_089A8278:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    goto L_089A827C;
L_089A827C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16145u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 60293u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A82E4;
      }
      goto L_089A82A0;
    }
L_089A82A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A82CCu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 102u, 0x0899CDF8u>(ctx, &aot_mem) && ctx.pc == 0x089A82CCu) goto L_089A82CC;
    return;
L_089A82CC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A83E8;
      }
      goto L_089A82E4;
    }
L_089A82E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_089A8304;
    }
    goto L_089A82FC;
L_089A82FC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_089A8304;
      }
      goto L_089A8304;
    }
L_089A8304:
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A8334;
      }
      goto L_089A832C;
    }
L_089A832C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_089A8338;
      }
      goto L_089A8334;
    }
L_089A8334:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_089A8338;
L_089A8338:
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[13])) && ctx.fpr[22] == ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089A839C;
      }
      goto L_089A8380;
    }
L_089A8380:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089A83A0;
    }
    goto L_089A8394;
L_089A8394:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089A83AC;
      }
      goto L_089A839C;
    }
L_089A839C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A83A0;
L_089A83A0:
    ctx.gpr[31] = (0x089A83A8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089A83A8u) goto L_089A83A8;
    return;
L_089A83A8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089A83AC;
L_089A83AC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x089A83B8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 509u, 0x08A0654Cu>(ctx, &aot_mem) && ctx.pc == 0x089A83B8u) goto L_089A83B8;
    return;
L_089A83B8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089A83C4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 495u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x089A83C4u) goto L_089A83C4;
    return;
L_089A83C4:
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089A83DCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x089A83DCu) goto L_089A83DC;
    return;
L_089A83DC:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089A83E8;
L_089A83E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089A8420;
      }
      goto L_089A83F0;
    }
L_089A83F0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
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
    goto L_089A8420;
L_089A8420:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[26]) || std::isnan(ctx.fpr[13])) && ctx.fpr[26] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_089A8484;
      }
      goto L_089A8468;
    }
L_089A8468:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089A8488;
    }
    goto L_089A847C;
L_089A847C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089A8494;
      }
      goto L_089A8484;
    }
L_089A8484:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A8488;
L_089A8488:
    ctx.gpr[31] = (0x089A8490u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089A8490u) goto L_089A8490;
    return;
L_089A8490:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089A8494;
L_089A8494:
    ctx.gpr[31] = (0x089A849Cu);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[26];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A849Cu) goto L_089A849C;
    return;
L_089A849C:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[30] = ctx.fpr[30] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[30]) || std::isnan(ctx.fpr[13])) && ctx.fpr[30] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
      if (branch_taken) {
          goto L_089A84E4;
      }
      goto L_089A84C8;
    }
L_089A84C8:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089A84E8;
    }
    goto L_089A84DC;
L_089A84DC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089A84F4;
      }
      goto L_089A84E4;
    }
L_089A84E4:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A84E8;
L_089A84E8:
    ctx.gpr[31] = (0x089A84F0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089A84F0u) goto L_089A84F0;
    return;
L_089A84F0:
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089A84F4;
L_089A84F4:
    ctx.gpr[31] = (0x089A84FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089A84FCu) goto L_089A84FC;
    return;
L_089A84FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A854C;
      }
      goto L_089A8504;
    }
L_089A8504:
    ctx.gpr[31] = (0x089A850Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089A850Cu) goto L_089A850C;
    return;
L_089A850C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2932)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A8544;
      }
      goto L_089A8524;
    }
L_089A8524:
    ctx.gpr[31] = (0x089A852Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089A852Cu) goto L_089A852C;
    return;
L_089A852C:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2932)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = ctx.fpr[12] / ctx.fpr[28];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A85A0;
      }
      goto L_089A8544;
    }
L_089A8544:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089A85A0;
      }
      goto L_089A854C;
    }
L_089A854C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A8574;
      }
      goto L_089A855C;
    }
L_089A855C:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A859C;
      }
      goto L_089A8568;
    }
L_089A8568:
    ctx.gpr[4] = (16384u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A85A0;
      }
      goto L_089A8574;
    }
L_089A8574:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A8590;
      }
      goto L_089A857C;
    }
L_089A857C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A859C;
      }
      goto L_089A8584;
    }
L_089A8584:
    ctx.gpr[4] = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A85A0;
      }
      goto L_089A8590;
    }
L_089A8590:
    ctx.gpr[4] = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A85A0;
      }
      goto L_089A859C;
    }
L_089A859C:
    ctx.fpr[28] = std::bit_cast<float>(0u);
    goto L_089A85A0;
L_089A85A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A8624;
      }
      goto L_089A85AC;
    }
L_089A85AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8624;
      }
      goto L_089A85C8;
    }
L_089A85C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A85F8;
      }
      goto L_089A85D8;
    }
L_089A85D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A85F8;
      }
      goto L_089A85E8;
    }
L_089A85E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A8624;
      }
      goto L_089A85F8;
    }
L_089A85F8:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x089A8604u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089A8604u) goto L_089A8604;
    return;
L_089A8604:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8610;
      }
      goto L_089A860C;
    }
L_089A860C:
    ctx.fpr[28] = std::bit_cast<float>(0u);
    goto L_089A8610;
L_089A8610:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8624;
      }
      goto L_089A8620;
    }
L_089A8620:
    ctx.gpr[20] = (0u | 1u);
    goto L_089A8624;
L_089A8624:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8650;
      }
      goto L_089A8634;
    }
L_089A8634:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8634;
      }
      goto L_089A8650;
    }
L_089A8650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8674;
      }
      goto L_089A8668;
    }
L_089A8668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1404)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A93BC;
      }
      goto L_089A8674;
    }
L_089A8674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_089A8E10;
      }
      goto L_089A8690;
    }
L_089A8690:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8E10;
      }
      goto L_089A8698;
    }
L_089A8698:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[6] = (16153u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089A8754u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x089A8754u) goto L_089A8754;
    return;
L_089A8754:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A87B8;
      }
      goto L_089A8760;
    }
L_089A8760:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8788;
      }
      goto L_089A877C;
    }
L_089A877C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A87B8;
      }
      goto L_089A8788;
    }
L_089A8788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A87B0;
      }
      goto L_089A87A4;
    }
L_089A87A4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A87B8;
      }
      goto L_089A87B0;
    }
L_089A87B0:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089A87B8;
L_089A87B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[6] = (16153u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089A8874u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x089A8874u) goto L_089A8874;
    return;
L_089A8874:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A88D8;
      }
      goto L_089A8880;
    }
L_089A8880:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A88A8;
      }
      goto L_089A889C;
    }
L_089A889C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(261), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A88D8;
      }
      goto L_089A88A8;
    }
L_089A88A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A88D0;
      }
      goto L_089A88C4;
    }
L_089A88C4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(261), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A88D8;
      }
      goto L_089A88D0;
    }
L_089A88D0:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(261), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089A88D8;
L_089A88D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[6] = (16153u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089A8994u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x089A8994u) goto L_089A8994;
    return;
L_089A8994:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A89F8;
      }
      goto L_089A89A0;
    }
L_089A89A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A89C8;
      }
      goto L_089A89BC;
    }
L_089A89BC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(262), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A89F8;
      }
      goto L_089A89C8;
    }
L_089A89C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A89F0;
      }
      goto L_089A89E4;
    }
L_089A89E4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(262), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A89F8;
      }
      goto L_089A89F0;
    }
L_089A89F0:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(262), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089A89F8;
L_089A89F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[6] = (16153u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089A8AB4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x089A8AB4u) goto L_089A8AB4;
    return;
L_089A8AB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8B18;
      }
      goto L_089A8AC0;
    }
L_089A8AC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8AE8;
      }
      goto L_089A8ADC;
    }
L_089A8ADC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(263), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A8B18;
      }
      goto L_089A8AE8;
    }
L_089A8AE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8B10;
      }
      goto L_089A8B04;
    }
L_089A8B04:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(263), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A8B18;
      }
      goto L_089A8B10;
    }
L_089A8B10:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(263), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089A8B18;
L_089A8B18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8C8C;
      }
      goto L_089A8B24;
    }
L_089A8B24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(261)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8C8C;
      }
      goto L_089A8B30;
    }
L_089A8B30:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089A8B7Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 102u, 0x0899CDF8u>(ctx, &aot_mem) && ctx.pc == 0x089A8B7Cu) goto L_089A8B7C;
    return;
L_089A8B7C:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x089A8C00u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 478u, 0x088C68F4u>(ctx, &aot_mem) && ctx.pc == 0x089A8C00u) goto L_089A8C00;
    return;
L_089A8C00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
      if (branch_taken) {
          goto L_089A8C8C;
      }
      goto L_089A8C08;
    }
L_089A8C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
        goto L_089A8C38;
    }
    goto L_089A8C28;
L_089A8C28:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(261), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A8C8C;
      }
      goto L_089A8C38;
    }
L_089A8C38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
        goto L_089A8C64;
    }
    goto L_089A8C54;
L_089A8C54:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(261), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A8C8C;
      }
      goto L_089A8C64;
    }
L_089A8C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8C8C;
      }
      goto L_089A8C80;
    }
L_089A8C80:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(261), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089A8C8C;
L_089A8C8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8E08;
      }
      goto L_089A8C98;
    }
L_089A8C98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(263)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8E08;
      }
      goto L_089A8CA4;
    }
L_089A8CA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x089A8D7Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 478u, 0x088C68F4u>(ctx, &aot_mem) && ctx.pc == 0x089A8D7Cu) goto L_089A8D7C;
    return;
L_089A8D7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8E08;
      }
      goto L_089A8D84;
    }
L_089A8D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
        goto L_089A8DB4;
    }
    goto L_089A8DA4;
L_089A8DA4:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(262), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(263), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A8E08;
      }
      goto L_089A8DB4;
    }
L_089A8DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
        goto L_089A8DE0;
    }
    goto L_089A8DD0;
L_089A8DD0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(262), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(263), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A8E08;
      }
      goto L_089A8DE0;
    }
L_089A8DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8E08;
      }
      goto L_089A8DFC;
    }
L_089A8DFC:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(262), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(263), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089A8E08;
L_089A8E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8E14;
      }
      goto L_089A8E10;
    }
L_089A8E10:
    ctx.gpr[21] = (0u | 0u);
    goto L_089A8E14;
L_089A8E14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8E74;
      }
      goto L_089A8E20;
    }
L_089A8E20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(261)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8E74;
      }
      goto L_089A8E2C;
    }
L_089A8E2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8E74;
      }
      goto L_089A8E38;
    }
L_089A8E38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(263)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8E74;
      }
      goto L_089A8E44;
    }
L_089A8E44:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8E70;
      }
      goto L_089A8E54;
    }
L_089A8E54:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8E54;
      }
      goto L_089A8E70;
    }
L_089A8E70:
    ctx.gpr[21] = (0u | 0u);
    goto L_089A8E74;
L_089A8E74:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8E84;
      }
      goto L_089A8E7C;
    }
L_089A8E7C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A8E84;
    }
L_089A8E84:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
        goto L_089A8E9C;
    }
    goto L_089A8E9C;
L_089A8E9C:
    ctx.set_fpu_condition((ctx.fpr[30] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A8F84;
      }
      goto L_089A8EAC;
    }
L_089A8EAC:
    if (ctx.gpr[18] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
        goto L_089A8ED8;
    }
    goto L_089A8EB4;
L_089A8EB4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A8EF4;
      }
      goto L_089A8EC4;
    }
L_089A8EC4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A8EF4;
      }
      goto L_089A8ED4;
    }
L_089A8ED4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    goto L_089A8ED8;
L_089A8ED8:
    ctx.gpr[31] = (0x089A8EE0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A8EE0u) goto L_089A8EE0;
    return;
L_089A8EE0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A8F3C;
      }
      goto L_089A8EF4;
    }
L_089A8EF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(263)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A8F28;
      }
      goto L_089A8F04;
    }
L_089A8F04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(263)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8F34;
      }
      goto L_089A8F10;
    }
L_089A8F10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(261)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8F34;
      }
      goto L_089A8F1C;
    }
L_089A8F1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8F34;
      }
      goto L_089A8F28;
    }
L_089A8F28:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A8F34;
    }
L_089A8F34:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A8F3C;
    }
L_089A8F3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(262)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A8F70;
      }
      goto L_089A8F4C;
    }
L_089A8F4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A8F7C;
      }
      goto L_089A8F58;
    }
L_089A8F58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8F7C;
      }
      goto L_089A8F64;
    }
L_089A8F64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(263)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A8F7C;
      }
      goto L_089A8F70;
    }
L_089A8F70:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A8F7C;
    }
L_089A8F7C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A8F84;
    }
L_089A8F84:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[30];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
        goto L_089A8FAC;
    }
    goto L_089A8FAC;
L_089A8FAC:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9094;
      }
      goto L_089A8FBC;
    }
L_089A8FBC:
    if (ctx.gpr[18] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
        goto L_089A8FE8;
    }
    goto L_089A8FC4;
L_089A8FC4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9004;
      }
      goto L_089A8FD4;
    }
L_089A8FD4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9004;
      }
      goto L_089A8FE4;
    }
L_089A8FE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    goto L_089A8FE8;
L_089A8FE8:
    ctx.gpr[31] = (0x089A8FF0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A8FF0u) goto L_089A8FF0;
    return;
L_089A8FF0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A904C;
      }
      goto L_089A9004;
    }
L_089A9004:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9038;
      }
      goto L_089A9014;
    }
L_089A9014:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9044;
      }
      goto L_089A9020;
    }
L_089A9020:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(261)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9044;
      }
      goto L_089A902C;
    }
L_089A902C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9044;
      }
      goto L_089A9038;
    }
L_089A9038:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A9044;
    }
L_089A9044:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A904C;
    }
L_089A904C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(261)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9080;
      }
      goto L_089A905C;
    }
L_089A905C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(261)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A908C;
      }
      goto L_089A9068;
    }
L_089A9068:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A908C;
      }
      goto L_089A9074;
    }
L_089A9074:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(263)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A908C;
      }
      goto L_089A9080;
    }
L_089A9080:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A908C;
    }
L_089A908C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A9094;
    }
L_089A9094:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_089A90B4;
    }
    goto L_089A90A8;
L_089A90A8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A90CC;
      }
      goto L_089A90B0;
    }
L_089A90B0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_089A90B4;
L_089A90B4:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A922C;
      }
      goto L_089A90C4;
    }
L_089A90C4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A922C;
      }
      goto L_089A90CC;
    }
L_089A90CC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A90FC;
      }
      goto L_089A90D4;
    }
L_089A90D4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A90F4;
      }
      goto L_089A90E4;
    }
L_089A90E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A90FC;
      }
      goto L_089A90F4;
    }
L_089A90F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A90FC;
    }
L_089A90FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[31] = (0x089A9108u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A9108u) goto L_089A9108;
    return;
L_089A9108:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A91A4;
      }
      goto L_089A911C;
    }
L_089A911C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9150;
      }
      goto L_089A912C;
    }
L_089A912C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A915C;
      }
      goto L_089A9138;
    }
L_089A9138:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A915C;
      }
      goto L_089A9144;
    }
L_089A9144:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(263)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A915C;
      }
      goto L_089A9150;
    }
L_089A9150:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A915C;
    }
L_089A915C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(261)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9190;
      }
      goto L_089A916C;
    }
L_089A916C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(261)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A919C;
      }
      goto L_089A9178;
    }
L_089A9178:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A919C;
      }
      goto L_089A9184;
    }
L_089A9184:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(263)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A919C;
      }
      goto L_089A9190;
    }
L_089A9190:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A919C;
    }
L_089A919C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A91A4;
    }
L_089A91A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(263)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A91D8;
      }
      goto L_089A91B4;
    }
L_089A91B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(263)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A91E4;
      }
      goto L_089A91C0;
    }
L_089A91C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A91E4;
      }
      goto L_089A91CC;
    }
L_089A91CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(261)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A91E4;
      }
      goto L_089A91D8;
    }
L_089A91D8:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A91E4;
    }
L_089A91E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(262)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9218;
      }
      goto L_089A91F4;
    }
L_089A91F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9224;
      }
      goto L_089A9200;
    }
L_089A9200:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9224;
      }
      goto L_089A920C;
    }
L_089A920C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(261)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9224;
      }
      goto L_089A9218;
    }
L_089A9218:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A9224;
    }
L_089A9224:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A922C;
    }
L_089A922C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A925C;
      }
      goto L_089A9234;
    }
L_089A9234:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9254;
      }
      goto L_089A9244;
    }
L_089A9244:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A925C;
      }
      goto L_089A9254;
    }
L_089A9254:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A925C;
    }
L_089A925C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[31] = (0x089A9268u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A9268u) goto L_089A9268;
    return;
L_089A9268:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9304;
      }
      goto L_089A927C;
    }
L_089A927C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(261)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A92B0;
      }
      goto L_089A928C;
    }
L_089A928C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(261)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A92BC;
      }
      goto L_089A9298;
    }
L_089A9298:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A92BC;
      }
      goto L_089A92A4;
    }
L_089A92A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(263)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A92BC;
      }
      goto L_089A92B0;
    }
L_089A92B0:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A92BC;
    }
L_089A92BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A92F0;
      }
      goto L_089A92CC;
    }
L_089A92CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A92FC;
      }
      goto L_089A92D8;
    }
L_089A92D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A92FC;
      }
      goto L_089A92E4;
    }
L_089A92E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(263)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A92FC;
      }
      goto L_089A92F0;
    }
L_089A92F0:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A92FC;
    }
L_089A92FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A9304;
    }
L_089A9304:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(262)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9338;
      }
      goto L_089A9314;
    }
L_089A9314:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9344;
      }
      goto L_089A9320;
    }
L_089A9320:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9344;
      }
      goto L_089A932C;
    }
L_089A932C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(261)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9344;
      }
      goto L_089A9338;
    }
L_089A9338:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A9344;
    }
L_089A9344:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(263)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9378;
      }
      goto L_089A9354;
    }
L_089A9354:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(263)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9384;
      }
      goto L_089A9360;
    }
L_089A9360:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9384;
      }
      goto L_089A936C;
    }
L_089A936C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(261)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9384;
      }
      goto L_089A9378;
    }
L_089A9378:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A9388;
      }
      goto L_089A9384;
    }
L_089A9384:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1262), static_cast<std::uint16_t>(0u));
    goto L_089A9388;
L_089A9388:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1404), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1404));
    ctx.gpr[31] = (0x089A9398u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A9398u) goto L_089A9398;
    return;
L_089A9398:
    ctx.gpr[31] = (0x089A93A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089A93A0u) goto L_089A93A0;
    return;
L_089A93A0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1408), ctx.gpr[4]);
    goto L_089A93BC;
L_089A93BC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
        goto L_089A93D4;
    }
    goto L_089A93D4;
L_089A93D4:
    ctx.set_fpu_condition((ctx.fpr[30] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9594;
      }
      goto L_089A93E4;
    }
L_089A93E4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A94E0;
      }
      goto L_089A93EC;
    }
L_089A93EC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9440;
      }
      goto L_089A93F4;
    }
L_089A93F4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9414;
      }
      goto L_089A9404;
    }
L_089A9404:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9440;
      }
      goto L_089A9414;
    }
L_089A9414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C50;
      }
      goto L_089A9424;
    }
L_089A9424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C50;
      }
      goto L_089A9430;
    }
L_089A9430:
    ctx.gpr[31] = (0x089A9438u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089A9438u) goto L_089A9438;
    return;
L_089A9438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C50;
      }
      goto L_089A9440;
    }
L_089A9440:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9478;
      }
      goto L_089A9450;
    }
L_089A9450:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9478;
      }
      goto L_089A9460;
    }
L_089A9460:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A94AC;
      }
      goto L_089A946C;
    }
L_089A946C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(263)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A94AC;
      }
      goto L_089A9478;
    }
L_089A9478:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089A948Cu);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A948Cu) goto L_089A948C;
    return;
L_089A948C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A9A20;
      }
      goto L_089A94AC;
    }
L_089A94AC:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089A94C0u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A94C0u) goto L_089A94C0;
    return;
L_089A94C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A9A20;
      }
      goto L_089A94E0;
    }
L_089A94E0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1262)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A952C;
      }
      goto L_089A94F0;
    }
L_089A94F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1262)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A952C;
      }
      goto L_089A9500;
    }
L_089A9500:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1262)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9560;
      }
      goto L_089A950C;
    }
L_089A950C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[31] = (0x089A9518u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A9518u) goto L_089A9518;
    return;
L_089A9518:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9560;
      }
      goto L_089A952C;
    }
L_089A952C:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089A9540u);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A9540u) goto L_089A9540;
    return;
L_089A9540:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A9A20;
      }
      goto L_089A9560;
    }
L_089A9560:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089A9574u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A9574u) goto L_089A9574;
    return;
L_089A9574:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A9A20;
      }
      goto L_089A9594;
    }
L_089A9594:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[14] - ctx.fpr[30];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
        goto L_089A95BC;
    }
    goto L_089A95BC;
L_089A95BC:
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9750;
      }
      goto L_089A95CC;
    }
L_089A95CC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A969C;
      }
      goto L_089A95D4;
    }
L_089A95D4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A95FC;
      }
      goto L_089A95DC;
    }
L_089A95DC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A969C;
      }
      goto L_089A95EC;
    }
L_089A95EC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A969C;
      }
      goto L_089A95FC;
    }
L_089A95FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9634;
      }
      goto L_089A960C;
    }
L_089A960C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9634;
      }
      goto L_089A961C;
    }
L_089A961C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(261)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9668;
      }
      goto L_089A9628;
    }
L_089A9628:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9668;
      }
      goto L_089A9634;
    }
L_089A9634:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089A9648u);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A9648u) goto L_089A9648;
    return;
L_089A9648:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A9A20;
      }
      goto L_089A9668;
    }
L_089A9668:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089A967Cu);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A967Cu) goto L_089A967C;
    return;
L_089A967C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A9A20;
      }
      goto L_089A969C;
    }
L_089A969C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1262)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A96E8;
      }
      goto L_089A96AC;
    }
L_089A96AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1262)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A96E8;
      }
      goto L_089A96BC;
    }
L_089A96BC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1262)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A971C;
      }
      goto L_089A96C8;
    }
L_089A96C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[31] = (0x089A96D4u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A96D4u) goto L_089A96D4;
    return;
L_089A96D4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A971C;
      }
      goto L_089A96E8;
    }
L_089A96E8:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089A96FCu);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A96FCu) goto L_089A96FC;
    return;
L_089A96FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A9A20;
      }
      goto L_089A971C;
    }
L_089A971C:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089A9730u);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A9730u) goto L_089A9730;
    return;
L_089A9730:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A9A20;
      }
      goto L_089A9750;
    }
L_089A9750:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A98C4;
      }
      goto L_089A9764;
    }
L_089A9764:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A97C8;
      }
      goto L_089A976C;
    }
L_089A976C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A97C8;
      }
      goto L_089A9774;
    }
L_089A9774:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9794;
      }
      goto L_089A9784;
    }
L_089A9784:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A97C8;
      }
      goto L_089A9794;
    }
L_089A9794:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089A97A8u);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A97A8u) goto L_089A97A8;
    return;
L_089A97A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A9A20;
      }
      goto L_089A97C8;
    }
L_089A97C8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9824;
      }
      goto L_089A97D0;
    }
L_089A97D0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A97F8;
      }
      goto L_089A97E0;
    }
L_089A97E0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9824;
      }
      goto L_089A97F0;
    }
L_089A97F0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9824;
      }
      goto L_089A97F8;
    }
L_089A97F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C50;
      }
      goto L_089A9808;
    }
L_089A9808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C50;
      }
      goto L_089A9814;
    }
L_089A9814:
    ctx.gpr[31] = (0x089A981Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089A981Cu) goto L_089A981C;
    return;
L_089A981C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C50;
      }
      goto L_089A9824;
    }
L_089A9824:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1262)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9870;
      }
      goto L_089A9834;
    }
L_089A9834:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1262)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9870;
      }
      goto L_089A9844;
    }
L_089A9844:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1262)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9890;
      }
      goto L_089A9850;
    }
L_089A9850:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[31] = (0x089A985Cu);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A985Cu) goto L_089A985C;
    return;
L_089A985C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9890;
      }
      goto L_089A9870;
    }
L_089A9870:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A9A20;
      }
      goto L_089A9890;
    }
L_089A9890:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089A98A4u);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A98A4u) goto L_089A98A4;
    return;
L_089A98A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A9A20;
      }
      goto L_089A98C4;
    }
L_089A98C4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9928;
      }
      goto L_089A98CC;
    }
L_089A98CC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9928;
      }
      goto L_089A98D4;
    }
L_089A98D4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A98F4;
      }
      goto L_089A98E4;
    }
L_089A98E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9928;
      }
      goto L_089A98F4;
    }
L_089A98F4:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089A9908u);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A9908u) goto L_089A9908;
    return;
L_089A9908:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A9A20;
      }
      goto L_089A9928;
    }
L_089A9928:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9984;
      }
      goto L_089A9930;
    }
L_089A9930:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9958;
      }
      goto L_089A9940;
    }
L_089A9940:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9984;
      }
      goto L_089A9950;
    }
L_089A9950:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9984;
      }
      goto L_089A9958;
    }
L_089A9958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C50;
      }
      goto L_089A9968;
    }
L_089A9968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C50;
      }
      goto L_089A9974;
    }
L_089A9974:
    ctx.gpr[31] = (0x089A997Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089A997Cu) goto L_089A997C;
    return;
L_089A997C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C50;
      }
      goto L_089A9984;
    }
L_089A9984:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1262)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A99D0;
      }
      goto L_089A9994;
    }
L_089A9994:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1262)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A99D0;
      }
      goto L_089A99A4;
    }
L_089A99A4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1262)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9A04;
      }
      goto L_089A99B0;
    }
L_089A99B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[31] = (0x089A99BCu);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A99BCu) goto L_089A99BC;
    return;
L_089A99BC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9A04;
      }
      goto L_089A99D0;
    }
L_089A99D0:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089A99E4u);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A99E4u) goto L_089A99E4;
    return;
L_089A99E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A9A20;
      }
      goto L_089A9A04;
    }
L_089A9A04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089A9A20;
L_089A9A20:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9A34;
      }
      goto L_089A9A28;
    }
L_089A9A28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A9A34;
L_089A9A34:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089A9A80u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x089A9A80u) goto L_089A9A80;
    return;
L_089A9A80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          goto L_089A9AB8;
      }
      goto L_089A9A9C;
    }
L_089A9A9C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9AB8;
      }
      goto L_089A9AB0;
    }
L_089A9AB0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089A9AC4;
      }
      goto L_089A9AB8;
    }
L_089A9AB8:
    ctx.gpr[31] = (0x089A9AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9AC0u) goto L_089A9AC0;
    return;
L_089A9AC0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089A9AC4;
L_089A9AC4:
    ctx.gpr[31] = (0x089A9ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A9ACCu) goto L_089A9ACC;
    return;
L_089A9ACC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089A9B28;
      }
      goto L_089A9AE0;
    }
L_089A9AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
        goto L_089A9B2C;
    }
    goto L_089A9AF0;
L_089A9AF0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9B10;
      }
      goto L_089A9B08;
    }
L_089A9B08:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A9B28;
      }
      goto L_089A9B10;
    }
L_089A9B10:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089A9B24u);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A9B24u) goto L_089A9B24;
    return;
L_089A9B24:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089A9B28;
L_089A9B28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    goto L_089A9B2C;
L_089A9B2C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[17];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9BA0;
      }
      goto L_089A9B98;
    }
L_089A9B98:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089A9BA0;
L_089A9BA0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9BB8;
      }
      goto L_089A9BB4;
    }
L_089A9BB4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089A9BB8;
L_089A9BB8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_089A9BD8;
      }
      goto L_089A9BCC;
    }
L_089A9BCC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089A9BD8;
L_089A9BD8:
    ctx.gpr[4] = (17292u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.fpr[28] = ctx.fpr[13] + ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_089A9C10;
      }
      goto L_089A9C04;
    }
L_089A9C04:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[28]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A9C28;
      }
      goto L_089A9C10;
    }
L_089A9C10:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A9C28;
L_089A9C28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C50;
      }
      goto L_089A9C3C;
    }
L_089A9C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9C50;
      }
      goto L_089A9C48;
    }
L_089A9C48:
    ctx.gpr[31] = (0x089A9C50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089A9C50u) goto L_089A9C50;
    return;
L_089A9C50:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(716)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(732)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(748)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(752)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(760)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(764)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A9C98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1776)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9D00;
      }
      goto L_089A9CC0;
    }
L_089A9CC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9D00;
      }
      goto L_089A9CD0;
    }
L_089A9CD0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9CE4;
      }
      goto L_089A9CE0;
    }
L_089A9CE0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(0u));
    goto L_089A9CE4;
L_089A9CE4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9D00;
      }
      goto L_089A9CF8;
    }
L_089A9CF8:
    ctx.gpr[31] = (0x089A9D00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 163u, 0x089A0B0Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9D00u) goto L_089A9D00;
    return;
L_089A9D00:
    ctx.gpr[31] = (0x089A9D08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089A9D08u) goto L_089A9D08;
    return;
L_089A9D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (256u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A9E6C;
      }
      goto L_089A9D18;
    }
L_089A9D18:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
        goto L_089A9D34;
    }
    goto L_089A9D20;
L_089A9D20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9E6C;
      }
      goto L_089A9D30;
    }
L_089A9D30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    goto L_089A9D34;
L_089A9D34:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9E6C;
      }
      goto L_089A9D40;
    }
L_089A9D40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A9D4Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 336u, 0x08865854u>(ctx, &aot_mem) && ctx.pc == 0x089A9D4Cu) goto L_089A9D4C;
    return;
L_089A9D4C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9D78;
      }
      goto L_089A9D58;
    }
L_089A9D58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 144u);
      if (branch_taken) {
          goto L_089A9D70;
      }
      goto L_089A9D68;
    }
L_089A9D68:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A9D78;
      }
      goto L_089A9D70;
    }
L_089A9D70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089A9D88;
      }
      goto L_089A9D78;
    }
L_089A9D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A9D84u);
    ctx.gpr[5] = (0u | 143u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A9D84u) goto L_089A9D84;
    return;
L_089A9D84:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089A9D88;
L_089A9D88:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9DA0;
      }
      goto L_089A9D90;
    }
L_089A9D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A9D9Cu);
    ctx.gpr[5] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A9D9Cu) goto L_089A9D9C;
    return;
L_089A9D9C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089A9DA0;
L_089A9DA0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9DDC;
      }
      goto L_089A9DA8;
    }
L_089A9DA8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9DDC;
      }
      goto L_089A9DB0;
    }
L_089A9DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16204u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9E64;
      }
      goto L_089A9DDC;
    }
L_089A9DDC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_089A9E64;
      }
      goto L_089A9DE4;
    }
L_089A9DE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9E64;
      }
      goto L_089A9E00;
    }
L_089A9E00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16170u << 16u);
      if (branch_taken) {
          goto L_089A9E64;
      }
      goto L_089A9E18;
    }
L_089A9E18:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 49283u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9E64;
      }
      goto L_089A9E34;
    }
L_089A9E34:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A9E64;
      }
      goto L_089A9E4C;
    }
L_089A9E4C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089A9E58u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x089A9E58u) goto L_089A9E58;
    return;
L_089A9E58:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089A9E64;
L_089A9E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9F78;
      }
      goto L_089A9E6C;
    }
L_089A9E6C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
        goto L_089A9E88;
    }
    goto L_089A9E74;
L_089A9E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9F78;
      }
      goto L_089A9E84;
    }
L_089A9E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    goto L_089A9E88;
L_089A9E88:
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
      if (branch_taken) {
          goto L_089A9F78;
      }
      goto L_089A9E94;
    }
L_089A9E94:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9F78;
      }
      goto L_089A9EA4;
    }
L_089A9EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A9EB0u);
    ctx.gpr[5] = (0u | 143u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A9EB0u) goto L_089A9EB0;
    return;
L_089A9EB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A9ED8;
      }
      goto L_089A9EBC;
    }
L_089A9EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A9EC8u);
    ctx.gpr[5] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A9EC8u) goto L_089A9EC8;
    return;
L_089A9EC8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9F2C;
      }
      goto L_089A9ED4;
    }
L_089A9ED4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_089A9ED8;
L_089A9ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (65280u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A9F10u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089A9F10u) goto L_089A9F10;
    return;
L_089A9F10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9F78;
      }
      goto L_089A9F18;
    }
L_089A9F18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A9F24u);
    ctx.gpr[5] = (0u | 106u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A9F24u) goto L_089A9F24;
    return;
L_089A9F24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9F78;
      }
      goto L_089A9F2C;
    }
L_089A9F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A9F38u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 336u, 0x08865854u>(ctx, &aot_mem) && ctx.pc == 0x089A9F38u) goto L_089A9F38;
    return;
L_089A9F38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A9F78;
      }
      goto L_089A9F44;
    }
L_089A9F44:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A9F78;
      }
      goto L_089A9F54;
    }
L_089A9F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_089A9F78;
L_089A9F78:
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
L_089A9F90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A9FDC;
      }
      goto L_089A9FC8;
    }
L_089A9FC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
        goto L_089A9FEC;
    }
    goto L_089A9FD4;
L_089A9FD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA010;
      }
      goto L_089A9FDC;
    }
L_089A9FDC:
    ctx.gpr[31] = (0x089A9FE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x089A9FE4u) goto L_089A9FE4;
    return;
L_089A9FE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA428;
      }
      goto L_089A9FEC;
    }
L_089A9FEC:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA004;
      }
      goto L_089A9FF8;
    }
L_089A9FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA010;
      }
      goto L_089AA004;
    }
L_089AA004:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AA010u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089AA010u) goto L_089AA010;
    return;
L_089AA010:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x089AA024u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 719u, 0x08977A28u>(ctx, &aot_mem) && ctx.pc == 0x089AA024u) goto L_089AA024;
    return;
L_089AA024:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089AA04Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089AA458;
L_089AA04C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA428;
      }
      goto L_089AA054;
    }
L_089AA054:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1172)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(1172));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(1176));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[30] = (0u | 39u);
    ctx.gpr[23] = (2228u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
        goto L_089AA0B0;
    }
    goto L_089AA0B0;
L_089AA0B0:
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[10] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 9u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089AA100;
      }
      goto L_089AA0D8;
    }
L_089AA0D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[10] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089AA13C;
      }
      goto L_089AA0F0;
    }
L_089AA0F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089AA138;
      }
      goto L_089AA100;
    }
L_089AA100:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 81 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[10] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089AA13C;
      }
      goto L_089AA10C;
    }
L_089AA10C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_089AA134;
    }
    goto L_089AA124;
L_089AA124:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AA134;
      }
      goto L_089AA134;
    }
L_089AA134:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089AA138;
L_089AA138:
    ctx.gpr[10] = (ctx.gpr[7] | 0u);
    goto L_089AA13C;
L_089AA13C:
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[10]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1172), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-26612)));
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[31] = (0x089AA180u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 83u, 0x08978980u>(ctx, &aot_mem) && ctx.pc == 0x089AA180u) goto L_089AA180;
    return;
L_089AA180:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089AA1A8;
      }
      goto L_089AA194;
    }
L_089AA194:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089AA1A8;
L_089AA1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089AA1F0;
      }
      goto L_089AA1B4;
    }
L_089AA1B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA1F0;
      }
      goto L_089AA1C0;
    }
L_089AA1C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089AA1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 536u, 0x08A9E7E0u>(ctx, &aot_mem) && ctx.pc == 0x089AA1E4u) goto L_089AA1E4;
    return;
L_089AA1E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA1F0;
      }
      goto L_089AA1EC;
    }
L_089AA1EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    goto L_089AA1F0;
L_089AA1F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089AA350;
      }
      goto L_089AA200;
    }
L_089AA200:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[22] = (2229u << 16u);
    goto L_089AA208;
L_089AA208:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_089AA234;
      }
      goto L_089AA224;
    }
L_089AA224:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AA238;
      }
      goto L_089AA234;
    }
L_089AA234:
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    goto L_089AA238;
L_089AA238:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA280;
      }
      goto L_089AA248;
    }
L_089AA248:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA25C;
      }
      goto L_089AA250;
    }
L_089AA250:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[21]));
      if (branch_taken) {
          goto L_089AA344;
      }
      goto L_089AA25C;
    }
L_089AA25C:
    ctx.gpr[31] = (0x089AA264u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 455u, 0x089A1F80u>(ctx, &aot_mem) && ctx.pc == 0x089AA264u) goto L_089AA264;
    return;
L_089AA264:
    ctx.gpr[31] = (0x089AA26Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x089AA26Cu) goto L_089AA26C;
    return;
L_089AA26C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089AA278u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18280));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 534u, 0x08AFA558u>(ctx, &aot_mem) && ctx.pc == 0x089AA278u) goto L_089AA278;
    return;
L_089AA278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA428;
      }
      goto L_089AA280;
    }
L_089AA280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (0x089AA2B0u);
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 83u, 0x08978980u>(ctx, &aot_mem) && ctx.pc == 0x089AA2B0u) goto L_089AA2B0;
    return;
L_089AA2B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA2D8;
      }
      goto L_089AA2BC;
    }
L_089AA2BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA2D8;
      }
      goto L_089AA2CC;
    }
L_089AA2CC:
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    goto L_089AA2D8;
L_089AA2D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089AA300;
      }
      goto L_089AA2F0;
    }
L_089AA2F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089AA300;
L_089AA300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089AA344;
      }
      goto L_089AA30C;
    }
L_089AA30C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA344;
      }
      goto L_089AA318;
    }
L_089AA318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
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
    ctx.gpr[31] = (0x089AA338u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 536u, 0x08A9E7E0u>(ctx, &aot_mem) && ctx.pc == 0x089AA338u) goto L_089AA338;
    return;
L_089AA338:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA344;
      }
      goto L_089AA340;
    }
L_089AA340:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    goto L_089AA344;
L_089AA344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA208;
      }
      goto L_089AA350;
    }
L_089AA350:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1172)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_089AA404;
      }
      goto L_089AA368;
    }
L_089AA368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1172)));
    ctx.gpr[31] = (0x089AA378u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 677u, 0x0897756Cu>(ctx, &aot_mem) && ctx.pc == 0x089AA378u) goto L_089AA378;
    return;
L_089AA378:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA39C;
      }
      goto L_089AA380;
    }
L_089AA380:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089AA394u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089AA394u) goto L_089AA394;
    return;
L_089AA394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA428;
      }
      goto L_089AA39C;
    }
L_089AA39C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1172)));
    ctx.gpr[31] = (0x089AA3ACu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 686u, 0x08977618u>(ctx, &aot_mem) && ctx.pc == 0x089AA3ACu) goto L_089AA3AC;
    return;
L_089AA3AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA3D0;
      }
      goto L_089AA3B4;
    }
L_089AA3B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089AA3C8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089AA3C8u) goto L_089AA3C8;
    return;
L_089AA3C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA428;
      }
      goto L_089AA3D0;
    }
L_089AA3D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089AA428;
      }
      goto L_089AA3DC;
    }
L_089AA3DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089AA3F0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089AA3F0u) goto L_089AA3F0;
    return;
L_089AA3F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AA3FCu);
    ctx.gpr[5] = (0u | 152u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089AA3FCu) goto L_089AA3FC;
    return;
L_089AA3FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA428;
      }
      goto L_089AA404;
    }
L_089AA404:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089AA41Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089AA41Cu) goto L_089AA41C;
    return;
L_089AA41C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AA428u);
    ctx.gpr[5] = (0u | 152u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089AA428u) goto L_089AA428;
    return;
L_089AA428:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AA458:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[18] = (0u | 15u);
      if (branch_taken) {
          goto L_089AA620;
      }
      goto L_089AA4B0;
    }
L_089AA4B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 48u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
        goto L_089AA624;
    }
    goto L_089AA4C0;
L_089AA4C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 47u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
        goto L_089AA624;
    }
    goto L_089AA4D0;
L_089AA4D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 25u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
        goto L_089AA624;
    }
    goto L_089AA4E0;
L_089AA4E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 17u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
        goto L_089AA624;
    }
    goto L_089AA4F0;
L_089AA4F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 31u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
        goto L_089AA624;
    }
    goto L_089AA500;
L_089AA500:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 32768u);
    if (ctx.gpr[5] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
        goto L_089AA624;
    }
    goto L_089AA510;
L_089AA510:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA52C;
      }
      goto L_089AA51C;
    }
L_089AA51C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    if (ctx.gpr[5] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
        goto L_089AA624;
    }
    goto L_089AA52C;
L_089AA52C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(316));
    ctx.gpr[5] = (ctx.gpr[5] & 31u);
    if (ctx.gpr[5] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
        goto L_089AA624;
    }
    goto L_089AA54C;
L_089AA54C:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089AA58Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x089AA58Cu) goto L_089AA58C;
    return;
L_089AA58C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA620;
      }
      goto L_089AA598;
    }
L_089AA598:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 4u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA618;
      }
      goto L_089AA5B4;
    }
L_089AA5B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089AA618;
      }
      goto L_089AA5C4;
    }
L_089AA5C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16140u << 16u);
    ctx.fpr[24] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_089AA620;
      }
      goto L_089AA618;
    }
L_089AA618:
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089AA620;
L_089AA620:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
    goto L_089AA624;
L_089AA624:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_089AA660;
      }
      goto L_089AA648;
    }
L_089AA648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA660;
      }
      goto L_089AA658;
    }
L_089AA658:
    ctx.gpr[31] = (0x089AA660u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 351u, 0x089A1884u>(ctx, &aot_mem) && ctx.pc == 0x089AA660u) goto L_089AA660;
    return;
L_089AA660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_089AA67C;
    }
    goto L_089AA66C;
L_089AA66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA6B0;
      }
      goto L_089AA678;
    }
L_089AA678:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_089AA67C;
L_089AA67C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AA6DC;
      }
      goto L_089AA6A8;
    }
L_089AA6A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
      if (branch_taken) {
          goto L_089AA6D0;
      }
      goto L_089AA6B0;
    }
L_089AA6B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    ctx.gpr[31] = (0x089AA6BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x089AA6BCu) goto L_089AA6BC;
    return;
L_089AA6BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AA6C8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x089AA6C8u) goto L_089AA6C8;
    return;
L_089AA6C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089AACD8;
      }
      goto L_089AA6D0;
    }
L_089AA6D0:
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA710;
      }
      goto L_089AA6DC;
    }
L_089AA6DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089AA708;
      }
      goto L_089AA6E8;
    }
L_089AA6E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA7B8;
      }
      goto L_089AA6FC;
    }
L_089AA6FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
      if (branch_taken) {
          goto L_089AA7B8;
      }
      goto L_089AA708;
    }
L_089AA708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 2u);
      if (branch_taken) {
          goto L_089AA7B8;
      }
      goto L_089AA710;
    }
L_089AA710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089AA754;
      }
      goto L_089AA71C;
    }
L_089AA71C:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AA734;
      }
      goto L_089AA72C;
    }
L_089AA72C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 4u);
      if (branch_taken) {
          goto L_089AA7B8;
      }
      goto L_089AA734;
    }
L_089AA734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA7B8;
      }
      goto L_089AA748;
    }
L_089AA748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
      if (branch_taken) {
          goto L_089AA7B8;
      }
      goto L_089AA754;
    }
L_089AA754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA76C;
      }
      goto L_089AA764;
    }
L_089AA764:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 5u);
      if (branch_taken) {
          goto L_089AA7B8;
      }
      goto L_089AA76C;
    }
L_089AA76C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA7AC;
      }
      goto L_089AA77C;
    }
L_089AA77C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA7AC;
      }
      goto L_089AA78C;
    }
L_089AA78C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA7AC;
      }
      goto L_089AA79C;
    }
L_089AA79C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA7B4;
      }
      goto L_089AA7AC;
    }
L_089AA7AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 4u);
      if (branch_taken) {
          goto L_089AA7B8;
      }
      goto L_089AA7B4;
    }
L_089AA7B4:
    ctx.gpr[19] = (0u | 2u);
    goto L_089AA7B8;
L_089AA7B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA7F8;
      }
      goto L_089AA7C8;
    }
L_089AA7C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA7F8;
      }
      goto L_089AA7E4;
    }
L_089AA7E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA7F8;
      }
      goto L_089AA7F4;
    }
L_089AA7F4:
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[22];
    goto L_089AA7F8;
L_089AA7F8:
    ctx.gpr[31] = (0x089AA800u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 116u, 0x089A482Cu>(ctx, &aot_mem) && ctx.pc == 0x089AA800u) goto L_089AA800;
    return;
L_089AA800:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA944;
      }
      goto L_089AA80C;
    }
L_089AA80C:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AA944;
      }
      goto L_089AA81C;
    }
L_089AA81C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089AA840;
      }
      goto L_089AA828;
    }
L_089AA828:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089AA840;
      }
      goto L_089AA838;
    }
L_089AA838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AA85C;
      }
      goto L_089AA840;
    }
L_089AA840:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089AA85C;
      }
      goto L_089AA84C;
    }
L_089AA84C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089AA85C;
L_089AA85C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA8FC;
      }
      goto L_089AA86C;
    }
L_089AA86C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA8FC;
      }
      goto L_089AA87C;
    }
L_089AA87C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA8FC;
      }
      goto L_089AA88C;
    }
L_089AA88C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA8FC;
      }
      goto L_089AA89C;
    }
L_089AA89C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA8FC;
      }
      goto L_089AA8AC;
    }
L_089AA8AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA8FC;
      }
      goto L_089AA8BC;
    }
L_089AA8BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA8FC;
      }
      goto L_089AA8CC;
    }
L_089AA8CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA8FC;
      }
      goto L_089AA8DC;
    }
L_089AA8DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA8FC;
      }
      goto L_089AA8EC;
    }
L_089AA8EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA93C;
      }
      goto L_089AA8FC;
    }
L_089AA8FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AA928;
      }
      goto L_089AA908;
    }
L_089AA908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089AA92C;
      }
      goto L_089AA928;
    }
L_089AA928:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    goto L_089AA92C;
L_089AA92C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089AA93C;
L_089AA93C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089AACD8;
      }
      goto L_089AA944;
    }
L_089AA944:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[24] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089AA964;
      }
      goto L_089AA954;
    }
L_089AA954:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AA964;
      }
      goto L_089AA960;
    }
L_089AA960:
    ctx.gpr[19] = (0u | 4u);
    goto L_089AA964;
L_089AA964:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAA80;
      }
      goto L_089AA97C;
    }
L_089AA97C:
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16329u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089AA9BC;
      }
      goto L_089AA998;
    }
L_089AA998:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089AA9B4u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089AA9B4u) goto L_089AA9B4;
    return;
L_089AA9B4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089AA9DC;
      }
      goto L_089AA9BC;
    }
L_089AA9BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089AA9D8u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089AA9D8u) goto L_089AA9D8;
    return;
L_089AA9D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089AA9DC;
L_089AA9DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_089AA9F8;
    }
    goto L_089AA9F8;
L_089AA9F8:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AAA1C;
      }
      goto L_089AAA0C;
    }
L_089AAA0C:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    goto L_089AAA1C;
L_089AAA1C:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AAA78;
      }
      goto L_089AAA2C;
    }
L_089AAA2C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16406u << 16u);
      if (branch_taken) {
          goto L_089AAA5C;
      }
      goto L_089AAA44;
    }
L_089AAA44:
    ctx.gpr[4] = (ctx.gpr[4] | 52196u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AAA64;
      }
      goto L_089AAA5C;
    }
L_089AAA5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089AAA78;
      }
      goto L_089AAA64;
    }
L_089AAA64:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AAA78;
      }
      goto L_089AAA74;
    }
L_089AAA74:
    ctx.gpr[19] = (0u | 2u);
    goto L_089AAA78;
L_089AAA78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAC40;
      }
      goto L_089AAA80;
    }
L_089AAA80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AAC40;
      }
      goto L_089AAA94;
    }
L_089AAA94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AAC40;
      }
      goto L_089AAAA8;
    }
L_089AAAA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089AAAC4u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089AAAC4u) goto L_089AAAC4;
    return;
L_089AAAC4:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = ctx.fpr[0] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
        goto L_089AAAF8;
    }
    goto L_089AAAF8;
L_089AAAF8:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AAB20;
      }
      goto L_089AAB10;
    }
L_089AAB10:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    goto L_089AAB20;
L_089AAB20:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089AAB80;
    }
    goto L_089AAB30;
L_089AAB30:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AAB50;
      }
      goto L_089AAB48;
    }
L_089AAB48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089AAB7C;
      }
      goto L_089AAB50;
    }
L_089AAB50:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089AAB80;
    }
    goto L_089AAB60;
L_089AAB60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAB78;
      }
      goto L_089AAB70;
    }
L_089AAB70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 4u);
      if (branch_taken) {
          goto L_089AAB7C;
      }
      goto L_089AAB78;
    }
L_089AAB78:
    ctx.gpr[19] = (0u | 2u);
    goto L_089AAB7C;
L_089AAB7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089AAB80;
L_089AAB80:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = ctx.fpr[18] - ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[14]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AAC40;
      }
      goto L_089AAC34;
    }
L_089AAC34:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_089AAC40;
L_089AAC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AAC60;
      }
      goto L_089AAC50;
    }
L_089AAC50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AAC84;
      }
      goto L_089AAC60;
    }
L_089AAC60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AACBC;
      }
      goto L_089AAC70;
    }
L_089AAC70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AAC7Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089AAC7Cu) goto L_089AAC7C;
    return;
L_089AAC7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AACBC;
      }
      goto L_089AAC84;
    }
L_089AAC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AACBC;
      }
      goto L_089AAC94;
    }
L_089AAC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AACBC;
      }
      goto L_089AACA4;
    }
L_089AACA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AACBC;
      }
      goto L_089AACB0;
    }
L_089AACB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AACBCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089AACBCu) goto L_089AACBC;
    return;
L_089AACBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089AACD4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089AACD4u) goto L_089AACD4;
    return;
L_089AACD4:
    ctx.gpr[2] = (0u | 0u);
    goto L_089AACD8;
L_089AACD8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AAD08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAEA4;
      }
      goto L_089AAD50;
    }
L_089AAD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1396)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAEA4;
      }
      goto L_089AAD5C;
    }
L_089AAD5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089AADB8;
      }
      goto L_089AAD6C;
    }
L_089AAD6C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6024)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6024));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[5] = (17505u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AADB8;
      }
      goto L_089AADB4;
    }
L_089AADB4:
    ctx.gpr[4] = (0u | 0u);
    goto L_089AADB8;
L_089AADB8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAE94;
      }
      goto L_089AADC0;
    }
L_089AADC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x089AADE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 402u, 0x089A1C0Cu>(ctx, &aot_mem) && ctx.pc == 0x089AADE0u) goto L_089AADE0;
    return;
L_089AADE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AAE00;
      }
      goto L_089AADF0;
    }
L_089AADF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AAE18;
      }
      goto L_089AAE00;
    }
L_089AAE00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[31] = (0x089AAE18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x089AAE18u) goto L_089AAE18;
    return;
L_089AAE18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AAE38;
      }
      goto L_089AAE28;
    }
L_089AAE28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AAE8C;
      }
      goto L_089AAE38;
    }
L_089AAE38:
    ctx.gpr[31] = (0x089AAE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089AAE40u) goto L_089AAE40;
    return;
L_089AAE40:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAE8C;
      }
      goto L_089AAE50;
    }
L_089AAE50:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AAE78;
      }
      goto L_089AAE5C;
    }
L_089AAE5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089AAE70u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089AAE70u) goto L_089AAE70;
    return;
L_089AAE70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAE8C;
      }
      goto L_089AAE78;
    }
L_089AAE78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089AAE8Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089AAE8Cu) goto L_089AAE8C;
    return;
L_089AAE8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB5D4;
      }
      goto L_089AAE94;
    }
L_089AAE94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), ctx.gpr[4]);
    goto L_089AAEA4;
L_089AAEA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAEF4;
      }
      goto L_089AAEB8;
    }
L_089AAEB8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AAEF4;
      }
      goto L_089AAED4;
    }
L_089AAED4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AAEE0u);
    ctx.gpr[5] = (0u | 120u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089AAEE0u) goto L_089AAEE0;
    return;
L_089AAEE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089AAEF4;
L_089AAEF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB174;
      }
      goto L_089AAF08;
    }
L_089AAF08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 9u);
      if (branch_taken) {
          goto L_089AB060;
      }
      goto L_089AAF28;
    }
L_089AAF28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB060;
      }
      goto L_089AAF40;
    }
L_089AAF40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAFD8;
      }
      goto L_089AAF4C;
    }
L_089AAF4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089AAFD8;
      }
      goto L_089AAF64;
    }
L_089AAF64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6024)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6024));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089AAF88u);
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D2ECu>(ctx, &aot_mem) && ctx.pc == 0x089AAF88u) goto L_089AAF88;
    return;
L_089AAF88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[17] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAFA8;
      }
      goto L_089AAF9C;
    }
L_089AAF9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089AAFA8;
L_089AAFA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_089AAFD8;
      }
      goto L_089AAFC0;
    }
L_089AAFC0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AAFD8;
      }
      goto L_089AAFC8;
    }
L_089AAFC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1172), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    goto L_089AAFD8;
L_089AAFD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB060;
      }
      goto L_089AAFE4;
    }
L_089AAFE4:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x089AAFF8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 719u, 0x08977A28u>(ctx, &aot_mem) && ctx.pc == 0x089AAFF8u) goto L_089AAFF8;
    return;
L_089AAFF8:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AB020;
      }
      goto L_089AB014;
    }
L_089AB014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089AB020;
L_089AB020:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[31] = (0x089AB02Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089AA458;
L_089AB02C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB044;
      }
      goto L_089AB034;
    }
L_089AB034:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1172), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    goto L_089AB044;
L_089AB044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AB060u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089AB060u) goto L_089AB060;
    return;
L_089AB060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB16C;
      }
      goto L_089AB06C;
    }
L_089AB06C:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089AB0A0;
      }
      goto L_089AB078;
    }
L_089AB078:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6024)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6024));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089AB09Cu);
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D2ECu>(ctx, &aot_mem) && ctx.pc == 0x089AB09Cu) goto L_089AB09C;
    return;
L_089AB09C:
    ctx.gpr[17] = (ctx.gpr[2] & 255u);
    goto L_089AB0A0;
L_089AB0A0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(1172));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(1176));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089AB0D0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 83u, 0x08978980u>(ctx, &aot_mem) && ctx.pc == 0x089AB0D0u) goto L_089AB0D0;
    return;
L_089AB0D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB0E8;
      }
      goto L_089AB0E0;
    }
L_089AB0E0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    goto L_089AB0E8;
L_089AB0E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB124;
      }
      goto L_089AB0F4;
    }
L_089AB0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089AB124;
      }
      goto L_089AB100;
    }
L_089AB100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1172)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AB124;
      }
      goto L_089AB110;
    }
L_089AB110:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AB154;
      }
      goto L_089AB124;
    }
L_089AB124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089AB144u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089AB144u) goto L_089AB144;
    return;
L_089AB144:
    ctx.gpr[31] = (0x089AB14Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089AAD08;
L_089AB14C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB5D4;
      }
      goto L_089AB154;
    }
L_089AB154:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1784), ctx.gpr[4]);
    goto L_089AB16C;
L_089AB16C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB5D4;
      }
      goto L_089AB174;
    }
L_089AB174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
        goto L_089AB198;
    }
    goto L_089AB184;
L_089AB184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AB254;
      }
      goto L_089AB194;
    }
L_089AB194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    goto L_089AB198;
L_089AB198:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089AB254;
      }
      goto L_089AB1AC;
    }
L_089AB1AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6024)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6024));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089AB1D0u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089AB1D0u) goto L_089AB1D0;
    return;
L_089AB1D0:
    ctx.gpr[31] = (0x089AB1D8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089AB1D8u) goto L_089AB1D8;
    return;
L_089AB1D8:
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
          goto L_089AB218;
      }
      goto L_089AB1FC;
    }
L_089AB1FC:
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089AB254;
      }
      goto L_089AB218;
    }
L_089AB218:
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
          goto L_089AB254;
      }
      goto L_089AB240;
    }
L_089AB240:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089AB254;
L_089AB254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB5D4;
      }
      goto L_089AB26C;
    }
L_089AB26C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1404)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB5D4;
      }
      goto L_089AB278;
    }
L_089AB278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[31] = (0x089AB28Cu);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 581u, 0x08AEA7B8u>(ctx, &aot_mem) && ctx.pc == 0x089AB28Cu) goto L_089AB28C;
    return;
L_089AB28C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28684)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28688)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089AB2A4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x089AB2A4u) goto L_089AB2A4;
    return;
L_089AB2A4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28676)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28680)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089AB2BCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 481u, 0x08AF656Cu>(ctx, &aot_mem) && ctx.pc == 0x089AB2BCu) goto L_089AB2BC;
    return;
L_089AB2BC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089AB2C8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x089AB2C8u) goto L_089AB2C8;
    return;
L_089AB2C8:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089AB308;
      }
      goto L_089AB2E4;
    }
L_089AB2E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (0x089AB2F4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089AB2F4u) goto L_089AB2F4;
    return;
L_089AB2F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089AB300u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089AB300u) goto L_089AB300;
    return;
L_089AB300:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089AB550;
      }
      goto L_089AB308;
    }
L_089AB308:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1404)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089AB330u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089AB330u) goto L_089AB330;
    return;
L_089AB330:
    ctx.gpr[31] = (0x089AB338u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089AB338u) goto L_089AB338;
    return;
L_089AB338:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (0x089AB34Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089AB34Cu) goto L_089AB34C;
    return;
L_089AB34C:
    ctx.gpr[31] = (0x089AB354u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089AB354u) goto L_089AB354;
    return;
L_089AB354:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_089AB38C;
      }
      goto L_089AB378;
    }
L_089AB378:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
      if (branch_taken) {
          goto L_089AB3B8;
      }
      goto L_089AB38C;
    }
L_089AB38C:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AB3B8;
      }
      goto L_089AB3A8;
    }
L_089AB3A8:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089AB3B8;
L_089AB3B8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AB498;
      }
      goto L_089AB3D0;
    }
L_089AB3D0:
    ctx.gpr[31] = (0x089AB3D8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089AB3D8u) goto L_089AB3D8;
    return;
L_089AB3D8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28668)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28672)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089AB3F8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x089AB3F8u) goto L_089AB3F8;
    return;
L_089AB3F8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28684)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28688)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089AB410u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x089AB410u) goto L_089AB410;
    return;
L_089AB410:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089AB41Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x089AB41Cu) goto L_089AB41C;
    return;
L_089AB41C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089AB428u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089AB428u) goto L_089AB428;
    return;
L_089AB428:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089AB438u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089AB438u) goto L_089AB438;
    return;
L_089AB438:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089AB44Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 431u, 0x08AF6180u>(ctx, &aot_mem) && ctx.pc == 0x089AB44Cu) goto L_089AB44C;
    return;
L_089AB44C:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089AB45Cu);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089AB45Cu) goto L_089AB45C;
    return;
L_089AB45C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089AB470u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x089AB470u) goto L_089AB470;
    return;
L_089AB470:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089AB484u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x089AB484u) goto L_089AB484;
    return;
L_089AB484:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089AB490u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x089AB490u) goto L_089AB490;
    return;
L_089AB490:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089AB550;
      }
      goto L_089AB498;
    }
L_089AB498:
    ctx.gpr[31] = (0x089AB4A0u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089AB4A0u) goto L_089AB4A0;
    return;
L_089AB4A0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28660)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28664)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089AB4B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x089AB4B8u) goto L_089AB4B8;
    return;
L_089AB4B8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x089AB4C4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x089AB4C4u) goto L_089AB4C4;
    return;
L_089AB4C4:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_089AB500;
      }
      goto L_089AB4EC;
    }
L_089AB4EC:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
      if (branch_taken) {
          goto L_089AB530;
      }
      goto L_089AB500;
    }
L_089AB500:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_089AB534;
      }
      goto L_089AB520;
    }
L_089AB520:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089AB530;
L_089AB530:
    ctx.gpr[4] = (16256u << 16u);
    goto L_089AB534;
L_089AB534:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089AB550;
L_089AB550:
    ctx.gpr[31] = (0x089AB558u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089AB558u) goto L_089AB558;
    return;
L_089AB558:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_089AB59C;
      }
      goto L_089AB580;
    }
L_089AB580:
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089AB5D4;
      }
      goto L_089AB59C;
    }
L_089AB59C:
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
          goto L_089AB5D4;
      }
      goto L_089AB5C0;
    }
L_089AB5C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089AB5D4;
L_089AB5D4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089AB604:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-464));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(636)));
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[30] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089AB690;
      }
      goto L_089AB67C;
    }
L_089AB67C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089AB688u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 792u, 0x089A3440u>(ctx, &aot_mem) && ctx.pc == 0x089AB688u) goto L_089AB688;
    return;
L_089AB688:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB6A8;
      }
      goto L_089AB690;
    }
L_089AB690:
    ctx.gpr[16] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[30] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB6C0;
      }
      goto L_089AB6A0;
    }
L_089AB6A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB7AC;
      }
      goto L_089AB6A8;
    }
L_089AB6A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089ABDC4;
      }
      goto L_089AB6C0;
    }
L_089AB6C0:
    ctx.gpr[31] = (0x089AB6C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 817u, 0x089A3688u>(ctx, &aot_mem) && ctx.pc == 0x089AB6C8u) goto L_089AB6C8;
    return;
L_089AB6C8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB7AC;
      }
      goto L_089AB6D4;
    }
L_089AB6D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AB704;
      }
      goto L_089AB6E4;
    }
L_089AB6E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AB704;
      }
      goto L_089AB6F4;
    }
L_089AB6F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AB7AC;
      }
      goto L_089AB704;
    }
L_089AB704:
    ctx.gpr[31] = (0x089AB70Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 837u, 0x089A380Cu>(ctx, &aot_mem) && ctx.pc == 0x089AB70Cu) goto L_089AB70C;
    return;
L_089AB70C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB744;
      }
      goto L_089AB714;
    }
L_089AB714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11468)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[30] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089AB768;
      }
      goto L_089AB73C;
    }
L_089AB73C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
      if (branch_taken) {
          goto L_089AB75C;
      }
      goto L_089AB744;
    }
L_089AB744:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(640));
    ctx.gpr[31] = (0x089AB754u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089AB754u) goto L_089AB754;
    return;
L_089AB754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089ABDC4;
      }
      goto L_089AB75C;
    }
L_089AB75C:
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AB7AC;
      }
      goto L_089AB768;
    }
L_089AB768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(640)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(640));
      if (branch_taken) {
          goto L_089AB780;
      }
      goto L_089AB774;
    }
L_089AB774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(640)));
    ctx.gpr[31] = (0x089AB780u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089AB780u) goto L_089AB780;
    return;
L_089AB780:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089AB790u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089AB790u) goto L_089AB790;
    return;
L_089AB790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11468)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089ABDC4;
      }
      goto L_089AB7AC;
    }
L_089AB7AC:
    ctx.gpr[16] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[30] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB834;
      }
      goto L_089AB7BC;
    }
L_089AB7BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089AB834;
      }
      goto L_089AB7CC;
    }
L_089AB7CC:
    ctx.gpr[31] = (0x089AB7D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 826u, 0x089A3744u>(ctx, &aot_mem) && ctx.pc == 0x089AB7D4u) goto L_089AB7D4;
    return;
L_089AB7D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089AB834;
      }
      goto L_089AB7E0;
    }
L_089AB7E0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089AB834;
      }
      goto L_089AB820;
    }
L_089AB820:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(656), ctx.gpr[4]);
    ctx.gpr[31] = (0x089AB82Cu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(656));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089AB82Cu) goto L_089AB82C;
    return;
L_089AB82C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089ABDC4;
      }
      goto L_089AB834;
    }
L_089AB834:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[30]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089ABBFC;
      }
      goto L_089AB868;
    }
L_089AB868:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABBFC;
      }
      goto L_089AB880;
    }
L_089AB880:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[30] = (0u | 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089AB8C8;
L_089AB8C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
        goto L_089AB904;
    }
    goto L_089AB8D8;
L_089AB8D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
        goto L_089AB904;
    }
    goto L_089AB8EC;
L_089AB8EC:
    ctx.gpr[31] = (0x089AB8F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089AB8F4u) goto L_089AB8F4;
    return;
L_089AB8F4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
        goto L_089AB904;
    }
    goto L_089AB8FC;
L_089AB8FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABBA8;
      }
      goto L_089AB904;
    }
L_089AB904:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11468)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABBA8;
      }
      goto L_089AB930;
    }
L_089AB930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ABBA8;
      }
      goto L_089AB94C;
    }
L_089AB94C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[30] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[28] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[31] = (0x089AB9B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 299u, 0x0899DD38u>(ctx, &aot_mem) && ctx.pc == 0x089AB9B4u) goto L_089AB9B4;
    return;
L_089AB9B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABA78;
      }
      goto L_089AB9BC;
    }
L_089AB9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[4] != ctx.gpr[30]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_089ABA2C;
    }
    goto L_089AB9CC;
L_089AB9CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089ABBA8;
      }
      goto L_089AB9DC;
    }
L_089AB9DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ABBA8;
      }
      goto L_089ABA04;
    }
L_089ABA04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089ABBA8;
      }
      goto L_089ABA2C;
    }
L_089ABA2C:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ABBA8;
      }
      goto L_089ABA50;
    }
L_089ABA50:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ABBA8;
      }
      goto L_089ABA58;
    }
L_089ABA58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
      if (branch_taken) {
          goto L_089ABBA8;
      }
      goto L_089ABA78;
    }
L_089ABA78:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ABBA8;
      }
      goto L_089ABA80;
    }
L_089ABA80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089ABBA8;
      }
      goto L_089ABA90;
    }
L_089ABA90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[11] = (ctx.gpr[11] & 1u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089ABAD0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 478u, 0x088C68F4u>(ctx, &aot_mem) && ctx.pc == 0x089ABAD0u) goto L_089ABAD0;
    return;
L_089ABAD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ABBA8;
      }
      goto L_089ABAD8;
    }
L_089ABAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(600)));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
        goto L_089ABB38;
    }
    goto L_089ABAE8;
L_089ABAE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ABBA8;
      }
      goto L_089ABB10;
    }
L_089ABB10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_089ABBA8;
      }
      goto L_089ABB38;
    }
L_089ABB38:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089ABB54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850D9Cu>(ctx, &aot_mem) && ctx.pc == 0x089ABB54u) goto L_089ABB54;
    return;
L_089ABB54:
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ABBA8;
      }
      goto L_089ABB60;
    }
L_089ABB60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ABBA8;
      }
      goto L_089ABB88;
    }
L_089ABB88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[21] = (0u | 1u);
    goto L_089ABBA8;
L_089ABBA8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089AB8C8;
      }
      goto L_089ABBBC;
    }
L_089ABBBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_089ABBFC;
L_089ABBFC:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089ABC3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0EF8u>(ctx, &aot_mem) && ctx.pc == 0x089ABC3Cu) goto L_089ABC3C;
    return;
L_089ABC3C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
      if (branch_taken) {
          goto L_089ABDAC;
      }
      goto L_089ABC50;
    }
L_089ABC50:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (ctx.gpr[29] | 0u);
    ctx.gpr[16] = (2229u << 16u);
    goto L_089ABC5C;
L_089ABC5C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABD98;
      }
      goto L_089ABC6C;
    }
L_089ABC6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11468)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[30] & ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABD98;
      }
      goto L_089ABC94;
    }
L_089ABC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ABD98;
      }
      goto L_089ABCAC;
    }
L_089ABCAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089ABCBCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 299u, 0x0899DD38u>(ctx, &aot_mem) && ctx.pc == 0x089ABCBCu) goto L_089ABCBC;
    return;
L_089ABCBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089ABD98;
      }
      goto L_089ABCC4;
    }
L_089ABCC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[17] - ctx.fpr[14];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_089ABD98;
      }
      goto L_089ABD7C;
    }
L_089ABD7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(504)));
    goto L_089ABD98;
L_089ABD98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089ABC5C;
      }
      goto L_089ABDAC;
    }
L_089ABDAC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089ABDC0;
      }
      goto L_089ABDB4;
    }
L_089ABDB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(640)));
    ctx.gpr[31] = (0x089ABDC0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(640));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089ABDC0u) goto L_089ABDC0;
    return;
L_089ABDC0:
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
    goto L_089ABDC4;
L_089ABDC4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ABE0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[31]);
    ctx.gpr[31] = (0x089ABE48u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089ABE48u) goto L_089ABE48;
    return;
L_089ABE48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABEAC;
      }
      goto L_089ABE50;
    }
L_089ABE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ABEAC;
      }
      goto L_089ABE5C;
    }
L_089ABE5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ABEAC;
      }
      goto L_089ABE6C;
    }
L_089ABE6C:
    ctx.gpr[31] = (0x089ABE74u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 842u, 0x089A3838u>(ctx, &aot_mem) && ctx.pc == 0x089ABE74u) goto L_089ABE74;
    return;
L_089ABE74:
    ctx.gpr[31] = (0x089ABE7Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 862u, 0x089A3A08u>(ctx, &aot_mem) && ctx.pc == 0x089ABE7Cu) goto L_089ABE7C;
    return;
L_089ABE7C:
    ctx.gpr[31] = (0x089ABE84u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 364u, 0x089B96F4u>(ctx, &aot_mem) && ctx.pc == 0x089ABE84u) goto L_089ABE84;
    return;
L_089ABE84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ABEA4;
      }
      goto L_089ABE8C;
    }
L_089ABE8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ABEB4;
      }
      goto L_089ABE9C;
    }
L_089ABE9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 28u, 0x089AC1B0u>(ctx, &aot_mem); return;
      }
      goto L_089ABEA4;
    }
L_089ABEA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 49u, 0x089AC330u>(ctx, &aot_mem); return;
      }
      goto L_089ABEAC;
    }
L_089ABEAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 49u, 0x089AC330u>(ctx, &aot_mem); return;
      }
      goto L_089ABEB4;
    }
L_089ABEB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1796)));
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 28u, 0x089AC1B0u>(ctx, &aot_mem); return;
      }
      goto L_089ABECC;
    }
L_089ABECC:
    ctx.gpr[31] = (0x089ABED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089ABED4u) goto L_089ABED4;
    return;
L_089ABED4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (0u | 100u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 6u, 0x089AC04Cu>(ctx, &aot_mem); return;
      }
      goto L_089ABEF0;
    }
L_089ABEF0:
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089ABF3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0EF8u>(ctx, &aot_mem) && ctx.pc == 0x089ABF3Cu) goto L_089ABF3C;
    return;
L_089ABF3C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_089ABFF4;
      }
      goto L_089ABF50;
    }
L_089ABF50:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[20] = (ctx.gpr[29] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 2u);
    goto L_089ABF60;
L_089ABF60:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089ABFA8;
      }
      goto L_089ABF70;
    }
L_089ABF70:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ABFA8;
      }
      goto L_089ABF98;
    }
L_089ABF98:
    ctx.gpr[31] = (0x089ABFA0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 85u, 0x088A06BCu>(ctx, &aot_mem) && ctx.pc == 0x089ABFA0u) goto L_089ABFA0;
    return;
L_089ABFA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ABFB0;
      }
      goto L_089ABFA8;
    }
L_089ABFA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABFE0;
      }
      goto L_089ABFB0;
    }
L_089ABFB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ABFE0;
      }
      goto L_089ABFBC;
    }
L_089ABFBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ABFE0;
      }
      goto L_089ABFD0;
    }
L_089ABFD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (ctx.gpr[16] << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    goto L_089ABFE0;
L_089ABFE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089ABF60;
      }
      goto L_089ABFF4;
    }
L_089ABFF4:
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 5u, 0x089AC03Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 1u, 0x089AC000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0105(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0105_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_105(Runtime &runtime) {
    runtime.register_generated_unit(105u, 0x089A8000u, 16384u, &recomp_unit_0105, &recomp_unit_0105_entry);
    runtime.register_function(0x089A8000u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8008u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8010u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8014u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A801Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8020u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8054u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8060u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8070u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A807Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8084u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A808Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A809Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A80B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A80C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A80D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A80D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A80ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8104u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8110u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8120u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A812Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8134u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A813Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8188u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8190u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A81B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A81D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A81F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8210u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A822Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8230u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8248u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8260u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8278u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A827Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A82A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A82CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A82E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A82FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8304u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A832Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8334u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8338u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8380u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8394u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A839Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A83A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A83A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A83ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A83B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A83C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A83DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A83E8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A83F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8420u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8468u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A847Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8484u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8488u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8490u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8494u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A849Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A84C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A84DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A84E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A84E8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A84F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A84F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A84FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8504u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A850Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8524u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A852Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8544u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A854Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A855Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8568u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8574u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A857Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8584u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8590u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A859Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A85A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A85ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A85C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A85D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A85E8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A85F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8604u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A860Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8610u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8620u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8624u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8634u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8650u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8668u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8674u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8690u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8698u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8754u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8760u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A877Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8788u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A87A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A87B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A87B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8874u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8880u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A889Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A88A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A88C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A88D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A88D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8994u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A89A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A89BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A89C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A89E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A89F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A89F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8AB4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8AC0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8ADCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8AE8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B04u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B10u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B18u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B24u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B30u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8B7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C00u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C08u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C28u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C54u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C8Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8C98u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8CA4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8D84u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8DA4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8DB4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8DD0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8DE0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8DFCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E08u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E10u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E14u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E20u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E2Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E44u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E54u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E70u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E74u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E84u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8E9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8EACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8EB4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8EC4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8ED4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8ED8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8EE0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8EF4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F04u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F10u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F1Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F28u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F34u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F3Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F4Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F58u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F70u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8F84u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8FACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8FBCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8FC4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8FD4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8FE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8FE8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A8FF0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9004u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9014u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9020u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A902Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9038u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9044u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A904Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A905Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9068u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9074u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9080u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A908Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9094u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A90A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A90B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A90B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A90C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A90CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A90D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A90E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A90F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A90FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9108u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A911Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A912Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9138u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9144u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9150u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A915Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A916Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9178u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9184u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9190u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A919Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A91A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A91B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A91C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A91CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A91D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A91E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A91F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9200u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A920Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9218u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9224u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A922Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9234u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9244u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9254u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A925Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9268u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A927Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A928Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9298u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A92FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9304u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9314u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9320u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A932Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9338u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9344u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9354u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9360u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A936Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9378u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9384u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9388u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9398u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A93A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A93BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A93D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A93E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A93ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A93F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9404u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9414u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9424u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9430u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9438u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9440u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9450u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9460u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A946Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9478u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A948Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A94ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A94C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A94E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A94F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9500u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A950Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9518u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A952Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9540u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9560u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9574u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9594u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A95BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A95CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A95D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A95DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A95ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A95FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A960Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A961Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9628u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9634u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9648u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9668u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A967Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A969Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A96ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A96BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A96C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A96D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A96E8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A96FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A971Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9730u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9750u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9764u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A976Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9774u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9784u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9794u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A97A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A97C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A97D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A97E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A97F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A97F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9808u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9814u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A981Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9824u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9834u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9844u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9850u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A985Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9870u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9890u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A98A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A98C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A98CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A98D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A98E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A98F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9908u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9928u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9930u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9940u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9950u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9958u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9968u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9974u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A997Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9984u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9994u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A99A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A99B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A99BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A99D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A99E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A04u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A20u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A28u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A34u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9A9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9AB0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9AB8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9AC0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9AC4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9ACCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9AE0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9AF0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B08u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B10u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B24u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B28u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B2Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9B98u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9BA0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9BB4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9BB8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9BCCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9BD8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C04u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C10u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C28u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C3Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C48u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C50u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9C98u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9CC0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9CD0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9CE0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9CE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9CF8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D00u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D08u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D18u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D20u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D30u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D34u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D40u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D4Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D58u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D68u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D70u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D78u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D84u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D88u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D90u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9D9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9DA0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9DA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9DB0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9DDCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9DE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E00u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E18u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E34u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E4Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E58u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E6Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E74u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E84u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E88u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9E94u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9EA4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9EB0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9EBCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9EC8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9ED4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9ED8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F10u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F18u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F24u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F2Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F44u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F54u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F78u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9F90u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9FC8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9FD4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9FDCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9FE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9FECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089A9FF8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA004u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA010u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA024u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA04Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA054u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA0B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA0D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA0F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA100u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA10Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA124u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA134u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA138u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA13Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA180u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA194u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA1A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA1B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA1C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA1E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA1ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA1F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA200u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA208u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA224u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA234u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA238u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA248u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA250u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA25Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA264u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA26Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA278u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA280u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA2B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA2BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA2CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA2D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA2F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA300u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA30Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA318u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA338u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA340u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA344u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA350u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA368u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA378u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA380u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA394u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA39Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA3ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA3B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA3C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA3D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA3DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA3F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA3FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA404u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA41Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA428u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA458u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA4F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA500u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA510u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA51Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA52Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA54Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA58Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA598u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA5B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA5C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA618u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA620u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA624u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA648u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA658u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA660u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA66Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA678u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA67Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA6A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA6B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA6BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA6C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA6D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA6DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA6E8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA6FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA708u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA710u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA71Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA72Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA734u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA748u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA754u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA764u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA76Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA77Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA78Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA79Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA7ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA7B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA7B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA7C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA7E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA7F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA7F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA800u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA80Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA81Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA828u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA838u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA840u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA84Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA85Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA86Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA87Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA88Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA89Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA8ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA8BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA8CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA8DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA8ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA8FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA908u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA928u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA92Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA93Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA944u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA954u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA960u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA964u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA97Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA998u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA9B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA9BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA9D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA9DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AA9F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA0Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA1Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA2Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA44u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA5Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA74u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA78u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAA94u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAAA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAAC4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAAF8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB10u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB20u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB30u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB48u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB50u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB60u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB70u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB78u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAB80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAC34u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAC40u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAC50u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAC60u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAC70u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAC7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAC84u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAC94u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AACA4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AACB0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AACBCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AACD4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AACD8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAD08u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAD50u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAD5Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAD6Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AADB4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AADB8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AADC0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AADE0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AADF0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE00u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE18u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE28u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE40u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE50u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE5Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE70u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE78u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE8Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAE94u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAEA4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAEB8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAED4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAEE0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAEF4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF08u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF28u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF40u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF4Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF88u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAF9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAFA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAFC0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAFC8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAFD8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAFE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AAFF8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB014u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB020u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB02Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB034u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB044u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB060u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB06Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB078u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB09Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB0A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB0D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB0E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB0E8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB0F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB100u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB110u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB124u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB144u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB14Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB154u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB16Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB174u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB184u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB194u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB198u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB1ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB1D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB1D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB1FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB218u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB240u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB254u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB26Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB278u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB28Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB2A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB2BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB2C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB2E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB2F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB300u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB308u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB330u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB338u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB34Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB354u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB378u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB38Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB3A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB3B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB3D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB3D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB3F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB410u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB41Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB428u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB438u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB44Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB45Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB470u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB484u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB490u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB498u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB4A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB4B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB4C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB4ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB500u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB520u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB530u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB534u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB550u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB558u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB580u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB59Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB5C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB5D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB604u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB67Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB688u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB690u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB6A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB6A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB6C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB6C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB6D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB6E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB6F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB704u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB70Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB714u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB73Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB744u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB754u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB75Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB768u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB774u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB780u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB790u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB7ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB7BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB7CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB7D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB7E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB820u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB82Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB834u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB868u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB880u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB8C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB8D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB8ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB8F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB8FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB904u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB930u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB94Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB9B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB9BCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB9CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089AB9DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABA04u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABA2Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABA50u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABA58u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABA78u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABA80u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABA90u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABAD0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABAD8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABAE8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABB10u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABB38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABB54u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABB60u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABB88u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABBA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABBBCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABBFCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABC3Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABC50u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABC5Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABC6Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABC94u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABCACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABCBCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABCC4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABD7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABD98u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABDACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABDB4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABDC0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABDC4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE0Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE48u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE50u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE5Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE6Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE74u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE84u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE8Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABE9Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABEA4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABEACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABEB4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABECCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABED4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABEF0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF3Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF50u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF60u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF70u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABF98u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABFA0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABFA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABFB0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABFBCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABFD0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABFE0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x089ABFF4u, &recomp_unit_0105, "recomp_unit_0105");
}
} // namespace psprecomp
