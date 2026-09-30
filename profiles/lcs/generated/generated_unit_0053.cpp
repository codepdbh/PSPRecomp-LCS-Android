#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0053[4094] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 8, 9, 0, 10, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 20, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 24, 0, 25, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0,
    0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 0, 0, 38,
    0, 0, 0, 39, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49,
    50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 79, 0, 80,
    0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99,
    0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 104, 0, 105, 0, 0, 0, 106, 0, 107,
    0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 111, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0,
    0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0,
    132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 140, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 151, 0, 0, 0, 152,
    0, 153, 0, 0, 154, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0,
    0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 174, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 0, 0, 178, 0, 179,
    0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 195,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0,
    0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    208, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 214,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0,
    220, 0, 221, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 228, 0, 0, 0, 0, 229, 0,
    0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 250,
    0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0,
    0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0,
    273, 0, 0, 274, 0, 0, 275, 0, 0, 276, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0,
    287, 0, 0, 0, 0, 0, 0, 288, 289, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0,
    296, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 303, 0, 304, 0, 0, 305, 0, 0, 306, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 319, 0,
    320, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 328, 0, 329, 0, 330, 0, 0,
    331, 0, 332, 0, 0, 333, 0, 334, 335, 0, 0, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 0, 0, 342, 0, 343, 0, 344, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0,
    352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 354, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359,
    0, 0, 0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372,
    0, 373, 0, 0, 374, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 378, 0, 0, 0, 379, 0, 380, 0, 0, 381, 0, 0, 382,
    0, 0, 383, 0, 0, 384, 385, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0,
    0, 0, 0, 391, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0,
    398, 0, 0, 399, 0, 0, 400, 0, 401, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 407, 0, 408, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0,
    413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 417, 0, 418, 0, 0, 0, 419, 0, 420, 0, 0, 0, 421, 0,
    0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0, 0, 427, 0, 0,
    0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0,
    0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 437, 0, 0, 438, 0, 0, 439, 0, 440, 0, 441, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 450, 0, 451, 0, 452, 0, 0, 0, 453, 0, 454, 0, 455, 0, 456, 0,
    0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461,
    0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 469, 0,
    0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 474,
    0, 0, 0, 0, 0, 475, 0, 476, 0, 477, 0, 0, 478, 0, 479, 0, 0, 480, 0, 481, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 484,
    0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0,
    0, 0, 490, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 495, 0, 0, 0, 496, 0, 497,
    0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502,
    0, 503, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 508, 0, 0, 509, 0, 0, 510, 511, 0, 512, 0, 0, 0, 513, 0,
    0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0, 519,
    0, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524,
    0, 0, 0, 525, 0, 0, 526, 0, 527, 0, 528, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 533, 0, 534, 0, 0,
    535, 536, 0, 537, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 542, 0, 0, 0, 543, 0, 544, 0, 0, 0,
    0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0,
    0, 0, 551, 0, 0, 0, 552, 0, 553, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557,
    0, 558, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561, 0, 562, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 566, 567, 0, 568, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 573, 0, 0, 574, 0, 575, 0, 0,
    0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 581, 0, 0, 582, 0, 583, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 593, 0, 594, 0, 0,
    0, 0, 0, 0, 0, 595, 0, 596, 0, 597, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 600, 0, 601, 0, 0, 0, 0, 0, 602, 0, 603, 0, 604, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0, 608, 0, 609, 0, 610, 0,
    0, 0, 0, 611, 0, 612, 0, 613, 0, 614, 0, 615, 0, 616, 0, 0, 617, 0, 618, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 622, 623, 0,
    624, 0, 625, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0,
    629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 633, 0, 0, 634, 0, 635, 0, 0, 0, 636, 0, 0, 637, 0,
    0, 0, 638, 0, 639, 0, 0, 640, 0, 0, 641, 0, 642, 0, 643, 644, 0, 645, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 648, 0, 0, 649, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 652, 0, 653, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 656, 0, 657, 0, 0, 658, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 663, 0,
    0, 0, 664, 0, 665, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 670, 0,
    671, 0, 672, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675,
    0, 676, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 682, 0, 683, 0, 684, 0, 685, 0,
    0, 0, 686, 0, 0, 687, 0, 688, 0, 689, 0, 0, 690, 0, 0, 691, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 0, 694, 695, 0, 696, 0,
    0, 697, 0, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0,
    0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 708, 0, 0, 709, 0, 0, 0, 710, 0, 711, 0, 0, 712, 0, 0, 713, 0, 0,
    0, 714, 0, 715, 0, 0, 0, 716, 717, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 721, 0, 722, 0, 723, 0, 724, 0, 725, 0, 726,
    0, 0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 729, 0, 730, 0, 0, 0, 731, 0, 0, 732, 0, 733, 0, 734, 0, 735, 0, 736, 0, 0, 0,
    737, 0, 738, 0, 0, 0, 739, 0, 0, 740, 0, 741, 0, 742, 0, 0, 743, 0, 744, 0, 745, 0, 746, 0, 0, 0, 747, 0, 0, 748, 749, 0,
    750, 0, 0, 751, 0, 752, 0, 753, 0, 0, 0, 754, 0, 0, 755, 0, 756, 0, 0, 0, 757, 0, 0, 758, 759, 0, 760, 0, 0, 0, 0, 761,
    0, 762, 0, 0, 763, 0, 0, 764, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 766, 767, 0, 0, 768, 0, 0, 0, 0, 0, 769, 0, 770, 0,
    771, 0, 772, 0, 773, 0, 0, 0, 774, 0, 775, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 777, 0, 778, 0, 0, 779, 0, 780, 0, 781, 0, 0, 782, 0, 783, 0, 784, 0, 785, 786, 0, 0, 787, 0, 0, 788, 0, 0, 0,
    0, 789, 0, 0, 0, 0, 0, 790, 791, 0, 0, 792, 0, 0, 0, 0, 0, 793, 0, 0, 794, 0, 795, 0, 0, 796, 0, 0, 797, 0, 0, 798,
    0, 0, 0, 799, 0, 0, 0, 800, 0, 801, 0, 0, 0, 0, 802, 0, 0, 803, 0, 804, 0, 0, 805, 0, 806, 0, 807, 0, 0, 808, 0, 0,
    809, 0, 810, 0, 0, 0, 811, 0, 0, 812, 0, 813, 814, 0, 0, 815, 0, 0, 816, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 818, 0,
    0, 0, 0, 0, 819, 0, 0, 0, 820, 0, 0, 0, 821, 0, 0, 822, 0, 823, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0,
    0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 828, 0, 829, 0, 0, 0, 830, 0, 0, 0, 0, 0,
    0, 0, 831, 0, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 0, 0, 0, 835, 0, 0, 0, 836, 0, 837, 0, 0, 838,
    0, 839, 0, 840, 0, 0, 0, 841, 0, 0, 842, 0, 0, 843, 0, 0, 844, 845, 0, 846, 0, 0, 0, 0, 0, 847, 0, 0, 848, 0, 0, 849,
    0, 0, 0, 0, 0, 850, 0, 0, 851, 0, 0, 852, 0, 0, 853, 854, 0, 855, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 857, 0, 0, 0,
    0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0, 0, 0, 0, 0, 860, 0, 0, 0, 0, 0, 0, 0, 0, 0, 861,
    0, 862, 0, 863, 0, 0, 0, 864, 865, 0, 0, 0, 866, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 868, 0, 0, 0, 0, 0, 869, 0,
    0, 0, 870, 0, 0, 0, 0, 871, 0, 0, 872, 0, 873, 0, 874, 0, 875, 0, 876, 0, 0, 877, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 878, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0,
    0, 0, 0, 880, 0, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 882,
    0, 0, 883, 0, 0, 0, 884, 0, 0, 885, 0, 886, 0, 887, 0, 0, 0, 888, 0, 889, 0, 0, 890, 891, 0, 0, 892, 0, 893, 0, 0, 894,
    895, 0, 896, 0, 897, 0, 898, 0, 0, 0, 0, 0, 0, 0, 0, 0, 899, 0, 0, 0, 900, 0, 0, 901, 902, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 903, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 904, 0, 0, 0, 0, 0, 0, 0, 905, 0, 0, 0,
    906, 0, 907, 0, 908, 0, 909, 0, 0, 0, 0, 0, 0, 0, 0, 0, 910, 0, 0, 911, 0, 0, 912, 0, 913, 0, 0, 914, 0, 915, 0, 916,
    0, 0, 0, 917, 0, 0, 0, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 919, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 920, 0, 921, 0, 922, 0, 0, 0, 0, 0, 0, 0, 0, 923, 0, 924, 0, 925, 0, 0, 0,
    926, 927, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 928, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 929, 0, 0, 930, 0, 0, 0, 0, 0, 0, 0, 931, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 932,
};
void recomp_unit_0053_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088D8000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0053[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088D8000;
    case 2u: goto L_088D8018;
    case 3u: goto L_088D8020;
    case 4u: goto L_088D8030;
    case 5u: goto L_088D8040;
    case 6u: goto L_088D8050;
    case 7u: goto L_088D8058;
    case 8u: goto L_088D8068;
    case 9u: goto L_088D806C;
    case 10u: goto L_088D8074;
    case 11u: goto L_088D8088;
    case 12u: goto L_088D80AC;
    case 13u: goto L_088D80D4;
    case 14u: goto L_088D80FC;
    case 15u: goto L_088D8120;
    case 16u: goto L_088D8148;
    case 17u: goto L_088D814C;
    case 18u: goto L_088D8168;
    case 19u: goto L_088D8174;
    case 20u: goto L_088D8178;
    case 21u: goto L_088D8198;
    case 22u: goto L_088D81A4;
    case 23u: goto L_088D81AC;
    case 24u: goto L_088D81B4;
    case 25u: goto L_088D81BC;
    case 26u: goto L_088D81C0;
    case 27u: goto L_088D81E0;
    case 28u: goto L_088D81EC;
    case 29u: goto L_088D8204;
    case 30u: goto L_088D8220;
    case 31u: goto L_088D822C;
    case 32u: goto L_088D8240;
    case 33u: goto L_088D824C;
    case 34u: goto L_088D8254;
    case 35u: goto L_088D825C;
    case 36u: goto L_088D8264;
    case 37u: goto L_088D826C;
    case 38u: goto L_088D827C;
    case 39u: goto L_088D828C;
    case 40u: goto L_088D8290;
    case 41u: goto L_088D82CC;
    case 42u: goto L_088D82D8;
    case 43u: goto L_088D82EC;
    case 44u: goto L_088D82F4;
    case 45u: goto L_088D8334;
    case 46u: goto L_088D8340;
    case 47u: goto L_088D8354;
    case 48u: goto L_088D8364;
    case 49u: goto L_088D837C;
    case 50u: goto L_088D8380;
    case 51u: goto L_088D838C;
    case 52u: goto L_088D83A8;
    case 53u: goto L_088D83AC;
    case 54u: goto L_088D83B8;
    case 55u: goto L_088D83C8;
    case 56u: goto L_088D83E4;
    case 57u: goto L_088D8400;
    case 58u: goto L_088D8410;
    case 59u: goto L_088D8428;
    case 60u: goto L_088D843C;
    case 61u: goto L_088D8448;
    case 62u: goto L_088D8460;
    case 63u: goto L_088D8500;
    case 64u: goto L_088D8508;
    case 65u: goto L_088D853C;
    case 66u: goto L_088D8558;
    case 67u: goto L_088D8560;
    case 68u: goto L_088D8568;
    case 69u: goto L_088D8590;
    case 70u: goto L_088D85B8;
    case 71u: goto L_088D85E0;
    case 72u: goto L_088D85FC;
    case 73u: goto L_088D860C;
    case 74u: goto L_088D861C;
    case 75u: goto L_088D8630;
    case 76u: goto L_088D8644;
    case 77u: goto L_088D8664;
    case 78u: goto L_088D866C;
    case 79u: goto L_088D8674;
    case 80u: goto L_088D867C;
    case 81u: goto L_088D8684;
    case 82u: goto L_088D868C;
    case 83u: goto L_088D8694;
    case 84u: goto L_088D86AC;
    case 85u: goto L_088D86C0;
    case 86u: goto L_088D86C8;
    case 87u: goto L_088D86E0;
    case 88u: goto L_088D86E8;
    case 89u: goto L_088D86F4;
    case 90u: goto L_088D8704;
    case 91u: goto L_088D872C;
    case 92u: goto L_088D8744;
    case 93u: goto L_088D874C;
    case 94u: goto L_088D8780;
    case 95u: goto L_088D8790;
    case 96u: goto L_088D87A8;
    case 97u: goto L_088D87D0;
    case 98u: goto L_088D87D8;
    case 99u: goto L_088D87FC;
    case 100u: goto L_088D8814;
    case 101u: goto L_088D881C;
    case 102u: goto L_088D8840;
    case 103u: goto L_088D8858;
    case 104u: goto L_088D885C;
    case 105u: goto L_088D8864;
    case 106u: goto L_088D8874;
    case 107u: goto L_088D887C;
    case 108u: goto L_088D8884;
    case 109u: goto L_088D88D8;
    case 110u: goto L_088D88E0;
    case 111u: goto L_088D88E4;
    case 112u: goto L_088D8908;
    case 113u: goto L_088D8918;
    case 114u: goto L_088D892C;
    case 115u: goto L_088D8930;
    case 116u: goto L_088D8950;
    case 117u: goto L_088D8978;
    case 118u: goto L_088D8984;
    case 119u: goto L_088D8990;
    case 120u: goto L_088D899C;
    case 121u: goto L_088D89AC;
    case 122u: goto L_088D89B0;
    case 123u: goto L_088D89D4;
    case 124u: goto L_088D89DC;
    case 125u: goto L_088D89EC;
    case 126u: goto L_088D89F8;
    case 127u: goto L_088D8A18;
    case 128u: goto L_088D8A3C;
    case 129u: goto L_088D8A5C;
    case 130u: goto L_088D8A64;
    case 131u: goto L_088D8A78;
    case 132u: goto L_088D8A80;
    case 133u: goto L_088D8AA0;
    case 134u: goto L_088D8AB8;
    case 135u: goto L_088D8AC0;
    case 136u: goto L_088D8AE0;
    case 137u: goto L_088D8B00;
    case 138u: goto L_088D8B14;
    case 139u: goto L_088D8B1C;
    case 140u: goto L_088D8B2C;
    case 141u: goto L_088D8B30;
    case 142u: goto L_088D8B40;
    case 143u: goto L_088D8B48;
    case 144u: goto L_088D8B60;
    case 145u: goto L_088D8B90;
    case 146u: goto L_088D8B98;
    case 147u: goto L_088D8BA8;
    case 148u: goto L_088D8BB0;
    case 149u: goto L_088D8BD4;
    case 150u: goto L_088D8BE8;
    case 151u: goto L_088D8BEC;
    case 152u: goto L_088D8BFC;
    case 153u: goto L_088D8C04;
    case 154u: goto L_088D8C10;
    case 155u: goto L_088D8C1C;
    case 156u: goto L_088D8C24;
    case 157u: goto L_088D8C2C;
    case 158u: goto L_088D8C34;
    case 159u: goto L_088D8C48;
    case 160u: goto L_088D8C58;
    case 161u: goto L_088D8C7C;
    case 162u: goto L_088D8CB4;
    case 163u: goto L_088D8CC0;
    case 164u: goto L_088D8CDC;
    case 165u: goto L_088D8CE4;
    case 166u: goto L_088D8CEC;
    case 167u: goto L_088D8D08;
    case 168u: goto L_088D8D40;
    case 169u: goto L_088D8D44;
    case 170u: goto L_088D8D68;
    case 171u: goto L_088D8D78;
    case 172u: goto L_088D8DA0;
    case 173u: goto L_088D8DB4;
    case 174u: goto L_088D8DB8;
    case 175u: goto L_088D8DD4;
    case 176u: goto L_088D8DDC;
    case 177u: goto L_088D8DE4;
    case 178u: goto L_088D8DF4;
    case 179u: goto L_088D8DFC;
    case 180u: goto L_088D8E08;
    case 181u: goto L_088D8E10;
    case 182u: goto L_088D8E18;
    case 183u: goto L_088D8E20;
    case 184u: goto L_088D8E2C;
    case 185u: goto L_088D8E48;
    case 186u: goto L_088D8E50;
    case 187u: goto L_088D8E58;
    case 188u: goto L_088D8E68;
    case 189u: goto L_088D8E84;
    case 190u: goto L_088D8EAC;
    case 191u: goto L_088D8EC4;
    case 192u: goto L_088D8ECC;
    case 193u: goto L_088D8EE4;
    case 194u: goto L_088D8EEC;
    case 195u: goto L_088D8EFC;
    case 196u: goto L_088D8F20;
    case 197u: goto L_088D8F38;
    case 198u: goto L_088D8F40;
    case 199u: goto L_088D8F50;
    case 200u: goto L_088D8F5C;
    case 201u: goto L_088D8F74;
    case 202u: goto L_088D8F8C;
    case 203u: goto L_088D8F94;
    case 204u: goto L_088D8F9C;
    case 205u: goto L_088D8FA8;
    case 206u: goto L_088D8FC8;
    case 207u: goto L_088D8FE8;
    case 208u: goto L_088D9000;
    case 209u: goto L_088D9008;
    case 210u: goto L_088D9018;
    case 211u: goto L_088D9034;
    case 212u: goto L_088D905C;
    case 213u: goto L_088D9074;
    case 214u: goto L_088D907C;
    case 215u: goto L_088D90A4;
    case 216u: goto L_088D90B8;
    case 217u: goto L_088D90BC;
    case 218u: goto L_088D90CC;
    case 219u: goto L_088D90F4;
    case 220u: goto L_088D9100;
    case 221u: goto L_088D9108;
    case 222u: goto L_088D9110;
    case 223u: goto L_088D911C;
    case 224u: goto L_088D915C;
    case 225u: goto L_088D91B8;
    case 226u: goto L_088D91C4;
    case 227u: goto L_088D91E0;
    case 228u: goto L_088D91E4;
    case 229u: goto L_088D91F8;
    case 230u: goto L_088D9208;
    case 231u: goto L_088D9218;
    case 232u: goto L_088D9220;
    case 233u: goto L_088D9228;
    case 234u: goto L_088D9230;
    case 235u: goto L_088D923C;
    case 236u: goto L_088D9244;
    case 237u: goto L_088D924C;
    case 238u: goto L_088D9254;
    case 239u: goto L_088D92AC;
    case 240u: goto L_088D92D4;
    case 241u: goto L_088D92DC;
    case 242u: goto L_088D92F4;
    case 243u: goto L_088D9314;
    case 244u: goto L_088D9324;
    case 245u: goto L_088D932C;
    case 246u: goto L_088D9330;
    case 247u: goto L_088D9344;
    case 248u: goto L_088D9364;
    case 249u: goto L_088D9374;
    case 250u: goto L_088D937C;
    case 251u: goto L_088D9384;
    case 252u: goto L_088D938C;
    case 253u: goto L_088D939C;
    case 254u: goto L_088D93A8;
    case 255u: goto L_088D93B8;
    case 256u: goto L_088D93C8;
    case 257u: goto L_088D93D0;
    case 258u: goto L_088D93F0;
    case 259u: goto L_088D9418;
    case 260u: goto L_088D9434;
    case 261u: goto L_088D943C;
    case 262u: goto L_088D9444;
    case 263u: goto L_088D9454;
    case 264u: goto L_088D9460;
    case 265u: goto L_088D9470;
    case 266u: goto L_088D9484;
    case 267u: goto L_088D94A0;
    case 268u: goto L_088D94A8;
    case 269u: goto L_088D94BC;
    case 270u: goto L_088D94C4;
    case 271u: goto L_088D94E0;
    case 272u: goto L_088D94F0;
    case 273u: goto L_088D9500;
    case 274u: goto L_088D950C;
    case 275u: goto L_088D9518;
    case 276u: goto L_088D9524;
    case 277u: goto L_088D9528;
    case 278u: goto L_088D9530;
    case 279u: goto L_088D9568;
    case 280u: goto L_088D9584;
    case 281u: goto L_088D95B0;
    case 282u: goto L_088D95BC;
    case 283u: goto L_088D95CC;
    case 284u: goto L_088D95D4;
    case 285u: goto L_088D95F0;
    case 286u: goto L_088D95F8;
    case 287u: goto L_088D9600;
    case 288u: goto L_088D961C;
    case 289u: goto L_088D9620;
    case 290u: goto L_088D962C;
    case 291u: goto L_088D963C;
    case 292u: goto L_088D964C;
    case 293u: goto L_088D965C;
    case 294u: goto L_088D9668;
    case 295u: goto L_088D9674;
    case 296u: goto L_088D9680;
    case 297u: goto L_088D9684;
    case 298u: goto L_088D968C;
    case 299u: goto L_088D96C4;
    case 300u: goto L_088D96E0;
    case 301u: goto L_088D970C;
    case 302u: goto L_088D9718;
    case 303u: goto L_088D9728;
    case 304u: goto L_088D9730;
    case 305u: goto L_088D973C;
    case 306u: goto L_088D9748;
    case 307u: goto L_088D9750;
    case 308u: goto L_088D975C;
    case 309u: goto L_088D9774;
    case 310u: goto L_088D9780;
    case 311u: goto L_088D9834;
    case 312u: goto L_088D986C;
    case 313u: goto L_088D9874;
    case 314u: goto L_088D98B8;
    case 315u: goto L_088D98C0;
    case 316u: goto L_088D98C8;
    case 317u: goto L_088D98E8;
    case 318u: goto L_088D98F0;
    case 319u: goto L_088D98F8;
    case 320u: goto L_088D9900;
    case 321u: goto L_088D990C;
    case 322u: goto L_088D9918;
    case 323u: goto L_088D9924;
    case 324u: goto L_088D9930;
    case 325u: goto L_088D9938;
    case 326u: goto L_088D9950;
    case 327u: goto L_088D995C;
    case 328u: goto L_088D9964;
    case 329u: goto L_088D996C;
    case 330u: goto L_088D9974;
    case 331u: goto L_088D9980;
    case 332u: goto L_088D9988;
    case 333u: goto L_088D9994;
    case 334u: goto L_088D999C;
    case 335u: goto L_088D99A0;
    case 336u: goto L_088D99B0;
    case 337u: goto L_088D99B8;
    case 338u: goto L_088D99C0;
    case 339u: goto L_088D99C8;
    case 340u: goto L_088D99D0;
    case 341u: goto L_088D99D8;
    case 342u: goto L_088D99E8;
    case 343u: goto L_088D99F0;
    case 344u: goto L_088D99F8;
    case 345u: goto L_088D9A00;
    case 346u: goto L_088D9A28;
    case 347u: goto L_088D9A38;
    case 348u: goto L_088D9A4C;
    case 349u: goto L_088D9A60;
    case 350u: goto L_088D9A6C;
    case 351u: goto L_088D9A74;
    case 352u: goto L_088D9A80;
    case 353u: goto L_088D9AA4;
    case 354u: goto L_088D9AA8;
    case 355u: goto L_088D9ABC;
    case 356u: goto L_088D9ACC;
    case 357u: goto L_088D9ADC;
    case 358u: goto L_088D9AEC;
    case 359u: goto L_088D9AFC;
    case 360u: goto L_088D9B0C;
    case 361u: goto L_088D9B14;
    case 362u: goto L_088D9B1C;
    case 363u: goto L_088D9B24;
    case 364u: goto L_088D9B2C;
    case 365u: goto L_088D9B38;
    case 366u: goto L_088D9B40;
    case 367u: goto L_088D9B50;
    case 368u: goto L_088D9B5C;
    case 369u: goto L_088D9B64;
    case 370u: goto L_088D9B6C;
    case 371u: goto L_088D9B74;
    case 372u: goto L_088D9B7C;
    case 373u: goto L_088D9B84;
    case 374u: goto L_088D9B90;
    case 375u: goto L_088D9B9C;
    case 376u: goto L_088D9BA4;
    case 377u: goto L_088D9BC8;
    case 378u: goto L_088D9BCC;
    case 379u: goto L_088D9BDC;
    case 380u: goto L_088D9BE4;
    case 381u: goto L_088D9BF0;
    case 382u: goto L_088D9BFC;
    case 383u: goto L_088D9C08;
    case 384u: goto L_088D9C14;
    case 385u: goto L_088D9C18;
    case 386u: goto L_088D9C20;
    case 387u: goto L_088D9C30;
    case 388u: goto L_088D9C40;
    case 389u: goto L_088D9C50;
    case 390u: goto L_088D9C6C;
    case 391u: goto L_088D9C8C;
    case 392u: goto L_088D9C94;
    case 393u: goto L_088D9CA0;
    case 394u: goto L_088D9CC0;
    case 395u: goto L_088D9CD0;
    case 396u: goto L_088D9CE8;
    case 397u: goto L_088D9CF8;
    case 398u: goto L_088D9D00;
    case 399u: goto L_088D9D0C;
    case 400u: goto L_088D9D18;
    case 401u: goto L_088D9D20;
    case 402u: goto L_088D9D28;
    case 403u: goto L_088D9D34;
    case 404u: goto L_088D9D5C;
    case 405u: goto L_088D9D70;
    case 406u: goto L_088D9D9C;
    case 407u: goto L_088D9DA8;
    case 408u: goto L_088D9DB0;
    case 409u: goto L_088D9DBC;
    case 410u: goto L_088D9DC4;
    case 411u: goto L_088D9DDC;
    case 412u: goto L_088D9DF8;
    case 413u: goto L_088D9E00;
    case 414u: goto L_088D9E10;
    case 415u: goto L_088D9E28;
    case 416u: goto L_088D9E40;
    case 417u: goto L_088D9E48;
    case 418u: goto L_088D9E50;
    case 419u: goto L_088D9E60;
    case 420u: goto L_088D9E68;
    case 421u: goto L_088D9E78;
    case 422u: goto L_088D9E84;
    case 423u: goto L_088D9EA4;
    case 424u: goto L_088D9EBC;
    case 425u: goto L_088D9EDC;
    case 426u: goto L_088D9EE4;
    case 427u: goto L_088D9EF4;
    case 428u: goto L_088D9F10;
    case 429u: goto L_088D9F2C;
    case 430u: goto L_088D9F34;
    case 431u: goto L_088D9F54;
    case 432u: goto L_088D9F60;
    case 433u: goto L_088D9F6C;
    case 434u: goto L_088D9F78;
    case 435u: goto L_088D9F90;
    case 436u: goto L_088D9FA0;
    case 437u: goto L_088D9FA8;
    case 438u: goto L_088D9FB4;
    case 439u: goto L_088D9FC0;
    case 440u: goto L_088D9FC8;
    case 441u: goto L_088D9FD0;
    case 442u: goto L_088D9FDC;
    case 443u: goto L_088D9FF0;
    case 444u: goto L_088DA01C;
    case 445u: goto L_088DA028;
    case 446u: goto L_088DA038;
    case 447u: goto L_088DA06C;
    case 448u: goto L_088DA0A0;
    case 449u: goto L_088DA0B8;
    case 450u: goto L_088DA0C0;
    case 451u: goto L_088DA0C8;
    case 452u: goto L_088DA0D0;
    case 453u: goto L_088DA0E0;
    case 454u: goto L_088DA0E8;
    case 455u: goto L_088DA0F0;
    case 456u: goto L_088DA0F8;
    case 457u: goto L_088DA10C;
    case 458u: goto L_088DA114;
    case 459u: goto L_088DA154;
    case 460u: goto L_088DA16C;
    case 461u: goto L_088DA17C;
    case 462u: goto L_088DA1A0;
    case 463u: goto L_088DA1AC;
    case 464u: goto L_088DA1B4;
    case 465u: goto L_088DA1C0;
    case 466u: goto L_088DA1C8;
    case 467u: goto L_088DA1E4;
    case 468u: goto L_088DA1F0;
    case 469u: goto L_088DA1F8;
    case 470u: goto L_088DA20C;
    case 471u: goto L_088DA224;
    case 472u: goto L_088DA260;
    case 473u: goto L_088DA274;
    case 474u: goto L_088DA27C;
    case 475u: goto L_088DA294;
    case 476u: goto L_088DA29C;
    case 477u: goto L_088DA2A4;
    case 478u: goto L_088DA2B0;
    case 479u: goto L_088DA2B8;
    case 480u: goto L_088DA2C4;
    case 481u: goto L_088DA2CC;
    case 482u: goto L_088DA2D8;
    case 483u: goto L_088DA2E8;
    case 484u: goto L_088DA2FC;
    case 485u: goto L_088DA314;
    case 486u: goto L_088DA328;
    case 487u: goto L_088DA334;
    case 488u: goto L_088DA340;
    case 489u: goto L_088DA374;
    case 490u: goto L_088DA388;
    case 491u: goto L_088DA390;
    case 492u: goto L_088DA3A4;
    case 493u: goto L_088DA3D4;
    case 494u: goto L_088DA3DC;
    case 495u: goto L_088DA3E4;
    case 496u: goto L_088DA3F4;
    case 497u: goto L_088DA3FC;
    case 498u: goto L_088DA414;
    case 499u: goto L_088DA41C;
    case 500u: goto L_088DA434;
    case 501u: goto L_088DA470;
    case 502u: goto L_088DA47C;
    case 503u: goto L_088DA484;
    case 504u: goto L_088DA48C;
    case 505u: goto L_088DA494;
    case 506u: goto L_088DA4B0;
    case 507u: goto L_088DA4B8;
    case 508u: goto L_088DA4C4;
    case 509u: goto L_088DA4D0;
    case 510u: goto L_088DA4DC;
    case 511u: goto L_088DA4E0;
    case 512u: goto L_088DA4E8;
    case 513u: goto L_088DA4F8;
    case 514u: goto L_088DA510;
    case 515u: goto L_088DA518;
    case 516u: goto L_088DA530;
    case 517u: goto L_088DA56C;
    case 518u: goto L_088DA574;
    case 519u: goto L_088DA57C;
    case 520u: goto L_088DA58C;
    case 521u: goto L_088DA5A4;
    case 522u: goto L_088DA5AC;
    case 523u: goto L_088DA5CC;
    case 524u: goto L_088DA5FC;
    case 525u: goto L_088DA60C;
    case 526u: goto L_088DA618;
    case 527u: goto L_088DA620;
    case 528u: goto L_088DA628;
    case 529u: goto L_088DA630;
    case 530u: goto L_088DA63C;
    case 531u: goto L_088DA65C;
    case 532u: goto L_088DA668;
    case 533u: goto L_088DA66C;
    case 534u: goto L_088DA674;
    case 535u: goto L_088DA680;
    case 536u: goto L_088DA684;
    case 537u: goto L_088DA68C;
    case 538u: goto L_088DA69C;
    case 539u: goto L_088DA6A4;
    case 540u: goto L_088DA6C0;
    case 541u: goto L_088DA6D0;
    case 542u: goto L_088DA6D8;
    case 543u: goto L_088DA6E8;
    case 544u: goto L_088DA6F0;
    case 545u: goto L_088DA704;
    case 546u: goto L_088DA734;
    case 547u: goto L_088DA73C;
    case 548u: goto L_088DA74C;
    case 549u: goto L_088DA75C;
    case 550u: goto L_088DA778;
    case 551u: goto L_088DA788;
    case 552u: goto L_088DA798;
    case 553u: goto L_088DA7A0;
    case 554u: goto L_088DA7B0;
    case 555u: goto L_088DA7B8;
    case 556u: goto L_088DA7CC;
    case 557u: goto L_088DA7FC;
    case 558u: goto L_088DA804;
    case 559u: goto L_088DA80C;
    case 560u: goto L_088DA81C;
    case 561u: goto L_088DA82C;
    case 562u: goto L_088DA834;
    case 563u: goto L_088DA844;
    case 564u: goto L_088DA84C;
    case 565u: goto L_088DA860;
    case 566u: goto L_088DA890;
    case 567u: goto L_088DA894;
    case 568u: goto L_088DA89C;
    case 569u: goto L_088DA8A8;
    case 570u: goto L_088DA8B0;
    case 571u: goto L_088DA8CC;
    case 572u: goto L_088DA8D8;
    case 573u: goto L_088DA8E0;
    case 574u: goto L_088DA8EC;
    case 575u: goto L_088DA8F4;
    case 576u: goto L_088DA908;
    case 577u: goto L_088DA910;
    case 578u: goto L_088DA928;
    case 579u: goto L_088DA964;
    case 580u: goto L_088DA96C;
    case 581u: goto L_088DA998;
    case 582u: goto L_088DA9A4;
    case 583u: goto L_088DA9AC;
    case 584u: goto L_088DA9B8;
    case 585u: goto L_088DA9C0;
    case 586u: goto L_088DA9D8;
    case 587u: goto L_088DAA14;
    case 588u: goto L_088DAA1C;
    case 589u: goto L_088DAA28;
    case 590u: goto L_088DAA34;
    case 591u: goto L_088DAA40;
    case 592u: goto L_088DAA4C;
    case 593u: goto L_088DAA6C;
    case 594u: goto L_088DAA74;
    case 595u: goto L_088DAA94;
    case 596u: goto L_088DAA9C;
    case 597u: goto L_088DAAA4;
    case 598u: goto L_088DAAAC;
    case 599u: goto L_088DAAD4;
    case 600u: goto L_088DAB08;
    case 601u: goto L_088DAB10;
    case 602u: goto L_088DAB28;
    case 603u: goto L_088DAB30;
    case 604u: goto L_088DAB38;
    case 605u: goto L_088DAB40;
    case 606u: goto L_088DAB50;
    case 607u: goto L_088DAB60;
    case 608u: goto L_088DAB68;
    case 609u: goto L_088DAB70;
    case 610u: goto L_088DAB78;
    case 611u: goto L_088DAB8C;
    case 612u: goto L_088DAB94;
    case 613u: goto L_088DAB9C;
    case 614u: goto L_088DABA4;
    case 615u: goto L_088DABAC;
    case 616u: goto L_088DABB4;
    case 617u: goto L_088DABC0;
    case 618u: goto L_088DABC8;
    case 619u: goto L_088DABD0;
    case 620u: goto L_088DABDC;
    case 621u: goto L_088DABE8;
    case 622u: goto L_088DABF4;
    case 623u: goto L_088DABF8;
    case 624u: goto L_088DAC00;
    case 625u: goto L_088DAC08;
    case 626u: goto L_088DAC14;
    case 627u: goto L_088DAC3C;
    case 628u: goto L_088DAC64;
    case 629u: goto L_088DAC80;
    case 630u: goto L_088DAC94;
    case 631u: goto L_088DACAC;
    case 632u: goto L_088DACB4;
    case 633u: goto L_088DACC8;
    case 634u: goto L_088DACD4;
    case 635u: goto L_088DACDC;
    case 636u: goto L_088DACEC;
    case 637u: goto L_088DACF8;
    case 638u: goto L_088DAD08;
    case 639u: goto L_088DAD10;
    case 640u: goto L_088DAD1C;
    case 641u: goto L_088DAD28;
    case 642u: goto L_088DAD30;
    case 643u: goto L_088DAD38;
    case 644u: goto L_088DAD3C;
    case 645u: goto L_088DAD44;
    case 646u: goto L_088DAD58;
    case 647u: goto L_088DAD60;
    case 648u: goto L_088DAD90;
    case 649u: goto L_088DAD9C;
    case 650u: goto L_088DADAC;
    case 651u: goto L_088DADB8;
    case 652u: goto L_088DADC8;
    case 653u: goto L_088DADD0;
    case 654u: goto L_088DADDC;
    case 655u: goto L_088DADEC;
    case 656u: goto L_088DAE14;
    case 657u: goto L_088DAE1C;
    case 658u: goto L_088DAE28;
    case 659u: goto L_088DAE3C;
    case 660u: goto L_088DAE44;
    case 661u: goto L_088DAE58;
    case 662u: goto L_088DAE64;
    case 663u: goto L_088DAE78;
    case 664u: goto L_088DAE88;
    case 665u: goto L_088DAE90;
    case 666u: goto L_088DAE98;
    case 667u: goto L_088DAEAC;
    case 668u: goto L_088DAEC0;
    case 669u: goto L_088DAED8;
    case 670u: goto L_088DAEF8;
    case 671u: goto L_088DAF00;
    case 672u: goto L_088DAF08;
    case 673u: goto L_088DAF10;
    case 674u: goto L_088DAF3C;
    case 675u: goto L_088DAF7C;
    case 676u: goto L_088DAF84;
    case 677u: goto L_088DAF90;
    case 678u: goto L_088DAFA0;
    case 679u: goto L_088DAFB0;
    case 680u: goto L_088DAFC0;
    case 681u: goto L_088DAFD0;
    case 682u: goto L_088DAFE0;
    case 683u: goto L_088DAFE8;
    case 684u: goto L_088DAFF0;
    case 685u: goto L_088DAFF8;
    case 686u: goto L_088DB008;
    case 687u: goto L_088DB014;
    case 688u: goto L_088DB01C;
    case 689u: goto L_088DB024;
    case 690u: goto L_088DB030;
    case 691u: goto L_088DB03C;
    case 692u: goto L_088DB04C;
    case 693u: goto L_088DB054;
    case 694u: goto L_088DB06C;
    case 695u: goto L_088DB070;
    case 696u: goto L_088DB078;
    case 697u: goto L_088DB084;
    case 698u: goto L_088DB0A0;
    case 699u: goto L_088DB0AC;
    case 700u: goto L_088DB0CC;
    case 701u: goto L_088DB0E0;
    case 702u: goto L_088DB0EC;
    case 703u: goto L_088DB104;
    case 704u: goto L_088DB130;
    case 705u: goto L_088DB188;
    case 706u: goto L_088DB1A0;
    case 707u: goto L_088DB1A8;
    case 708u: goto L_088DB1B8;
    case 709u: goto L_088DB1C4;
    case 710u: goto L_088DB1D4;
    case 711u: goto L_088DB1DC;
    case 712u: goto L_088DB1E8;
    case 713u: goto L_088DB1F4;
    case 714u: goto L_088DB204;
    case 715u: goto L_088DB20C;
    case 716u: goto L_088DB21C;
    case 717u: goto L_088DB220;
    case 718u: goto L_088DB228;
    case 719u: goto L_088DB244;
    case 720u: goto L_088DB24C;
    case 721u: goto L_088DB254;
    case 722u: goto L_088DB25C;
    case 723u: goto L_088DB264;
    case 724u: goto L_088DB26C;
    case 725u: goto L_088DB274;
    case 726u: goto L_088DB27C;
    case 727u: goto L_088DB288;
    case 728u: goto L_088DB2A4;
    case 729u: goto L_088DB2AC;
    case 730u: goto L_088DB2B4;
    case 731u: goto L_088DB2C4;
    case 732u: goto L_088DB2D0;
    case 733u: goto L_088DB2D8;
    case 734u: goto L_088DB2E0;
    case 735u: goto L_088DB2E8;
    case 736u: goto L_088DB2F0;
    case 737u: goto L_088DB300;
    case 738u: goto L_088DB308;
    case 739u: goto L_088DB318;
    case 740u: goto L_088DB324;
    case 741u: goto L_088DB32C;
    case 742u: goto L_088DB334;
    case 743u: goto L_088DB340;
    case 744u: goto L_088DB348;
    case 745u: goto L_088DB350;
    case 746u: goto L_088DB358;
    case 747u: goto L_088DB368;
    case 748u: goto L_088DB374;
    case 749u: goto L_088DB378;
    case 750u: goto L_088DB380;
    case 751u: goto L_088DB38C;
    case 752u: goto L_088DB394;
    case 753u: goto L_088DB39C;
    case 754u: goto L_088DB3AC;
    case 755u: goto L_088DB3B8;
    case 756u: goto L_088DB3C0;
    case 757u: goto L_088DB3D0;
    case 758u: goto L_088DB3DC;
    case 759u: goto L_088DB3E0;
    case 760u: goto L_088DB3E8;
    case 761u: goto L_088DB3FC;
    case 762u: goto L_088DB404;
    case 763u: goto L_088DB410;
    case 764u: goto L_088DB41C;
    case 765u: goto L_088DB430;
    case 766u: goto L_088DB448;
    case 767u: goto L_088DB44C;
    case 768u: goto L_088DB458;
    case 769u: goto L_088DB470;
    case 770u: goto L_088DB478;
    case 771u: goto L_088DB480;
    case 772u: goto L_088DB488;
    case 773u: goto L_088DB490;
    case 774u: goto L_088DB4A0;
    case 775u: goto L_088DB4A8;
    case 776u: goto L_088DB4C0;
    case 777u: goto L_088DB50C;
    case 778u: goto L_088DB514;
    case 779u: goto L_088DB520;
    case 780u: goto L_088DB528;
    case 781u: goto L_088DB530;
    case 782u: goto L_088DB53C;
    case 783u: goto L_088DB544;
    case 784u: goto L_088DB54C;
    case 785u: goto L_088DB554;
    case 786u: goto L_088DB558;
    case 787u: goto L_088DB564;
    case 788u: goto L_088DB570;
    case 789u: goto L_088DB584;
    case 790u: goto L_088DB59C;
    case 791u: goto L_088DB5A0;
    case 792u: goto L_088DB5AC;
    case 793u: goto L_088DB5C4;
    case 794u: goto L_088DB5D0;
    case 795u: goto L_088DB5D8;
    case 796u: goto L_088DB5E4;
    case 797u: goto L_088DB5F0;
    case 798u: goto L_088DB5FC;
    case 799u: goto L_088DB60C;
    case 800u: goto L_088DB61C;
    case 801u: goto L_088DB624;
    case 802u: goto L_088DB638;
    case 803u: goto L_088DB644;
    case 804u: goto L_088DB64C;
    case 805u: goto L_088DB658;
    case 806u: goto L_088DB660;
    case 807u: goto L_088DB668;
    case 808u: goto L_088DB674;
    case 809u: goto L_088DB680;
    case 810u: goto L_088DB688;
    case 811u: goto L_088DB698;
    case 812u: goto L_088DB6A4;
    case 813u: goto L_088DB6AC;
    case 814u: goto L_088DB6B0;
    case 815u: goto L_088DB6BC;
    case 816u: goto L_088DB6C8;
    case 817u: goto L_088DB6D8;
    case 818u: goto L_088DB6F8;
    case 819u: goto L_088DB710;
    case 820u: goto L_088DB720;
    case 821u: goto L_088DB730;
    case 822u: goto L_088DB73C;
    case 823u: goto L_088DB744;
    case 824u: goto L_088DB74C;
    case 825u: goto L_088DB770;
    case 826u: goto L_088DB794;
    case 827u: goto L_088DB7B4;
    case 828u: goto L_088DB7D0;
    case 829u: goto L_088DB7D8;
    case 830u: goto L_088DB7E8;
    case 831u: goto L_088DB808;
    case 832u: goto L_088DB820;
    case 833u: goto L_088DB830;
    case 834u: goto L_088DB844;
    case 835u: goto L_088DB858;
    case 836u: goto L_088DB868;
    case 837u: goto L_088DB870;
    case 838u: goto L_088DB87C;
    case 839u: goto L_088DB884;
    case 840u: goto L_088DB88C;
    case 841u: goto L_088DB89C;
    case 842u: goto L_088DB8A8;
    case 843u: goto L_088DB8B4;
    case 844u: goto L_088DB8C0;
    case 845u: goto L_088DB8C4;
    case 846u: goto L_088DB8CC;
    case 847u: goto L_088DB8E4;
    case 848u: goto L_088DB8F0;
    case 849u: goto L_088DB8FC;
    case 850u: goto L_088DB914;
    case 851u: goto L_088DB920;
    case 852u: goto L_088DB92C;
    case 853u: goto L_088DB938;
    case 854u: goto L_088DB93C;
    case 855u: goto L_088DB944;
    case 856u: goto L_088DB964;
    case 857u: goto L_088DB970;
    case 858u: goto L_088DB994;
    case 859u: goto L_088DB9B8;
    case 860u: goto L_088DB9D4;
    case 861u: goto L_088DB9FC;
    case 862u: goto L_088DBA04;
    case 863u: goto L_088DBA0C;
    case 864u: goto L_088DBA1C;
    case 865u: goto L_088DBA20;
    case 866u: goto L_088DBA30;
    case 867u: goto L_088DBA40;
    case 868u: goto L_088DBA60;
    case 869u: goto L_088DBA78;
    case 870u: goto L_088DBA88;
    case 871u: goto L_088DBA9C;
    case 872u: goto L_088DBAA8;
    case 873u: goto L_088DBAB0;
    case 874u: goto L_088DBAB8;
    case 875u: goto L_088DBAC0;
    case 876u: goto L_088DBAC8;
    case 877u: goto L_088DBAD4;
    case 878u: goto L_088DBB04;
    case 879u: goto L_088DBB6C;
    case 880u: goto L_088DBB8C;
    case 881u: goto L_088DBBB0;
    case 882u: goto L_088DBBFC;
    case 883u: goto L_088DBC08;
    case 884u: goto L_088DBC18;
    case 885u: goto L_088DBC24;
    case 886u: goto L_088DBC2C;
    case 887u: goto L_088DBC34;
    case 888u: goto L_088DBC44;
    case 889u: goto L_088DBC4C;
    case 890u: goto L_088DBC58;
    case 891u: goto L_088DBC5C;
    case 892u: goto L_088DBC68;
    case 893u: goto L_088DBC70;
    case 894u: goto L_088DBC7C;
    case 895u: goto L_088DBC80;
    case 896u: goto L_088DBC88;
    case 897u: goto L_088DBC90;
    case 898u: goto L_088DBC98;
    case 899u: goto L_088DBCC0;
    case 900u: goto L_088DBCD0;
    case 901u: goto L_088DBCDC;
    case 902u: goto L_088DBCE0;
    case 903u: goto L_088DBD18;
    case 904u: goto L_088DBD50;
    case 905u: goto L_088DBD70;
    case 906u: goto L_088DBD80;
    case 907u: goto L_088DBD88;
    case 908u: goto L_088DBD90;
    case 909u: goto L_088DBD98;
    case 910u: goto L_088DBDC0;
    case 911u: goto L_088DBDCC;
    case 912u: goto L_088DBDD8;
    case 913u: goto L_088DBDE0;
    case 914u: goto L_088DBDEC;
    case 915u: goto L_088DBDF4;
    case 916u: goto L_088DBDFC;
    case 917u: goto L_088DBE0C;
    case 918u: goto L_088DBE30;
    case 919u: goto L_088DBE70;
    case 920u: goto L_088DBEAC;
    case 921u: goto L_088DBEB4;
    case 922u: goto L_088DBEBC;
    case 923u: goto L_088DBEE0;
    case 924u: goto L_088DBEE8;
    case 925u: goto L_088DBEF0;
    case 926u: goto L_088DBF00;
    case 927u: goto L_088DBF04;
    case 928u: goto L_088DBF3C;
    case 929u: goto L_088DBF98;
    case 930u: goto L_088DBFA4;
    case 931u: goto L_088DBFC4;
    case 932u: goto L_088DBFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088D8000:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8088;
      }
      goto L_088D8018;
    }
L_088D8018:
    ctx.gpr[31] = (0x088D8020u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8020u) goto L_088D8020;
    return;
L_088D8020:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 202u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D8058;
      }
      goto L_088D8030;
    }
L_088D8030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8058;
      }
      goto L_088D8040;
    }
L_088D8040:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(708)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D8050u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x088D8050u) goto L_088D8050;
    return;
L_088D8050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] << 6u);
      if (branch_taken) {
          goto L_088D806C;
      }
      goto L_088D8058;
    }
L_088D8058:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(692)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D8068u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x088D8068u) goto L_088D8068;
    return;
L_088D8068:
    ctx.gpr[16] = (ctx.gpr[2] << 6u);
    goto L_088D806C;
L_088D806C:
    ctx.gpr[31] = (0x088D8074u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x088D8074u) goto L_088D8074;
    return;
L_088D8074:
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D8088u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 643u, 0x088B7F1Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8088u) goto L_088D8088;
    return;
L_088D8088:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088D80ACu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 186u, 0x088550F0u>(ctx, &aot_mem) && ctx.pc == 0x088D80ACu) goto L_088D80AC;
    return;
L_088D80AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 12u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D814C;
    }
    goto L_088D80D4;
L_088D80D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 13u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D814C;
    }
    goto L_088D80FC;
L_088D80FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == ctx.gpr[30]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D814C;
    }
    goto L_088D8120;
L_088D8120:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 14u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D8178;
    }
    goto L_088D8148;
L_088D8148:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    goto L_088D814C;
L_088D814C:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088D8168u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8168u) goto L_088D8168;
    return;
L_088D8168:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x088D8174u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 565u, 0x0899F0E4u>(ctx, &aot_mem) && ctx.pc == 0x088D8174u) goto L_088D8174;
    return;
L_088D8174:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    goto L_088D8178;
L_088D8178:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D81C0;
    }
    goto L_088D8198;
L_088D8198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D81C0;
    }
    goto L_088D81A4;
L_088D81A4:
    ctx.gpr[31] = (0x088D81ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088D81ACu) goto L_088D81AC;
    return;
L_088D81AC:
    if (ctx.gpr[2] == ctx.gpr[19]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D81C0;
    }
    goto L_088D81B4;
L_088D81B4:
    ctx.gpr[31] = (0x088D81BCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 632u, 0x088874E0u>(ctx, &aot_mem) && ctx.pc == 0x088D81BCu) goto L_088D81BC;
    return;
L_088D81BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    goto L_088D81C0;
L_088D81C0:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088D8380;
      }
      goto L_088D81E0;
    }
L_088D81E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D822C;
      }
      goto L_088D81EC;
    }
L_088D81EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(296)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D8220;
      }
      goto L_088D8204;
    }
L_088D8204:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 2u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D822C;
      }
      goto L_088D8220;
    }
L_088D8220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    goto L_088D822C;
L_088D822C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8354;
      }
      goto L_088D8240;
    }
L_088D8240:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088D8354;
      }
      goto L_088D824C;
    }
L_088D824C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088D82F4;
      }
      goto L_088D8254;
    }
L_088D8254:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D82F4;
      }
      goto L_088D825C;
    }
L_088D825C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088D82F4;
      }
      goto L_088D8264;
    }
L_088D8264:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088D82F4;
      }
      goto L_088D826C;
    }
L_088D826C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 201u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D8290;
    }
    goto L_088D827C;
L_088D827C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 203u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D82EC;
      }
      goto L_088D828C;
    }
L_088D828C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    goto L_088D8290;
L_088D8290:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[6] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7827));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088D82D8;
      }
      goto L_088D82CC;
    }
L_088D82CC:
    ctx.gpr[6] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088D82D8;
L_088D82D8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D82ECu);
    ctx.gpr[6] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088D82ECu) goto L_088D82EC;
    return;
L_088D82EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8354;
      }
      goto L_088D82F4;
    }
L_088D82F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[6] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7827));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088D8340;
      }
      goto L_088D8334;
    }
L_088D8334:
    ctx.gpr[6] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088D8340;
L_088D8340:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D8354u);
    ctx.gpr[6] = (0u | 50u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8354u) goto L_088D8354;
    return;
L_088D8354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D837C;
      }
      goto L_088D8364;
    }
L_088D8364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8380;
      }
      goto L_088D837C;
    }
L_088D837C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), 0u);
    goto L_088D8380;
L_088D8380:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_088D83AC;
      }
      goto L_088D838C;
    }
L_088D838C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D83AC;
      }
      goto L_088D83A8;
    }
L_088D83A8:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D83AC;
L_088D83AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088D8558;
      }
      goto L_088D83B8;
    }
L_088D83B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8558;
      }
      goto L_088D83C8;
    }
L_088D83C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D8558;
      }
      goto L_088D83E4;
    }
L_088D83E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D8558;
      }
      goto L_088D8400;
    }
L_088D8400:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8558;
      }
      goto L_088D8410;
    }
L_088D8410:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088D8428u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8428u) goto L_088D8428;
    return;
L_088D8428:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088D843Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x088D843Cu) goto L_088D843C;
    return;
L_088D843C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D8448u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x088D8448u) goto L_088D8448;
    return;
L_088D8448:
    ctx.gpr[7] = (ctx.gpr[18] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D8460u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 643u, 0x088B7F1Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8460u) goto L_088D8460;
    return;
L_088D8460:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (16153u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (15897u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D8508;
      }
      goto L_088D8500;
    }
L_088D8500:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088D853C;
      }
      goto L_088D8508;
    }
L_088D8508:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D853C;
L_088D853C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (15564u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D8558u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 278u, 0x08851A70u>(ctx, &aot_mem) && ctx.pc == 0x088D8558u) goto L_088D8558;
    return;
L_088D8558:
    ctx.gpr[31] = (0x088D8560u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D8560u) goto L_088D8560;
    return;
L_088D8560:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8664;
      }
      goto L_088D8568;
    }
L_088D8568:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D85E0;
      }
      goto L_088D8590;
    }
L_088D8590:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D85E0;
      }
      goto L_088D85B8;
    }
L_088D85B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8664;
      }
      goto L_088D85E0;
    }
L_088D85E0:
    ctx.gpr[4] = (17092u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D860C;
      }
      goto L_088D85FC;
    }
L_088D85FC:
    ctx.gpr[4] = (16110u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 61167u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    goto L_088D860C;
L_088D860C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8664;
      }
      goto L_088D861C;
    }
L_088D861C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D8664;
      }
      goto L_088D8630;
    }
L_088D8630:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D8664;
      }
      goto L_088D8644;
    }
L_088D8644:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088D8664u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 336u, 0x0882607Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8664u) goto L_088D8664;
    return;
L_088D8664:
    ctx.gpr[31] = (0x088D866Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D866Cu) goto L_088D866C;
    return;
L_088D866C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D86AC;
      }
      goto L_088D8674;
    }
L_088D8674:
    ctx.gpr[31] = (0x088D867Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088D867Cu) goto L_088D867C;
    return;
L_088D867C:
    ctx.gpr[31] = (0x088D8684u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 116u, 0x08A984C8u>(ctx, &aot_mem) && ctx.pc == 0x088D8684u) goto L_088D8684;
    return;
L_088D8684:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D86AC;
      }
      goto L_088D868C;
    }
L_088D868C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D86AC;
      }
      goto L_088D8694;
    }
L_088D8694:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D86C8;
      }
      goto L_088D86AC;
    }
L_088D86AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_088D8704;
      }
      goto L_088D86C0;
    }
L_088D86C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088D86E8;
      }
      goto L_088D86C8;
    }
L_088D86C8:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088D86E0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 105u, 0x088E060Cu>(ctx, &aot_mem) && ctx.pc == 0x088D86E0u) goto L_088D86E0;
    return;
L_088D86E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D911C;
      }
      goto L_088D86E8;
    }
L_088D86E8:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8DA0;
      }
      goto L_088D86F4;
    }
L_088D86F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8DA0;
      }
      goto L_088D8704;
    }
L_088D8704:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
        goto L_088D88E4;
    }
    goto L_088D872C;
L_088D872C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
        goto L_088D88E4;
    }
    goto L_088D8744;
L_088D8744:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088D88E0;
      }
      goto L_088D874C;
    }
L_088D874C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(357)));
    ctx.gpr[16] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7827));
      if (branch_taken) {
          goto L_088D8874;
      }
      goto L_088D8780;
    }
L_088D8780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D881C;
      }
      goto L_088D8790;
    }
L_088D8790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D881C;
      }
      goto L_088D87A8;
    }
L_088D87A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D87D8;
      }
      goto L_088D87D0;
    }
L_088D87D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D885C;
      }
      goto L_088D87D8;
    }
L_088D87D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (ctx.gpr[4] & 32768u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (0u | 204u);
        goto L_088D87FC;
    }
    goto L_088D87FC;
L_088D87FC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[31] = (0x088D8814u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D8814u) goto L_088D8814;
    return;
L_088D8814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D885C;
      }
      goto L_088D881C;
    }
L_088D881C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (ctx.gpr[4] & 32768u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (0u | 203u);
        goto L_088D8840;
    }
    goto L_088D8840;
L_088D8840:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[31] = (0x088D8858u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D8858u) goto L_088D8858;
    return;
L_088D8858:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D885C;
L_088D885C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8874;
      }
      goto L_088D8864;
    }
L_088D8864:
    ctx.gpr[5] = (2189u << 16u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D8874u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22748));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x088D8874u) goto L_088D8874;
    return;
L_088D8874:
    ctx.gpr[31] = (0x088D887Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x088D887Cu) goto L_088D887C;
    return;
L_088D887C:
    ctx.gpr[31] = (0x088D8884u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 53u, 0x089A03F8u>(ctx, &aot_mem) && ctx.pc == 0x088D8884u) goto L_088D8884;
    return;
L_088D8884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1792), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088D88D8u);
    ctx.gpr[6] = (0u | 57u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088D88D8u) goto L_088D88D8;
    return;
L_088D88D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D911C;
      }
      goto L_088D88E0;
    }
L_088D88E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    goto L_088D88E4;
L_088D88E4:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D8C24;
      }
      goto L_088D8908;
    }
L_088D8908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D8930;
    }
    goto L_088D8918;
L_088D8918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8C24;
      }
      goto L_088D892C;
    }
L_088D892C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    goto L_088D8930;
L_088D8930:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088D8978;
      }
      goto L_088D8950;
    }
L_088D8950:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8C24;
      }
      goto L_088D8978;
    }
L_088D8978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088D8B48;
      }
      goto L_088D8984;
    }
L_088D8984:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29196)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D89B0;
    }
    goto L_088D8990;
L_088D8990:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D899Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 489u, 0x088D6508u>(ctx, &aot_mem) && ctx.pc == 0x088D899Cu) goto L_088D899C;
    return;
L_088D899C:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8A18;
      }
      goto L_088D89AC;
    }
L_088D89AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    goto L_088D89B0;
L_088D89B0:
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D8B48;
      }
      goto L_088D89D4;
    }
L_088D89D4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D8B48;
      }
      goto L_088D89DC;
    }
L_088D89DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8B48;
      }
      goto L_088D89EC;
    }
L_088D89EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1296)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8B48;
      }
      goto L_088D89F8;
    }
L_088D89F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1296)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8B48;
      }
      goto L_088D8A18;
    }
L_088D8A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (2190u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & 8192u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (0u | 202u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1548));
      if (branch_taken) {
          goto L_088D8A5C;
      }
      goto L_088D8A3C;
    }
L_088D8A3C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (8u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 205u);
        goto L_088D8A5C;
    }
    goto L_088D8A5C;
L_088D8A5C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D8A80;
      }
      goto L_088D8A64;
    }
L_088D8A64:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088D8A78u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088D8A78u) goto L_088D8A78;
    return;
L_088D8A78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8B30;
      }
      goto L_088D8A80;
    }
L_088D8A80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (16640u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D8AB8;
      }
      goto L_088D8AA0;
    }
L_088D8AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_088D8AB8;
L_088D8AB8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8B1C;
      }
      goto L_088D8AC0;
    }
L_088D8AC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[6] & 8192u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (0u | 202u);
      if (branch_taken) {
          goto L_088D8B00;
      }
      goto L_088D8AE0;
    }
L_088D8AE0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (8u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[21] = (0u | 205u);
        goto L_088D8B00;
    }
    goto L_088D8B00;
L_088D8B00:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D8B14u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D8B14u) goto L_088D8B14;
    return;
L_088D8B14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D8B30;
      }
      goto L_088D8B1C;
    }
L_088D8B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D8B2Cu);
    ctx.gpr[6] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D8B2Cu) goto L_088D8B2C;
    return;
L_088D8B2C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_088D8B30;
L_088D8B30:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D8B40u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x088D8B40u) goto L_088D8B40;
    return;
L_088D8B40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8C1C;
      }
      goto L_088D8B48;
    }
L_088D8B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8C04;
      }
      goto L_088D8B60;
    }
L_088D8B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (16640u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (2190u << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1548));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 202u);
        goto L_088D8B90;
    }
    goto L_088D8B90;
L_088D8B90:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D8BB0;
      }
      goto L_088D8B98;
    }
L_088D8B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088D8BA8u);
    ctx.gpr[6] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D8BA8u) goto L_088D8BA8;
    return;
L_088D8BA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D8BEC;
      }
      goto L_088D8BB0;
    }
L_088D8BB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[6] & 4096u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[21] = (0u | 202u);
        goto L_088D8BD4;
    }
    goto L_088D8BD4;
L_088D8BD4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D8BE8u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D8BE8u) goto L_088D8BE8;
    return;
L_088D8BE8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_088D8BEC;
L_088D8BEC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D8BFCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x088D8BFCu) goto L_088D8BFC;
    return;
L_088D8BFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8C1C;
      }
      goto L_088D8C04;
    }
L_088D8C04:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088D8C10u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088D8C10u) goto L_088D8C10;
    return;
L_088D8C10:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088D8C1C;
L_088D8C1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8DA0;
      }
      goto L_088D8C24;
    }
L_088D8C24:
    ctx.gpr[31] = (0x088D8C2Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D8C2Cu) goto L_088D8C2C;
    return;
L_088D8C2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8CE4;
      }
      goto L_088D8C34;
    }
L_088D8C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8CE4;
      }
      goto L_088D8C48;
    }
L_088D8C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8CE4;
      }
      goto L_088D8C58;
    }
L_088D8C58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088D8CE4;
      }
      goto L_088D8C7C;
    }
L_088D8C7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 57u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088D8CB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8CB4u) goto L_088D8CB4;
    return;
L_088D8CB4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088D8CC0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088D8CC0u) goto L_088D8CC0;
    return;
L_088D8CC0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[31] = (0x088D8CDCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 256u, 0x088D52C4u>(ctx, &aot_mem) && ctx.pc == 0x088D8CDCu) goto L_088D8CDC;
    return;
L_088D8CDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8DA0;
      }
      goto L_088D8CE4;
    }
L_088D8CE4:
    ctx.gpr[31] = (0x088D8CECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 53u, 0x089A03F8u>(ctx, &aot_mem) && ctx.pc == 0x088D8CECu) goto L_088D8CEC;
    return;
L_088D8CEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D8D44;
    }
    goto L_088D8D08;
L_088D8D08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 57u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088D8D40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8D40u) goto L_088D8D40;
    return;
L_088D8D40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    goto L_088D8D44;
L_088D8D44:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8DA0;
      }
      goto L_088D8D68;
    }
L_088D8D68:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8DA0;
      }
      goto L_088D8D78;
    }
L_088D8D78:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (49280u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D8DA0;
L_088D8DA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D8DB8;
      }
      goto L_088D8DB4;
    }
L_088D8DB4:
    ctx.gpr[16] = (0u | 0u);
    goto L_088D8DB8;
L_088D8DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[16] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D911C;
      }
      goto L_088D8DD4;
    }
L_088D8DD4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D911C;
      }
      goto L_088D8DDC;
    }
L_088D8DDC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8DFC;
      }
      goto L_088D8DE4;
    }
L_088D8DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D8E10;
      }
      goto L_088D8DF4;
    }
L_088D8DF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8E2C;
      }
      goto L_088D8DFC;
    }
L_088D8DFC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088D8E08u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 105u, 0x088E060Cu>(ctx, &aot_mem) && ctx.pc == 0x088D8E08u) goto L_088D8E08;
    return;
L_088D8E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D911C;
      }
      goto L_088D8E10;
    }
L_088D8E10:
    ctx.gpr[31] = (0x088D8E18u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D8E18u) goto L_088D8E18;
    return;
L_088D8E18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8E2C;
      }
      goto L_088D8E20;
    }
L_088D8E20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2964)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8E50;
      }
      goto L_088D8E2C;
    }
L_088D8E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (16640u << 16u);
    ctx.gpr[16] = (2190u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1548));
      if (branch_taken) {
          goto L_088D8E58;
      }
      goto L_088D8E48;
    }
L_088D8E48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8ECC;
      }
      goto L_088D8E50;
    }
L_088D8E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D911C;
      }
      goto L_088D8E58;
    }
L_088D8E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8ECC;
      }
      goto L_088D8E68;
    }
L_088D8E68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8ECC;
      }
      goto L_088D8E84;
    }
L_088D8E84:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (0u | 202u);
        goto L_088D8EAC;
    }
    goto L_088D8EAC;
L_088D8EAC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D8EC4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D8EC4u) goto L_088D8EC4;
    return;
L_088D8EC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D90BC;
      }
      goto L_088D8ECC;
    }
L_088D8ECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8F40;
      }
      goto L_088D8EE4;
    }
L_088D8EE4:
    ctx.gpr[31] = (0x088D8EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088D8EECu) goto L_088D8EEC;
    return;
L_088D8EEC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D8F40;
      }
      goto L_088D8EFC;
    }
L_088D8EFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[6] & 4096u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (0u | 202u);
        goto L_088D8F20;
    }
    goto L_088D8F20;
L_088D8F20:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D8F38u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D8F38u) goto L_088D8F38;
    return;
L_088D8F38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D90BC;
      }
      goto L_088D8F40;
    }
L_088D8F40:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9008;
      }
      goto L_088D8F50;
    }
L_088D8F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9008;
      }
      goto L_088D8F5C;
    }
L_088D8F5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D8F8C;
      }
      goto L_088D8F74;
    }
L_088D8F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_088D8F8C;
L_088D8F8C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088D9008;
      }
      goto L_088D8F94;
    }
L_088D8F94:
    ctx.gpr[31] = (0x088D8F9Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 489u, 0x088D6508u>(ctx, &aot_mem) && ctx.pc == 0x088D8F9Cu) goto L_088D8F9C;
    return;
L_088D8F9C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9008;
      }
      goto L_088D8FA8;
    }
L_088D8FA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[6] & 8192u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (0u | 202u);
      if (branch_taken) {
          goto L_088D8FE8;
      }
      goto L_088D8FC8;
    }
L_088D8FC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (8u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (0u | 205u);
        goto L_088D8FE8;
    }
    goto L_088D8FE8;
L_088D8FE8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D9000u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D9000u) goto L_088D9000;
    return;
L_088D9000:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D90BC;
      }
      goto L_088D9008;
    }
L_088D9008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D907C;
      }
      goto L_088D9018;
    }
L_088D9018:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D907C;
      }
      goto L_088D9034;
    }
L_088D9034:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (0u | 205u);
        goto L_088D905C;
    }
    goto L_088D905C;
L_088D905C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D9074u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D9074u) goto L_088D9074;
    return;
L_088D9074:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D90BC;
      }
      goto L_088D907C;
    }
L_088D907C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (32u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 201u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 57u);
        goto L_088D90A4;
    }
    goto L_088D90A4;
L_088D90A4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088D90B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D90B8u) goto L_088D90B8;
    return;
L_088D90B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088D90BC;
L_088D90BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D90CCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x088D90CCu) goto L_088D90CC;
    return;
L_088D90CC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D9100;
      }
      goto L_088D90F4;
    }
L_088D90F4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088D9100u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088D9100u) goto L_088D9100;
    return;
L_088D9100:
    ctx.gpr[31] = (0x088D9108u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D9108u) goto L_088D9108;
    return;
L_088D9108:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D911C;
      }
      goto L_088D9110;
    }
L_088D9110:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2964), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2960), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D911C;
L_088D911C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D915C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D91B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088D91B8u) goto L_088D91B8;
    return;
L_088D91B8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_088D91E4;
      }
      goto L_088D91C4;
    }
L_088D91C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D91E4;
      }
      goto L_088D91E0;
    }
L_088D91E0:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_088D91E4;
L_088D91E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9228;
      }
      goto L_088D91F8;
    }
L_088D91F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[21] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088D9220;
      }
      goto L_088D9208;
    }
L_088D9208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
        goto L_088D9230;
    }
    goto L_088D9218;
L_088D9218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D923C;
      }
      goto L_088D9220;
    }
L_088D9220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA038;
      }
      goto L_088D9228;
    }
L_088D9228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA038;
      }
      goto L_088D9230;
    }
L_088D9230:
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D924C;
      }
      goto L_088D923C;
    }
L_088D923C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9254;
      }
      goto L_088D9244;
    }
L_088D9244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D92DC;
      }
      goto L_088D924C;
    }
L_088D924C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA038;
      }
      goto L_088D9254;
    }
L_088D9254:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16332u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D92DC;
      }
      goto L_088D92AC;
    }
L_088D92AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D92DC;
      }
      goto L_088D92D4;
    }
L_088D92D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA038;
      }
      goto L_088D92DC;
    }
L_088D92DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
        goto L_088D9330;
    }
    goto L_088D92F4;
L_088D92F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[4] & 32768u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 203u);
        goto L_088D9314;
    }
    goto L_088D9314;
L_088D9314:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D9324u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D9324u) goto L_088D9324;
    return;
L_088D9324:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D937C;
      }
      goto L_088D932C;
    }
L_088D932C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    goto L_088D9330;
L_088D9330:
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_088D93D0;
    }
    goto L_088D9344;
L_088D9344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[4] & 32768u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 204u);
        goto L_088D9364;
    }
    goto L_088D9364;
L_088D9364:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D9374u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D9374u) goto L_088D9374;
    return;
L_088D9374:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_088D93D0;
    }
    goto L_088D937C;
L_088D937C:
    ctx.gpr[31] = (0x088D9384u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D9384u) goto L_088D9384;
    return;
L_088D9384:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D93B8;
      }
      goto L_088D938C;
    }
L_088D938C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D93B8;
      }
      goto L_088D939C;
    }
L_088D939C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2964)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D93B8;
      }
      goto L_088D93A8;
    }
L_088D93A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D93C8;
      }
      goto L_088D93B8;
    }
L_088D93B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088D93C8;
L_088D93C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA038;
      }
      goto L_088D93D0;
    }
L_088D93D0:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9434;
      }
      goto L_088D93F0;
    }
L_088D93F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088D9434;
      }
      goto L_088D9418;
    }
L_088D9418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D95D4;
      }
      goto L_088D9434;
    }
L_088D9434:
    ctx.gpr[31] = (0x088D943Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D943Cu) goto L_088D943C;
    return;
L_088D943C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D94C4;
      }
      goto L_088D9444;
    }
L_088D9444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D94A0;
      }
      goto L_088D9454;
    }
L_088D9454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D94A0;
      }
      goto L_088D9460;
    }
L_088D9460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D94A0;
      }
      goto L_088D9470;
    }
L_088D9470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D94A0;
      }
      goto L_088D9484;
    }
L_088D9484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D94C4;
      }
      goto L_088D94A0;
    }
L_088D94A0:
    ctx.gpr[31] = (0x088D94A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088D94A8u) goto L_088D94A8;
    return;
L_088D94A8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x088D94BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088DAAD4;
L_088D94BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D95CC;
      }
      goto L_088D94C4;
    }
L_088D94C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D95CC;
      }
      goto L_088D94E0;
    }
L_088D94E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[20] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088D95CC;
      }
      goto L_088D94F0;
    }
L_088D94F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[17] = (2190u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1548));
      if (branch_taken) {
          goto L_088D9530;
      }
      goto L_088D9500;
    }
L_088D9500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9528;
      }
      goto L_088D950C;
    }
L_088D950C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_088D9528;
    }
    goto L_088D9518;
L_088D9518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x088D9524u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088D9524u) goto L_088D9524;
    return;
L_088D9524:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_088D9528;
L_088D9528:
    ctx.gpr[31] = (0x088D9530u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9530u) goto L_088D9530;
    return;
L_088D9530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[18]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[20] = (0u | 203u);
        goto L_088D9568;
    }
    goto L_088D9568;
L_088D9568:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D9584u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D9584u) goto L_088D9584;
    return;
L_088D9584:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D95BC;
      }
      goto L_088D95B0;
    }
L_088D95B0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088D95BCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088D95BCu) goto L_088D95BC;
    return;
L_088D95BC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D95CCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x088D95CCu) goto L_088D95CC;
    return;
L_088D95CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA038;
      }
      goto L_088D95D4;
    }
L_088D95D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9730;
      }
      goto L_088D95F0;
    }
L_088D95F0:
    ctx.gpr[31] = (0x088D95F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D95F8u) goto L_088D95F8;
    return;
L_088D95F8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
        goto L_088D9620;
    }
    goto L_088D9600;
L_088D9600:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D963C;
      }
      goto L_088D961C;
    }
L_088D961C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    goto L_088D9620;
L_088D9620:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D963C;
      }
      goto L_088D962C;
    }
L_088D962C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9730;
      }
      goto L_088D963C;
    }
L_088D963C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[18] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088D9728;
      }
      goto L_088D964C;
    }
L_088D964C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[17] = (2190u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1548));
      if (branch_taken) {
          goto L_088D968C;
      }
      goto L_088D965C;
    }
L_088D965C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9684;
      }
      goto L_088D9668;
    }
L_088D9668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_088D9684;
    }
    goto L_088D9674;
L_088D9674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x088D9680u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088D9680u) goto L_088D9680;
    return;
L_088D9680:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_088D9684;
L_088D9684:
    ctx.gpr[31] = (0x088D968Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D968Cu) goto L_088D968C;
    return;
L_088D968C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[23]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (0u | 203u);
        goto L_088D96C4;
    }
    goto L_088D96C4;
L_088D96C4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D96E0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D96E0u) goto L_088D96E0;
    return;
L_088D96E0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D9718;
      }
      goto L_088D970C;
    }
L_088D970C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088D9718u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088D9718u) goto L_088D9718;
    return;
L_088D9718:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D9728u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x088D9728u) goto L_088D9728;
    return;
L_088D9728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA038;
      }
      goto L_088D9730;
    }
L_088D9730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9748;
      }
      goto L_088D973C;
    }
L_088D973C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[31] = (0x088D9748u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088D9748u) goto L_088D9748;
    return;
L_088D9748:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088D975C;
      }
      goto L_088D9750;
    }
L_088D9750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[31] = (0x088D975Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x088D975Cu) goto L_088D975C;
    return;
L_088D975C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D99A0;
      }
      goto L_088D9774;
    }
L_088D9774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D99A0;
      }
      goto L_088D9780;
    }
L_088D9780:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088D9834u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x088D9834u) goto L_088D9834;
    return;
L_088D9834:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088D986Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x088D986Cu) goto L_088D986C;
    return;
L_088D986C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_088D98F8;
      }
      goto L_088D9874;
    }
L_088D9874:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4272));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[6] = (ctx.gpr[4] ^ 16u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[4] ^ 31u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D98F8;
      }
      goto L_088D98B8;
    }
L_088D98B8:
    ctx.gpr[31] = (0x088D98C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D98C0u) goto L_088D98C0;
    return;
L_088D98C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D98F0;
      }
      goto L_088D98C8;
    }
L_088D98C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1792), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28868)));
    ctx.gpr[31] = (0x088D98E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 239u, 0x089A10F0u>(ctx, &aot_mem) && ctx.pc == 0x088D98E8u) goto L_088D98E8;
    return;
L_088D98E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1816), ctx.gpr[4]);
    goto L_088D98F0;
L_088D98F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA038;
      }
      goto L_088D98F8;
    }
L_088D98F8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1760), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088D9918;
      }
      goto L_088D9900;
    }
L_088D9900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[31] = (0x088D990Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x088D990Cu) goto L_088D990C;
    return;
L_088D990C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[31] = (0x088D9918u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x088D9918u) goto L_088D9918;
    return;
L_088D9918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9938;
      }
      goto L_088D9924;
    }
L_088D9924:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[31] = (0x088D9930u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 46u, 0x089A0358u>(ctx, &aot_mem) && ctx.pc == 0x088D9930u) goto L_088D9930;
    return;
L_088D9930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D99A0;
      }
      goto L_088D9938;
    }
L_088D9938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9964;
      }
      goto L_088D9950;
    }
L_088D9950:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x088D995Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 39u, 0x089A02A4u>(ctx, &aot_mem) && ctx.pc == 0x088D995Cu) goto L_088D995C;
    return;
L_088D995C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D99A0;
      }
      goto L_088D9964;
    }
L_088D9964:
    ctx.gpr[31] = (0x088D996Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088D996Cu) goto L_088D996C;
    return;
L_088D996C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    ctx.gpr[20] = (2232u << 16u);
      if (branch_taken) {
          goto L_088D99A0;
      }
      goto L_088D9974;
    }
L_088D9974:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x088D9980u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 483u, 0x088EAB10u>(ctx, &aot_mem) && ctx.pc == 0x088D9980u) goto L_088D9980;
    return;
L_088D9980:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D99A0;
      }
      goto L_088D9988;
    }
L_088D9988:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x088D9994u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 39u, 0x089A02A4u>(ctx, &aot_mem) && ctx.pc == 0x088D9994u) goto L_088D9994;
    return;
L_088D9994:
    ctx.gpr[31] = (0x088D999Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 182u, 0x088ED5F0u>(ctx, &aot_mem) && ctx.pc == 0x088D999Cu) goto L_088D999C;
    return;
L_088D999C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3192), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088D99A0;
L_088D99A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[20] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088D99D8;
      }
      goto L_088D99B0;
    }
L_088D99B0:
    ctx.gpr[31] = (0x088D99B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D99B8u) goto L_088D99B8;
    return;
L_088D99B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D99E8;
      }
      goto L_088D99C0;
    }
L_088D99C0:
    ctx.gpr[31] = (0x088D99C8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088D99C8u) goto L_088D99C8;
    return;
L_088D99C8:
    ctx.gpr[31] = (0x088D99D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 316u, 0x08A98E58u>(ctx, &aot_mem) && ctx.pc == 0x088D99D0u) goto L_088D99D0;
    return;
L_088D99D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9A74;
      }
      goto L_088D99D8;
    }
L_088D99D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DA038;
      }
      goto L_088D99E8;
    }
L_088D99E8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9A74;
      }
      goto L_088D99F0;
    }
L_088D99F0:
    ctx.gpr[31] = (0x088D99F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x088D99F8u) goto L_088D99F8;
    return;
L_088D99F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9A74;
      }
      goto L_088D9A00;
    }
L_088D9A00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9A4C;
      }
      goto L_088D9A28;
    }
L_088D9A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9A4C;
      }
      goto L_088D9A38;
    }
L_088D9A38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088D9A4Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9A4Cu) goto L_088D9A4C;
    return;
L_088D9A4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088D9A60u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x088D9A60u) goto L_088D9A60;
    return;
L_088D9A60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D9A6Cu);
    ctx.gpr[5] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x088D9A6Cu) goto L_088D9A6C;
    return;
L_088D9A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA038;
      }
      goto L_088D9A74;
    }
L_088D9A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088D9AA8;
      }
      goto L_088D9A80;
    }
L_088D9A80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9BA4;
      }
      goto L_088D9AA4;
    }
L_088D9AA4:
    ctx.gpr[4] = (2232u << 16u);
    goto L_088D9AA8;
L_088D9AA8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9BA4;
      }
      goto L_088D9ABC;
    }
L_088D9ABC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[6] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D9BA4;
      }
      goto L_088D9ACC;
    }
L_088D9ACC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[6] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D9BA4;
      }
      goto L_088D9ADC;
    }
L_088D9ADC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[6] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D9BA4;
      }
      goto L_088D9AEC;
    }
L_088D9AEC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[6] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D9BA4;
      }
      goto L_088D9AFC;
    }
L_088D9AFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9BA4;
      }
      goto L_088D9B0C;
    }
L_088D9B0C:
    ctx.gpr[31] = (0x088D9B14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D9B14u) goto L_088D9B14;
    return;
L_088D9B14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9B38;
      }
      goto L_088D9B1C;
    }
L_088D9B1C:
    ctx.gpr[31] = (0x088D9B24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D9B24u) goto L_088D9B24;
    return;
L_088D9B24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9BA4;
      }
      goto L_088D9B2C;
    }
L_088D9B2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9BA4;
      }
      goto L_088D9B38;
    }
L_088D9B38:
    ctx.gpr[31] = (0x088D9B40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D9B40u) goto L_088D9B40;
    return;
L_088D9B40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D9B50u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D4C08u>(ctx, &aot_mem) && ctx.pc == 0x088D9B50u) goto L_088D9B50;
    return;
L_088D9B50:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9BA4;
      }
      goto L_088D9B5C;
    }
L_088D9B5C:
    ctx.gpr[31] = (0x088D9B64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 53u, 0x089A03F8u>(ctx, &aot_mem) && ctx.pc == 0x088D9B64u) goto L_088D9B64;
    return;
L_088D9B64:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088D9B90;
      }
      goto L_088D9B6C;
    }
L_088D9B6C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9B9C;
      }
      goto L_088D9B74;
    }
L_088D9B74:
    ctx.gpr[31] = (0x088D9B7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D9B7Cu) goto L_088D9B7C;
    return;
L_088D9B7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9B90;
      }
      goto L_088D9B84;
    }
L_088D9B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9B9C;
      }
      goto L_088D9B90;
    }
L_088D9B90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D9B9Cu);
    ctx.gpr[5] = (0u | 200u);
    goto L_088DAAD4;
L_088D9B9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA038;
      }
      goto L_088D9BA4;
    }
L_088D9BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (16640u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[17] = (2190u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1548));
      if (branch_taken) {
          goto L_088D9BCC;
      }
      goto L_088D9BC8;
    }
L_088D9BC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), 0u);
    goto L_088D9BCC;
L_088D9BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9BE4;
      }
      goto L_088D9BDC;
    }
L_088D9BDC:
    ctx.gpr[31] = (0x088D9BE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x088D9BE4u) goto L_088D9BE4;
    return;
L_088D9BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088D9C20;
      }
      goto L_088D9BF0;
    }
L_088D9BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9C18;
      }
      goto L_088D9BFC;
    }
L_088D9BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_088D9C18;
    }
    goto L_088D9C08;
L_088D9C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x088D9C14u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088D9C14u) goto L_088D9C14;
    return;
L_088D9C14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_088D9C18;
L_088D9C18:
    ctx.gpr[31] = (0x088D9C20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9C20u) goto L_088D9C20;
    return;
L_088D9C20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D9C30u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088D9C30u) goto L_088D9C30;
    return;
L_088D9C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9DB0;
      }
      goto L_088D9C40;
    }
L_088D9C40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9DB0;
      }
      goto L_088D9C50;
    }
L_088D9C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9DB0;
      }
      goto L_088D9C6C;
    }
L_088D9C6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (0u | 202u);
        goto L_088D9C8C;
    }
    goto L_088D9C8C;
L_088D9C8C:
    ctx.gpr[31] = (0x088D9C94u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D9C94u) goto L_088D9C94;
    return;
L_088D9C94:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9D34;
      }
      goto L_088D9CA0;
    }
L_088D9CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 202u);
        goto L_088D9CC0;
    }
    goto L_088D9CC0;
L_088D9CC0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D9CD0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 476u, 0x08A8AE48u>(ctx, &aot_mem) && ctx.pc == 0x088D9CD0u) goto L_088D9CD0;
    return;
L_088D9CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D9D0C;
      }
      goto L_088D9CE8;
    }
L_088D9CE8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D9D00;
      }
      goto L_088D9CF8;
    }
L_088D9CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D9D20;
      }
      goto L_088D9D00;
    }
L_088D9D00:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D9CE8;
      }
      goto L_088D9D0C;
    }
L_088D9D0C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D9D20;
      }
      goto L_088D9D18;
    }
L_088D9D18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D9D20;
      }
      goto L_088D9D20;
    }
L_088D9D20:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9D34;
      }
      goto L_088D9D28;
    }
L_088D9D28:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D9D34u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 863u, 0x088B3EA4u>(ctx, &aot_mem) && ctx.pc == 0x088D9D34u) goto L_088D9D34;
    return;
L_088D9D34:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 202u);
        goto L_088D9D5C;
    }
    goto L_088D9D5C;
L_088D9D5C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088D9D70u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D9D70u) goto L_088D9D70;
    return;
L_088D9D70:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA028;
      }
      goto L_088D9D9C;
    }
L_088D9D9C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088D9DA8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088D9DA8u) goto L_088D9DA8;
    return;
L_088D9DA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA028;
      }
      goto L_088D9DB0;
    }
L_088D9DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9DC4;
      }
      goto L_088D9DBC;
    }
L_088D9DBC:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088D9DC4;
L_088D9DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9E00;
      }
      goto L_088D9DDC;
    }
L_088D9DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (0u | 203u);
        goto L_088D9DF8;
    }
    goto L_088D9DF8;
L_088D9DF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9F54;
      }
      goto L_088D9E00;
    }
L_088D9E00:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9EE4;
      }
      goto L_088D9E10;
    }
L_088D9E10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D9E40;
      }
      goto L_088D9E28;
    }
L_088D9E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_088D9E40;
L_088D9E40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088D9EE4;
      }
      goto L_088D9E48;
    }
L_088D9E48:
    ctx.gpr[31] = (0x088D9E50u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 489u, 0x088D6508u>(ctx, &aot_mem) && ctx.pc == 0x088D9E50u) goto L_088D9E50;
    return;
L_088D9E50:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9EA4;
      }
      goto L_088D9E60;
    }
L_088D9E60:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D9EE4;
      }
      goto L_088D9E68;
    }
L_088D9E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9EE4;
      }
      goto L_088D9E78;
    }
L_088D9E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1296)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9EE4;
      }
      goto L_088D9E84;
    }
L_088D9E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1296)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9EE4;
      }
      goto L_088D9EA4;
    }
L_088D9EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 202u);
      if (branch_taken) {
          goto L_088D9EDC;
      }
      goto L_088D9EBC;
    }
L_088D9EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (0u | 205u);
        goto L_088D9EDC;
    }
    goto L_088D9EDC;
L_088D9EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9F54;
      }
      goto L_088D9EE4;
    }
L_088D9EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D9F34;
      }
      goto L_088D9EF4;
    }
L_088D9EF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9F34;
      }
      goto L_088D9F10;
    }
L_088D9F10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (0u | 205u);
        goto L_088D9F2C;
    }
    goto L_088D9F2C;
L_088D9F2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9F54;
      }
      goto L_088D9F34;
    }
L_088D9F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[20] = (0u | 201u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (0u | 57u);
        goto L_088D9F54;
    }
    goto L_088D9F54;
L_088D9F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D9F60u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D9F60u) goto L_088D9F60;
    return;
L_088D9F60:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9FDC;
      }
      goto L_088D9F6C;
    }
L_088D9F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088D9F78u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 476u, 0x08A8AE48u>(ctx, &aot_mem) && ctx.pc == 0x088D9F78u) goto L_088D9F78;
    return;
L_088D9F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D9FB4;
      }
      goto L_088D9F90;
    }
L_088D9F90:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D9FA8;
      }
      goto L_088D9FA0;
    }
L_088D9FA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D9FC8;
      }
      goto L_088D9FA8;
    }
L_088D9FA8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D9F90;
      }
      goto L_088D9FB4;
    }
L_088D9FB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088D9FC8;
      }
      goto L_088D9FC0;
    }
L_088D9FC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D9FC8;
      }
      goto L_088D9FC8;
    }
L_088D9FC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D9FDC;
      }
      goto L_088D9FD0;
    }
L_088D9FD0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D9FDCu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 863u, 0x088B3EA4u>(ctx, &aot_mem) && ctx.pc == 0x088D9FDCu) goto L_088D9FDC;
    return;
L_088D9FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088D9FF0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D9FF0u) goto L_088D9FF0;
    return;
L_088D9FF0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA028;
      }
      goto L_088DA01C;
    }
L_088DA01C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088DA028u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088DA028u) goto L_088DA028;
    return;
L_088DA028:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DA038u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x088DA038u) goto L_088DA038;
    return;
L_088DA038:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA06C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(864)));
    ctx.gpr[6] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088DA0C0;
      }
      goto L_088DA0A0;
    }
L_088DA0A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA0C8;
      }
      goto L_088DA0B8;
    }
L_088DA0B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088DA114;
      }
      goto L_088DA0C0;
    }
L_088DA0C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAAAC;
      }
      goto L_088DA0C8;
    }
L_088DA0C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA0E8;
      }
      goto L_088DA0D0;
    }
L_088DA0D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(652)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA0F8;
      }
      goto L_088DA0E0;
    }
L_088DA0E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA10C;
      }
      goto L_088DA0E8;
    }
L_088DA0E8:
    ctx.gpr[31] = (0x088DA0F0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 210u, 0x088D5048u>(ctx, &aot_mem) && ctx.pc == 0x088DA0F0u) goto L_088DA0F0;
    return;
L_088DA0F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAAAC;
      }
      goto L_088DA0F8;
    }
L_088DA0F8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088DA10Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA10Cu) goto L_088DA10C;
    return;
L_088DA10C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1784), 0u);
      if (branch_taken) {
          goto L_088DAAAC;
      }
      goto L_088DA114;
    }
L_088DA114:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(644)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(648)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1340)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[17];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DA2CC;
      }
      goto L_088DA154;
    }
L_088DA154:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1312), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1316), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA16Cu);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 508u, 0x089AA458u>(ctx, &aot_mem) && ctx.pc == 0x088DA16Cu) goto L_088DA16C;
    return;
L_088DA16C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(652)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA1B4;
      }
      goto L_088DA17C;
    }
L_088DA17C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA1B4;
      }
      goto L_088DA1A0;
    }
L_088DA1A0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA1ACu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA1ACu) goto L_088DA1AC;
    return;
L_088DA1AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA2C4;
      }
      goto L_088DA1B4;
    }
L_088DA1B4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 22 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DA2B8;
      }
      goto L_088DA1C0;
    }
L_088DA1C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA2B8;
      }
      goto L_088DA1C8;
    }
L_088DA1C8:
    ctx.gpr[4] = (16312u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA1F8;
      }
      goto L_088DA1E4;
    }
L_088DA1E4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA1F0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA1F0u) goto L_088DA1F0;
    return;
L_088DA1F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA2C4;
      }
      goto L_088DA1F8;
    }
L_088DA1F8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088DA29C;
      }
      goto L_088DA20C;
    }
L_088DA20C:
    ctx.gpr[7] = (15907u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(644)));
    ctx.gpr[7] = (ctx.gpr[7] | 55051u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(648)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    goto L_088DA224;
L_088DA224:
    ctx.gpr[7] = (ctx.gpr[20] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[18];
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DA27C;
      }
      goto L_088DA260;
    }
L_088DA260:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA274u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA274u) goto L_088DA274;
    return;
L_088DA274:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088DA29C;
      }
      goto L_088DA27C;
    }
L_088DA27C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_088DA224;
      }
      goto L_088DA294;
    }
L_088DA294:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_088DA29C;
L_088DA29C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA2B0;
      }
      goto L_088DA2A4;
    }
L_088DA2A4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA2B0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA2B0u) goto L_088DA2B0;
    return;
L_088DA2B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA2C4;
      }
      goto L_088DA2B8;
    }
L_088DA2B8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA2C4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA2C4u) goto L_088DA2C4;
    return;
L_088DA2C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAAAC;
      }
      goto L_088DA2CC;
    }
L_088DA2CC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088DA2D8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA2D8u) goto L_088DA2D8;
    return;
L_088DA2D8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA2E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA2E8u) goto L_088DA2E8;
    return;
L_088DA2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(652)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAAAC;
      }
      goto L_088DA2FC;
    }
L_088DA2FC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(13856)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA3D4;
      }
      goto L_088DA328;
    }
L_088DA328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DA334u);
    ctx.gpr[5] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DA334u) goto L_088DA334;
    return;
L_088DA334:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (49408u << 16u);
      if (branch_taken) {
          goto L_088DA3DC;
      }
      goto L_088DA340;
    }
L_088DA340:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(656)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21772)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21768)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21780)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21776)));
      if (branch_taken) {
          goto L_088DA388;
      }
      goto L_088DA374;
    }
L_088DA374:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088DA388u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x088DA388u) goto L_088DA388;
    return;
L_088DA388:
    ctx.gpr[31] = (0x088DA390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DA390u) goto L_088DA390;
    return;
L_088DA390:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DA3A4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088DA3A4u) goto L_088DA3A4;
    return;
L_088DA3A4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DA3D4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x088DA3D4u) goto L_088DA3D4;
    return;
L_088DA3D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAAAC;
      }
      goto L_088DA3DC;
    }
L_088DA3DC:
    ctx.gpr[31] = (0x088DA3E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DA3E4u) goto L_088DA3E4;
    return;
L_088DA3E4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA484;
      }
      goto L_088DA3F4;
    }
L_088DA3F4:
    ctx.gpr[31] = (0x088DA3FCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x088DA3FCu) goto L_088DA3FC;
    return;
L_088DA3FC:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DA414u);
    ctx.gpr[6] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DA414u) goto L_088DA414;
    return;
L_088DA414:
    ctx.gpr[31] = (0x088DA41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DA41Cu) goto L_088DA41C;
    return;
L_088DA41C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21780)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21776)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088DA434u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088DA434u) goto L_088DA434;
    return;
L_088DA434:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21788)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21784)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DA470u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x088DA470u) goto L_088DA470;
    return;
L_088DA470:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA47Cu);
    ctx.gpr[5] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA47Cu) goto L_088DA47C;
    return;
L_088DA47C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA3D4;
      }
      goto L_088DA484;
    }
L_088DA484:
    ctx.gpr[31] = (0x088DA48Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 210u, 0x088D5048u>(ctx, &aot_mem) && ctx.pc == 0x088DA48Cu) goto L_088DA48C;
    return;
L_088DA48C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAAAC;
      }
      goto L_088DA494;
    }
L_088DA494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_088DA628;
      }
      goto L_088DA4B0;
    }
L_088DA4B0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA628;
      }
      goto L_088DA4B8;
    }
L_088DA4B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DA4C4u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DA4C4u) goto L_088DA4C4;
    return;
L_088DA4C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA4E0;
      }
      goto L_088DA4D0;
    }
L_088DA4D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DA4DCu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DA4DCu) goto L_088DA4DC;
    return;
L_088DA4DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088DA4E0;
L_088DA4E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA574;
      }
      goto L_088DA4E8;
    }
L_088DA4E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DA574;
      }
      goto L_088DA4F8;
    }
L_088DA4F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x088DA510u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DA510u) goto L_088DA510;
    return;
L_088DA510:
    ctx.gpr[31] = (0x088DA518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DA518u) goto L_088DA518;
    return;
L_088DA518:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21780)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21776)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088DA530u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088DA530u) goto L_088DA530;
    return;
L_088DA530:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21788)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21784)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DA56Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x088DA56Cu) goto L_088DA56C;
    return;
L_088DA56C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA8A8;
      }
      goto L_088DA574;
    }
L_088DA574:
    ctx.gpr[31] = (0x088DA57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DA57Cu) goto L_088DA57C;
    return;
L_088DA57C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA620;
      }
      goto L_088DA58C;
    }
L_088DA58C:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DA5A4u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DA5A4u) goto L_088DA5A4;
    return;
L_088DA5A4:
    ctx.gpr[31] = (0x088DA5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DA5ACu) goto L_088DA5AC;
    return;
L_088DA5AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21772)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21768)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DA5CCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088DA5CCu) goto L_088DA5CC;
    return;
L_088DA5CC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DA5FCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x088DA5FCu) goto L_088DA5FC;
    return;
L_088DA5FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29194)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA8A8;
      }
      goto L_088DA60C;
    }
L_088DA60C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA618u);
    ctx.gpr[5] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA618u) goto L_088DA618;
    return;
L_088DA618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA8A8;
      }
      goto L_088DA620;
    }
L_088DA620:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1784), 0u);
      if (branch_taken) {
          goto L_088DA8A8;
      }
      goto L_088DA628;
    }
L_088DA628:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA8A8;
      }
      goto L_088DA630;
    }
L_088DA630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DA63Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DA63Cu) goto L_088DA63C;
    return;
L_088DA63C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21780)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21776)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_088DA66C;
      }
      goto L_088DA65C;
    }
L_088DA65C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DA668u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DA668u) goto L_088DA668;
    return;
L_088DA668:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088DA66C;
L_088DA66C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA684;
      }
      goto L_088DA674;
    }
L_088DA674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DA680u);
    ctx.gpr[5] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DA680u) goto L_088DA680;
    return;
L_088DA680:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088DA684;
L_088DA684:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA73C;
      }
      goto L_088DA68C;
    }
L_088DA68C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DA73C;
      }
      goto L_088DA69C;
    }
L_088DA69C:
    ctx.gpr[31] = (0x088DA6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DA6A4u) goto L_088DA6A4;
    return;
L_088DA6A4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21772)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21768)));
      if (branch_taken) {
          goto L_088DA6D8;
      }
      goto L_088DA6C0;
    }
L_088DA6C0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DA6D0u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DA6D0u) goto L_088DA6D0;
    return;
L_088DA6D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA6E8;
      }
      goto L_088DA6D8;
    }
L_088DA6D8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DA6E8u);
    ctx.gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DA6E8u) goto L_088DA6E8;
    return;
L_088DA6E8:
    ctx.gpr[31] = (0x088DA6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DA6F0u) goto L_088DA6F0;
    return;
L_088DA6F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DA704u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088DA704u) goto L_088DA704;
    return;
L_088DA704:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DA734u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x088DA734u) goto L_088DA734;
    return;
L_088DA734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(-29194)));
      if (branch_taken) {
          goto L_088DA894;
      }
      goto L_088DA73C;
    }
L_088DA73C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21788)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21784)));
      if (branch_taken) {
          goto L_088DA804;
      }
      goto L_088DA74C;
    }
L_088DA74C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DA804;
      }
      goto L_088DA75C;
    }
L_088DA75C:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    ctx.gpr[31] = (0x088DA778u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DA778u) goto L_088DA778;
    return;
L_088DA778:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088DA7A0;
      }
      goto L_088DA788;
    }
L_088DA788:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088DA798u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DA798u) goto L_088DA798;
    return;
L_088DA798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA7B0;
      }
      goto L_088DA7A0;
    }
L_088DA7A0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DA7B0u);
    ctx.gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DA7B0u) goto L_088DA7B0;
    return;
L_088DA7B0:
    ctx.gpr[31] = (0x088DA7B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DA7B8u) goto L_088DA7B8;
    return;
L_088DA7B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DA7CCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088DA7CCu) goto L_088DA7CC;
    return;
L_088DA7CC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DA7FCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x088DA7FCu) goto L_088DA7FC;
    return;
L_088DA7FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(-29194)));
      if (branch_taken) {
          goto L_088DA894;
      }
      goto L_088DA804;
    }
L_088DA804:
    ctx.gpr[31] = (0x088DA80Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DA80Cu) goto L_088DA80C;
    return;
L_088DA80C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088DA834;
      }
      goto L_088DA81C;
    }
L_088DA81C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088DA82Cu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DA82Cu) goto L_088DA82C;
    return;
L_088DA82C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA844;
      }
      goto L_088DA834;
    }
L_088DA834:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DA844u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DA844u) goto L_088DA844;
    return;
L_088DA844:
    ctx.gpr[31] = (0x088DA84Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DA84Cu) goto L_088DA84C;
    return;
L_088DA84C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DA860u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088DA860u) goto L_088DA860;
    return;
L_088DA860:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DA890u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x088DA890u) goto L_088DA890;
    return;
L_088DA890:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(-29194)));
    goto L_088DA894;
L_088DA894:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA8A8;
      }
      goto L_088DA89C;
    }
L_088DA89C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DA8A8u);
    ctx.gpr[5] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA8A8u) goto L_088DA8A8;
    return;
L_088DA8A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAAAC;
      }
      goto L_088DA8B0;
    }
L_088DA8B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(660)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1780)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAAAC;
      }
      goto L_088DA8CC;
    }
L_088DA8CC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088DA8F4;
      }
      goto L_088DA8D8;
    }
L_088DA8D8:
    ctx.gpr[31] = (0x088DA8E0u);
    ctx.gpr[5] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DA8E0u) goto L_088DA8E0;
    return;
L_088DA8E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (49408u << 16u);
      if (branch_taken) {
          goto L_088DA96C;
      }
      goto L_088DA8EC;
    }
L_088DA8EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAA1C;
      }
      goto L_088DA8F4;
    }
L_088DA8F4:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x088DA908u);
    ctx.gpr[6] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DA908u) goto L_088DA908;
    return;
L_088DA908:
    ctx.gpr[31] = (0x088DA910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DA910u) goto L_088DA910;
    return;
L_088DA910:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21780)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21776)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088DA928u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088DA928u) goto L_088DA928;
    return;
L_088DA928:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21788)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21784)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DA964u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x088DA964u) goto L_088DA964;
    return;
L_088DA964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAAAC;
      }
      goto L_088DA96C;
    }
L_088DA96C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(652)));
    ctx.gpr[6] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088DA9AC;
      }
      goto L_088DA998;
    }
L_088DA998:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DA9A4u);
    ctx.gpr[6] = (0u | 167u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DA9A4u) goto L_088DA9A4;
    return;
L_088DA9A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA9B8;
      }
      goto L_088DA9AC;
    }
L_088DA9AC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DA9B8u);
    ctx.gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DA9B8u) goto L_088DA9B8;
    return;
L_088DA9B8:
    ctx.gpr[31] = (0x088DA9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DA9C0u) goto L_088DA9C0;
    return;
L_088DA9C0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21796)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088DA9D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088DA9D8u) goto L_088DA9D8;
    return;
L_088DA9D8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21804)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21800)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088DAA14u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x088DAA14u) goto L_088DAA14;
    return;
L_088DAA14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAAAC;
      }
      goto L_088DAA1C;
    }
L_088DAA1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DAA28u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DAA28u) goto L_088DAA28;
    return;
L_088DAA28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DAA74;
      }
      goto L_088DAA34;
    }
L_088DAA34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DAA40u);
    ctx.gpr[5] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DAA40u) goto L_088DAA40;
    return;
L_088DAA40:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAA9C;
      }
      goto L_088DAA4C;
    }
L_088DAA4C:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088DAA6Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 210u, 0x088D5048u>(ctx, &aot_mem) && ctx.pc == 0x088DAA6Cu) goto L_088DAA6C;
    return;
L_088DAA6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAAAC;
      }
      goto L_088DAA74;
    }
L_088DAA74:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088DAA94u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 210u, 0x088D5048u>(ctx, &aot_mem) && ctx.pc == 0x088DAA94u) goto L_088DAA94;
    return;
L_088DAA94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAAAC;
      }
      goto L_088DAA9C;
    }
L_088DAA9C:
    ctx.gpr[31] = (0x088DAAA4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 210u, 0x088D5048u>(ctx, &aot_mem) && ctx.pc == 0x088DAAA4u) goto L_088DAAA4;
    return;
L_088DAAA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAAAC;
      }
      goto L_088DAAAC;
    }
L_088DAAAC:
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
L_088DAAD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DAB08u);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x088DAB08u) goto L_088DAB08;
    return;
L_088DAB08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB30;
      }
      goto L_088DAB10;
    }
L_088DAB10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB38;
      }
      goto L_088DAB28;
    }
L_088DAB28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAB40;
      }
      goto L_088DAB30;
    }
L_088DAB30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAF10;
      }
      goto L_088DAB38;
    }
L_088DAB38:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    // nop
      if (branch_taken) {
          goto L_088DABA4;
      }
      goto L_088DAB40;
    }
L_088DAB40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[19] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088DAB9C;
      }
      goto L_088DAB50;
    }
L_088DAB50:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 60u);
      if (branch_taken) {
          goto L_088DAB94;
      }
      goto L_088DAB60;
    }
L_088DAB60:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 61u);
      if (branch_taken) {
          goto L_088DAB94;
      }
      goto L_088DAB68;
    }
L_088DAB68:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 47u);
      if (branch_taken) {
          goto L_088DAB94;
      }
      goto L_088DAB70;
    }
L_088DAB70:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DAB94;
      }
      goto L_088DAB78;
    }
L_088DAB78:
    ctx.gpr[6] = (17530u << 16u);
    ctx.gpr[5] = (0u | 22u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_088DABAC;
      }
      goto L_088DAB8C;
    }
L_088DAB8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DABB4;
      }
      goto L_088DAB94;
    }
L_088DAB94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAF10;
      }
      goto L_088DAB9C;
    }
L_088DAB9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1752), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088DAF10;
      }
      goto L_088DABA4;
    }
L_088DABA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAF10;
      }
      goto L_088DABAC;
    }
L_088DABAC:
    ctx.gpr[31] = (0x088DABB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x088DABB4u) goto L_088DABB4;
    return;
L_088DABB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DABD0;
      }
      goto L_088DABC0;
    }
L_088DABC0:
    ctx.gpr[31] = (0x088DABC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x088DABC8u) goto L_088DABC8;
    return;
L_088DABC8:
    ctx.gpr[31] = (0x088DABD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 879u, 0x089A3B74u>(ctx, &aot_mem) && ctx.pc == 0x088DABD0u) goto L_088DABD0;
    return;
L_088DABD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DABDCu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DABDCu) goto L_088DABDC;
    return;
L_088DABDC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DABF8;
      }
      goto L_088DABE8;
    }
L_088DABE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DABF4u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DABF4u) goto L_088DABF4;
    return;
L_088DABF4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088DABF8;
L_088DABF8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAC08;
      }
      goto L_088DAC00;
    }
L_088DAC00:
    ctx.gpr[31] = (0x088DAC08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 879u, 0x089A3B74u>(ctx, &aot_mem) && ctx.pc == 0x088DAC08u) goto L_088DAC08;
    return;
L_088DAC08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DAC14u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAC14u) goto L_088DAC14;
    return;
L_088DAC14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(856), 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x088DAC3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAC3Cu) goto L_088DAC3C;
    return;
L_088DAC3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088DACB4;
      }
      goto L_088DAC64;
    }
L_088DAC64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DACB4;
      }
      goto L_088DAC80;
    }
L_088DAC80:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[20] = (0u | 204u);
        goto L_088DAC94;
    }
    goto L_088DAC94;
L_088DAC94:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088DACACu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DACACu) goto L_088DACAC;
    return;
L_088DACAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_088DACC8;
      }
      goto L_088DACB4;
    }
L_088DACB4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DACC8u);
    ctx.gpr[6] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DACC8u) goto L_088DACC8;
    return;
L_088DACC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1748), ctx.gpr[22]);
    ctx.gpr[31] = (0x088DACD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DACD4u) goto L_088DACD4;
    return;
L_088DACD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DACF8;
      }
      goto L_088DACDC;
    }
L_088DACDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DACECu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 112u, 0x088DC710u>(ctx, &aot_mem) && ctx.pc == 0x088DACECu) goto L_088DACEC;
    return;
L_088DACEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_088DAD10;
      }
      goto L_088DACF8;
    }
L_088DACF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DAD08u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 46u, 0x088DC2ECu>(ctx, &aot_mem) && ctx.pc == 0x088DAD08u) goto L_088DAD08;
    return;
L_088DAD08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[2]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    goto L_088DAD10;
L_088DAD10:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DAD44;
      }
      goto L_088DAD1C;
    }
L_088DAD1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAD3C;
      }
      goto L_088DAD28;
    }
L_088DAD28:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_088DAD3C;
    }
    goto L_088DAD30;
L_088DAD30:
    ctx.gpr[31] = (0x088DAD38u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088DAD38u) goto L_088DAD38;
    return;
L_088DAD38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_088DAD3C;
L_088DAD3C:
    ctx.gpr[31] = (0x088DAD44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAD44u) goto L_088DAD44;
    return;
L_088DAD44:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1752), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088DAED8;
      }
      goto L_088DAD58;
    }
L_088DAD58:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088DAED8;
      }
      goto L_088DAD60;
    }
L_088DAD60:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088DADB8;
      }
      goto L_088DAD90;
    }
L_088DAD90:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DADB8;
      }
      goto L_088DAD9C;
    }
L_088DAD9C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088DADACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DADACu) goto L_088DADAC;
    return;
L_088DADAC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_088DADD0;
      }
      goto L_088DADB8;
    }
L_088DADB8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DADC8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DADC8u) goto L_088DADC8;
    return;
L_088DADC8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    goto L_088DADD0;
L_088DADD0:
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DAE78;
      }
      goto L_088DADDC;
    }
L_088DADDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DAE78;
      }
      goto L_088DADEC;
    }
L_088DADEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DAE58;
      }
      goto L_088DAE14;
    }
L_088DAE14:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_088DAE3C;
      }
      goto L_088DAE1C;
    }
L_088DAE1C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAE44;
      }
      goto L_088DAE28;
    }
L_088DAE28:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DAE88;
      }
      goto L_088DAE3C;
    }
L_088DAE3C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DAE28;
      }
      goto L_088DAE44;
    }
L_088DAE44:
    ctx.gpr[4] = (16262u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DAE88;
      }
      goto L_088DAE58;
    }
L_088DAE58:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAE28;
      }
      goto L_088DAE64;
    }
L_088DAE64:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DAE88;
      }
      goto L_088DAE78;
    }
L_088DAE78:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DAE88;
L_088DAE88:
    ctx.gpr[31] = (0x088DAE90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DAE90u) goto L_088DAE90;
    return;
L_088DAE90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAEAC;
      }
      goto L_088DAE98;
    }
L_088DAE98:
    ctx.gpr[5] = (15779u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DAEACu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088DAEACu) goto L_088DAEAC;
    return;
L_088DAEAC:
    ctx.gpr[5] = (2189u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DAEC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23432));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x088DAEC0u) goto L_088DAEC0;
    return;
L_088DAEC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1753), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1754), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DAEF8;
      }
      goto L_088DAED8;
    }
L_088DAED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1753), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1754), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088DAEF8;
L_088DAEF8:
    ctx.gpr[31] = (0x088DAF00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DAF00u) goto L_088DAF00;
    return;
L_088DAF00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAF10;
      }
      goto L_088DAF08;
    }
L_088DAF08:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21408), static_cast<std::uint16_t>(0u));
    goto L_088DAF10;
L_088DAF10:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_088DAF3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DAF7Cu);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DAF7Cu) goto L_088DAF7C;
    return;
L_088DAF7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_088DAF90;
      }
      goto L_088DAF84;
    }
L_088DAF84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DAFF0;
      }
      goto L_088DAF90;
    }
L_088DAF90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DAFE8;
      }
      goto L_088DAFA0;
    }
L_088DAFA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DAFE8;
      }
      goto L_088DAFB0;
    }
L_088DAFB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DAFE8;
      }
      goto L_088DAFC0;
    }
L_088DAFC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DAFE8;
      }
      goto L_088DAFD0;
    }
L_088DAFD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[21] = (0u | 169u);
      if (branch_taken) {
          goto L_088DAFF8;
      }
      goto L_088DAFE0;
    }
L_088DAFE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB1A8;
      }
      goto L_088DAFE8;
    }
L_088DAFE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD4;
      }
      goto L_088DAFF0;
    }
L_088DAFF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD4;
      }
      goto L_088DAFF8;
    }
L_088DAFF8:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB01C;
      }
      goto L_088DB008;
    }
L_088DB008:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DB024;
      }
      goto L_088DB014;
    }
L_088DB014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB0A0;
      }
      goto L_088DB01C;
    }
L_088DB01C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD4;
      }
      goto L_088DB024;
    }
L_088DB024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DB030u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 336u, 0x08865854u>(ctx, &aot_mem) && ctx.pc == 0x088DB030u) goto L_088DB030;
    return;
L_088DB030:
    ctx.gpr[4] = (16640u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DB054;
      }
      goto L_088DB03C;
    }
L_088DB03C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DB04Cu);
    ctx.gpr[6] = (0u | 39u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DB04Cu) goto L_088DB04C;
    return;
L_088DB04C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DB070;
      }
      goto L_088DB054;
    }
L_088DB054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(476)));
    ctx.gpr[31] = (0x088DB06Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DB06Cu) goto L_088DB06C;
    return;
L_088DB06C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088DB070;
L_088DB070:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB0A0;
      }
      goto L_088DB078;
    }
L_088DB078:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088DB084u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088DB084u) goto L_088DB084;
    return;
L_088DB084:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088DB0A0;
L_088DB0A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB1A0;
      }
      goto L_088DB0AC;
    }
L_088DB0AC:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DB0CCu);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB0CCu) goto L_088DB0CC;
    return;
L_088DB0CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(676)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088DB0E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x088DB0E0u) goto L_088DB0E0;
    return;
L_088DB0E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DB0ECu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x088DB0ECu) goto L_088DB0EC;
    return;
L_088DB0EC:
    ctx.gpr[7] = (ctx.gpr[17] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB104u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 643u, 0x088B7F1Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB104u) goto L_088DB104;
    return;
L_088DB104:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    goto L_088DB130;
L_088DB130:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088DB188u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088DB188u) goto L_088DB188;
    return;
L_088DB188:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB130;
      }
      goto L_088DB1A0;
    }
L_088DB1A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD4;
      }
      goto L_088DB1A8;
    }
L_088DB1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB24C;
      }
      goto L_088DB1B8;
    }
L_088DB1B8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[4] = (48793u << 16u);
      if (branch_taken) {
          goto L_088DB244;
      }
      goto L_088DB1C4;
    }
L_088DB1C4:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088DB1D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 418u, 0x088D5DA8u>(ctx, &aot_mem) && ctx.pc == 0x088DB1D4u) goto L_088DB1D4;
    return;
L_088DB1D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB244;
      }
      goto L_088DB1DC;
    }
L_088DB1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DB1E8u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 336u, 0x08865854u>(ctx, &aot_mem) && ctx.pc == 0x088DB1E8u) goto L_088DB1E8;
    return;
L_088DB1E8:
    ctx.gpr[4] = (16640u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DB20C;
      }
      goto L_088DB1F4;
    }
L_088DB1F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DB204u);
    ctx.gpr[6] = (0u | 39u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DB204u) goto L_088DB204;
    return;
L_088DB204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DB220;
      }
      goto L_088DB20C;
    }
L_088DB20C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DB21Cu);
    ctx.gpr[6] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DB21Cu) goto L_088DB21C;
    return;
L_088DB21C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_088DB220;
L_088DB220:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB244;
      }
      goto L_088DB228;
    }
L_088DB228:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088DB244;
L_088DB244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD4;
      }
      goto L_088DB24C;
    }
L_088DB24C:
    ctx.gpr[31] = (0x088DB254u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x088DB254u) goto L_088DB254;
    return;
L_088DB254:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB274;
      }
      goto L_088DB25C;
    }
L_088DB25C:
    ctx.gpr[31] = (0x088DB264u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DB264u) goto L_088DB264;
    return;
L_088DB264:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
        goto L_088DB27C;
    }
    goto L_088DB26C;
L_088DB26C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB2A4;
      }
      goto L_088DB274;
    }
L_088DB274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD4;
      }
      goto L_088DB27C;
    }
L_088DB27C:
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB2A4;
      }
      goto L_088DB288;
    }
L_088DB288:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DB2C4;
      }
      goto L_088DB2A4;
    }
L_088DB2A4:
    ctx.gpr[31] = (0x088DB2ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DB2ACu) goto L_088DB2AC;
    return;
L_088DB2AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB5D8;
      }
      goto L_088DB2B4;
    }
L_088DB2B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB5D8;
      }
      goto L_088DB2C4;
    }
L_088DB2C4:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088DB2D8;
      }
      goto L_088DB2D0;
    }
L_088DB2D0:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DB478;
      }
      goto L_088DB2D8;
    }
L_088DB2D8:
    ctx.gpr[31] = (0x088DB2E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DB2E0u) goto L_088DB2E0;
    return;
L_088DB2E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB300;
      }
      goto L_088DB2E8;
    }
L_088DB2E8:
    ctx.gpr[31] = (0x088DB2F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DB2F0u) goto L_088DB2F0;
    return;
L_088DB2F0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB318;
      }
      goto L_088DB300;
    }
L_088DB300:
    ctx.gpr[31] = (0x088DB308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DB308u) goto L_088DB308;
    return;
L_088DB308:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB478;
      }
      goto L_088DB318;
    }
L_088DB318:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088DB334;
      }
      goto L_088DB324;
    }
L_088DB324:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088DB380;
      }
      goto L_088DB32C;
    }
L_088DB32C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
      if (branch_taken) {
          goto L_088DB3E0;
      }
      goto L_088DB334;
    }
L_088DB334:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DB350;
      }
      goto L_088DB340;
    }
L_088DB340:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB380;
      }
      goto L_088DB348;
    }
L_088DB348:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 28u);
      if (branch_taken) {
          goto L_088DB3E0;
      }
      goto L_088DB350;
    }
L_088DB350:
    ctx.gpr[31] = (0x088DB358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DB358u) goto L_088DB358;
    return;
L_088DB358:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB374;
      }
      goto L_088DB368;
    }
L_088DB368:
    ctx.gpr[18] = (0u | 35u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088DB378;
      }
      goto L_088DB374;
    }
L_088DB374:
    ctx.gpr[18] = (0u | 27u);
    goto L_088DB378;
L_088DB378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB3E0;
      }
      goto L_088DB380;
    }
L_088DB380:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DB394;
      }
      goto L_088DB38C;
    }
L_088DB38C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 18u);
      if (branch_taken) {
          goto L_088DB3E0;
      }
      goto L_088DB394;
    }
L_088DB394:
    ctx.gpr[31] = (0x088DB39Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DB39Cu) goto L_088DB39C;
    return;
L_088DB39C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB3B8;
      }
      goto L_088DB3AC;
    }
L_088DB3AC:
    ctx.gpr[18] = (0u | 33u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088DB3E0;
      }
      goto L_088DB3B8;
    }
L_088DB3B8:
    ctx.gpr[31] = (0x088DB3C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DB3C0u) goto L_088DB3C0;
    return;
L_088DB3C0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB3DC;
      }
      goto L_088DB3D0;
    }
L_088DB3D0:
    ctx.gpr[18] = (0u | 33u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088DB3E0;
      }
      goto L_088DB3DC;
    }
L_088DB3DC:
    ctx.gpr[18] = (0u | 17u);
    goto L_088DB3E0;
L_088DB3E0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB404;
      }
      goto L_088DB3E8;
    }
L_088DB3E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 500u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DB3FCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x088DB3FCu) goto L_088DB3FC;
    return;
L_088DB3FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB470;
      }
      goto L_088DB404;
    }
L_088DB404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DB410u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DB410u) goto L_088DB410;
    return;
L_088DB410:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088DB430;
      }
      goto L_088DB41C;
    }
L_088DB41C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DB44C;
      }
      goto L_088DB430;
    }
L_088DB430:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DB448u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DB448u) goto L_088DB448;
    return;
L_088DB448:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088DB44C;
L_088DB44C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DB458u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088DB458u) goto L_088DB458;
    return;
L_088DB458:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088DB470;
L_088DB470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB5C4;
      }
      goto L_088DB478;
    }
L_088DB478:
    ctx.gpr[31] = (0x088DB480u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DB480u) goto L_088DB480;
    return;
L_088DB480:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB514;
      }
      goto L_088DB488;
    }
L_088DB488:
    ctx.gpr[31] = (0x088DB490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DB490u) goto L_088DB490;
    return;
L_088DB490:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB514;
      }
      goto L_088DB4A0;
    }
L_088DB4A0:
    ctx.gpr[31] = (0x088DB4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DB4A8u) goto L_088DB4A8;
    return;
L_088DB4A8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21804)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21800)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088DB4C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088DB4C0u) goto L_088DB4C0;
    return;
L_088DB4C0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21788)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21784)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[31] = (0x088DB50Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB50Cu) goto L_088DB50C;
    return;
L_088DB50C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB5C4;
      }
      goto L_088DB514;
    }
L_088DB514:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088DB530;
      }
      goto L_088DB520;
    }
L_088DB520:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088DB554;
      }
      goto L_088DB528;
    }
L_088DB528:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 30u);
      if (branch_taken) {
          goto L_088DB558;
      }
      goto L_088DB530;
    }
L_088DB530:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DB54C;
      }
      goto L_088DB53C;
    }
L_088DB53C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB554;
      }
      goto L_088DB544;
    }
L_088DB544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 32u);
      if (branch_taken) {
          goto L_088DB558;
      }
      goto L_088DB54C;
    }
L_088DB54C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 31u);
      if (branch_taken) {
          goto L_088DB558;
      }
      goto L_088DB554;
    }
L_088DB554:
    ctx.gpr[17] = (0u | 29u);
    goto L_088DB558;
L_088DB558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DB564u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DB564u) goto L_088DB564;
    return;
L_088DB564:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB584;
      }
      goto L_088DB570;
    }
L_088DB570:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DB5A0;
      }
      goto L_088DB584;
    }
L_088DB584:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DB59Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DB59Cu) goto L_088DB59C;
    return;
L_088DB59C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088DB5A0;
L_088DB5A0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DB5ACu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088DB5ACu) goto L_088DB5AC;
    return;
L_088DB5AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088DB5C4;
L_088DB5C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB5D0u);
    ctx.gpr[5] = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB5D0u) goto L_088DB5D0;
    return;
L_088DB5D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD4;
      }
      goto L_088DB5D8;
    }
L_088DB5D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB5E4u);
    ctx.gpr[5] = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB5E4u) goto L_088DB5E4;
    return;
L_088DB5E4:
    ctx.gpr[19] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[20] = (0u | 169u);
      if (branch_taken) {
          goto L_088DB638;
      }
      goto L_088DB5F0;
    }
L_088DB5F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088DB638;
      }
      goto L_088DB5FC;
    }
L_088DB5FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB638;
      }
      goto L_088DB60C;
    }
L_088DB60C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB638;
      }
      goto L_088DB61C;
    }
L_088DB61C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB638;
      }
      goto L_088DB624;
    }
L_088DB624:
    ctx.gpr[4] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088DB688;
      }
      goto L_088DB638;
    }
L_088DB638:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DB658;
      }
      goto L_088DB644;
    }
L_088DB644:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088DB680;
      }
      goto L_088DB64C;
    }
L_088DB64C:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DB688;
      }
      goto L_088DB658;
    }
L_088DB658:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DB674;
      }
      goto L_088DB660;
    }
L_088DB660:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB680;
      }
      goto L_088DB668;
    }
L_088DB668:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DB688;
      }
      goto L_088DB674;
    }
L_088DB674:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DB688;
      }
      goto L_088DB680;
    }
L_088DB680:
    ctx.gpr[4] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[4]);
    goto L_088DB688;
L_088DB688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB6B0;
      }
      goto L_088DB698;
    }
L_088DB698:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088DB6A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 418u, 0x088D5DA8u>(ctx, &aot_mem) && ctx.pc == 0x088DB6A4u) goto L_088DB6A4;
    return;
L_088DB6A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB6B0;
      }
      goto L_088DB6AC;
    }
L_088DB6AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[19]);
    goto L_088DB6B0;
L_088DB6B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088DB73C;
      }
      goto L_088DB6BC;
    }
L_088DB6BC:
    ctx.gpr[17] = (2189u << 16u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(23432));
      if (branch_taken) {
          goto L_088DB6D8;
      }
      goto L_088DB6C8;
    }
L_088DB6C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB6F8;
      }
      goto L_088DB6D8;
    }
L_088DB6D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088DB6F8;
L_088DB6F8:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DB710u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DB710u) goto L_088DB710;
    return;
L_088DB710:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088DB720u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088DB720u) goto L_088DB720;
    return;
L_088DB720:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DB730u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x088DB730u) goto L_088DB730;
    return;
L_088DB730:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1754), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1752), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088DBA9C;
      }
      goto L_088DB73C;
    }
L_088DB73C:
    ctx.gpr[31] = (0x088DB744u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DB744u) goto L_088DB744;
    return;
L_088DB744:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088DB844;
      }
      goto L_088DB74C;
    }
L_088DB74C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB844;
      }
      goto L_088DB770;
    }
L_088DB770:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088DB844;
      }
      goto L_088DB794;
    }
L_088DB794:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088DB7B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB7B4u) goto L_088DB7B4;
    return;
L_088DB7B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB844;
      }
      goto L_088DB7D0;
    }
L_088DB7D0:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088DB7E8;
      }
      goto L_088DB7D8;
    }
L_088DB7D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB808;
      }
      goto L_088DB7E8;
    }
L_088DB7E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088DB808;
L_088DB808:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DB820u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DB820u) goto L_088DB820;
    return;
L_088DB820:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088DB830u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088DB830u) goto L_088DB830;
    return;
L_088DB830:
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DBA9C;
      }
      goto L_088DB844;
    }
L_088DB844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[18] = (2189u << 16u);
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(23432));
      if (branch_taken) {
          goto L_088DB870;
      }
      goto L_088DB858;
    }
L_088DB858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB870;
      }
      goto L_088DB868;
    }
L_088DB868:
    ctx.gpr[31] = (0x088DB870u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x088DB870u) goto L_088DB870;
    return;
L_088DB870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB88C;
      }
      goto L_088DB87C;
    }
L_088DB87C:
    ctx.gpr[31] = (0x088DB884u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x088DB884u) goto L_088DB884;
    return;
L_088DB884:
    ctx.gpr[31] = (0x088DB88Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 879u, 0x089A3B74u>(ctx, &aot_mem) && ctx.pc == 0x088DB88Cu) goto L_088DB88C;
    return;
L_088DB88C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DB8CC;
      }
      goto L_088DB89C;
    }
L_088DB89C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB8C4;
      }
      goto L_088DB8A8;
    }
L_088DB8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_088DB8C4;
    }
    goto L_088DB8B4;
L_088DB8B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x088DB8C0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088DB8C0u) goto L_088DB8C0;
    return;
L_088DB8C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_088DB8C4;
L_088DB8C4:
    ctx.gpr[31] = (0x088DB8CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB8CCu) goto L_088DB8CC;
    return;
L_088DB8CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1752), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1748), ctx.gpr[17]);
    ctx.gpr[31] = (0x088DB8E4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 322u, 0x08865784u>(ctx, &aot_mem) && ctx.pc == 0x088DB8E4u) goto L_088DB8E4;
    return;
L_088DB8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DB8F0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DB8F0u) goto L_088DB8F0;
    return;
L_088DB8F0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB914;
      }
      goto L_088DB8FC;
    }
L_088DB8FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DB914;
L_088DB914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DB920u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DB920u) goto L_088DB920;
    return;
L_088DB920:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DB93C;
      }
      goto L_088DB92C;
    }
L_088DB92C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DB938u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DB938u) goto L_088DB938;
    return;
L_088DB938:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088DB93C;
L_088DB93C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DB964;
      }
      goto L_088DB944;
    }
L_088DB944:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088DB964u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 879u, 0x089A3B74u>(ctx, &aot_mem) && ctx.pc == 0x088DB964u) goto L_088DB964;
    return;
L_088DB964:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DB970u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB970u) goto L_088DB970;
    return;
L_088DB970:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(856), 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088DB994u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088DB994u) goto L_088DB994;
    return;
L_088DB994:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DBA0C;
      }
      goto L_088DB9B8;
    }
L_088DB9B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBA0C;
      }
      goto L_088DB9D4;
    }
L_088DB9D4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 204u);
        goto L_088DB9FC;
    }
    goto L_088DB9FC;
L_088DB9FC:
    ctx.gpr[31] = (0x088DBA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBA04u) goto L_088DBA04;
    return;
L_088DBA04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DBA20;
      }
      goto L_088DBA0C;
    }
L_088DBA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DBA1Cu);
    ctx.gpr[6] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBA1Cu) goto L_088DBA1C;
    return;
L_088DBA1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088DBA20;
L_088DBA20:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DBA40;
      }
      goto L_088DBA30;
    }
L_088DBA30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DBA60;
      }
      goto L_088DBA40;
    }
L_088DBA40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088DBA60;
L_088DBA60:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DBA78u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DBA78u) goto L_088DBA78;
    return;
L_088DBA78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DBA88u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x088DBA88u) goto L_088DBA88;
    return;
L_088DBA88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1753), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1754), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088DBA9C;
L_088DBA9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD4;
      }
      goto L_088DBAA8;
    }
L_088DBAA8:
    ctx.gpr[31] = (0x088DBAB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DBAB0u) goto L_088DBAB0;
    return;
L_088DBAB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD4;
      }
      goto L_088DBAB8;
    }
L_088DBAB8:
    ctx.gpr[31] = (0x088DBAC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DBAC0u) goto L_088DBAC0;
    return;
L_088DBAC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBAD4;
      }
      goto L_088DBAC8;
    }
L_088DBAC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x088DBAD4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 289u, 0x08945414u>(ctx, &aot_mem) && ctx.pc == 0x088DBAD4u) goto L_088DBAD4;
    return;
L_088DBAD4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DBB04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DBB6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBB6Cu) goto L_088DBB6C;
    return;
L_088DBB6C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBBFC;
      }
      goto L_088DBB8C;
    }
L_088DBB8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBBFC;
      }
      goto L_088DBBB0;
    }
L_088DBBB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DBBFC;
L_088DBBFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBC2C;
      }
      goto L_088DBC08;
    }
L_088DBC08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[21] = (0u | 2u);
      if (branch_taken) {
          goto L_088DBC34;
      }
      goto L_088DBC18;
    }
L_088DBC18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), 0u);
    ctx.gpr[31] = (0x088DBC24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBC24u) goto L_088DBC24;
    return;
L_088DBC24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBC5C;
      }
      goto L_088DBC2C;
    }
L_088DBC2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 45u, 0x088DC2C8u>(ctx, &aot_mem); return;
      }
      goto L_088DBC34;
    }
L_088DBC34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DBC4C;
      }
      goto L_088DBC44;
    }
L_088DBC44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088DBC5C;
      }
      goto L_088DBC4C;
    }
L_088DBC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DBC58u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DBC58u) goto L_088DBC58;
    return;
L_088DBC58:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088DBC5C;
L_088DBC5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088DBC80;
      }
      goto L_088DBC68;
    }
L_088DBC68:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBC80;
      }
      goto L_088DBC70;
    }
L_088DBC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DBC7Cu);
    ctx.gpr[5] = (0u | 62u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DBC7Cu) goto L_088DBC7C;
    return;
L_088DBC7C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088DBC80;
L_088DBC80:
    ctx.gpr[31] = (0x088DBC88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DBC88u) goto L_088DBC88;
    return;
L_088DBC88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBD70;
      }
      goto L_088DBC90;
    }
L_088DBC90:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBD70;
      }
      goto L_088DBC98;
    }
L_088DBC98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DBD70;
      }
      goto L_088DBCC0;
    }
L_088DBCC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[6] = (0u | 9u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
        goto L_088DBCE0;
    }
    goto L_088DBCD0;
L_088DBCD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DBD70;
      }
      goto L_088DBCDC;
    }
L_088DBCDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    goto L_088DBCE0;
L_088DBCE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21808)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DBD70;
      }
      goto L_088DBD18;
    }
L_088DBD18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21808)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DBD70;
      }
      goto L_088DBD50;
    }
L_088DBD50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088DBD70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 336u, 0x0882607Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBD70u) goto L_088DBD70;
    return;
L_088DBD70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBDF4;
      }
      goto L_088DBD80;
    }
L_088DBD80:
    ctx.gpr[31] = (0x088DBD88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DBD88u) goto L_088DBD88;
    return;
L_088DBD88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBDF4;
      }
      goto L_088DBD90;
    }
L_088DBD90:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBDC0;
      }
      goto L_088DBD98;
    }
L_088DBD98:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088DBDC0;
L_088DBDC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1754))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBDE0;
      }
      goto L_088DBDCC;
    }
L_088DBDCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DBDD8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 230u, 0x088D514Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBDD8u) goto L_088DBDD8;
    return;
L_088DBDD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 45u, 0x088DC2C8u>(ctx, &aot_mem); return;
      }
      goto L_088DBDE0;
    }
L_088DBDE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DBDECu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 230u, 0x088D514Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBDECu) goto L_088DBDEC;
    return;
L_088DBDEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 45u, 0x088DC2C8u>(ctx, &aot_mem); return;
      }
      goto L_088DBDF4;
    }
L_088DBDF4:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 14u, 0x088DC0D4u>(ctx, &aot_mem); return;
    }
    goto L_088DBDFC;
L_088DBDFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1753))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 14u, 0x088DC0D4u>(ctx, &aot_mem); return;
    }
    goto L_088DBE0C;
L_088DBE0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
        goto L_088DBFA4;
    }
    goto L_088DBE30;
L_088DBE30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (15692u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
        goto L_088DBFA4;
    }
    goto L_088DBE70;
L_088DBE70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
        goto L_088DBFA4;
    }
    goto L_088DBEAC;
L_088DBEAC:
    ctx.gpr[31] = (0x088DBEB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DBEB4u) goto L_088DBEB4;
    return;
L_088DBEB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DBEE0;
      }
      goto L_088DBEBC;
    }
L_088DBEBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DBF3C;
      }
      goto L_088DBEE0;
    }
L_088DBEE0:
    ctx.gpr[31] = (0x088DBEE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DBEE8u) goto L_088DBEE8;
    return;
L_088DBEE8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_088DBF04;
    }
    goto L_088DBEF0;
L_088DBEF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DBF3C;
      }
      goto L_088DBF00;
    }
L_088DBF00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_088DBF04;
L_088DBF04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088DBF3Cu);
    ctx.gpr[6] = (0u | 188u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088DBF3Cu) goto L_088DBF3C;
    return;
L_088DBF3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19552));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DBF98u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 342u, 0x088DD754u>(ctx, &aot_mem) && ctx.pc == 0x088DBF98u) goto L_088DBF98;
    return;
L_088DBF98:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1752), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 45u, 0x088DC2C8u>(ctx, &aot_mem); return;
      }
      goto L_088DBFA4;
    }
L_088DBFA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
        (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 11u, 0x088DC094u>(ctx, &aot_mem); return;
    }
    goto L_088DBFC4;
L_088DBFC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 45u, 0x088DC2C8u>(ctx, &aot_mem); return;
      }
      goto L_088DBFF4;
    }
L_088DBFF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 45u, 0x088DC2C8u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 1u, 0x088DC004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0053(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0053_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_53(Runtime &runtime) {
    runtime.register_generated_unit(53u, 0x088D8000u, 16384u, &recomp_unit_0053, &recomp_unit_0053_entry);
    runtime.register_function(0x088D8000u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8018u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8020u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8030u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8040u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8050u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8058u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8068u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D806Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8074u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8088u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D80FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8120u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8148u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D814Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8168u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8174u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8178u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8198u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D81ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8204u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8220u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D822Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8240u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D824Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8254u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D825Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8264u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D826Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D827Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D828Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8290u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D82F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8334u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8340u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8354u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8364u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D837Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8380u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D838Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D83E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8400u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8410u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8428u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D843Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8448u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8460u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8500u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8508u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D853Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8558u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8560u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8568u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8590u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D85B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D85E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D85FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D860Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D861Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8630u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8644u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8664u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D866Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8674u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D867Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8684u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D868Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8694u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D86F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8704u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D872Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8744u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D874Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8780u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8790u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D87A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D87D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D87D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D87FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8814u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D881Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8840u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8858u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D885Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8864u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8874u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D887Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8884u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D88D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D88E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D88E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8908u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8918u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D892Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8930u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8950u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8978u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8984u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8990u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D899Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D89ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D89B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D89D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D89DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D89ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D89F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8A80u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8AA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8AB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8AC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8AE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B2Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8B98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BD4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8BFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C04u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C24u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C2Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8C7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8CECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8D78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DD4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8DFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E20u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E2Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8E84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8EACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8EC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8ECCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8EE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8EECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8EFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F20u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F74u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8F9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8FA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8FC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D8FE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9000u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9008u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9018u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9034u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D905Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9074u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D907Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D90A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D90B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D90BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D90CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D90F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9100u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9108u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9110u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D911Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D915Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D91B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D91C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D91E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D91E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D91F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9208u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9218u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9220u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9228u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9230u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D923Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9244u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D924Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9254u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D92ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D92D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D92DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D92F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9314u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9324u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D932Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9330u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9344u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9364u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9374u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D937Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9384u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D938Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D939Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D93A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D93B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D93C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D93D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D93F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9418u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9434u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D943Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9444u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9454u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9460u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9470u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9484u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D94F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9500u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D950Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9518u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9524u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9528u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9530u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9568u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9584u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D95B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D95BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D95CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D95D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D95F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D95F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9600u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D961Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9620u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D962Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D963Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D964Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D965Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9668u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9674u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9680u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9684u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D968Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D96C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D96E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D970Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9718u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9728u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9730u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D973Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9748u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9750u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D975Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9774u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9780u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9834u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D986Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9874u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D98F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9900u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D990Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9918u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9924u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9930u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9938u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9950u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D995Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9964u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D996Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9974u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9980u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9988u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9994u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D999Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D99F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A4Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A74u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9A80u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9AA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9AA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9ABCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9ACCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9ADCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9AECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9AFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B0Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B24u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B2Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B74u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9B9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BCCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9BFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C20u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9C94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CD0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9CF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D0Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D20u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9D9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DBCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9DF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E48u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9E84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9EA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9EBCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9EDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9EE4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9EF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F2Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F54u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9F90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FD0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088D9FF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA01Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA028u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA038u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA06Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA0A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA0B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA0C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA0C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA0D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA0E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA0E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA0F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA0F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA10Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA114u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA154u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA16Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA17Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA1A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA1ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA1B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA1C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA1C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA1E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA1F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA1F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA20Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA224u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA260u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA274u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA27Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA294u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA29Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA2FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA314u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA328u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA334u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA340u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA374u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA388u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA390u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA3FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA414u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA41Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA434u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA470u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA47Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA484u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA48Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA494u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA4F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA510u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA518u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA530u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA56Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA574u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA57Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA58Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA5A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA5ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA5CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA5FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA60Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA618u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA620u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA628u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA630u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA63Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA65Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA668u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA66Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA674u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA680u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA684u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA68Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA69Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA6F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA704u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA734u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA73Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA74Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA75Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA778u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA788u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA798u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA7A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA7B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA7B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA7CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA7FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA804u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA80Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA81Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA82Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA834u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA844u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA84Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA860u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA890u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA894u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA89Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA8F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA908u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA910u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA928u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA964u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA96Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA998u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DA9D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA4Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA74u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAA9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAAA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAAACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAAD4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAB9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABD0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DABF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC80u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAC94u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DACACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DACB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DACC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DACD4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DACDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DACECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DACF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD38u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAD9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADD0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DADECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE14u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE28u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE64u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAE98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAEACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAEC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAED8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAEF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF10u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF84u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAF90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAFA0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAFB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAFC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAFD0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAFE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAFE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAFF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DAFF8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB008u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB014u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB01Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB024u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB030u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB03Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB04Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB054u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB06Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB070u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB078u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB084u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB0ECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB104u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB130u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB188u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB1F4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB204u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB20Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB21Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB220u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB228u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB244u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB24Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB254u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB25Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB264u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB26Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB274u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB27Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB288u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB2F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB300u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB308u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB318u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB324u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB32Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB334u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB340u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB348u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB350u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB358u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB368u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB374u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB378u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB380u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB38Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB394u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB39Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3DCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3E0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB3FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB404u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB410u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB41Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB430u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB448u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB44Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB458u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB470u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB478u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB480u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB488u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB490u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB4C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB50Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB514u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB520u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB528u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB530u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB53Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB544u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB54Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB554u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB558u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB564u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB570u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB584u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB59Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5A0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB5FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB60Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB61Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB624u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB638u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB644u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB64Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB658u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB660u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB668u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB674u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB680u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB688u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB698u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6A4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6ACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6B0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6BCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6C8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB6F8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB710u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB720u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB730u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB73Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB744u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB74Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB770u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB794u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7D0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7D8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB7E8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB808u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB820u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB830u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB844u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB858u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB868u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB870u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB87Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB884u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB88Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB89Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8A8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8B4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8C0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8C4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8CCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8E4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8F0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB8FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB914u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB920u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB92Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB938u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB93Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB944u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB964u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB970u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB994u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9B8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9D4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DB9FCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA04u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA0Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA1Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA20u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA40u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA60u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA78u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBA9Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAA8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAB8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAC8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBAD4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB04u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB6Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBB8Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBBB0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBBFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC08u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC24u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC2Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC34u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC44u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC4Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC58u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC5Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC68u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC7Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC80u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBC98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCD0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCDCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBCE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD18u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD50u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD80u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD88u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD90u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBD98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBDC0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBDCCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBDD8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBDE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBDECu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBDF4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBDFCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE0Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE30u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBE70u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBEACu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBEB4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBEBCu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBEE0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBEE8u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBEF0u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF00u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF04u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF3Cu, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBF98u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBFA4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBFC4u, &recomp_unit_0053, "recomp_unit_0053");
    runtime.register_function(0x088DBFF4u, &recomp_unit_0053, "recomp_unit_0053");
}
} // namespace psprecomp
