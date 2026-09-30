#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0003[4088] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 17, 0,
    18, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27,
    0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 39, 40, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 0, 0, 0, 46, 47, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 0, 0,
    0, 53, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 62, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0,
    88, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119,
    0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 127, 0, 0, 0,
    0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 135, 0, 136,
    0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0,
    0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 154,
    0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 160, 161, 0, 0, 0, 162, 0, 163, 0, 164, 0, 0,
    0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0,
    172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 0, 189, 0,
    0, 0, 0, 190, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0,
    0, 0, 201, 202, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 208, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0,
    211, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0,
    0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222,
    0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 232, 0, 233, 0, 0, 234, 0, 0, 235, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 240, 0,
    241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 249, 0, 250, 0, 251, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 255, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257,
    258, 0, 259, 260, 0, 261, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0,
    0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 273, 274, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 283, 284, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0, 290, 0, 291, 0, 0, 292, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 295, 0, 0, 0, 0, 296, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 301, 0, 0, 0,
    0, 0, 302, 303, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 314, 0, 315, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0,
    318, 0, 319, 0, 320, 0, 0, 0, 0, 0, 321, 322, 0, 0, 0, 0, 323, 0, 324, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 328,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 332, 0, 333, 0, 0, 334, 0,
    335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 339, 0, 0, 0, 0, 0, 340, 341, 0, 0, 0, 0, 342, 0, 343, 0, 344, 0,
    0, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0,
    353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 358, 0, 359, 0, 360, 0, 0, 361, 362, 0, 0, 0,
    0, 363, 0, 364, 0, 365, 0, 0, 366, 367, 0, 0, 0, 0, 368, 0, 369, 0, 370, 0, 0, 371, 372, 0, 0, 0, 0, 373, 0, 374, 0, 375,
    0, 0, 376, 0, 377, 0, 0, 378, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0,
    385, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0,
    0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0,
    397, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 404, 0, 405, 0, 406, 0, 0,
    407, 0, 408, 0, 0, 409, 0, 410, 0, 0, 411, 0, 0, 0, 0, 412, 0, 413, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 418,
    0, 419, 0, 420, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 429, 0, 430, 0, 431, 0, 0,
    0, 0, 432, 0, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 437, 0, 438, 0, 0, 439, 440, 0, 0, 0, 0, 441,
    0, 442, 0, 443, 0, 0, 444, 445, 0, 0, 0, 0, 446, 0, 447, 0, 448, 0, 0, 449, 450, 0, 0, 0, 0, 451, 0, 452, 0, 453, 0, 0,
    454, 0, 455, 0, 0, 456, 0, 457, 0, 0, 458, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 465, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 469, 0, 470, 0, 0, 0,
    0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 473, 0, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 477, 0, 478, 0, 479, 480, 0, 0, 0, 481,
    0, 0, 482, 0, 0, 483, 0, 0, 0, 484, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 489, 0, 490, 0, 491, 0, 0,
    492, 0, 493, 0, 0, 494, 0, 495, 0, 0, 496, 0, 0, 0, 0, 497, 0, 498, 0, 499, 0, 0, 500, 0, 0, 0, 501, 0, 0, 502, 0, 503,
    0, 0, 504, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0, 508, 0, 509, 510, 0, 511, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0,
    515, 0, 516, 0, 517, 518, 0, 519, 0, 520, 521, 0, 0, 522, 0, 523, 0, 524, 0, 0, 525, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 528,
    0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 533, 0, 534, 0, 535, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0,
    0, 0, 541, 0, 0, 0, 542, 0, 0, 543, 0, 544, 0, 545, 0, 546, 0, 0, 0, 0, 547, 0, 548, 0, 549, 0, 550, 0, 0, 0, 551, 0,
    552, 0, 0, 0, 553, 0, 554, 0, 0, 0, 555, 0, 556, 0, 557, 0, 558, 0, 559, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 563,
    0, 564, 0, 0, 565, 0, 0, 566, 0, 567, 0, 568, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 0,
    0, 573, 0, 0, 574, 0, 575, 576, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 0, 0, 0,
    582, 0, 583, 0, 584, 0, 0, 0, 585, 0, 586, 0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0, 591, 0, 592, 0, 593, 0, 594, 0, 0, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599,
    0, 600, 0, 601, 0, 0, 602, 0, 603, 0, 604, 0, 0, 0, 0, 0, 605, 0, 606, 0, 607, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 0,
    0, 610, 0, 611, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0,
    0, 617, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 622, 0, 623, 0, 0, 624, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 636, 0, 637, 0, 0, 638, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 643, 0, 644, 0, 0, 645, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 648, 0, 649, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 652, 0, 653, 0, 0, 654, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 657, 0, 658, 0, 0, 0, 659, 0, 0, 0,
    660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 663, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 666, 0, 667, 0, 0, 0,
    668, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 672, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 675, 0,
    676, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0,
    0, 681, 0, 0, 682, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 685, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0,
    688, 0, 689, 0, 0, 690, 0, 691, 0, 0, 692, 693, 0, 0, 694, 0, 0, 0, 695, 696, 0, 697, 0, 0, 0, 698, 0, 0, 699, 0, 0, 700,
    0, 0, 701, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 705, 0, 0, 0, 0,
    0, 706, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 712, 0, 0, 713, 0, 0, 714, 0, 0,
    715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 717, 718, 0, 719, 0, 720, 0, 0, 721, 0, 0, 722, 0,
    0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 724, 0, 725, 0, 0, 726, 0, 0, 727, 0, 0, 728, 0, 729, 0, 730, 0, 0, 0, 731, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 734, 0, 735, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 737, 0, 0, 738, 0, 0, 0, 739, 0, 0, 740, 0,
    0, 741, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 745, 0, 746, 0, 747,
    0, 0, 748, 0, 749, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 752, 0, 753, 0, 754, 0, 755, 0, 0, 0, 756, 0, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 0,
    760, 0, 0, 761, 0, 0, 0, 762, 0, 0, 763, 0, 764, 0, 0, 0, 0, 765, 0, 0, 766, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 770, 0, 771, 772, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0,
    0, 774, 0, 0, 775, 0, 0, 0, 776, 0, 0, 777, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0, 780, 781, 0, 0, 0, 0, 0, 0,
    0, 782, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 0, 785, 0, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0, 788, 789,
    0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 0, 796, 0, 0, 0, 0,
    797, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 801, 0, 0, 0, 0,
    0, 0, 802, 0, 0, 0, 803, 0, 0, 804, 0, 0, 805, 0, 0, 0, 806, 0, 0, 807, 808, 0, 0, 0, 0, 0, 0, 809, 0, 810, 0, 0,
    811, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 813, 0, 814, 0, 815, 0, 0, 0, 0, 0,
    0, 816, 817, 0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 819, 0, 820, 0, 821, 0, 0, 0, 822, 0, 823, 0, 824, 0, 0, 825, 0, 826,
    0, 827, 0, 828, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 833, 0, 834, 0, 835, 0, 0, 0, 836, 0, 837, 0, 0, 0, 838, 839, 0,
    840, 0, 0, 0, 0, 0, 0, 841, 0, 842, 0, 843, 0, 844, 0, 0, 845, 0, 846, 0, 0, 0, 0, 0, 847, 0, 848, 0, 0, 849, 0, 0,
    0, 0, 0, 0, 850, 0, 0, 851, 0, 852, 0, 853, 0, 854, 0, 855, 0, 856, 0, 857, 0, 858, 0, 0, 0, 859, 0, 0, 0, 0, 0, 0,
    0, 860, 0, 0, 0, 0, 0, 0, 861, 0, 0, 0, 0, 862, 0, 863, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 865,
    0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 0, 868, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 0, 0, 870, 0, 0, 0, 0,
    0, 871, 0, 0, 0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 873, 0, 0, 0, 0, 874, 0, 875, 0, 876, 0, 0, 877, 0, 878, 0, 0, 879,
    0, 0, 0, 0, 880, 0, 0, 881, 0, 882, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 884, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 885, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 888, 0, 889, 0, 890, 0, 891, 0, 0,
    0, 892, 0, 893, 894, 0, 0, 895, 0, 0, 0, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 898, 0, 899, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 900, 0, 901,
};
void recomp_unit_0003_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08810000u;
        entry_id = (entry_delta < 16352u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0003[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08810000;
    case 2u: goto L_08810034;
    case 3u: goto L_0881003C;
    case 4u: goto L_08810088;
    case 5u: goto L_088100A0;
    case 6u: goto L_088100C8;
    case 7u: goto L_088100E0;
    case 8u: goto L_088100F8;
    case 9u: goto L_08810168;
    case 10u: goto L_08810188;
    case 11u: goto L_08810194;
    case 12u: goto L_088101B0;
    case 13u: goto L_08810204;
    case 14u: goto L_08810248;
    case 15u: goto L_08810264;
    case 16u: goto L_08810270;
    case 17u: goto L_08810278;
    case 18u: goto L_08810280;
    case 19u: goto L_08810298;
    case 20u: goto L_088102A4;
    case 21u: goto L_088102C4;
    case 22u: goto L_088102E4;
    case 23u: goto L_0881030C;
    case 24u: goto L_08810324;
    case 25u: goto L_08810340;
    case 26u: goto L_08810358;
    case 27u: goto L_0881037C;
    case 28u: goto L_0881038C;
    case 29u: goto L_0881039C;
    case 30u: goto L_088103BC;
    case 31u: goto L_088103E0;
    case 32u: goto L_088103E8;
    case 33u: goto L_088103F8;
    case 34u: goto L_08810410;
    case 35u: goto L_0881042C;
    case 36u: goto L_08810444;
    case 37u: goto L_0881045C;
    case 38u: goto L_08810474;
    case 39u: goto L_0881049C;
    case 40u: goto L_088104A0;
    case 41u: goto L_088104AC;
    case 42u: goto L_088104C4;
    case 43u: goto L_088104CC;
    case 44u: goto L_088104DC;
    case 45u: goto L_088104FC;
    case 46u: goto L_0881051C;
    case 47u: goto L_08810520;
    case 48u: goto L_08810528;
    case 49u: goto L_08810544;
    case 50u: goto L_08810558;
    case 51u: goto L_08810560;
    case 52u: goto L_0881056C;
    case 53u: goto L_08810584;
    case 54u: goto L_0881058C;
    case 55u: goto L_0881059C;
    case 56u: goto L_088105B8;
    case 57u: goto L_088105CC;
    case 58u: goto L_088105D4;
    case 59u: goto L_088105F0;
    case 60u: goto L_08810604;
    case 61u: goto L_08810620;
    case 62u: goto L_08810628;
    case 63u: goto L_0881062C;
    case 64u: goto L_088106B8;
    case 65u: goto L_088106D0;
    case 66u: goto L_08810748;
    case 67u: goto L_08810788;
    case 68u: goto L_088107B0;
    case 69u: goto L_0881080C;
    case 70u: goto L_0881083C;
    case 71u: goto L_08810850;
    case 72u: goto L_08810854;
    case 73u: goto L_0881086C;
    case 74u: goto L_08810888;
    case 75u: goto L_088108A0;
    case 76u: goto L_088108CC;
    case 77u: goto L_088108D4;
    case 78u: goto L_088108DC;
    case 79u: goto L_088108F0;
    case 80u: goto L_08810918;
    case 81u: goto L_08810928;
    case 82u: goto L_08810948;
    case 83u: goto L_08810998;
    case 84u: goto L_088109A8;
    case 85u: goto L_088109B4;
    case 86u: goto L_088109CC;
    case 87u: goto L_088109F8;
    case 88u: goto L_08810A00;
    case 89u: goto L_08810A08;
    case 90u: goto L_08810A1C;
    case 91u: goto L_08810A5C;
    case 92u: goto L_08810A64;
    case 93u: goto L_08810B1C;
    case 94u: goto L_08810B38;
    case 95u: goto L_08810B48;
    case 96u: goto L_08810BC8;
    case 97u: goto L_08810C00;
    case 98u: goto L_08810C20;
    case 99u: goto L_08810C30;
    case 100u: goto L_08810C3C;
    case 101u: goto L_08810C4C;
    case 102u: goto L_08810C54;
    case 103u: goto L_08810CE8;
    case 104u: goto L_08810D08;
    case 105u: goto L_08810D4C;
    case 106u: goto L_08810DA8;
    case 107u: goto L_08810DBC;
    case 108u: goto L_08810DD4;
    case 109u: goto L_08810DE8;
    case 110u: goto L_08810E30;
    case 111u: goto L_08810E90;
    case 112u: goto L_08810EAC;
    case 113u: goto L_08810EB4;
    case 114u: goto L_08810EC4;
    case 115u: goto L_08810EF4;
    case 116u: goto L_08810F10;
    case 117u: goto L_08810F5C;
    case 118u: goto L_08810F6C;
    case 119u: goto L_08810F7C;
    case 120u: goto L_08810F8C;
    case 121u: goto L_08810F9C;
    case 122u: goto L_08810FAC;
    case 123u: goto L_08810FB4;
    case 124u: goto L_08810FC8;
    case 125u: goto L_08810FD8;
    case 126u: goto L_08810FEC;
    case 127u: goto L_08810FF0;
    case 128u: goto L_0881100C;
    case 129u: goto L_08811024;
    case 130u: goto L_0881102C;
    case 131u: goto L_08811040;
    case 132u: goto L_08811058;
    case 133u: goto L_08811060;
    case 134u: goto L_0881106C;
    case 135u: goto L_08811074;
    case 136u: goto L_0881107C;
    case 137u: goto L_08811084;
    case 138u: goto L_0881108C;
    case 139u: goto L_0881109C;
    case 140u: goto L_088110AC;
    case 141u: goto L_088110BC;
    case 142u: goto L_088110CC;
    case 143u: goto L_088110DC;
    case 144u: goto L_088110E4;
    case 145u: goto L_088110EC;
    case 146u: goto L_08811108;
    case 147u: goto L_08811110;
    case 148u: goto L_08811118;
    case 149u: goto L_08811134;
    case 150u: goto L_0881113C;
    case 151u: goto L_0881114C;
    case 152u: goto L_08811158;
    case 153u: goto L_0881116C;
    case 154u: goto L_0881117C;
    case 155u: goto L_08811184;
    case 156u: goto L_0881119C;
    case 157u: goto L_088111A4;
    case 158u: goto L_088111AC;
    case 159u: goto L_088111BC;
    case 160u: goto L_088111D0;
    case 161u: goto L_088111D4;
    case 162u: goto L_088111E4;
    case 163u: goto L_088111EC;
    case 164u: goto L_088111F4;
    case 165u: goto L_08811204;
    case 166u: goto L_08811218;
    case 167u: goto L_08811228;
    case 168u: goto L_0881123C;
    case 169u: goto L_08811250;
    case 170u: goto L_08811260;
    case 171u: goto L_08811270;
    case 172u: goto L_08811280;
    case 173u: goto L_08811290;
    case 174u: goto L_088112A0;
    case 175u: goto L_088112B0;
    case 176u: goto L_088112B8;
    case 177u: goto L_088112C4;
    case 178u: goto L_088112D4;
    case 179u: goto L_088112E8;
    case 180u: goto L_0881130C;
    case 181u: goto L_08811318;
    case 182u: goto L_0881132C;
    case 183u: goto L_08811340;
    case 184u: goto L_08811348;
    case 185u: goto L_08811350;
    case 186u: goto L_08811358;
    case 187u: goto L_08811360;
    case 188u: goto L_08811368;
    case 189u: goto L_08811378;
    case 190u: goto L_0881138C;
    case 191u: goto L_08811390;
    case 192u: goto L_088113A0;
    case 193u: goto L_088113B0;
    case 194u: goto L_088113B8;
    case 195u: goto L_088113C8;
    case 196u: goto L_088113D4;
    case 197u: goto L_088113DC;
    case 198u: goto L_088113E4;
    case 199u: goto L_088113EC;
    case 200u: goto L_088113F4;
    case 201u: goto L_08811408;
    case 202u: goto L_0881140C;
    case 203u: goto L_08811418;
    case 204u: goto L_08811420;
    case 205u: goto L_08811428;
    case 206u: goto L_08811438;
    case 207u: goto L_0881144C;
    case 208u: goto L_08811450;
    case 209u: goto L_0881145C;
    case 210u: goto L_0881146C;
    case 211u: goto L_08811480;
    case 212u: goto L_0881148C;
    case 213u: goto L_08811494;
    case 214u: goto L_088114C4;
    case 215u: goto L_088114E4;
    case 216u: goto L_088114F8;
    case 217u: goto L_0881150C;
    case 218u: goto L_08811538;
    case 219u: goto L_0881154C;
    case 220u: goto L_0881155C;
    case 221u: goto L_0881156C;
    case 222u: goto L_0881157C;
    case 223u: goto L_0881158C;
    case 224u: goto L_088115A8;
    case 225u: goto L_088115B8;
    case 226u: goto L_088115C8;
    case 227u: goto L_088115D8;
    case 228u: goto L_088115E8;
    case 229u: goto L_0881162C;
    case 230u: goto L_08811640;
    case 231u: goto L_08811650;
    case 232u: goto L_0881168C;
    case 233u: goto L_08811694;
    case 234u: goto L_088116A0;
    case 235u: goto L_088116AC;
    case 236u: goto L_088116B4;
    case 237u: goto L_088116C0;
    case 238u: goto L_088116D8;
    case 239u: goto L_088116F0;
    case 240u: goto L_088116F8;
    case 241u: goto L_08811700;
    case 242u: goto L_08811710;
    case 243u: goto L_08811720;
    case 244u: goto L_08811734;
    case 245u: goto L_08811744;
    case 246u: goto L_0881174C;
    case 247u: goto L_0881175C;
    case 248u: goto L_0881176C;
    case 249u: goto L_08811784;
    case 250u: goto L_0881178C;
    case 251u: goto L_08811794;
    case 252u: goto L_088117A4;
    case 253u: goto L_088117AC;
    case 254u: goto L_088117C0;
    case 255u: goto L_088117D0;
    case 256u: goto L_088117D4;
    case 257u: goto L_088117FC;
    case 258u: goto L_08811800;
    case 259u: goto L_08811808;
    case 260u: goto L_0881180C;
    case 261u: goto L_08811814;
    case 262u: goto L_08811820;
    case 263u: goto L_08811834;
    case 264u: goto L_08811848;
    case 265u: goto L_0881185C;
    case 266u: goto L_0881186C;
    case 267u: goto L_08811884;
    case 268u: goto L_08811894;
    case 269u: goto L_088118B0;
    case 270u: goto L_088118B8;
    case 271u: goto L_088118C8;
    case 272u: goto L_088118D8;
    case 273u: goto L_088118E0;
    case 274u: goto L_088118E4;
    case 275u: goto L_0881190C;
    case 276u: goto L_08811920;
    case 277u: goto L_08811938;
    case 278u: goto L_08811968;
    case 279u: goto L_08811974;
    case 280u: goto L_08811980;
    case 281u: goto L_088119A4;
    case 282u: goto L_088119B8;
    case 283u: goto L_088119C0;
    case 284u: goto L_088119C4;
    case 285u: goto L_088119E0;
    case 286u: goto L_088119E8;
    case 287u: goto L_08811A10;
    case 288u: goto L_08811A18;
    case 289u: goto L_08811A24;
    case 290u: goto L_08811A30;
    case 291u: goto L_08811A38;
    case 292u: goto L_08811A44;
    case 293u: goto L_08811A4C;
    case 294u: goto L_08811A58;
    case 295u: goto L_08811A88;
    case 296u: goto L_08811A9C;
    case 297u: goto L_08811AA4;
    case 298u: goto L_08811AAC;
    case 299u: goto L_08811AE0;
    case 300u: goto L_08811AE8;
    case 301u: goto L_08811AF0;
    case 302u: goto L_08811B08;
    case 303u: goto L_08811B0C;
    case 304u: goto L_08811B20;
    case 305u: goto L_08811B28;
    case 306u: goto L_08811B30;
    case 307u: goto L_08811B48;
    case 308u: goto L_08811B50;
    case 309u: goto L_08811B58;
    case 310u: goto L_08811B88;
    case 311u: goto L_08811B98;
    case 312u: goto L_08811BB8;
    case 313u: goto L_08811BC0;
    case 314u: goto L_08811BC8;
    case 315u: goto L_08811BD0;
    case 316u: goto L_08811BD8;
    case 317u: goto L_08811BE4;
    case 318u: goto L_08811C00;
    case 319u: goto L_08811C08;
    case 320u: goto L_08811C10;
    case 321u: goto L_08811C28;
    case 322u: goto L_08811C2C;
    case 323u: goto L_08811C40;
    case 324u: goto L_08811C48;
    case 325u: goto L_08811C50;
    case 326u: goto L_08811C68;
    case 327u: goto L_08811C74;
    case 328u: goto L_08811C7C;
    case 329u: goto L_08811CAC;
    case 330u: goto L_08811CD4;
    case 331u: goto L_08811CDC;
    case 332u: goto L_08811CE4;
    case 333u: goto L_08811CEC;
    case 334u: goto L_08811CF8;
    case 335u: goto L_08811D00;
    case 336u: goto L_08811D0C;
    case 337u: goto L_08811D28;
    case 338u: goto L_08811D30;
    case 339u: goto L_08811D38;
    case 340u: goto L_08811D50;
    case 341u: goto L_08811D54;
    case 342u: goto L_08811D68;
    case 343u: goto L_08811D70;
    case 344u: goto L_08811D78;
    case 345u: goto L_08811D90;
    case 346u: goto L_08811D98;
    case 347u: goto L_08811DA4;
    case 348u: goto L_08811DAC;
    case 349u: goto L_08811DD0;
    case 350u: goto L_08811DD8;
    case 351u: goto L_08811DE8;
    case 352u: goto L_08811DF8;
    case 353u: goto L_08811E00;
    case 354u: goto L_08811E10;
    case 355u: goto L_08811E20;
    case 356u: goto L_08811E30;
    case 357u: goto L_08811E38;
    case 358u: goto L_08811E50;
    case 359u: goto L_08811E58;
    case 360u: goto L_08811E60;
    case 361u: goto L_08811E6C;
    case 362u: goto L_08811E70;
    case 363u: goto L_08811E84;
    case 364u: goto L_08811E8C;
    case 365u: goto L_08811E94;
    case 366u: goto L_08811EA0;
    case 367u: goto L_08811EA4;
    case 368u: goto L_08811EB8;
    case 369u: goto L_08811EC0;
    case 370u: goto L_08811EC8;
    case 371u: goto L_08811ED4;
    case 372u: goto L_08811ED8;
    case 373u: goto L_08811EEC;
    case 374u: goto L_08811EF4;
    case 375u: goto L_08811EFC;
    case 376u: goto L_08811F08;
    case 377u: goto L_08811F10;
    case 378u: goto L_08811F1C;
    case 379u: goto L_08811F24;
    case 380u: goto L_08811F30;
    case 381u: goto L_08811F48;
    case 382u: goto L_08811F54;
    case 383u: goto L_08811F60;
    case 384u: goto L_08811F70;
    case 385u: goto L_08811F80;
    case 386u: goto L_08811F88;
    case 387u: goto L_08811FBC;
    case 388u: goto L_08811FC4;
    case 389u: goto L_08811FE8;
    case 390u: goto L_08811FF8;
    case 391u: goto L_08812004;
    case 392u: goto L_08812030;
    case 393u: goto L_08812038;
    case 394u: goto L_08812048;
    case 395u: goto L_08812060;
    case 396u: goto L_0881206C;
    case 397u: goto L_08812080;
    case 398u: goto L_08812094;
    case 399u: goto L_0881209C;
    case 400u: goto L_088120B8;
    case 401u: goto L_088120C4;
    case 402u: goto L_088120D0;
    case 403u: goto L_088120DC;
    case 404u: goto L_088120E4;
    case 405u: goto L_088120EC;
    case 406u: goto L_088120F4;
    case 407u: goto L_08812100;
    case 408u: goto L_08812108;
    case 409u: goto L_08812114;
    case 410u: goto L_0881211C;
    case 411u: goto L_08812128;
    case 412u: goto L_0881213C;
    case 413u: goto L_08812144;
    case 414u: goto L_0881214C;
    case 415u: goto L_08812158;
    case 416u: goto L_08812168;
    case 417u: goto L_08812174;
    case 418u: goto L_0881217C;
    case 419u: goto L_08812184;
    case 420u: goto L_0881218C;
    case 421u: goto L_08812194;
    case 422u: goto L_0881219C;
    case 423u: goto L_088121D0;
    case 424u: goto L_088121D8;
    case 425u: goto L_088121F8;
    case 426u: goto L_08812230;
    case 427u: goto L_08812238;
    case 428u: goto L_0881225C;
    case 429u: goto L_08812264;
    case 430u: goto L_0881226C;
    case 431u: goto L_08812274;
    case 432u: goto L_08812288;
    case 433u: goto L_08812294;
    case 434u: goto L_088122A4;
    case 435u: goto L_088122B0;
    case 436u: goto L_088122C8;
    case 437u: goto L_088122D0;
    case 438u: goto L_088122D8;
    case 439u: goto L_088122E4;
    case 440u: goto L_088122E8;
    case 441u: goto L_088122FC;
    case 442u: goto L_08812304;
    case 443u: goto L_0881230C;
    case 444u: goto L_08812318;
    case 445u: goto L_0881231C;
    case 446u: goto L_08812330;
    case 447u: goto L_08812338;
    case 448u: goto L_08812340;
    case 449u: goto L_0881234C;
    case 450u: goto L_08812350;
    case 451u: goto L_08812364;
    case 452u: goto L_0881236C;
    case 453u: goto L_08812374;
    case 454u: goto L_08812380;
    case 455u: goto L_08812388;
    case 456u: goto L_08812394;
    case 457u: goto L_0881239C;
    case 458u: goto L_088123A8;
    case 459u: goto L_088123B0;
    case 460u: goto L_088123BC;
    case 461u: goto L_088123EC;
    case 462u: goto L_088123F4;
    case 463u: goto L_08812420;
    case 464u: goto L_0881242C;
    case 465u: goto L_08812434;
    case 466u: goto L_0881243C;
    case 467u: goto L_08812454;
    case 468u: goto L_08812460;
    case 469u: goto L_08812468;
    case 470u: goto L_08812470;
    case 471u: goto L_0881248C;
    case 472u: goto L_088124A0;
    case 473u: goto L_088124A8;
    case 474u: goto L_088124B4;
    case 475u: goto L_088124C0;
    case 476u: goto L_088124CC;
    case 477u: goto L_088124D8;
    case 478u: goto L_088124E0;
    case 479u: goto L_088124E8;
    case 480u: goto L_088124EC;
    case 481u: goto L_088124FC;
    case 482u: goto L_08812508;
    case 483u: goto L_08812514;
    case 484u: goto L_08812524;
    case 485u: goto L_0881252C;
    case 486u: goto L_08812534;
    case 487u: goto L_08812550;
    case 488u: goto L_0881255C;
    case 489u: goto L_08812564;
    case 490u: goto L_0881256C;
    case 491u: goto L_08812574;
    case 492u: goto L_08812580;
    case 493u: goto L_08812588;
    case 494u: goto L_08812594;
    case 495u: goto L_0881259C;
    case 496u: goto L_088125A8;
    case 497u: goto L_088125BC;
    case 498u: goto L_088125C4;
    case 499u: goto L_088125CC;
    case 500u: goto L_088125D8;
    case 501u: goto L_088125E8;
    case 502u: goto L_088125F4;
    case 503u: goto L_088125FC;
    case 504u: goto L_08812608;
    case 505u: goto L_08812614;
    case 506u: goto L_08812620;
    case 507u: goto L_0881262C;
    case 508u: goto L_08812634;
    case 509u: goto L_0881263C;
    case 510u: goto L_08812640;
    case 511u: goto L_08812648;
    case 512u: goto L_0881265C;
    case 513u: goto L_08812668;
    case 514u: goto L_08812674;
    case 515u: goto L_08812680;
    case 516u: goto L_08812688;
    case 517u: goto L_08812690;
    case 518u: goto L_08812694;
    case 519u: goto L_0881269C;
    case 520u: goto L_088126A4;
    case 521u: goto L_088126A8;
    case 522u: goto L_088126B4;
    case 523u: goto L_088126BC;
    case 524u: goto L_088126C4;
    case 525u: goto L_088126D0;
    case 526u: goto L_088126D8;
    case 527u: goto L_088126E0;
    case 528u: goto L_088126FC;
    case 529u: goto L_08812710;
    case 530u: goto L_08812724;
    case 531u: goto L_08812738;
    case 532u: goto L_08812754;
    case 533u: goto L_08812758;
    case 534u: goto L_08812760;
    case 535u: goto L_08812768;
    case 536u: goto L_08812790;
    case 537u: goto L_088127B0;
    case 538u: goto L_088127D0;
    case 539u: goto L_088127EC;
    case 540u: goto L_088127F8;
    case 541u: goto L_08812808;
    case 542u: goto L_08812818;
    case 543u: goto L_08812824;
    case 544u: goto L_0881282C;
    case 545u: goto L_08812834;
    case 546u: goto L_0881283C;
    case 547u: goto L_08812850;
    case 548u: goto L_08812858;
    case 549u: goto L_08812860;
    case 550u: goto L_08812868;
    case 551u: goto L_08812878;
    case 552u: goto L_08812880;
    case 553u: goto L_08812890;
    case 554u: goto L_08812898;
    case 555u: goto L_088128A8;
    case 556u: goto L_088128B0;
    case 557u: goto L_088128B8;
    case 558u: goto L_088128C0;
    case 559u: goto L_088128C8;
    case 560u: goto L_088128D0;
    case 561u: goto L_088128D8;
    case 562u: goto L_088128F4;
    case 563u: goto L_088128FC;
    case 564u: goto L_08812904;
    case 565u: goto L_08812910;
    case 566u: goto L_0881291C;
    case 567u: goto L_08812924;
    case 568u: goto L_0881292C;
    case 569u: goto L_0881293C;
    case 570u: goto L_08812944;
    case 571u: goto L_08812964;
    case 572u: goto L_08812970;
    case 573u: goto L_08812984;
    case 574u: goto L_08812990;
    case 575u: goto L_08812998;
    case 576u: goto L_0881299C;
    case 577u: goto L_088129B0;
    case 578u: goto L_088129C4;
    case 579u: goto L_088129D0;
    case 580u: goto L_088129DC;
    case 581u: goto L_088129E8;
    case 582u: goto L_08812A00;
    case 583u: goto L_08812A08;
    case 584u: goto L_08812A10;
    case 585u: goto L_08812A20;
    case 586u: goto L_08812A28;
    case 587u: goto L_08812A34;
    case 588u: goto L_08812A3C;
    case 589u: goto L_08812A9C;
    case 590u: goto L_08812AA4;
    case 591u: goto L_08812AB4;
    case 592u: goto L_08812ABC;
    case 593u: goto L_08812AC4;
    case 594u: goto L_08812ACC;
    case 595u: goto L_08812ADC;
    case 596u: goto L_08812AE4;
    case 597u: goto L_08812AEC;
    case 598u: goto L_08812AF4;
    case 599u: goto L_08812AFC;
    case 600u: goto L_08812B04;
    case 601u: goto L_08812B0C;
    case 602u: goto L_08812B18;
    case 603u: goto L_08812B20;
    case 604u: goto L_08812B28;
    case 605u: goto L_08812B40;
    case 606u: goto L_08812B48;
    case 607u: goto L_08812B50;
    case 608u: goto L_08812B58;
    case 609u: goto L_08812B68;
    case 610u: goto L_08812B84;
    case 611u: goto L_08812B8C;
    case 612u: goto L_08812B94;
    case 613u: goto L_08812B9C;
    case 614u: goto L_08812BC8;
    case 615u: goto L_08812BE4;
    case 616u: goto L_08812BF4;
    case 617u: goto L_08812C04;
    case 618u: goto L_08812C10;
    case 619u: goto L_08812C24;
    case 620u: goto L_08812C34;
    case 621u: goto L_08812C54;
    case 622u: goto L_08812C84;
    case 623u: goto L_08812C8C;
    case 624u: goto L_08812C98;
    case 625u: goto L_08812CA4;
    case 626u: goto L_08812CB4;
    case 627u: goto L_08812CC4;
    case 628u: goto L_08812CE0;
    case 629u: goto L_08812D10;
    case 630u: goto L_08812D1C;
    case 631u: goto L_08812D28;
    case 632u: goto L_08812D34;
    case 633u: goto L_08812D44;
    case 634u: goto L_08812D54;
    case 635u: goto L_08812D64;
    case 636u: goto L_08812D8C;
    case 637u: goto L_08812D94;
    case 638u: goto L_08812DA0;
    case 639u: goto L_08812DAC;
    case 640u: goto L_08812DBC;
    case 641u: goto L_08812DCC;
    case 642u: goto L_08812DDC;
    case 643u: goto L_08812E04;
    case 644u: goto L_08812E0C;
    case 645u: goto L_08812E18;
    case 646u: goto L_08812E24;
    case 647u: goto L_08812E34;
    case 648u: goto L_08812E44;
    case 649u: goto L_08812E4C;
    case 650u: goto L_08812E5C;
    case 651u: goto L_08812E70;
    case 652u: goto L_08812E98;
    case 653u: goto L_08812EA0;
    case 654u: goto L_08812EAC;
    case 655u: goto L_08812EB8;
    case 656u: goto L_08812EC8;
    case 657u: goto L_08812ED8;
    case 658u: goto L_08812EE0;
    case 659u: goto L_08812EF0;
    case 660u: goto L_08812F00;
    case 661u: goto L_08812F28;
    case 662u: goto L_08812F30;
    case 663u: goto L_08812F3C;
    case 664u: goto L_08812F48;
    case 665u: goto L_08812F58;
    case 666u: goto L_08812F68;
    case 667u: goto L_08812F70;
    case 668u: goto L_08812F80;
    case 669u: goto L_08812F90;
    case 670u: goto L_08812FB8;
    case 671u: goto L_08812FC0;
    case 672u: goto L_08812FCC;
    case 673u: goto L_08812FD8;
    case 674u: goto L_08812FE8;
    case 675u: goto L_08812FF8;
    case 676u: goto L_08813000;
    case 677u: goto L_08813010;
    case 678u: goto L_08813020;
    case 679u: goto L_08813048;
    case 680u: goto L_08813074;
    case 681u: goto L_08813084;
    case 682u: goto L_08813090;
    case 683u: goto L_088130AC;
    case 684u: goto L_088130BC;
    case 685u: goto L_088130C4;
    case 686u: goto L_088130D4;
    case 687u: goto L_088130E4;
    case 688u: goto L_08813100;
    case 689u: goto L_08813108;
    case 690u: goto L_08813114;
    case 691u: goto L_0881311C;
    case 692u: goto L_08813128;
    case 693u: goto L_0881312C;
    case 694u: goto L_08813138;
    case 695u: goto L_08813148;
    case 696u: goto L_0881314C;
    case 697u: goto L_08813154;
    case 698u: goto L_08813164;
    case 699u: goto L_08813170;
    case 700u: goto L_0881317C;
    case 701u: goto L_08813188;
    case 702u: goto L_08813190;
    case 703u: goto L_088131C4;
    case 704u: goto L_088131E0;
    case 705u: goto L_088131EC;
    case 706u: goto L_08813204;
    case 707u: goto L_08813210;
    case 708u: goto L_08813218;
    case 709u: goto L_08813230;
    case 710u: goto L_08813244;
    case 711u: goto L_08813250;
    case 712u: goto L_0881325C;
    case 713u: goto L_08813268;
    case 714u: goto L_08813274;
    case 715u: goto L_08813280;
    case 716u: goto L_088132B4;
    case 717u: goto L_088132CC;
    case 718u: goto L_088132D0;
    case 719u: goto L_088132D8;
    case 720u: goto L_088132E0;
    case 721u: goto L_088132EC;
    case 722u: goto L_088132F8;
    case 723u: goto L_08813310;
    case 724u: goto L_08813328;
    case 725u: goto L_08813330;
    case 726u: goto L_0881333C;
    case 727u: goto L_08813348;
    case 728u: goto L_08813354;
    case 729u: goto L_0881335C;
    case 730u: goto L_08813364;
    case 731u: goto L_08813374;
    case 732u: goto L_088133A8;
    case 733u: goto L_088133CC;
    case 734u: goto L_088133D8;
    case 735u: goto L_088133E0;
    case 736u: goto L_08813444;
    case 737u: goto L_08813450;
    case 738u: goto L_0881345C;
    case 739u: goto L_0881346C;
    case 740u: goto L_08813478;
    case 741u: goto L_08813484;
    case 742u: goto L_08813490;
    case 743u: goto L_0881349C;
    case 744u: goto L_088134E0;
    case 745u: goto L_088134EC;
    case 746u: goto L_088134F4;
    case 747u: goto L_088134FC;
    case 748u: goto L_08813508;
    case 749u: goto L_08813510;
    case 750u: goto L_0881351C;
    case 751u: goto L_08813560;
    case 752u: goto L_08813598;
    case 753u: goto L_088135A0;
    case 754u: goto L_088135A8;
    case 755u: goto L_088135B0;
    case 756u: goto L_088135C0;
    case 757u: goto L_088135CC;
    case 758u: goto L_088135E8;
    case 759u: goto L_088135F4;
    case 760u: goto L_08813600;
    case 761u: goto L_0881360C;
    case 762u: goto L_0881361C;
    case 763u: goto L_08813628;
    case 764u: goto L_08813630;
    case 765u: goto L_08813644;
    case 766u: goto L_08813650;
    case 767u: goto L_0881366C;
    case 768u: goto L_08813694;
    case 769u: goto L_088136B0;
    case 770u: goto L_088136C0;
    case 771u: goto L_088136C8;
    case 772u: goto L_088136CC;
    case 773u: goto L_088136E0;
    case 774u: goto L_08813704;
    case 775u: goto L_08813710;
    case 776u: goto L_08813720;
    case 777u: goto L_0881372C;
    case 778u: goto L_08813744;
    case 779u: goto L_08813758;
    case 780u: goto L_08813760;
    case 781u: goto L_08813764;
    case 782u: goto L_08813784;
    case 783u: goto L_0881379C;
    case 784u: goto L_088137B8;
    case 785u: goto L_088137C4;
    case 786u: goto L_088137D8;
    case 787u: goto L_088137EC;
    case 788u: goto L_088137F8;
    case 789u: goto L_088137FC;
    case 790u: goto L_08813818;
    case 791u: goto L_08813828;
    case 792u: goto L_0881383C;
    case 793u: goto L_08813848;
    case 794u: goto L_08813854;
    case 795u: goto L_08813860;
    case 796u: goto L_0881386C;
    case 797u: goto L_08813880;
    case 798u: goto L_08813890;
    case 799u: goto L_088138AC;
    case 800u: goto L_088138D8;
    case 801u: goto L_088138EC;
    case 802u: goto L_08813908;
    case 803u: goto L_08813918;
    case 804u: goto L_08813924;
    case 805u: goto L_08813930;
    case 806u: goto L_08813940;
    case 807u: goto L_0881394C;
    case 808u: goto L_08813950;
    case 809u: goto L_0881396C;
    case 810u: goto L_08813974;
    case 811u: goto L_08813980;
    case 812u: goto L_088139BC;
    case 813u: goto L_088139D8;
    case 814u: goto L_088139E0;
    case 815u: goto L_088139E8;
    case 816u: goto L_08813A04;
    case 817u: goto L_08813A08;
    case 818u: goto L_08813A1C;
    case 819u: goto L_08813A38;
    case 820u: goto L_08813A40;
    case 821u: goto L_08813A48;
    case 822u: goto L_08813A58;
    case 823u: goto L_08813A60;
    case 824u: goto L_08813A68;
    case 825u: goto L_08813A74;
    case 826u: goto L_08813A7C;
    case 827u: goto L_08813A84;
    case 828u: goto L_08813A8C;
    case 829u: goto L_08813A98;
    case 830u: goto L_08813AA8;
    case 831u: goto L_08813AF0;
    case 832u: goto L_08813B24;
    case 833u: goto L_08813B3C;
    case 834u: goto L_08813B44;
    case 835u: goto L_08813B4C;
    case 836u: goto L_08813B5C;
    case 837u: goto L_08813B64;
    case 838u: goto L_08813B74;
    case 839u: goto L_08813B78;
    case 840u: goto L_08813B80;
    case 841u: goto L_08813B9C;
    case 842u: goto L_08813BA4;
    case 843u: goto L_08813BAC;
    case 844u: goto L_08813BB4;
    case 845u: goto L_08813BC0;
    case 846u: goto L_08813BC8;
    case 847u: goto L_08813BE0;
    case 848u: goto L_08813BE8;
    case 849u: goto L_08813BF4;
    case 850u: goto L_08813C10;
    case 851u: goto L_08813C1C;
    case 852u: goto L_08813C24;
    case 853u: goto L_08813C2C;
    case 854u: goto L_08813C34;
    case 855u: goto L_08813C3C;
    case 856u: goto L_08813C44;
    case 857u: goto L_08813C4C;
    case 858u: goto L_08813C54;
    case 859u: goto L_08813C64;
    case 860u: goto L_08813C84;
    case 861u: goto L_08813CA0;
    case 862u: goto L_08813CB4;
    case 863u: goto L_08813CBC;
    case 864u: goto L_08813CD0;
    case 865u: goto L_08813CFC;
    case 866u: goto L_08813D10;
    case 867u: goto L_08813D18;
    case 868u: goto L_08813D2C;
    case 869u: goto L_08813D58;
    case 870u: goto L_08813D6C;
    case 871u: goto L_08813D84;
    case 872u: goto L_08813DA4;
    case 873u: goto L_08813DB8;
    case 874u: goto L_08813DCC;
    case 875u: goto L_08813DD4;
    case 876u: goto L_08813DDC;
    case 877u: goto L_08813DE8;
    case 878u: goto L_08813DF0;
    case 879u: goto L_08813DFC;
    case 880u: goto L_08813E10;
    case 881u: goto L_08813E1C;
    case 882u: goto L_08813E24;
    case 883u: goto L_08813E54;
    case 884u: goto L_08813E5C;
    case 885u: goto L_08813E94;
    case 886u: goto L_08813EB0;
    case 887u: goto L_08813EC4;
    case 888u: goto L_08813EDC;
    case 889u: goto L_08813EE4;
    case 890u: goto L_08813EEC;
    case 891u: goto L_08813EF4;
    case 892u: goto L_08813F04;
    case 893u: goto L_08813F0C;
    case 894u: goto L_08813F10;
    case 895u: goto L_08813F1C;
    case 896u: goto L_08813F38;
    case 897u: goto L_08813F64;
    case 898u: goto L_08813F9C;
    case 899u: goto L_08813FA4;
    case 900u: goto L_08813FD4;
    case 901u: goto L_08813FDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08810000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(860), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(876), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(880), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(884), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(892), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(900), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(904), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(908), ctx.gpr[31]);
    ctx.gpr[31] = (0x08810034u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25472));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 569u, 0x0883AB50u>(ctx, &aot_mem) && ctx.pc == 0x08810034u) goto L_08810034;
    return;
L_08810034:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08810A64;
      }
      goto L_0881003C;
    }
L_0881003C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (15363u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-986));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088100C8;
      }
      goto L_08810088;
    }
L_08810088:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088100A0;
    }
    goto L_088100A0;
L_088100A0:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(208)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[13] / ctx.fpr[20];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
      if (branch_taken) {
          goto L_088100F8;
      }
      goto L_088100C8;
    }
L_088100C8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088100E0;
    }
    goto L_088100E0;
L_088100E0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    goto L_088100F8;
L_088100F8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7864)));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088102A4;
      }
      goto L_08810168;
    }
L_08810168:
    ctx.gpr[4] = (15897u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088102A4;
      }
      goto L_08810188;
    }
L_08810188:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08810280;
      }
      goto L_08810194;
    }
L_08810194:
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_088101B0;
    }
    goto L_088101B0;
L_088101B0:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x08810204u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08810204u) goto L_08810204;
    return;
L_08810204:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08810248u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08810248u) goto L_08810248;
    return;
L_08810248:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08810270;
      }
      goto L_08810264;
    }
L_08810264:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1496), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08810278;
      }
      goto L_08810270;
    }
L_08810270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08810DE8;
      }
      goto L_08810278;
    }
L_08810278:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088102A4;
      }
      goto L_08810280;
    }
L_08810280:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088102A4;
      }
      goto L_08810298;
    }
L_08810298:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1496), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    goto L_088102A4;
L_088102A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088102C4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x088102C4u) goto L_088102C4;
    return;
L_088102C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x088102E4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x088102E4u) goto L_088102E4;
    return;
L_088102E4:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (48588u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[20] = (2227u << 16u);
      if (branch_taken) {
          goto L_0881037C;
      }
      goto L_0881030C;
    }
L_0881030C:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0881037C;
      }
      goto L_08810324;
    }
L_08810324:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_08810358;
      }
      goto L_08810340;
    }
L_08810340:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881037C;
      }
      goto L_08810358;
    }
L_08810358:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(603))))));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088105F0;
      }
      goto L_0881037C;
    }
L_0881037C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16178)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088103E0;
      }
      goto L_0881038C;
    }
L_0881038C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088103E0;
      }
      goto L_0881039C;
    }
L_0881039C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088103E0;
      }
      goto L_088103BC;
    }
L_088103BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(603))))));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088105F0;
      }
      goto L_088103E0;
    }
L_088103E0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08810474;
      }
      goto L_088103E8;
    }
L_088103E8:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_08810474;
      }
      goto L_088103F8;
    }
L_088103F8:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(322))))));
        goto L_088105D4;
    }
    goto L_08810410;
L_08810410:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08810474;
      }
      goto L_0881042C;
    }
L_0881042C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1380)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08810474;
      }
      goto L_08810444;
    }
L_08810444:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1384)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08810474;
      }
      goto L_0881045C;
    }
L_0881045C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1388)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(322))))));
        goto L_088105D4;
    }
    goto L_08810474;
L_08810474:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[5] | 1u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088104A0;
      }
      goto L_0881049C;
    }
L_0881049C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088104A0;
L_088104A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08810544;
      }
      goto L_088104AC;
    }
L_088104AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[31] = (0x088104C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088104C4u) goto L_088104C4;
    return;
L_088104C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088104DC;
      }
      goto L_088104CC;
    }
L_088104CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08810544;
      }
      goto L_088104DC;
    }
L_088104DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08810528;
      }
      goto L_088104FC;
    }
L_088104FC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08810520;
      }
      goto L_0881051C;
    }
L_0881051C:
    ctx.gpr[5] = (0u | 0u);
    goto L_08810520;
L_08810520:
    ctx.gpr[31] = (0x08810528u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 373u, 0x088B61A4u>(ctx, &aot_mem) && ctx.pc == 0x08810528u) goto L_08810528;
    return;
L_08810528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(504)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 43u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08810544u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08810544u) goto L_08810544;
    return;
L_08810544:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(544)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088105CC;
      }
      goto L_08810558;
    }
L_08810558:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(832)));
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08810560;
L_08810560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088105B8;
      }
      goto L_0881056C;
    }
L_0881056C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(508)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[31] = (0x08810584u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(508)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08810584u) goto L_08810584;
    return;
L_08810584:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881059C;
      }
      goto L_0881058C;
    }
L_0881058C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088105B8;
      }
      goto L_0881059C;
    }
L_0881059C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(508)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 43u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088105B8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x088105B8u) goto L_088105B8;
    return;
L_088105B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(544)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08810560;
      }
      goto L_088105CC;
    }
L_088105CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088105F0;
      }
      goto L_088105D4;
    }
L_088105D4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(603))))));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088105F0;
L_088105F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(832)));
      if (branch_taken) {
          goto L_08810620;
      }
      goto L_08810604;
    }
L_08810604:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881062C;
      }
      goto L_08810620;
    }
L_08810620:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881086C;
      }
      goto L_08810628;
    }
L_08810628:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    goto L_0881062C;
L_0881062C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16102u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11020)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11056)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11024)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11060)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11028)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11064)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088106B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088106B8u) goto L_088106B8;
    return;
L_088106B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(844)));
    ctx.gpr[31] = (0x088106D0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(840)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088106D0u) goto L_088106D0;
    return;
L_088106D0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(848)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x08810748u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08810748u) goto L_08810748;
    return;
L_08810748:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[7] = (0u | 75u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08810788u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 607u, 0x089D2784u>(ctx, &aot_mem) && ctx.pc == 0x08810788u) goto L_08810788;
    return;
L_08810788:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(300));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(832), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(836), ctx.gpr[4]);
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881083C;
      }
      goto L_088107B0;
    }
L_088107B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[7] = (0u | 75u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881080Cu);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 607u, 0x089D2784u>(ctx, &aot_mem) && ctx.pc == 0x0881080Cu) goto L_0881080C;
    return;
L_0881080C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[7] = (0u | 75u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881083Cu);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 607u, 0x089D2784u>(ctx, &aot_mem) && ctx.pc == 0x0881083Cu) goto L_0881083C;
    return;
L_0881083C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08810854;
      }
      goto L_08810850;
    }
L_08810850:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08810854;
L_08810854:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x0881086Cu);
    ctx.gpr[6] = (0u | 164u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0881086Cu) goto L_0881086C;
    return;
L_0881086C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088109A8;
      }
      goto L_08810888;
    }
L_08810888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088109A8;
      }
      goto L_088108A0;
    }
L_088108A0:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[31] = (0x088108CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x088108CCu) goto L_088108CC;
    return;
L_088108CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088108DC;
      }
      goto L_088108D4;
    }
L_088108D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088108DC;
L_088108DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[28])) && ctx.fpr[12] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088109A8;
      }
      goto L_088108F0;
    }
L_088108F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(836), 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[4] = (16416u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    goto L_08810918;
L_08810918:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08810928u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08810928u) goto L_08810928;
    return;
L_08810928:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08810948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08810948u) goto L_08810948;
    return;
L_08810948:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (0u | 37u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08810998u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08810998u) goto L_08810998;
    return;
L_08810998:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08810918;
      }
      goto L_088109A8;
    }
L_088109A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(832)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08810A5C;
      }
      goto L_088109B4;
    }
L_088109B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(832)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08810A5C;
      }
      goto L_088109CC;
    }
L_088109CC:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[31] = (0x088109F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x088109F8u) goto L_088109F8;
    return;
L_088109F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08810A08;
      }
      goto L_08810A00;
    }
L_08810A00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08810A08;
L_08810A08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08810A5C;
      }
      goto L_08810A1C;
    }
L_08810A1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(832), 0u);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (16592u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 2500u);
    ctx.gpr[31] = (0x08810A5Cu);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 607u, 0x089D2784u>(ctx, &aot_mem) && ctx.pc == 0x08810A5Cu) goto L_08810A5C;
    return;
L_08810A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08810DE8;
      }
      goto L_08810A64;
    }
L_08810A64:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(832)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 155u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(368), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 185u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(369), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 196u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(370), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(371), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(372), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(373), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(374), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(375), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(836), ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[4] = (17658u << 16u);
    ctx.gpr[30] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[21] = (ctx.gpr[22] + static_cast<std::uint32_t>(1248));
    goto L_08810B1C;
L_08810B1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08810DD4;
      }
      goto L_08810B38;
    }
L_08810B38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(30)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08810DD4;
      }
      goto L_08810B48;
    }
L_08810B48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(840)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
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
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(832)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08810BC8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 438u, 0x08AF9F48u>(ctx, &aot_mem) && ctx.pc == 0x08810BC8u) goto L_08810BC8;
    return;
L_08810BC8:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15139u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08810DD4;
      }
      goto L_08810C00;
    }
L_08810C00:
    ctx.fpr[22] = std::sqrt(ctx.fpr[22]);
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08810C30;
      }
      goto L_08810C20;
    }
L_08810C20:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08810C3C;
      }
      goto L_08810C30;
    }
L_08810C30:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08810C3C;
L_08810C3C:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(844), ctx.gpr[20]);
        goto L_08810C54;
    }
    goto L_08810C4C;
L_08810C4C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(844), ctx.gpr[20]);
    goto L_08810C54;
L_08810C54:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(832)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08810CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08810CE8u) goto L_08810CE8;
    return;
L_08810CE8:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08810D08u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08810D08u) goto L_08810D08;
    return;
L_08810D08:
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[28];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[28] + ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 50u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08810D4Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08810D4Cu) goto L_08810D4C;
    return;
L_08810D4C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (48921u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(372));
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08810DA8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08810DA8u) goto L_08810DA8;
    return;
L_08810DA8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_08810DD4;
      }
      goto L_08810DBC;
    }
L_08810DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(832)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (0u | 24u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08810DD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(836)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08810DD4u) goto L_08810DD4;
    return;
L_08810DD4:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08810B1C;
      }
      goto L_08810DE8;
    }
L_08810DE8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(848)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(856)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(860)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(864)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(868)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(872)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(876)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(880)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(884)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(888)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(892)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(896)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(900)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(904)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(908)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08810E30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2592));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(675))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2536), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2552), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2564), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2572), ctx.gpr[30]);
    ctx.fpr[30] = std::bit_cast<float>(0u);
    ctx.gpr[19] = (0u | 64u);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2516), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2520), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2524), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2528), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2532), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2540), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2544), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2548), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2556), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2560), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2568), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2576), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[20] = (2227u << 16u);
      if (branch_taken) {
          goto L_08810EB4;
      }
      goto L_08810E90;
    }
L_08810E90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(676))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(676), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08810EB4;
      }
      goto L_08810EAC;
    }
L_08810EAC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(675), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08810EB4;
L_08810EB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08810EF4;
      }
      goto L_08810EC4;
    }
L_08810EC4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[23] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08810F10;
      }
      goto L_08810EF4;
    }
L_08810EF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08810F10;
L_08810F10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1510))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2480), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(598), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(1516), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16177)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2488), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08810FB4;
      }
      goto L_08810F5C;
    }
L_08810F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08810FB4;
      }
      goto L_08810F6C;
    }
L_08810F6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 151u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08810FAC;
      }
      goto L_08810F7C;
    }
L_08810F7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 166u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08810FAC;
      }
      goto L_08810F8C;
    }
L_08810F8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 181u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08810FAC;
      }
      goto L_08810F9C;
    }
L_08810F9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-967));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08810FB4;
      }
      goto L_08810FAC;
    }
L_08810FAC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2488), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08810FB4;
L_08810FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811058;
      }
      goto L_08810FC8;
    }
L_08810FC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15769u << 16u);
      if (branch_taken) {
          goto L_08810FF0;
      }
      goto L_08810FD8;
    }
L_08810FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881102C;
      }
      goto L_08810FEC;
    }
L_08810FEC:
    ctx.gpr[4] = (15769u << 16u);
    goto L_08810FF0;
L_08810FF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881102C;
      }
      goto L_0881100C;
    }
L_0881100C:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08811024u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 374u, 0x088622B8u>(ctx, &aot_mem) && ctx.pc == 0x08811024u) goto L_08811024;
    return;
L_08811024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08811058;
      }
      goto L_0881102C;
    }
L_0881102C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08811058;
      }
      goto L_08811040;
    }
L_08811040:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08811058u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 374u, 0x088622B8u>(ctx, &aot_mem) && ctx.pc == 0x08811058u) goto L_08811058;
    return;
L_08811058:
    ctx.gpr[31] = (0x08811060u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 797u, 0x0889FB78u>(ctx, &aot_mem) && ctx.pc == 0x08811060u) goto L_08811060;
    return;
L_08811060:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0881106Cu);
    ctx.gpr[21] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0881106Cu) goto L_0881106C;
    return;
L_0881106C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2483), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_088111AC;
      }
      goto L_08811074;
    }
L_08811074:
    ctx.gpr[31] = (0x0881107Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0881107Cu) goto L_0881107C;
    return;
L_0881107C:
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088111AC;
      }
      goto L_08811084;
    }
L_08811084:
    ctx.gpr[31] = (0x0881108Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0881108Cu) goto L_0881108C;
    return;
L_0881108C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088111AC;
      }
      goto L_0881109C;
    }
L_0881109C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088110DC;
      }
      goto L_088110AC;
    }
L_088110AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088110DC;
      }
      goto L_088110BC;
    }
L_088110BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088110DC;
      }
      goto L_088110CC;
    }
L_088110CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088111AC;
      }
      goto L_088110DC;
    }
L_088110DC:
    ctx.gpr[31] = (0x088110E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x088110E4u) goto L_088110E4;
    return;
L_088110E4:
    ctx.gpr[31] = (0x088110ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 288u, 0x0880AA64u>(ctx, &aot_mem) && ctx.pc == 0x088110ECu) goto L_088110EC;
    return;
L_088110EC:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088111AC;
      }
      goto L_08811108;
    }
L_08811108:
    ctx.gpr[31] = (0x08811110u);
    ctx.gpr[21] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x08811110u) goto L_08811110;
    return;
L_08811110:
    ctx.gpr[31] = (0x08811118u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 288u, 0x0880AA64u>(ctx, &aot_mem) && ctx.pc == 0x08811118u) goto L_08811118;
    return;
L_08811118:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811158;
      }
      goto L_08811134;
    }
L_08811134:
    ctx.gpr[31] = (0x0881113Cu);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 288u, 0x0880AA64u>(ctx, &aot_mem) && ctx.pc == 0x0881113Cu) goto L_0881113C;
    return;
L_0881113C:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811158;
      }
      goto L_0881114C;
    }
L_0881114C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2483), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088111D4;
      }
      goto L_08811158;
    }
L_08811158:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0881116Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0881116Cu) goto L_0881116C;
    return;
L_0881116C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881117Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x0881117Cu) goto L_0881117C;
    return;
L_0881117C:
    ctx.gpr[31] = (0x08811184u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 288u, 0x0880AA64u>(ctx, &aot_mem) && ctx.pc == 0x08811184u) goto L_08811184;
    return;
L_08811184:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088111A4;
      }
      goto L_0881119C;
    }
L_0881119C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2483), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088111A4;
L_088111A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088111D4;
      }
      goto L_088111AC;
    }
L_088111AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088111D4;
      }
      goto L_088111BC;
    }
L_088111BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 192u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088111D4;
      }
      goto L_088111D0;
    }
L_088111D0:
    ctx.gpr[21] = (0u | 1u);
    goto L_088111D4;
L_088111D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088111EC;
      }
      goto L_088111E4;
    }
L_088111E4:
    ctx.gpr[31] = (0x088111ECu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 57u, 0x08820560u>(ctx, &aot_mem) && ctx.pc == 0x088111ECu) goto L_088111EC;
    return;
L_088111EC:
    ctx.gpr[31] = (0x088111F4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 72u, 0x088A05C4u>(ctx, &aot_mem) && ctx.pc == 0x088111F4u) goto L_088111F4;
    return;
L_088111F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088112B8;
      }
      goto L_08811204;
    }
L_08811204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088112B8;
      }
      goto L_08811218;
    }
L_08811218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088112B8;
      }
      goto L_08811228;
    }
L_08811228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 192u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088112B8;
      }
      goto L_0881123C;
    }
L_0881123C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 208u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088112B8;
      }
      goto L_08811250;
    }
L_08811250:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 148u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088112B0;
      }
      goto L_08811260;
    }
L_08811260:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 157u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088112B0;
      }
      goto L_08811270;
    }
L_08811270:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 158u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088112B0;
      }
      goto L_08811280;
    }
L_08811280:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 159u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088112B0;
      }
      goto L_08811290;
    }
L_08811290:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088112B0;
      }
      goto L_088112A0;
    }
L_088112A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 163u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088112B8;
      }
      goto L_088112B0;
    }
L_088112B0:
    ctx.gpr[31] = (0x088112B8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 108u, 0x0880C7ACu>(ctx, &aot_mem) && ctx.pc == 0x088112B8u) goto L_088112B8;
    return;
L_088112B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088113B8;
      }
      goto L_088112C4;
    }
L_088112C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881132C;
      }
      goto L_088112D4;
    }
L_088112D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881132C;
      }
      goto L_088112E8;
    }
L_088112E8:
    ctx.gpr[4] = (0u | 1000u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1512)));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(646), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(648), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7827));
      if (branch_taken) {
          goto L_08811318;
      }
      goto L_0881130C;
    }
L_0881130C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(648)));
    ctx.gpr[31] = (0x08811318u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(648));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08811318u) goto L_08811318;
    return;
L_08811318:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881132Cu);
    ctx.gpr[6] = (0u | 93u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0881132Cu) goto L_0881132C;
    return;
L_0881132C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    ctx.gpr[31] = (0x08811340u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 824u, 0x0889FD00u>(ctx, &aot_mem) && ctx.pc == 0x08811340u) goto L_08811340;
    return;
L_08811340:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088113C8;
      }
      goto L_08811348;
    }
L_08811348:
    ctx.gpr[31] = (0x08811350u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 889u, 0x0889FFE0u>(ctx, &aot_mem) && ctx.pc == 0x08811350u) goto L_08811350;
    return;
L_08811350:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088113C8;
      }
      goto L_08811358;
    }
L_08811358:
    ctx.gpr[31] = (0x08811360u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08811360u) goto L_08811360;
    return;
L_08811360:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088113C8;
      }
      goto L_08811368;
    }
L_08811368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
        goto L_08811390;
    }
    goto L_08811378;
L_08811378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088113C8;
      }
      goto L_0881138C;
    }
L_0881138C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    goto L_08811390;
L_08811390:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088113C8;
      }
      goto L_088113A0;
    }
L_088113A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x088113B0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x088113B0u) goto L_088113B0;
    return;
L_088113B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088113C8;
      }
      goto L_088113B8;
    }
L_088113B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088113C8;
L_088113C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(540)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08811480;
      }
      goto L_088113D4;
    }
L_088113D4:
    ctx.gpr[31] = (0x088113DCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 824u, 0x0889FD00u>(ctx, &aot_mem) && ctx.pc == 0x088113DCu) goto L_088113DC;
    return;
L_088113DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811480;
      }
      goto L_088113E4;
    }
L_088113E4:
    ctx.gpr[31] = (0x088113ECu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 889u, 0x0889FFE0u>(ctx, &aot_mem) && ctx.pc == 0x088113ECu) goto L_088113EC;
    return;
L_088113EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811480;
      }
      goto L_088113F4;
    }
L_088113F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_08811480;
      }
      goto L_08811408;
    }
L_08811408:
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
    goto L_0881140C;
L_0881140C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881146C;
      }
      goto L_08811418;
    }
L_08811418:
    ctx.gpr[31] = (0x08811420u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08811420u) goto L_08811420;
    return;
L_08811420:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881146C;
      }
      goto L_08811428;
    }
L_08811428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
        goto L_08811450;
    }
    goto L_08811438;
L_08811438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881146C;
      }
      goto L_0881144C;
    }
L_0881144C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    goto L_08811450;
L_08811450:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0881146C;
      }
      goto L_0881145C;
    }
L_0881145C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x0881146Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x0881146Cu) goto L_0881146C;
    return;
L_0881146C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881140C;
      }
      goto L_08811480;
    }
L_08811480:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2482), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[31] = (0x0881148Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 242u, 0x08A8998Cu>(ctx, &aot_mem) && ctx.pc == 0x0881148Cu) goto L_0881148C;
    return;
L_0881148C:
    ctx.gpr[31] = (0x08811494u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889ED4Cu>(ctx, &aot_mem) && ctx.pc == 0x08811494u) goto L_08811494;
    return;
L_08811494:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(16174)));
    ctx.gpr[4] = (ctx.gpr[21] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_088114E4;
      }
      goto L_088114C4;
    }
L_088114C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1560)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0881154C;
      }
      goto L_088114E4;
    }
L_088114E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811538;
      }
      goto L_088114F8;
    }
L_088114F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08811538;
      }
      goto L_0881150C;
    }
L_0881150C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0881154C;
      }
      goto L_08811538;
    }
L_08811538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0881154C;
L_0881154C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088116C0;
      }
      goto L_0881155C;
    }
L_0881155C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088116C0;
      }
      goto L_0881156C;
    }
L_0881156C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088116C0;
      }
      goto L_0881157C;
    }
L_0881157C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088116C0;
      }
      goto L_0881158C;
    }
L_0881158C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088116C0;
      }
      goto L_088115A8;
    }
L_088115A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 151u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088116C0;
      }
      goto L_088115B8;
    }
L_088115B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 166u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088116C0;
      }
      goto L_088115C8;
    }
L_088115C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 181u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088116C0;
      }
      goto L_088115D8;
    }
L_088115D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-967));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088116C0;
      }
      goto L_088115E8;
    }
L_088115E8:
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881162Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x0881162Cu) goto L_0881162C;
    return;
L_0881162C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08811640u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 269u, 0x0880A900u>(ctx, &aot_mem) && ctx.pc == 0x08811640u) goto L_08811640;
    return;
L_08811640:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08811650u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08811650u) goto L_08811650;
    return;
L_08811650:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x0881168Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 478u, 0x088C68F4u>(ctx, &aot_mem) && ctx.pc == 0x0881168Cu) goto L_0881168C;
    return;
L_0881168C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088116B4;
      }
      goto L_08811694;
    }
L_08811694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088116C0;
      }
      goto L_088116A0;
    }
L_088116A0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088116ACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 211u, 0x0891D30Cu>(ctx, &aot_mem) && ctx.pc == 0x088116ACu) goto L_088116AC;
    return;
L_088116AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088116C0;
      }
      goto L_088116B4;
    }
L_088116B4:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088116C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 211u, 0x0891D30Cu>(ctx, &aot_mem) && ctx.pc == 0x088116C0u) goto L_088116C0;
    return;
L_088116C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088126A4;
      }
      goto L_088116D8;
    }
L_088116D8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-13376)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088116F0:
    ctx.gpr[31] = (0x088116F8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088116F8u) goto L_088116F8;
    return;
L_088116F8:
    ctx.gpr[31] = (0x08811700u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1048u, 0x08A97DB4u>(ctx, &aot_mem) && ctx.pc == 0x08811700u) goto L_08811700;
    return;
L_08811700:
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25840));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_0881174C;
      }
      goto L_08811710;
    }
L_08811710:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16182)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881174C;
      }
      goto L_08811720;
    }
L_08811720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(280));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08811734u);
    ctx.gpr[20] = (ctx.gpr[30] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08811734u) goto L_08811734;
    return;
L_08811734:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08811744u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08811744u) goto L_08811744;
    return;
L_08811744:
    ctx.gpr[31] = (0x0881174Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 174u, 0x088414FCu>(ctx, &aot_mem) && ctx.pc == 0x0881174Cu) goto L_0881174C;
    return;
L_0881174C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088117D4;
      }
      goto L_0881175C;
    }
L_0881175C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16183)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088117D4;
      }
      goto L_0881176C;
    }
L_0881176C:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08811784u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08811784u) goto L_08811784;
    return;
L_08811784:
    ctx.gpr[31] = (0x0881178Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 345u, 0x0880ADECu>(ctx, &aot_mem) && ctx.pc == 0x0881178Cu) goto L_0881178C;
    return;
L_0881178C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088117A4;
      }
      goto L_08811794;
    }
L_08811794:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088117D0;
      }
      goto L_088117A4;
    }
L_088117A4:
    ctx.gpr[31] = (0x088117ACu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 174u, 0x088414FCu>(ctx, &aot_mem) && ctx.pc == 0x088117ACu) goto L_088117AC;
    return;
L_088117AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(280));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x088117C0u);
    ctx.gpr[20] = (ctx.gpr[30] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088117C0u) goto L_088117C0;
    return;
L_088117C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088117D0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088117D0u) goto L_088117D0;
    return;
L_088117D0:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088117D4;
L_088117D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08811800;
      }
      goto L_088117FC;
    }
L_088117FC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08811800;
L_08811800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881180C;
      }
      goto L_08811808;
    }
L_08811808:
    ctx.gpr[21] = (2230u << 16u);
    goto L_0881180C;
L_0881180C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881186C;
      }
      goto L_08811814;
    }
L_08811814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088120D0;
      }
      goto L_08811820;
    }
L_08811820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088120D0;
      }
      goto L_08811834;
    }
L_08811834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 57u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088120D0;
      }
      goto L_08811848;
    }
L_08811848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 62u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088120D0;
      }
      goto L_0881185C;
    }
L_0881185C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088120D0;
      }
      goto L_0881186C;
    }
L_0881186C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[17] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_08811894;
      }
      goto L_08811884;
    }
L_08811884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088118B0;
      }
      goto L_08811894;
    }
L_08811894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088118B0u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088118B0u) goto L_088118B0;
    return;
L_088118B0:
    ctx.gpr[31] = (0x088118B8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 720u, 0x0883BA30u>(ctx, &aot_mem) && ctx.pc == 0x088118B8u) goto L_088118B8;
    return;
L_088118B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088118E0;
      }
      goto L_088118C8;
    }
L_088118C8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7812)));
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7828)));
        goto L_088118E4;
    }
    goto L_088118D8;
L_088118D8:
    ctx.gpr[31] = (0x088118E0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 149u, 0x088615B4u>(ctx, &aot_mem) && ctx.pc == 0x088118E0u) goto L_088118E0;
    return;
L_088118E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7828)));
    goto L_088118E4;
L_088118E4:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(501) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08811A18;
      }
      goto L_0881190C;
    }
L_0881190C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08811A18;
      }
      goto L_08811920;
    }
L_08811920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08811A18;
      }
      goto L_08811938;
    }
L_08811938:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(276)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-500));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (0u | 1000u);
        goto L_08811968;
    }
    goto L_08811968;
L_08811968:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08811980;
      }
      goto L_08811974;
    }
L_08811974:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08811980;
L_08811980:
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811A10;
      }
      goto L_088119A4;
    }
L_088119A4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088119C0;
      }
      goto L_088119B8;
    }
L_088119B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088119C4;
      }
      goto L_088119C0;
    }
L_088119C0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_088119C4;
L_088119C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(684)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[31] = (0x088119E0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088119E0u) goto L_088119E0;
    return;
L_088119E0:
    ctx.gpr[31] = (0x088119E8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 799u, 0x08A97230u>(ctx, &aot_mem) && ctx.pc == 0x088119E8u) goto L_088119E8;
    return;
L_088119E8:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08811A10;
L_08811A10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08811A24;
      }
      goto L_08811A18;
    }
L_08811A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08811A24;
L_08811A24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1728)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08811E20;
      }
      goto L_08811A30;
    }
L_08811A30:
    ctx.gpr[31] = (0x08811A38u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x08811A38u) goto L_08811A38;
    return;
L_08811A38:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08811E20;
      }
      goto L_08811A44;
    }
L_08811A44:
    ctx.gpr[31] = (0x08811A4Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x08811A4Cu) goto L_08811A4C;
    return;
L_08811A4C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (17723u << 16u);
      if (branch_taken) {
          goto L_08811E20;
      }
      goto L_08811A58;
    }
L_08811A58:
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(212)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(724)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08811A88;
    }
    goto L_08811A88;
L_08811A88:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (0u | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08811A9Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08811A9Cu) goto L_08811A9C;
    return;
L_08811A9C:
    ctx.gpr[31] = (0x08811AA4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1064u, 0x08A97E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08811AA4u) goto L_08811AA4;
    return;
L_08811AA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811BC0;
      }
      goto L_08811AAC;
    }
L_08811AAC:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(728)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(728)));
        goto L_08811B0C;
    }
    goto L_08811AE0;
L_08811AE0:
    ctx.gpr[31] = (0x08811AE8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08811AE8u) goto L_08811AE8;
    return;
L_08811AE8:
    ctx.gpr[31] = (0x08811AF0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 799u, 0x08A97230u>(ctx, &aot_mem) && ctx.pc == 0x08811AF0u) goto L_08811AF0;
    return;
L_08811AF0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811B48;
      }
      goto L_08811B08;
    }
L_08811B08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(728)));
    goto L_08811B0C;
L_08811B0C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811CD4;
      }
      goto L_08811B20;
    }
L_08811B20:
    ctx.gpr[31] = (0x08811B28u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08811B28u) goto L_08811B28;
    return;
L_08811B28:
    ctx.gpr[31] = (0x08811B30u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 799u, 0x08A97230u>(ctx, &aot_mem) && ctx.pc == 0x08811B30u) goto L_08811B30;
    return;
L_08811B30:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811CD4;
      }
      goto L_08811B48;
    }
L_08811B48:
    ctx.gpr[31] = (0x08811B50u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08811B50u) goto L_08811B50;
    return;
L_08811B50:
    ctx.gpr[31] = (0x08811B58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 799u, 0x08A97230u>(ctx, &aot_mem) && ctx.pc == 0x08811B58u) goto L_08811B58;
    return;
L_08811B58:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08811B88u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08811B88u) goto L_08811B88;
    return;
L_08811B88:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(240));
    ctx.gpr[31] = (0x08811B98u);
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08811B98u) goto L_08811B98;
    return;
L_08811B98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[31] = (0x08811BB8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08811BB8u) goto L_08811BB8;
    return;
L_08811BB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08811CD4;
      }
      goto L_08811BC0;
    }
L_08811BC0:
    ctx.gpr[31] = (0x08811BC8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08811BC8u) goto L_08811BC8;
    return;
L_08811BC8:
    ctx.gpr[31] = (0x08811BD0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x08811BD0u) goto L_08811BD0;
    return;
L_08811BD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08811CD4;
      }
      goto L_08811BD8;
    }
L_08811BD8:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08811BE4u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 263u, 0x0880A884u>(ctx, &aot_mem) && ctx.pc == 0x08811BE4u) goto L_08811BE4;
    return;
L_08811BE4:
    ctx.gpr[16] = (2227u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(728)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(728)));
        goto L_08811C2C;
    }
    goto L_08811C00;
L_08811C00:
    ctx.gpr[31] = (0x08811C08u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08811C08u) goto L_08811C08;
    return;
L_08811C08:
    ctx.gpr[31] = (0x08811C10u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 799u, 0x08A97230u>(ctx, &aot_mem) && ctx.pc == 0x08811C10u) goto L_08811C10;
    return;
L_08811C10:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811C68;
      }
      goto L_08811C28;
    }
L_08811C28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(728)));
    goto L_08811C2C;
L_08811C2C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811CD4;
      }
      goto L_08811C40;
    }
L_08811C40:
    ctx.gpr[31] = (0x08811C48u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08811C48u) goto L_08811C48;
    return;
L_08811C48:
    ctx.gpr[31] = (0x08811C50u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 799u, 0x08A97230u>(ctx, &aot_mem) && ctx.pc == 0x08811C50u) goto L_08811C50;
    return;
L_08811C50:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811CD4;
      }
      goto L_08811C68;
    }
L_08811C68:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[31] = (0x08811C74u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08811C74u) goto L_08811C74;
    return;
L_08811C74:
    ctx.gpr[31] = (0x08811C7Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 799u, 0x08A97230u>(ctx, &aot_mem) && ctx.pc == 0x08811C7Cu) goto L_08811C7C;
    return;
L_08811C7C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08811CACu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08811CACu) goto L_08811CAC;
    return;
L_08811CAC:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08811CD4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08811CD4u) goto L_08811CD4;
    return;
L_08811CD4:
    ctx.gpr[31] = (0x08811CDCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08811CDCu) goto L_08811CDC;
    return;
L_08811CDC:
    ctx.gpr[31] = (0x08811CE4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x08811CE4u) goto L_08811CE4;
    return;
L_08811CE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08811E20;
      }
      goto L_08811CEC;
    }
L_08811CEC:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08811CF8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 390u, 0x08AF9B68u>(ctx, &aot_mem) && ctx.pc == 0x08811CF8u) goto L_08811CF8;
    return;
L_08811CF8:
    ctx.gpr[31] = (0x08811D00u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08811D00u) goto L_08811D00;
    return;
L_08811D00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08811D0Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 263u, 0x0880A884u>(ctx, &aot_mem) && ctx.pc == 0x08811D0Cu) goto L_08811D0C;
    return;
L_08811D0C:
    ctx.gpr[16] = (2227u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(728)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(728)));
        goto L_08811D54;
    }
    goto L_08811D28;
L_08811D28:
    ctx.gpr[31] = (0x08811D30u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08811D30u) goto L_08811D30;
    return;
L_08811D30:
    ctx.gpr[31] = (0x08811D38u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 812u, 0x08A972D8u>(ctx, &aot_mem) && ctx.pc == 0x08811D38u) goto L_08811D38;
    return;
L_08811D38:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811D90;
      }
      goto L_08811D50;
    }
L_08811D50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(728)));
    goto L_08811D54;
L_08811D54:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811E20;
      }
      goto L_08811D68;
    }
L_08811D68:
    ctx.gpr[31] = (0x08811D70u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08811D70u) goto L_08811D70;
    return;
L_08811D70:
    ctx.gpr[31] = (0x08811D78u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 812u, 0x08A972D8u>(ctx, &aot_mem) && ctx.pc == 0x08811D78u) goto L_08811D78;
    return;
L_08811D78:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811E20;
      }
      goto L_08811D90;
    }
L_08811D90:
    ctx.gpr[31] = (0x08811D98u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08811D98u) goto L_08811D98;
    return;
L_08811D98:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08811DA4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08811DA4u) goto L_08811DA4;
    return;
L_08811DA4:
    ctx.gpr[31] = (0x08811DACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 812u, 0x08A972D8u>(ctx, &aot_mem) && ctx.pc == 0x08811DACu) goto L_08811DAC;
    return;
L_08811DAC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08811DD0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 390u, 0x08AF9B68u>(ctx, &aot_mem) && ctx.pc == 0x08811DD0u) goto L_08811DD0;
    return;
L_08811DD0:
    ctx.gpr[31] = (0x08811DD8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08811DD8u) goto L_08811DD8;
    return;
L_08811DD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08811DE8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08811DE8u) goto L_08811DE8;
    return;
L_08811DE8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(240));
    ctx.gpr[31] = (0x08811DF8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 390u, 0x08AF9B68u>(ctx, &aot_mem) && ctx.pc == 0x08811DF8u) goto L_08811DF8;
    return;
L_08811DF8:
    ctx.gpr[31] = (0x08811E00u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08811E00u) goto L_08811E00;
    return;
L_08811E00:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08811E10u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08811E10u) goto L_08811E10;
    return;
L_08811E10:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08811E20u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08811E20u) goto L_08811E20;
    return;
L_08811E20:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16178)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811E38;
      }
      goto L_08811E30;
    }
L_08811E30:
    ctx.gpr[31] = (0x08811E38u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 229u, 0x0880D138u>(ctx, &aot_mem) && ctx.pc == 0x08811E38u) goto L_08811E38;
    return;
L_08811E38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1376)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1380)));
        goto L_08811E70;
    }
    goto L_08811E50;
L_08811E50:
    ctx.gpr[31] = (0x08811E58u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08811E58u) goto L_08811E58;
    return;
L_08811E58:
    ctx.gpr[31] = (0x08811E60u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x08811E60u) goto L_08811E60;
    return;
L_08811E60:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08811F08;
      }
      goto L_08811E6C;
    }
L_08811E6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1380)));
    goto L_08811E70;
L_08811E70:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1384)));
        goto L_08811EA4;
    }
    goto L_08811E84;
L_08811E84:
    ctx.gpr[31] = (0x08811E8Cu);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1280));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08811E8Cu) goto L_08811E8C;
    return;
L_08811E8C:
    ctx.gpr[31] = (0x08811E94u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x08811E94u) goto L_08811E94;
    return;
L_08811E94:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08811F08;
      }
      goto L_08811EA0;
    }
L_08811EA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1384)));
    goto L_08811EA4;
L_08811EA4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1388)));
        goto L_08811ED8;
    }
    goto L_08811EB8;
L_08811EB8:
    ctx.gpr[31] = (0x08811EC0u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1312));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08811EC0u) goto L_08811EC0;
    return;
L_08811EC0:
    ctx.gpr[31] = (0x08811EC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x08811EC8u) goto L_08811EC8;
    return;
L_08811EC8:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08811F08;
      }
      goto L_08811ED4;
    }
L_08811ED4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1388)));
    goto L_08811ED8;
L_08811ED8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08812174;
      }
      goto L_08811EEC;
    }
L_08811EEC:
    ctx.gpr[31] = (0x08811EF4u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1344));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08811EF4u) goto L_08811EF4;
    return;
L_08811EF4:
    ctx.gpr[31] = (0x08811EFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x08811EFCu) goto L_08811EFC;
    return;
L_08811EFC:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08812174;
      }
      goto L_08811F08;
    }
L_08811F08:
    ctx.gpr[31] = (0x08811F10u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08811F10u) goto L_08811F10;
    return;
L_08811F10:
    ctx.gpr[4] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08812174;
      }
      goto L_08811F1C;
    }
L_08811F1C:
    ctx.gpr[31] = (0x08811F24u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08811F24u) goto L_08811F24;
    return;
L_08811F24:
    ctx.gpr[4] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08812174;
      }
      goto L_08811F30;
    }
L_08811F30:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08811F48u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08811F48u) goto L_08811F48;
    return;
L_08811F48:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08811F54u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 263u, 0x0880A884u>(ctx, &aot_mem) && ctx.pc == 0x08811F54u) goto L_08811F54;
    return;
L_08811F54:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08811F60u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08811F60u) goto L_08811F60;
    return;
L_08811F60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08811F70u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08811F70u) goto L_08811F70;
    return;
L_08811F70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08811F80u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x08811F80u) goto L_08811F80;
    return;
L_08811F80:
    ctx.gpr[31] = (0x08811F88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 289u, 0x0880AA80u>(ctx, &aot_mem) && ctx.pc == 0x08811F88u) goto L_08811F88;
    return;
L_08811F88:
    ctx.gpr[4] = (15800u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (15948u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08812038;
      }
      goto L_08811FBC;
    }
L_08811FBC:
    ctx.gpr[31] = (0x08811FC4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 282u, 0x0880A9F4u>(ctx, &aot_mem) && ctx.pc == 0x08811FC4u) goto L_08811FC4;
    return;
L_08811FC4:
    ctx.gpr[5] = (16025u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08811FE8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08811FE8u) goto L_08811FE8;
    return;
L_08811FE8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08811FF8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 270u, 0x0880A91Cu>(ctx, &aot_mem) && ctx.pc == 0x08811FF8u) goto L_08811FF8;
    return;
L_08811FF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08812004u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08812004u) goto L_08812004;
    return;
L_08812004:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(708));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[31] = (0x08812030u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x08812030u) goto L_08812030;
    return;
L_08812030:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08812048;
      }
      goto L_08812038;
    }
L_08812038:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1510))))));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08812048;
L_08812048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881206C;
      }
      goto L_08812060;
    }
L_08812060:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_0881206C;
L_0881206C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7816)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16281u << 16u);
      if (branch_taken) {
          goto L_08812094;
      }
      goto L_08812080;
    }
L_08812080:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7816)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08812094;
L_08812094:
    ctx.gpr[31] = (0x0881209Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x0881209Cu) goto L_0881209C;
    return;
L_0881209C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088120B8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x088120B8u) goto L_088120B8;
    return;
L_088120B8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088120C4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 433u, 0x08AF9E80u>(ctx, &aot_mem) && ctx.pc == 0x088120C4u) goto L_088120C4;
    return;
L_088120C4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2480), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08812174;
      }
      goto L_088120D0;
    }
L_088120D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812174;
      }
      goto L_088120DC;
    }
L_088120DC:
    ctx.gpr[31] = (0x088120E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088120E4u) goto L_088120E4;
    return;
L_088120E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812174;
      }
      goto L_088120EC;
    }
L_088120EC:
    ctx.gpr[31] = (0x088120F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x088120F4u) goto L_088120F4;
    return;
L_088120F4:
    ctx.gpr[4] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881214C;
      }
      goto L_08812100;
    }
L_08812100:
    ctx.gpr[31] = (0x08812108u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08812108u) goto L_08812108;
    return;
L_08812108:
    ctx.gpr[4] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881214C;
      }
      goto L_08812114;
    }
L_08812114:
    ctx.gpr[31] = (0x0881211Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x0881211Cu) goto L_0881211C;
    return;
L_0881211C:
    ctx.gpr[4] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881213C;
      }
      goto L_08812128;
    }
L_08812128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08812174;
      }
      goto L_0881213C;
    }
L_0881213C:
    ctx.gpr[31] = (0x08812144u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 50u, 0x088A0350u>(ctx, &aot_mem) && ctx.pc == 0x08812144u) goto L_08812144;
    return;
L_08812144:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08812174;
      }
      goto L_0881214C;
    }
L_0881214C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08812158u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 445u, 0x08AFA038u>(ctx, &aot_mem) && ctx.pc == 0x08812158u) goto L_08812158;
    return;
L_08812158:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08812168u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 450u, 0x08AFA084u>(ctx, &aot_mem) && ctx.pc == 0x08812168u) goto L_08812168;
    return;
L_08812168:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08812174u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 448u, 0x08AFA074u>(ctx, &aot_mem) && ctx.pc == 0x08812174u) goto L_08812174;
    return;
L_08812174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088126A8;
      }
      goto L_0881217C;
    }
L_0881217C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_088126A8;
      }
      goto L_08812184;
    }
L_08812184:
    ctx.gpr[31] = (0x0881218Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 376u, 0x0891DF64u>(ctx, &aot_mem) && ctx.pc == 0x0881218Cu) goto L_0881218C;
    return;
L_0881218C:
    ctx.gpr[31] = (0x08812194u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 222u, 0x08A0DBD0u>(ctx, &aot_mem) && ctx.pc == 0x08812194u) goto L_08812194;
    return;
L_08812194:
    ctx.gpr[31] = (0x0881219Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 335u, 0x089F1C10u>(ctx, &aot_mem) && ctx.pc == 0x0881219Cu) goto L_0881219C;
    return;
L_0881219C:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1729)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1728), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1730), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1729), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(404)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x088121D0u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(624));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 163u, 0x08A7CD50u>(ctx, &aot_mem) && ctx.pc == 0x088121D0u) goto L_088121D0;
    return;
L_088121D0:
    ctx.gpr[31] = (0x088121D8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x088121D8u) goto L_088121D8;
    return;
L_088121D8:
    ctx.gpr[8] = (16051u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 13107u);
    ctx.gpr[7] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088121F8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 805u, 0x0889FBC4u>(ctx, &aot_mem) && ctx.pc == 0x088121F8u) goto L_088121F8;
    return;
L_088121F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1460)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1464)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1468)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[0];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1472)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1464), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08812230u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1472), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 317u, 0x0880AC68u>(ctx, &aot_mem) && ctx.pc == 0x08812230u) goto L_08812230;
    return;
L_08812230:
    ctx.gpr[31] = (0x08812238u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 314u, 0x0880AC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08812238u) goto L_08812238;
    return;
L_08812238:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 542u, 0x08816144u>(ctx, &aot_mem); return;
      }
      goto L_0881225C;
    }
L_0881225C:
    ctx.gpr[31] = (0x08812264u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 376u, 0x0891DF64u>(ctx, &aot_mem) && ctx.pc == 0x08812264u) goto L_08812264;
    return;
L_08812264:
    ctx.gpr[31] = (0x0881226Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 179u, 0x089F5C60u>(ctx, &aot_mem) && ctx.pc == 0x0881226Cu) goto L_0881226C;
    return;
L_0881226C:
    ctx.gpr[31] = (0x08812274u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 317u, 0x0880AC68u>(ctx, &aot_mem) && ctx.pc == 0x08812274u) goto L_08812274;
    return;
L_08812274:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_088122B0;
      }
      goto L_08812288;
    }
L_08812288:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08812294u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 448u, 0x08AFA074u>(ctx, &aot_mem) && ctx.pc == 0x08812294u) goto L_08812294;
    return;
L_08812294:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088122A4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 450u, 0x08AFA084u>(ctx, &aot_mem) && ctx.pc == 0x088122A4u) goto L_088122A4;
    return;
L_088122A4:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088122B0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 445u, 0x08AFA038u>(ctx, &aot_mem) && ctx.pc == 0x088122B0u) goto L_088122B0;
    return;
L_088122B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1376)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1380)));
        goto L_088122E8;
    }
    goto L_088122C8;
L_088122C8:
    ctx.gpr[31] = (0x088122D0u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x088122D0u) goto L_088122D0;
    return;
L_088122D0:
    ctx.gpr[31] = (0x088122D8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x088122D8u) goto L_088122D8;
    return;
L_088122D8:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08812380;
      }
      goto L_088122E4;
    }
L_088122E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1380)));
    goto L_088122E8;
L_088122E8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1384)));
        goto L_0881231C;
    }
    goto L_088122FC;
L_088122FC:
    ctx.gpr[31] = (0x08812304u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1280));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08812304u) goto L_08812304;
    return;
L_08812304:
    ctx.gpr[31] = (0x0881230Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x0881230Cu) goto L_0881230C;
    return;
L_0881230C:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08812380;
      }
      goto L_08812318;
    }
L_08812318:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1384)));
    goto L_0881231C;
L_0881231C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1388)));
        goto L_08812350;
    }
    goto L_08812330;
L_08812330:
    ctx.gpr[31] = (0x08812338u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1312));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08812338u) goto L_08812338;
    return;
L_08812338:
    ctx.gpr[31] = (0x08812340u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x08812340u) goto L_08812340;
    return;
L_08812340:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08812380;
      }
      goto L_0881234C;
    }
L_0881234C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1388)));
    goto L_08812350;
L_08812350:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08812460;
      }
      goto L_08812364;
    }
L_08812364:
    ctx.gpr[31] = (0x0881236Cu);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1344));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x0881236Cu) goto L_0881236C;
    return;
L_0881236C:
    ctx.gpr[31] = (0x08812374u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x08812374u) goto L_08812374;
    return;
L_08812374:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08812460;
      }
      goto L_08812380;
    }
L_08812380:
    ctx.gpr[31] = (0x08812388u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08812388u) goto L_08812388;
    return;
L_08812388:
    ctx.gpr[4] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08812460;
      }
      goto L_08812394;
    }
L_08812394:
    ctx.gpr[31] = (0x0881239Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881239Cu) goto L_0881239C;
    return;
L_0881239C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-981));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08812460;
      }
      goto L_088123A8;
    }
L_088123A8:
    ctx.gpr[31] = (0x088123B0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x088123B0u) goto L_088123B0;
    return;
L_088123B0:
    ctx.gpr[4] = (0u | 155u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08812460;
      }
      goto L_088123BC;
    }
L_088123BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (48163u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7816)));
    ctx.gpr[4] = (ctx.gpr[5] | 55050u);
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08812434;
      }
      goto L_088123EC;
    }
L_088123EC:
    ctx.gpr[31] = (0x088123F4u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x088123F4u) goto L_088123F4;
    return;
L_088123F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7816)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08812420u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08812420u) goto L_08812420;
    return;
L_08812420:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0881242Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 433u, 0x08AF9E80u>(ctx, &aot_mem) && ctx.pc == 0x0881242Cu) goto L_0881242C;
    return;
L_0881242C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08812460;
      }
      goto L_08812434;
    }
L_08812434:
    ctx.gpr[31] = (0x0881243Cu);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x0881243Cu) goto L_0881243C;
    return;
L_0881243C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08812454u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08812454u) goto L_08812454;
    return;
L_08812454:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08812460u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 433u, 0x08AF9E80u>(ctx, &aot_mem) && ctx.pc == 0x08812460u) goto L_08812460;
    return;
L_08812460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088126A8;
      }
      goto L_08812468;
    }
L_08812468:
    ctx.gpr[31] = (0x08812470u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 289u, 0x0880AA80u>(ctx, &aot_mem) && ctx.pc == 0x08812470u) goto L_08812470;
    return;
L_08812470:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_088124A8;
      }
      goto L_0881248C;
    }
L_0881248C:
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088124A0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 450u, 0x08AFA084u>(ctx, &aot_mem) && ctx.pc == 0x088124A0u) goto L_088124A0;
    return;
L_088124A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088124B4;
      }
      goto L_088124A8;
    }
L_088124A8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088124B4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 450u, 0x08AFA084u>(ctx, &aot_mem) && ctx.pc == 0x088124B4u) goto L_088124B4;
    return;
L_088124B4:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088124C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 445u, 0x08AFA038u>(ctx, &aot_mem) && ctx.pc == 0x088124C0u) goto L_088124C0;
    return;
L_088124C0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088124CCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 447u, 0x08AFA06Cu>(ctx, &aot_mem) && ctx.pc == 0x088124CCu) goto L_088124CC;
    return;
L_088124CC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088124D8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 448u, 0x08AFA074u>(ctx, &aot_mem) && ctx.pc == 0x088124D8u) goto L_088124D8;
    return;
L_088124D8:
    ctx.gpr[31] = (0x088124E0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 452u, 0x08AFA094u>(ctx, &aot_mem) && ctx.pc == 0x088124E0u) goto L_088124E0;
    return;
L_088124E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088124EC;
      }
      goto L_088124E8;
    }
L_088124E8:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(680), 0u);
    goto L_088124EC;
L_088124EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812524;
      }
      goto L_088124FC;
    }
L_088124FC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08812508u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 448u, 0x08AFA074u>(ctx, &aot_mem) && ctx.pc == 0x08812508u) goto L_08812508;
    return;
L_08812508:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08812514u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 445u, 0x08AFA038u>(ctx, &aot_mem) && ctx.pc == 0x08812514u) goto L_08812514;
    return;
L_08812514:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08812524u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 450u, 0x08AFA084u>(ctx, &aot_mem) && ctx.pc == 0x08812524u) goto L_08812524;
    return;
L_08812524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088126A8;
      }
      goto L_0881252C;
    }
L_0881252C:
    ctx.gpr[31] = (0x08812534u);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 289u, 0x0880AA80u>(ctx, &aot_mem) && ctx.pc == 0x08812534u) goto L_08812534;
    return;
L_08812534:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_088125CC;
      }
      goto L_08812550;
    }
L_08812550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088125FC;
      }
      goto L_0881255C;
    }
L_0881255C:
    ctx.gpr[31] = (0x08812564u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08812564u) goto L_08812564;
    return;
L_08812564:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088125FC;
      }
      goto L_0881256C;
    }
L_0881256C:
    ctx.gpr[31] = (0x08812574u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08812574u) goto L_08812574;
    return;
L_08812574:
    ctx.gpr[4] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088125CC;
      }
      goto L_08812580;
    }
L_08812580:
    ctx.gpr[31] = (0x08812588u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08812588u) goto L_08812588;
    return;
L_08812588:
    ctx.gpr[4] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088125CC;
      }
      goto L_08812594;
    }
L_08812594:
    ctx.gpr[31] = (0x0881259Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x0881259Cu) goto L_0881259C;
    return;
L_0881259C:
    ctx.gpr[4] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088125BC;
      }
      goto L_088125A8;
    }
L_088125A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088125FC;
      }
      goto L_088125BC;
    }
L_088125BC:
    ctx.gpr[31] = (0x088125C4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 50u, 0x088A0350u>(ctx, &aot_mem) && ctx.pc == 0x088125C4u) goto L_088125C4;
    return;
L_088125C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088125FC;
      }
      goto L_088125CC;
    }
L_088125CC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088125D8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 445u, 0x08AFA038u>(ctx, &aot_mem) && ctx.pc == 0x088125D8u) goto L_088125D8;
    return;
L_088125D8:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088125E8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 450u, 0x08AFA084u>(ctx, &aot_mem) && ctx.pc == 0x088125E8u) goto L_088125E8;
    return;
L_088125E8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088125F4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 448u, 0x08AFA074u>(ctx, &aot_mem) && ctx.pc == 0x088125F4u) goto L_088125F4;
    return;
L_088125F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08812614;
      }
      goto L_088125FC;
    }
L_088125FC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08812608u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 450u, 0x08AFA084u>(ctx, &aot_mem) && ctx.pc == 0x08812608u) goto L_08812608;
    return;
L_08812608:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08812614u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 445u, 0x08AFA038u>(ctx, &aot_mem) && ctx.pc == 0x08812614u) goto L_08812614;
    return;
L_08812614:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08812620u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 447u, 0x08AFA06Cu>(ctx, &aot_mem) && ctx.pc == 0x08812620u) goto L_08812620;
    return;
L_08812620:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0881262Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 448u, 0x08AFA074u>(ctx, &aot_mem) && ctx.pc == 0x0881262Cu) goto L_0881262C;
    return;
L_0881262C:
    ctx.gpr[31] = (0x08812634u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 452u, 0x08AFA094u>(ctx, &aot_mem) && ctx.pc == 0x08812634u) goto L_08812634;
    return;
L_08812634:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08812640;
      }
      goto L_0881263C;
    }
L_0881263C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(680), 0u);
    goto L_08812640;
L_08812640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088126A8;
      }
      goto L_08812648;
    }
L_08812648:
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0881265Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 450u, 0x08AFA084u>(ctx, &aot_mem) && ctx.pc == 0x0881265Cu) goto L_0881265C;
    return;
L_0881265C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08812668u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 445u, 0x08AFA038u>(ctx, &aot_mem) && ctx.pc == 0x08812668u) goto L_08812668;
    return;
L_08812668:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08812674u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 447u, 0x08AFA06Cu>(ctx, &aot_mem) && ctx.pc == 0x08812674u) goto L_08812674;
    return;
L_08812674:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08812680u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 448u, 0x08AFA074u>(ctx, &aot_mem) && ctx.pc == 0x08812680u) goto L_08812680;
    return;
L_08812680:
    ctx.gpr[31] = (0x08812688u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 452u, 0x08AFA094u>(ctx, &aot_mem) && ctx.pc == 0x08812688u) goto L_08812688;
    return;
L_08812688:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_08812694;
      }
      goto L_08812690;
    }
L_08812690:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(680), 0u);
    goto L_08812694;
L_08812694:
    ctx.gpr[31] = (0x0881269Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1512)));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 379u, 0x08852464u>(ctx, &aot_mem) && ctx.pc == 0x0881269Cu) goto L_0881269C;
    return;
L_0881269C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1512), 0u);
      if (branch_taken) {
          goto L_088126A8;
      }
      goto L_088126A4;
    }
L_088126A4:
    ctx.gpr[21] = (2230u << 16u);
    goto L_088126A8;
L_088126A8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x088126B4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 418u, 0x08AF9D7Cu>(ctx, &aot_mem) && ctx.pc == 0x088126B4u) goto L_088126B4;
    return;
L_088126B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2481), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_088129D0;
      }
      goto L_088126BC;
    }
L_088126BC:
    ctx.gpr[31] = (0x088126C4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x088126C4u) goto L_088126C4;
    return;
L_088126C4:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[16] = (0u | 5u);
      if (branch_taken) {
          goto L_088126E0;
      }
      goto L_088126D0;
    }
L_088126D0:
    ctx.gpr[31] = (0x088126D8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x088126D8u) goto L_088126D8;
    return;
L_088126D8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088129D0;
      }
      goto L_088126E0;
    }
L_088126E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_08812758;
      }
      goto L_088126FC;
    }
L_088126FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(112)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08812758;
      }
      goto L_08812710;
    }
L_08812710:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08812758;
      }
      goto L_08812724;
    }
L_08812724:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08812758;
      }
      goto L_08812738;
    }
L_08812738:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1404)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08812758;
      }
      goto L_08812754;
    }
L_08812754:
    ctx.gpr[18] = (0u | 1u);
    goto L_08812758;
L_08812758:
    ctx.gpr[31] = (0x08812760u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08812760u) goto L_08812760;
    return;
L_08812760:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (15172u << 16u);
      if (branch_taken) {
          goto L_08812790;
      }
      goto L_08812768;
    }
L_08812768:
    ctx.gpr[4] = (15300u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15044u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088127B0;
      }
      goto L_08812790;
    }
L_08812790:
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (14955u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 60923u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088127B0;
L_088127B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2476), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2492), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(176));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088127D0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x088127D0u) goto L_088127D0;
    return;
L_088127D0:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088127ECu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 270u, 0x0880A91Cu>(ctx, &aot_mem) && ctx.pc == 0x088127ECu) goto L_088127EC;
    return;
L_088127EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088127F8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x088127F8u) goto L_088127F8;
    return;
L_088127F8:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08812808u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08812808u) goto L_08812808;
    return;
L_08812808:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08812818u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 270u, 0x0880A91Cu>(ctx, &aot_mem) && ctx.pc == 0x08812818u) goto L_08812818;
    return;
L_08812818:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08812824u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08812824u) goto L_08812824;
    return;
L_08812824:
    ctx.gpr[31] = (0x0881282Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 289u, 0x0880AA80u>(ctx, &aot_mem) && ctx.pc == 0x0881282Cu) goto L_0881282C;
    return;
L_0881282C:
    ctx.gpr[31] = (0x08812834u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08812834u) goto L_08812834;
    return;
L_08812834:
    ctx.gpr[31] = (0x0881283Cu);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 385u, 0x08AF9AD8u>(ctx, &aot_mem) && ctx.pc == 0x0881283Cu) goto L_0881283C;
    return;
L_0881283C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2492)));
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2476)));
      if (branch_taken) {
          goto L_088128D0;
      }
      goto L_08812850;
    }
L_08812850:
    ctx.gpr[31] = (0x08812858u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 289u, 0x0880AA80u>(ctx, &aot_mem) && ctx.pc == 0x08812858u) goto L_08812858;
    return;
L_08812858:
    ctx.gpr[31] = (0x08812860u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08812860u) goto L_08812860;
    return;
L_08812860:
    ctx.gpr[31] = (0x08812868u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 385u, 0x08AF9AD8u>(ctx, &aot_mem) && ctx.pc == 0x08812868u) goto L_08812868;
    return;
L_08812868:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088128D0;
      }
      goto L_08812878;
    }
L_08812878:
    ctx.gpr[31] = (0x08812880u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 439u, 0x08AF9FC8u>(ctx, &aot_mem) && ctx.pc == 0x08812880u) goto L_08812880;
    return;
L_08812880:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088128D0;
      }
      goto L_08812890;
    }
L_08812890:
    ctx.gpr[31] = (0x08812898u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 431u, 0x08AF9E70u>(ctx, &aot_mem) && ctx.pc == 0x08812898u) goto L_08812898;
    return;
L_08812898:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088128D8;
      }
      goto L_088128A8;
    }
L_088128A8:
    ctx.gpr[31] = (0x088128B0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9E78u>(ctx, &aot_mem) && ctx.pc == 0x088128B0u) goto L_088128B0;
    return;
L_088128B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088128D8;
      }
      goto L_088128B8;
    }
L_088128B8:
    ctx.gpr[31] = (0x088128C0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9E78u>(ctx, &aot_mem) && ctx.pc == 0x088128C0u) goto L_088128C0;
    return;
L_088128C0:
    ctx.gpr[31] = (0x088128C8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 406u, 0x08AF9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088128C8u) goto L_088128C8;
    return;
L_088128C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088128D8;
      }
      goto L_088128D0;
    }
L_088128D0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812998;
      }
      goto L_088128D8;
    }
L_088128D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(265)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(265)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088128FC;
      }
      goto L_088128F4;
    }
L_088128F4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881299C;
      }
      goto L_088128FC;
    }
L_088128FC:
    ctx.gpr[31] = (0x08812904u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08812904u) goto L_08812904;
    return;
L_08812904:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08812910u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08812910u) goto L_08812910;
    return;
L_08812910:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0881291Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 428u, 0x089EE5F0u>(ctx, &aot_mem) && ctx.pc == 0x0881291Cu) goto L_0881291C;
    return;
L_0881291C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881299C;
      }
      goto L_08812924;
    }
L_08812924:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881293C;
      }
      goto L_0881292C;
    }
L_0881292C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(265)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08812944;
      }
      goto L_0881293C;
    }
L_0881293C:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08812944;
L_08812944:
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2481), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08812964u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08812964u) goto L_08812964;
    return;
L_08812964:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08812970u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08812970u) goto L_08812970;
    return;
L_08812970:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08812984u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08812984u) goto L_08812984;
    return;
L_08812984:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08812990u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08812990u) goto L_08812990;
    return;
L_08812990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881299C;
      }
      goto L_08812998;
    }
L_08812998:
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(0u));
    goto L_0881299C;
L_0881299C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088129D0;
      }
      goto L_088129B0;
    }
L_088129B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088129D0;
      }
      goto L_088129C4;
    }
L_088129C4:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2481), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088129D0;
L_088129D0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2481)));
    goto L_088129DC;
L_088129DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1612)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812A10;
      }
      goto L_088129E8;
    }
L_088129E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(-7811)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08812A10;
      }
      goto L_08812A00;
    }
L_08812A00:
    ctx.gpr[31] = (0x08812A08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1612)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 420u, 0x08AF9DB4u>(ctx, &aot_mem) && ctx.pc == 0x08812A08u) goto L_08812A08;
    return;
L_08812A08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08812A28;
      }
      goto L_08812A10;
    }
L_08812A10:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088129DC;
      }
      goto L_08812A20;
    }
L_08812A20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (15651u << 16u);
      if (branch_taken) {
          goto L_08812A3C;
      }
      goto L_08812A28;
    }
L_08812A28:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08812A34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 421u, 0x08AF9DC4u>(ctx, &aot_mem) && ctx.pc == 0x08812A34u) goto L_08812A34;
    return;
L_08812A34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 542u, 0x08816144u>(ctx, &aot_mem); return;
      }
      goto L_08812A3C;
    }
L_08812A3C:
    ctx.gpr[6] = (ctx.gpr[6] | 55051u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[6] = (15897u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(848));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2460), ctx.gpr[5]);
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[19] = (0u | 4u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[22] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    ctx.gpr[20] = (0u | 162u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-7827));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2468), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08812AA4;
      }
      goto L_08812A9C;
    }
L_08812A9C:
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(0u));
    goto L_08812AA4;
L_08812AA4:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08812AB4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 170u, 0x088214F4u>(ctx, &aot_mem) && ctx.pc == 0x08812AB4u) goto L_08812AB4;
    return;
L_08812AB4:
    ctx.gpr[31] = (0x08812ABCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08812ABCu) goto L_08812ABC;
    return;
L_08812ABC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08812B04;
      }
      goto L_08812AC4;
    }
L_08812AC4:
    ctx.gpr[31] = (0x08812ACCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 94u, 0x088207F8u>(ctx, &aot_mem) && ctx.pc == 0x08812ACCu) goto L_08812ACC;
    return;
L_08812ACC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812AF4;
      }
      goto L_08812ADC;
    }
L_08812ADC:
    ctx.gpr[31] = (0x08812AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 313u, 0x0880DAFCu>(ctx, &aot_mem) && ctx.pc == 0x08812AE4u) goto L_08812AE4;
    return;
L_08812AE4:
    ctx.gpr[31] = (0x08812AECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x08812AECu) goto L_08812AEC;
    return;
L_08812AEC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08813100;
      }
      goto L_08812AF4;
    }
L_08812AF4:
    ctx.gpr[31] = (0x08812AFCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 129u, 0x0880C900u>(ctx, &aot_mem) && ctx.pc == 0x08812AFCu) goto L_08812AFC;
    return;
L_08812AFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08813100;
      }
      goto L_08812B04;
    }
L_08812B04:
    ctx.gpr[31] = (0x08812B0Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08812B0Cu) goto L_08812B0C;
    return;
L_08812B0C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-984));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08812B28;
      }
      goto L_08812B18;
    }
L_08812B18:
    ctx.gpr[31] = (0x08812B20u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 473u, 0x0880EB68u>(ctx, &aot_mem) && ctx.pc == 0x08812B20u) goto L_08812B20;
    return;
L_08812B20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08813100;
      }
      goto L_08812B28;
    }
L_08812B28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2488)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16174)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08813100;
      }
      goto L_08812B40;
    }
L_08812B40:
    ctx.gpr[31] = (0x08812B48u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08812B48u) goto L_08812B48;
    return;
L_08812B48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08813100;
      }
      goto L_08812B50;
    }
L_08812B50:
    ctx.gpr[31] = (0x08812B58u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 289u, 0x0880AA80u>(ctx, &aot_mem) && ctx.pc == 0x08812B58u) goto L_08812B58;
    return;
L_08812B58:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08813100;
      }
      goto L_08812B68;
    }
L_08812B68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08813100;
      }
      goto L_08812B84;
    }
L_08812B84:
    ctx.gpr[31] = (0x08812B8Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08812B8Cu) goto L_08812B8C;
    return;
L_08812B8C:
    ctx.gpr[31] = (0x08812B94u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1030u, 0x08A97D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08812B94u) goto L_08812B94;
    return;
L_08812B94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08813100;
      }
      goto L_08812B9C;
    }
L_08812B9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2500), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2476), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2484), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2481), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2496), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2492), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08812BC8u);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08812BC8u) goto L_08812BC8;
    return;
L_08812BC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2504), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2508), ctx.gpr[21]);
    ctx.gpr[31] = (0x08812BE4u);
    ctx.gpr[6] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08812BE4u) goto L_08812BE4;
    return;
L_08812BE4:
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(1248));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.gpr[31] = (0x08812BF4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08812BF4u) goto L_08812BF4;
    return;
L_08812BF4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08812C04u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08812C04u) goto L_08812C04;
    return;
L_08812C04:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08812C10u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08812C10u) goto L_08812C10;
    return;
L_08812C10:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08812C24u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08812C24u) goto L_08812C24;
    return;
L_08812C24:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08812C34u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08812C34u) goto L_08812C34;
    return;
L_08812C34:
    ctx.gpr[6] = (16294u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 26214u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08812C54u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08812C54u) goto L_08812C54;
    return;
L_08812C54:
    ctx.gpr[2] = (16416u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08812C84u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08812C84u) goto L_08812C84;
    return;
L_08812C84:
    ctx.gpr[31] = (0x08812C8Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08812C8Cu) goto L_08812C8C;
    return;
L_08812C8C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08812C98u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08812C98u) goto L_08812C98;
    return;
L_08812C98:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08812CA4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08812CA4u) goto L_08812CA4;
    return;
L_08812CA4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08812CB4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08812CB4u) goto L_08812CB4;
    return;
L_08812CB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08812CC4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08812CC4u) goto L_08812CC4;
    return;
L_08812CC4:
    ctx.gpr[6] = (16281u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08812CE0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08812CE0u) goto L_08812CE0;
    return;
L_08812CE0:
    ctx.gpr[11] = (16384u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[4] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08812D10u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08812D10u) goto L_08812D10;
    return;
L_08812D10:
    ctx.gpr[23] = (ctx.gpr[30] + static_cast<std::uint32_t>(1312));
    ctx.gpr[31] = (0x08812D1Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08812D1Cu) goto L_08812D1C;
    return;
L_08812D1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08812D28u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08812D28u) goto L_08812D28;
    return;
L_08812D28:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08812D34u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08812D34u) goto L_08812D34;
    return;
L_08812D34:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08812D44u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08812D44u) goto L_08812D44;
    return;
L_08812D44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08812D54u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08812D54u) goto L_08812D54;
    return;
L_08812D54:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08812D64u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08812D64u) goto L_08812D64;
    return;
L_08812D64:
    ctx.gpr[4] = (0u | 33u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08812D8Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08812D8Cu) goto L_08812D8C;
    return;
L_08812D8C:
    ctx.gpr[31] = (0x08812D94u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08812D94u) goto L_08812D94;
    return;
L_08812D94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08812DA0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08812DA0u) goto L_08812DA0;
    return;
L_08812DA0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08812DACu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08812DACu) goto L_08812DAC;
    return;
L_08812DAC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08812DBCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08812DBCu) goto L_08812DBC;
    return;
L_08812DBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08812DCCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08812DCCu) goto L_08812DCC;
    return;
L_08812DCC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08812DDCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08812DDCu) goto L_08812DDC;
    return;
L_08812DDC:
    ctx.gpr[4] = (0u | 55u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08812E04u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08812E04u) goto L_08812E04;
    return;
L_08812E04:
    ctx.gpr[31] = (0x08812E0Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08812E0Cu) goto L_08812E0C;
    return;
L_08812E0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08812E18u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08812E18u) goto L_08812E18;
    return;
L_08812E18:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08812E24u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08812E24u) goto L_08812E24;
    return;
L_08812E24:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08812E34u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08812E34u) goto L_08812E34;
    return;
L_08812E34:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08812E44u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08812E44u) goto L_08812E44;
    return;
L_08812E44:
    ctx.gpr[31] = (0x08812E4Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08812E4Cu) goto L_08812E4C;
    return;
L_08812E4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08812E5Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x08812E5Cu) goto L_08812E5C;
    return;
L_08812E5C:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08812E70u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08812E70u) goto L_08812E70;
    return;
L_08812E70:
    ctx.gpr[4] = (0u | 33u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08812E98u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08812E98u) goto L_08812E98;
    return;
L_08812E98:
    ctx.gpr[31] = (0x08812EA0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08812EA0u) goto L_08812EA0;
    return;
L_08812EA0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08812EACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08812EACu) goto L_08812EAC;
    return;
L_08812EAC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08812EB8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08812EB8u) goto L_08812EB8;
    return;
L_08812EB8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08812EC8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08812EC8u) goto L_08812EC8;
    return;
L_08812EC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08812ED8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08812ED8u) goto L_08812ED8;
    return;
L_08812ED8:
    ctx.gpr[31] = (0x08812EE0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08812EE0u) goto L_08812EE0;
    return;
L_08812EE0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08812EF0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x08812EF0u) goto L_08812EF0;
    return;
L_08812EF0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08812F00u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08812F00u) goto L_08812F00;
    return;
L_08812F00:
    ctx.gpr[4] = (0u | 55u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08812F28u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08812F28u) goto L_08812F28;
    return;
L_08812F28:
    ctx.gpr[31] = (0x08812F30u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08812F30u) goto L_08812F30;
    return;
L_08812F30:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08812F3Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08812F3Cu) goto L_08812F3C;
    return;
L_08812F3C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08812F48u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08812F48u) goto L_08812F48;
    return;
L_08812F48:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08812F58u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08812F58u) goto L_08812F58;
    return;
L_08812F58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08812F68u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08812F68u) goto L_08812F68;
    return;
L_08812F68:
    ctx.gpr[31] = (0x08812F70u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08812F70u) goto L_08812F70;
    return;
L_08812F70:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08812F80u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x08812F80u) goto L_08812F80;
    return;
L_08812F80:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08812F90u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08812F90u) goto L_08812F90;
    return;
L_08812F90:
    ctx.gpr[4] = (0u | 33u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08812FB8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08812FB8u) goto L_08812FB8;
    return;
L_08812FB8:
    ctx.gpr[31] = (0x08812FC0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08812FC0u) goto L_08812FC0;
    return;
L_08812FC0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08812FCCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08812FCCu) goto L_08812FCC;
    return;
L_08812FCC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08812FD8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08812FD8u) goto L_08812FD8;
    return;
L_08812FD8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08812FE8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08812FE8u) goto L_08812FE8;
    return;
L_08812FE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08812FF8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08812FF8u) goto L_08812FF8;
    return;
L_08812FF8:
    ctx.gpr[31] = (0x08813000u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08813000u) goto L_08813000;
    return;
L_08813000:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08813010u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x08813010u) goto L_08813010;
    return;
L_08813010:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08813020u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08813020u) goto L_08813020;
    return;
L_08813020:
    ctx.gpr[4] = (0u | 55u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08813048u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08813048u) goto L_08813048;
    return;
L_08813048:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2504)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08813074u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08813074u) goto L_08813074;
    return;
L_08813074:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08813084u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08813084u) goto L_08813084;
    return;
L_08813084:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08813090u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 433u, 0x08AF9E80u>(ctx, &aot_mem) && ctx.pc == 0x08813090u) goto L_08813090;
    return;
L_08813090:
    ctx.gpr[4] = (15395u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x088130ACu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x088130ACu) goto L_088130AC;
    return;
L_088130AC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088130BCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x088130BCu) goto L_088130BC;
    return;
L_088130BC:
    ctx.gpr[31] = (0x088130C4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x088130C4u) goto L_088130C4;
    return;
L_088130C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088130D4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x088130D4u) goto L_088130D4;
    return;
L_088130D4:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088130E4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x088130E4u) goto L_088130E4;
    return;
L_088130E4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2492)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2496)));
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2481)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2484)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2476)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2500)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2508)));
    goto L_08813100;
L_08813100:
    ctx.gpr[31] = (0x08813108u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08813108u) goto L_08813108;
    return;
L_08813108:
    ctx.gpr[4] = (0u | 3u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(398))))));
        goto L_0881312C;
    }
    goto L_08813114;
L_08813114:
    ctx.gpr[31] = (0x0881311Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x0881311Cu) goto L_0881311C;
    return;
L_0881311C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881314C;
      }
      goto L_08813128;
    }
L_08813128:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(398))))));
    goto L_0881312C;
L_0881312C:
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08813148;
      }
      goto L_08813138;
    }
L_08813138:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881314C;
      }
      goto L_08813148;
    }
L_08813148:
    ctx.gpr[18] = (0u | 1u);
    goto L_0881314C;
L_0881314C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2481), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08813218;
      }
      goto L_08813154;
    }
L_08813154:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2484), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08813164u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 416u, 0x08AF9D34u>(ctx, &aot_mem) && ctx.pc == 0x08813164u) goto L_08813164;
    return;
L_08813164:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08813170u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 419u, 0x08AF9D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08813170u) goto L_08813170;
    return;
L_08813170:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0881317Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 421u, 0x08AF9DC4u>(ctx, &aot_mem) && ctx.pc == 0x0881317Cu) goto L_0881317C;
    return;
L_0881317C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08813188u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 422u, 0x08AF9DECu>(ctx, &aot_mem) && ctx.pc == 0x08813188u) goto L_08813188;
    return;
L_08813188:
    ctx.gpr[31] = (0x08813190u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 430u, 0x08AF9E68u>(ctx, &aot_mem) && ctx.pc == 0x08813190u) goto L_08813190;
    return;
L_08813190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[6] = (65520u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[16]);
    ctx.gpr[31] = (0x088131C4u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 313u, 0x0880AC38u>(ctx, &aot_mem) && ctx.pc == 0x088131C4u) goto L_088131C4;
    return;
L_088131C4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(160));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088131E0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x088131E0u) goto L_088131E0;
    return;
L_088131E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088131ECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x088131ECu) goto L_088131EC;
    return;
L_088131EC:
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(144));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08813204u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08813204u) goto L_08813204;
    return;
L_08813204:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08813210u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08813210u) goto L_08813210;
    return;
L_08813210:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1568), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 258u, 0x08814DF4u>(ctx, &aot_mem); return;
      }
      goto L_08813218;
    }
L_08813218:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08813354;
      }
      goto L_08813230;
    }
L_08813230:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08813244u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 481u, 0x08A05DFCu>(ctx, &aot_mem) && ctx.pc == 0x08813244u) goto L_08813244;
    return;
L_08813244:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08813250u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 417u, 0x08AF9D58u>(ctx, &aot_mem) && ctx.pc == 0x08813250u) goto L_08813250;
    return;
L_08813250:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0881325Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 416u, 0x08AF9D34u>(ctx, &aot_mem) && ctx.pc == 0x0881325Cu) goto L_0881325C;
    return;
L_0881325C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08813268u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 419u, 0x08AF9D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08813268u) goto L_08813268;
    return;
L_08813268:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08813274u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 421u, 0x08AF9DC4u>(ctx, &aot_mem) && ctx.pc == 0x08813274u) goto L_08813274;
    return;
L_08813274:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08813280u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 422u, 0x08AF9DECu>(ctx, &aot_mem) && ctx.pc == 0x08813280u) goto L_08813280;
    return;
L_08813280:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(323))))));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(322))))));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088132B4u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088132B4u) goto L_088132B4;
    return;
L_088132B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088132CCu);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088132CCu) goto L_088132CC;
    return;
L_088132CC:
    ctx.gpr[16] = (0u | 0u);
    goto L_088132D0;
L_088132D0:
    ctx.gpr[31] = (0x088132D8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 369u, 0x08A0ECE4u>(ctx, &aot_mem) && ctx.pc == 0x088132D8u) goto L_088132D8;
    return;
L_088132D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08813330;
      }
      goto L_088132E0;
    }
L_088132E0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_08813330;
      }
      goto L_088132EC;
    }
L_088132EC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088132F8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x088132F8u) goto L_088132F8;
    return;
L_088132F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08813310u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08813310u) goto L_08813310;
    return;
L_08813310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08813328u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08813328u) goto L_08813328;
    return;
L_08813328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088132D0;
      }
      goto L_08813330;
    }
L_08813330:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0881333Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 419u, 0x08AF9D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0881333Cu) goto L_0881333C;
    return;
L_0881333C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08813348u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 417u, 0x08AF9D58u>(ctx, &aot_mem) && ctx.pc == 0x08813348u) goto L_08813348;
    return;
L_08813348:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08813354u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 299u, 0x0880AB60u>(ctx, &aot_mem) && ctx.pc == 0x08813354u) goto L_08813354;
    return;
L_08813354:
    ctx.gpr[31] = (0x0881335Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 222u, 0x08A0DBD0u>(ctx, &aot_mem) && ctx.pc == 0x0881335Cu) goto L_0881335C;
    return;
L_0881335C:
    ctx.gpr[31] = (0x08813364u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880FFC8u>(ctx, &aot_mem) && ctx.pc == 0x08813364u) goto L_08813364;
    return;
L_08813364:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[12] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08813374;
L_08813374:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1528)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1544)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[12]) < 4 ? 1u : 0u);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[15] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08813374;
      }
      goto L_088133A8;
    }
L_088133A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2472), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2476), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2464), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1092), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1096), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1100), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x088133CCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x088133CCu) goto L_088133CC;
    return;
L_088133CC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088133D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 263u, 0x0880A884u>(ctx, &aot_mem) && ctx.pc == 0x088133D8u) goto L_088133D8;
    return;
L_088133D8:
    ctx.gpr[31] = (0x088133E0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 283u, 0x0880AA00u>(ctx, &aot_mem) && ctx.pc == 0x088133E0u) goto L_088133E0;
    return;
L_088133E0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (49024u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (16179u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(1264));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(98));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2456), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(1248));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    goto L_08813444;
L_08813444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2460)));
    ctx.gpr[31] = (0x08813450u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 209u, 0x08A29280u>(ctx, &aot_mem) && ctx.pc == 0x08813450u) goto L_08813450;
    return;
L_08813450:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881346C;
      }
      goto L_0881345C;
    }
L_0881345C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088135A0;
      }
      goto L_0881346C;
    }
L_0881346C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2460)));
    ctx.gpr[31] = (0x08813478u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 209u, 0x08A29280u>(ctx, &aot_mem) && ctx.pc == 0x08813478u) goto L_08813478;
    return;
L_08813478:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088134EC;
      }
      goto L_08813484;
    }
L_08813484:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2456)));
    ctx.gpr[31] = (0x08813490u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 259u, 0x0880D4B4u>(ctx, &aot_mem) && ctx.pc == 0x08813490u) goto L_08813490;
    return;
L_08813490:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088135A0;
      }
      goto L_0881349C;
    }
L_0881349C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1544)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088135A0;
      }
      goto L_088134E0;
    }
L_088134E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088135A0;
      }
      goto L_088134EC;
    }
L_088134EC:
    ctx.gpr[31] = (0x088134F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x088134F4u) goto L_088134F4;
    return;
L_088134F4:
    ctx.gpr[31] = (0x088134FCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x088134FCu) goto L_088134FC;
    return;
L_088134FC:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088135A0;
      }
      goto L_08813508;
    }
L_08813508:
    ctx.gpr[31] = (0x08813510u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08813510u) goto L_08813510;
    return;
L_08813510:
    ctx.gpr[4] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_088135A0;
      }
      goto L_0881351C;
    }
L_0881351C:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2504), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7816)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1220));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[31] = (0x08813560u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x08813560u) goto L_08813560;
    return;
L_08813560:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1544)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2504)));
      if (branch_taken) {
          goto L_088135A0;
      }
      goto L_08813598;
    }
L_08813598:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088135A0;
L_088135A0:
    ctx.gpr[31] = (0x088135A8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 390u, 0x08AF9B68u>(ctx, &aot_mem) && ctx.pc == 0x088135A8u) goto L_088135A8;
    return;
L_088135A8:
    ctx.gpr[31] = (0x088135B0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x088135B0u) goto L_088135B0;
    return;
L_088135B0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088135C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x088135C0u) goto L_088135C0;
    return;
L_088135C0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088135CCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x088135CCu) goto L_088135CC;
    return;
L_088135CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08813630;
      }
      goto L_088135E8;
    }
L_088135E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2508), ctx.gpr[23]);
    ctx.gpr[31] = (0x088135F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x088135F4u) goto L_088135F4;
    return;
L_088135F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    ctx.gpr[31] = (0x08813600u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08813600u) goto L_08813600;
    return;
L_08813600:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881360Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0881360Cu) goto L_0881360C;
    return;
L_0881360C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0881361Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x0881361Cu) goto L_0881361C;
    return;
L_0881361C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08813628u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08813628u) goto L_08813628;
    return;
L_08813628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2508)));
      if (branch_taken) {
          goto L_08813650;
      }
      goto L_08813630;
    }
L_08813630:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08813644u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08813644u) goto L_08813644;
    return;
L_08813644:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08813650u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08813650u) goto L_08813650;
    return;
L_08813650:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08813444;
      }
      goto L_0881366C;
    }
L_0881366C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(1248));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[23] = (0u | 3u);
    ctx.gpr[7] = (0u | 1u);
    goto L_08813694;
L_08813694:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08813764;
      }
      goto L_088136B0;
    }
L_088136B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[18] = (ctx.gpr[30] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[7];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
      if (branch_taken) {
          goto L_088136C8;
      }
      goto L_088136C0;
    }
L_088136C0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088136CC;
      }
      goto L_088136C8;
    }
L_088136C8:
    ctx.fpr[20] = ctx.fpr[22] - ctx.fpr[20];
    goto L_088136CC;
L_088136CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x088136E0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x088136E0u) goto L_088136E0;
    return;
L_088136E0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08813704u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 416u, 0x08A0F2B8u>(ctx, &aot_mem) && ctx.pc == 0x08813704u) goto L_08813704;
    return;
L_08813704:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1456), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08813710u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08813710u) goto L_08813710;
    return;
L_08813710:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08813760;
      }
      goto L_08813720;
    }
L_08813720:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 34 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08813760;
      }
      goto L_0881372C;
    }
L_0881372C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-13320)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08813744:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1436), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1456), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08813764;
      }
      goto L_08813758;
    }
L_08813758:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1436), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08813764;
      }
      goto L_08813760;
    }
L_08813760:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1436), 0u);
    goto L_08813764;
L_08813764:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08813694;
      }
      goto L_08813784;
    }
L_08813784:
    ctx.gpr[4] = (16000u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(1280));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1296));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1312));
    goto L_0881379C;
L_0881379C:
    ctx.gpr[18] = (ctx.gpr[19] << 4u);
    ctx.gpr[20] = (ctx.gpr[29] + ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(960));
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(1024));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088137B8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 438u, 0x08AF9F48u>(ctx, &aot_mem) && ctx.pc == 0x088137B8u) goto L_088137B8;
    return;
L_088137B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088137C4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x088137C4u) goto L_088137C4;
    return;
L_088137C4:
    ctx.gpr[16] = (ctx.gpr[19] << 2u);
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1612)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088137FC;
      }
      goto L_088137D8;
    }
L_088137D8:
    ctx.gpr[6] = (ctx.gpr[30] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1612)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1632));
    ctx.gpr[31] = (0x088137ECu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 438u, 0x08AF9F48u>(ctx, &aot_mem) && ctx.pc == 0x088137ECu) goto L_088137EC;
    return;
L_088137EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088137F8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x088137F8u) goto L_088137F8;
    return;
L_088137F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1612), 0u);
    goto L_088137FC;
L_088137FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_0881386C;
      }
      goto L_08813818;
    }
L_08813818:
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1248));
    ctx.gpr[31] = (0x08813828u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08813828u) goto L_08813828;
    return;
L_08813828:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881386C;
      }
      goto L_0881383C;
    }
L_0881383C:
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(896));
    ctx.gpr[31] = (0x08813848u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08813848u) goto L_08813848;
    return;
L_08813848:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    ctx.gpr[31] = (0x08813854u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08813854u) goto L_08813854;
    return;
L_08813854:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08813860u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 264u, 0x0880A8A0u>(ctx, &aot_mem) && ctx.pc == 0x08813860u) goto L_08813860;
    return;
L_08813860:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881386Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881386Cu) goto L_0881386C;
    return;
L_0881386C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881379C;
      }
      goto L_08813880;
    }
L_08813880:
    ctx.gpr[4] = (16255u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65368u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08813890;
L_08813890:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1376)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088138D8;
      }
      goto L_088138AC;
    }
L_088138AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(896));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1024));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(960));
    ctx.gpr[31] = (0x088138D8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 428u, 0x08A0F430u>(ctx, &aot_mem) && ctx.pc == 0x088138D8u) goto L_088138D8;
    return;
L_088138D8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08813890;
      }
      goto L_088138EC;
    }
L_088138EC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1344));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1360));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(1632));
    goto L_08813908;
L_08813908:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08813918u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 438u, 0x08AF9F48u>(ctx, &aot_mem) && ctx.pc == 0x08813918u) goto L_08813918;
    return;
L_08813918:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08813924u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08813924u) goto L_08813924;
    return;
L_08813924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1612)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08813950;
      }
      goto L_08813930;
    }
L_08813930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1612)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08813940u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 438u, 0x08AF9F48u>(ctx, &aot_mem) && ctx.pc == 0x08813940u) goto L_08813940;
    return;
L_08813940:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881394Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x0881394Cu) goto L_0881394C;
    return;
L_0881394C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1612), 0u);
    goto L_08813950;
L_08813950:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08813908;
      }
      goto L_0881396C;
    }
L_0881396C:
    ctx.gpr[31] = (0x08813974u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08813974u) goto L_08813974;
    return;
L_08813974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2472)));
    ctx.gpr[31] = (0x08813980u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 263u, 0x0880A884u>(ctx, &aot_mem) && ctx.pc == 0x08813980u) goto L_08813980;
    return;
L_08813980:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1729)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1728), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1730), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16512u << 16u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1729), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1376));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1380));
    ctx.gpr[19] = (0u | 82u);
    ctx.gpr[18] = (0u | 70u);
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[23] = (0u | 2u);
    goto L_088139BC;
L_088139BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088139E0;
      }
      goto L_088139D8;
    }
L_088139D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1408), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08813A08;
      }
      goto L_088139E0;
    }
L_088139E0:
    ctx.gpr[31] = (0x088139E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x088139E8u) goto L_088139E8;
    return;
L_088139E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1380), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08813A04u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x08813A04u) goto L_08813A04;
    return;
L_08813A04:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1408), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08813A08;
L_08813A08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1408)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08813A98;
      }
      goto L_08813A1C;
    }
L_08813A1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1728)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1728), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(128))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08813A58;
      }
      goto L_08813A38;
    }
L_08813A38:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[5] = (0u | 52u);
      if (branch_taken) {
          goto L_08813A7C;
      }
      goto L_08813A40;
    }
L_08813A40:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08813A98;
      }
      goto L_08813A48;
    }
L_08813A48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1729)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1729), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08813A98;
      }
      goto L_08813A58;
    }
L_08813A58:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[22];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08813A68;
      }
      goto L_08813A60;
    }
L_08813A60:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08813A74;
      }
      goto L_08813A68;
    }
L_08813A68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1729)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1729), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08813A74;
L_08813A74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08813A98;
      }
      goto L_08813A7C;
    }
L_08813A7C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08813A8C;
      }
      goto L_08813A84;
    }
L_08813A84:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08813A98;
      }
      goto L_08813A8C;
    }
L_08813A8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1729)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1729), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08813A98;
L_08813A98:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088139BC;
      }
      goto L_08813AA8;
    }
L_08813AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2482)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16174)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1729)));
    ctx.gpr[11] = (ctx.gpr[10] | ctx.gpr[11]);
    ctx.gpr[11] = (0u < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[11] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(588));
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(624));
    ctx.gpr[7] = (ctx.gpr[30] + static_cast<std::uint32_t>(628));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[9] = (ctx.gpr[30] + static_cast<std::uint32_t>(1428));
    ctx.gpr[10] = (ctx.gpr[30] + static_cast<std::uint32_t>(1432));
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08813AF0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 170u, 0x08A7CDCCu>(ctx, &aot_mem) && ctx.pc == 0x08813AF0u) goto L_08813AF0;
    return;
L_08813AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.fpr[26] = ctx.fpr[0] / ctx.fpr[26];
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2464)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2472)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2227u << 16u);
      if (branch_taken) {
          goto L_08813B3C;
      }
      goto L_08813B24;
    }
L_08813B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08813B44;
      }
      goto L_08813B3C;
    }
L_08813B3C:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[20] = (0u | 1u);
    goto L_08813B44;
L_08813B44:
    ctx.gpr[31] = (0x08813B4Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 283u, 0x0880AA00u>(ctx, &aot_mem) && ctx.pc == 0x08813B4Cu) goto L_08813B4C;
    return;
L_08813B4C:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08813B74;
      }
      goto L_08813B5C;
    }
L_08813B5C:
    ctx.gpr[31] = (0x08813B64u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 283u, 0x0880AA00u>(ctx, &aot_mem) && ctx.pc == 0x08813B64u) goto L_08813B64;
    return;
L_08813B64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(620)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(620), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08813B78;
      }
      goto L_08813B74;
    }
L_08813B74:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(620), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08813B78;
L_08813B78:
    ctx.gpr[31] = (0x08813B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08813B80u) goto L_08813B80;
    return;
L_08813B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(592)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[31] = (0x08813B9Cu);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08813B9Cu) goto L_08813B9C;
    return;
L_08813B9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08813BAC;
      }
      goto L_08813BA4;
    }
L_08813BA4:
    ctx.gpr[31] = (0x08813BACu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08813BACu) goto L_08813BAC;
    return;
L_08813BAC:
    ctx.gpr[31] = (0x08813BB4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08813BB4u) goto L_08813BB4;
    return;
L_08813BB4:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08813BE0;
      }
      goto L_08813BC0;
    }
L_08813BC0:
    ctx.gpr[31] = (0x08813BC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 284u, 0x08A89E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08813BC8u) goto L_08813BC8;
    return;
L_08813BC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1564)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08813BF4;
      }
      goto L_08813BE0;
    }
L_08813BE0:
    ctx.gpr[31] = (0x08813BE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 284u, 0x08A89E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08813BE8u) goto L_08813BE8;
    return;
L_08813BE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08813BF4;
L_08813BF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(216)));
    ctx.gpr[23] = (2227u << 16u);
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(16174)));
    ctx.gpr[5] = (16256u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08813C1C;
      }
      goto L_08813C10;
    }
L_08813C10:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08813C1C;
L_08813C1C:
    ctx.gpr[31] = (0x08813C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08813C24u) goto L_08813C24;
    return;
L_08813C24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08813D18;
      }
      goto L_08813C2C;
    }
L_08813C2C:
    ctx.gpr[31] = (0x08813C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08813C34u) goto L_08813C34;
    return;
L_08813C34:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08813D18;
      }
      goto L_08813C3C;
    }
L_08813C3C:
    ctx.gpr[31] = (0x08813C44u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08813C44u) goto L_08813C44;
    return;
L_08813C44:
    ctx.gpr[31] = (0x08813C4Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1048u, 0x08A97DB4u>(ctx, &aot_mem) && ctx.pc == 0x08813C4Cu) goto L_08813C4C;
    return;
L_08813C4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08813D6C;
      }
      goto L_08813C54;
    }
L_08813C54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08813CBC;
      }
      goto L_08813C64;
    }
L_08813C64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 7000u);
    ctx.gpr[31] = (0x08813C84u);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(646), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08813C84u) goto L_08813C84;
    return;
L_08813C84:
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(648), ctx.gpr[2]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 3000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08813CA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13576));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x08813CA0u) goto L_08813CA0;
    return;
L_08813CA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08813CB4u);
    ctx.gpr[6] = (0u | 90u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08813CB4u) goto L_08813CB4;
    return;
L_08813CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08813D6C;
      }
      goto L_08813CBC;
    }
L_08813CBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08813D6C;
      }
      goto L_08813CD0;
    }
L_08813CD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 5u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 3000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08813CFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13576));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x08813CFCu) goto L_08813CFC;
    return;
L_08813CFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08813D10u);
    ctx.gpr[6] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08813D10u) goto L_08813D10;
    return;
L_08813D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08813D6C;
      }
      goto L_08813D18;
    }
L_08813D18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2482)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(16174)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16281u << 16u);
      if (branch_taken) {
          goto L_08813D6C;
      }
      goto L_08813D2C;
    }
L_08813D2C:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (16307u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2483)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(16174)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
      if (branch_taken) {
          goto L_08813D6C;
      }
      goto L_08813D58;
    }
L_08813D58:
    ctx.gpr[4] = (16294u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08813D6C;
L_08813D6C:
    ctx.gpr[16] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(856)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08813F1C;
      }
      goto L_08813D84;
    }
L_08813D84:
    ctx.gpr[4] = (15395u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08813F0C;
      }
      goto L_08813DA4;
    }
L_08813DA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1408)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08813DCC;
      }
      goto L_08813DB8;
    }
L_08813DB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1412)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08813F0C;
      }
      goto L_08813DCC;
    }
L_08813DCC:
    ctx.gpr[31] = (0x08813DD4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08813DD4u) goto L_08813DD4;
    return;
L_08813DD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08813F0C;
      }
      goto L_08813DDC;
    }
L_08813DDC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2508), ctx.gpr[19]);
    ctx.gpr[31] = (0x08813DE8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 390u, 0x08AF9B68u>(ctx, &aot_mem) && ctx.pc == 0x08813DE8u) goto L_08813DE8;
    return;
L_08813DE8:
    ctx.gpr[31] = (0x08813DF0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08813DF0u) goto L_08813DF0;
    return;
L_08813DF0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08813DFCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 263u, 0x0880A884u>(ctx, &aot_mem) && ctx.pc == 0x08813DFCu) goto L_08813DFC;
    return;
L_08813DFC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1392));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08813E10u);
    ctx.gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 426u, 0x08AF9E48u>(ctx, &aot_mem) && ctx.pc == 0x08813E10u) goto L_08813E10;
    return;
L_08813E10:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08813E1Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 427u, 0x08AF9E50u>(ctx, &aot_mem) && ctx.pc == 0x08813E1Cu) goto L_08813E1C;
    return;
L_08813E1C:
    ctx.gpr[31] = (0x08813E24u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 199u, 0x08925754u>(ctx, &aot_mem) && ctx.pc == 0x08813E24u) goto L_08813E24;
    return;
L_08813E24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(856)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] / ctx.fpr[13];
    ctx.gpr[31] = (0x08813E54u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 284u, 0x0880AA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08813E54u) goto L_08813E54;
    return;
L_08813E54:
    ctx.gpr[31] = (0x08813E5Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 378u, 0x08AF9A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08813E5Cu) goto L_08813E5C;
    return;
L_08813E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[5] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(584)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[30]));
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[20];
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2508)));
      if (branch_taken) {
          goto L_08813EB0;
      }
      goto L_08813E94;
    }
L_08813E94:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08813EEC;
      }
      goto L_08813EB0;
    }
L_08813EB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(584)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (48460u << 16u);
      if (branch_taken) {
          goto L_08813EDC;
      }
      goto L_08813EC4;
    }
L_08813EC4:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08813EEC;
      }
      goto L_08813EDC;
    }
L_08813EDC:
    ctx.gpr[31] = (0x08813EE4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 446u, 0x08AFA05Cu>(ctx, &aot_mem) && ctx.pc == 0x08813EE4u) goto L_08813EE4;
    return;
L_08813EE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08813EF4;
      }
      goto L_08813EEC;
    }
L_08813EEC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08813EF4;
L_08813EF4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08813F04u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 284u, 0x0880AA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08813F04u) goto L_08813F04;
    return;
L_08813F04:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08813F10;
      }
      goto L_08813F0C;
    }
L_08813F0C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08813F10;
L_08813F10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(584)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08813F1C;
L_08813F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[16] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[16] = (0u < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08813F64;
      }
      goto L_08813F38;
    }
L_08813F38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(584)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08813F64u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 465u, 0x088229B4u>(ctx, &aot_mem) && ctx.pc == 0x08813F64u) goto L_08813F64;
    return;
L_08813F64:
    ctx.gpr[9] = (50297u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[9] = (ctx.gpr[9] | 49152u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2484), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08813F9Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 465u, 0x088229B4u>(ctx, &aot_mem) && ctx.pc == 0x08813F9Cu) goto L_08813F9C;
    return;
L_08813F9C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08813FD4;
      }
      goto L_08813FA4;
    }
L_08813FA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(584)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2484), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08813FD4u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 465u, 0x088229B4u>(ctx, &aot_mem) && ctx.pc == 0x08813FD4u) goto L_08813FD4;
    return;
L_08813FD4:
    ctx.gpr[31] = (0x08813FDCu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 309u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08813FDCu) goto L_08813FDC;
    return;
L_08813FDC:
    ctx.gpr[5] = (15897u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (16192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.pc = 0x08814000u; return;
}

void recomp_unit_0003(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0003_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_3(Runtime &runtime) {
    runtime.register_generated_unit(3u, 0x08810000u, 16384u, &recomp_unit_0003, &recomp_unit_0003_entry);
    runtime.register_function(0x08810000u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810034u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881003Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810088u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810168u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810188u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810194u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088101B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810204u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810248u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810264u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810270u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810278u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810280u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810298u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088102A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088102C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088102E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881030Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810324u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810340u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810358u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881037Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881038Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881039Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810410u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881042Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810444u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881045Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810474u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881049Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088104A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088104ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088104C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088104CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088104DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088104FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881051Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810520u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810528u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810544u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810558u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810560u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881056Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810584u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881058Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881059Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810604u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810620u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810628u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881062Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810748u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810788u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088107B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881080Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881083Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810850u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810854u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881086Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810888u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088108A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088108CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088108D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088108DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088108F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810918u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810928u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810948u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810998u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088109A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088109B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088109CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088109F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810A00u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810A08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810A1Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810A5Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810A64u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B1Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810BC8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C00u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C3Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C4Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C54u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810CE8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D4Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810DA8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810DBCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810DD4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810DE8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E90u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810EACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810EB4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810EC4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810EF4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F5Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F6Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F7Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F8Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F9Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810FACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810FB4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810FC8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810FD8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810FECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810FF0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881100Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811024u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881102Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811040u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811058u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811060u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881106Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811074u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881107Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811084u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881108Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881109Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811108u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811110u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811118u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811134u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881113Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881114Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811158u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881116Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881117Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811184u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881119Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811204u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811218u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811228u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881123Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811250u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811260u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811270u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811280u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811290u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881130Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811318u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881132Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811340u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811348u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811350u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811358u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811360u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811368u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811378u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881138Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811390u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811408u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881140Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811418u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811420u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811428u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811438u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881144Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811450u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881145Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881146Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811480u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881148Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811494u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088114C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088114E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088114F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881150Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811538u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881154Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881155Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881156Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881157Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881158Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088115A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088115B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088115C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088115D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088115E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881162Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811640u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811650u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881168Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811694u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088116A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088116ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088116B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088116C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088116D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088116F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088116F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811700u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811710u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811720u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811734u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811744u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881174Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881175Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881176Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811784u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881178Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811794u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811800u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811808u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881180Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811814u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811820u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811834u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811848u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881185Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881186Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811884u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811894u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088118B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088118B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088118C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088118D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088118E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088118E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881190Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811920u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811938u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811968u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811974u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811980u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088119A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088119B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088119C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088119C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088119E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088119E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A18u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A24u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A44u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A4Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A88u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A9Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811AA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811AACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811AE0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811AE8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811AF0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B0Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B50u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B88u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B98u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BC8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BD0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BD8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BE4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C00u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C2Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C40u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C50u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C74u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C7Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CD4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CDCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CE4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CF8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D00u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D0Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D50u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D54u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D78u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D90u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D98u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DD0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DD8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DE8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DF8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E00u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E50u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E6Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E8Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E94u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EA0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EC8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811ED4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811ED8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EF4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EFCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F1Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F24u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F54u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F80u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F88u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FBCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FC4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FE8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FF8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812004u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812030u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812038u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812048u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812060u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881206Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812080u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812094u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881209Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812100u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812108u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812114u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881211Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812128u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881213Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812144u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881214Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812158u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812168u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812174u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881217Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812184u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881218Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812194u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881219Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812230u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812238u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881225Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812264u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881226Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812274u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812288u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812294u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812304u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881230Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812318u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881231Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812330u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812338u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812340u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881234Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812350u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812364u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881236Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812374u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812380u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812388u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812394u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881239Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812420u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881242Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812434u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881243Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812454u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812460u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812468u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812470u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881248Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812508u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812514u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812524u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881252Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812534u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812550u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881255Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812564u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881256Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812574u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812580u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812588u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812594u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881259Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812608u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812614u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812620u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881262Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812634u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881263Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812640u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812648u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881265Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812668u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812674u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812680u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812688u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812690u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812694u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881269Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812710u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812724u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812738u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812754u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812758u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812760u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812768u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812790u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812808u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812818u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812824u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881282Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812834u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881283Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812850u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812858u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812860u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812868u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812878u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812880u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812890u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812898u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088128A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088128B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088128B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088128C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088128C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088128D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088128D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088128F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088128FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812904u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812910u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881291Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812924u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881292Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881293Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812944u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812964u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812970u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812984u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812990u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812998u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881299Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088129B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088129C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088129D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088129DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088129E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A00u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A34u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A3Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A9Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AB4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812ABCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AC4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812ACCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812ADCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AE4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AF4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AFCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B04u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B0Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B18u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B40u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B50u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B8Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B94u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B9Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812BC8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812BE4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812BF4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C04u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C24u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C34u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C54u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C8Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C98u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812CA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812CB4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812CC4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812CE0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D1Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D34u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D44u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D54u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D64u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D8Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D94u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812DA0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812DACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812DBCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812DCCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812DDCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E04u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E0Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E18u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E24u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E34u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E44u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E4Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E5Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E98u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812EA0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812EACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812EB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812EC8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812ED8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812EE0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812EF0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F00u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F3Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F80u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F90u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812FB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812FC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812FCCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812FD8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812FE8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812FF8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813000u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813010u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813020u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813048u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813074u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813084u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813090u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088130ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088130BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088130C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088130D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088130E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813100u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813108u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813114u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881311Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813128u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881312Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813138u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813148u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881314Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813154u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813164u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813170u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881317Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813188u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813190u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088131C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088131E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088131ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813204u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813210u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813218u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813230u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813244u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813250u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881325Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813268u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813274u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813280u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813310u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813328u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813330u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881333Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813348u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813354u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881335Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813364u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813374u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088133A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088133CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088133D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088133E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813444u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813450u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881345Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881346Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813478u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813484u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813490u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881349Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088134E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088134ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088134F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088134FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813508u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813510u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881351Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813560u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813598u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088135A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088135A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088135B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088135C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088135CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088135E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088135F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813600u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881360Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881361Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813628u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813630u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813644u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813650u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881366Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813694u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088136B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088136C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088136C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088136CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088136E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813704u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813710u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813720u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881372Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813744u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813758u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813760u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813764u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813784u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881379Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088137B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088137C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088137D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088137ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088137F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088137FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813818u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813828u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881383Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813848u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813854u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813860u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881386Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813880u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813890u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088138ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088138D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088138ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813908u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813918u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813924u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813930u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813940u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881394Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813950u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881396Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813974u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813980u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A04u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A1Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A40u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A74u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A7Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A8Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A98u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813AA8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813AF0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B24u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B3Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B44u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B4Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B5Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B64u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B74u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B78u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B80u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B9Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813BA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813BACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813BB4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813BC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813BC8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813BE0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813BE8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813BF4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C1Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C24u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C2Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C34u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C3Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C44u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C4Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C54u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C64u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813CA0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813CB4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813CBCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813CD0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813CFCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D18u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D2Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D6Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813DA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813DB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813DCCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813DD4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813DDCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813DE8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813DF0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813DFCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E1Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E24u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E54u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E5Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E94u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813EB0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813EC4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813EDCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813EE4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813EECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813EF4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F04u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F0Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F1Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F64u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F9Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813FA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813FD4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813FDCu, &recomp_unit_0003, "recomp_unit_0003");
}
} // namespace psprecomp
