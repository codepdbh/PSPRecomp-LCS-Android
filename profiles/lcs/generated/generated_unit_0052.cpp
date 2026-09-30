#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0052[4090] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12,
    0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0,
    0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 56, 0, 0, 0, 57, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 101, 102, 0, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 0,
    110, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 121, 0, 0, 0, 122,
    0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 128, 0,
    0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 133, 134, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 137, 0, 0, 0, 138, 139, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 143, 144, 0, 145, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 0, 147, 0, 148, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 165, 0, 0, 0, 0, 166, 0, 167, 0, 168,
    0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 174, 0, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 176, 177, 0, 178, 0, 0, 179, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0, 186,
    0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 203, 0, 204, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213,
    214, 0, 215, 0, 0, 216, 217, 0, 218, 0, 0, 219, 220, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0,
    232, 0, 0, 233, 0, 0, 234, 0, 235, 0, 236, 0, 0, 237, 238, 0, 239, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0,
    0, 0, 252, 0, 0, 0, 0, 253, 254, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 260, 0, 261, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 264, 0, 0, 265, 0, 0,
    0, 266, 0, 267, 0, 268, 269, 0, 0, 270, 0, 0, 0, 271, 0, 272, 0, 273, 0, 274, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 278, 279,
    0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 285, 0, 0,
    0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 292, 0, 293, 0, 294, 295, 0,
    296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0,
    303, 0, 0, 0, 304, 305, 0, 0, 0, 306, 0, 307, 0, 308, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 317, 0, 0, 318, 0, 319, 0, 320, 321, 0,
    322, 0, 0, 0, 323, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 328, 329, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 331, 0, 332, 333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 337, 0, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 341, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 345, 0, 346, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0,
    0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 361, 0, 362, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 371, 0, 372, 0, 373, 0, 0, 0, 0, 0, 374,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 385, 0, 0,
    0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 389, 0, 0, 390, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0,
    0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 398, 0,
    0, 399, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 404, 0,
    405, 0, 406, 0, 407, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 416,
    417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0,
    0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0,
    0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0,
    0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443,
    0, 444, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0,
    0, 0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0, 0, 0, 457, 0, 0, 458, 0, 0,
    459, 0, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467,
    0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 474, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0,
    478, 0, 0, 0, 479, 480, 0, 481, 0, 482, 0, 0, 0, 0, 0, 483, 484, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 487,
    488, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0,
    495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 500,
    0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 504, 0, 0, 0, 505, 0, 506, 0, 507, 0, 508, 0,
    0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 516, 0, 0, 517, 518,
    0, 519, 0, 0, 520, 521, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 524, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0,
    527, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 533, 0, 534, 0, 535, 0, 0, 0,
    536, 0, 0, 537, 538, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 541, 0, 542, 0, 543, 0, 0, 544, 0, 0, 545, 0, 546, 0,
    547, 0, 0, 548, 0, 0, 549, 0, 550, 0, 551, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0, 0, 0,
    0, 0, 557, 0, 0, 558, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 563, 0, 564, 0, 565, 0,
    566, 0, 0, 0, 567, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 574, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0,
    0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 581, 0, 582, 0, 0, 0, 583, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 585, 586, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 587, 0, 0, 588, 589, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 595, 0, 0, 0, 0, 596, 597, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 600, 0,
    601, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0,
    0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 609, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0,
    615, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 621, 622, 0, 623,
    0, 0, 624, 0, 0, 625, 0, 626, 0, 627, 628, 0, 0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 633, 0, 0,
    634, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 641, 0, 0, 0, 0, 642, 0,
    0, 643, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 648, 0, 0, 649, 0,
    650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 655, 0, 0, 0, 0, 656, 0, 0, 657, 0,
    658, 0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 661, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 0,
    665, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 672, 0,
    673, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0, 679, 0, 680, 681, 0, 0, 682,
    0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 691, 0, 0, 692, 0, 0,
    0, 693, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 697, 0, 0, 698, 0, 0, 0, 0, 0,
    0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 704, 0, 705,
    706, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 0, 709, 0, 710, 711, 0, 712, 0, 0, 0, 713, 0, 714, 0, 715, 0, 0,
    716, 0, 717, 0, 718, 0, 719, 0, 720, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0,
    0, 724, 0, 725, 726, 0, 0, 0, 0, 727, 728, 0, 729, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 732, 0,
    0, 733, 0, 734, 0, 735, 736, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 738, 0, 739, 0, 740, 0, 741, 0, 742, 0, 743, 0, 744,
    0, 0, 745, 0, 746, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 748, 0, 749, 0, 0, 750, 0, 0, 751, 0, 752, 0, 0, 0,
    0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 757, 0, 758, 0, 759, 0, 0,
    760, 761, 0, 762, 0, 0, 763, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 0,
    768, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 772, 0, 0, 0, 773, 0, 0, 0, 774, 775,
    0, 0, 0, 0, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0,
    0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 784, 0, 0, 0, 0, 0, 785, 0, 0, 0, 786, 0, 787, 0, 788, 0, 789, 0, 0, 0, 790,
    0, 791, 0, 0, 0, 0, 792, 0, 793, 0, 794, 0, 795, 0, 0, 0, 796, 0, 797, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0,
    799, 0, 800, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 805, 0, 0,
    0, 806, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 809,
};
void recomp_unit_0052_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088D4000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0052[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088D4000;
    case 2u: goto L_088D400C;
    case 3u: goto L_088D4028;
    case 4u: goto L_088D403C;
    case 5u: goto L_088D4044;
    case 6u: goto L_088D4058;
    case 7u: goto L_088D4060;
    case 8u: goto L_088D408C;
    case 9u: goto L_088D4094;
    case 10u: goto L_088D4128;
    case 11u: goto L_088D414C;
    case 12u: goto L_088D417C;
    case 13u: goto L_088D4188;
    case 14u: goto L_088D4198;
    case 15u: goto L_088D41C4;
    case 16u: goto L_088D41CC;
    case 17u: goto L_088D41DC;
    case 18u: goto L_088D4210;
    case 19u: goto L_088D4220;
    case 20u: goto L_088D422C;
    case 21u: goto L_088D424C;
    case 22u: goto L_088D4278;
    case 23u: goto L_088D4288;
    case 24u: goto L_088D42AC;
    case 25u: goto L_088D42B8;
    case 26u: goto L_088D42C0;
    case 27u: goto L_088D42E8;
    case 28u: goto L_088D42F4;
    case 29u: goto L_088D430C;
    case 30u: goto L_088D4330;
    case 31u: goto L_088D4338;
    case 32u: goto L_088D4344;
    case 33u: goto L_088D434C;
    case 34u: goto L_088D4384;
    case 35u: goto L_088D439C;
    case 36u: goto L_088D43B4;
    case 37u: goto L_088D43E0;
    case 38u: goto L_088D43FC;
    case 39u: goto L_088D4408;
    case 40u: goto L_088D4424;
    case 41u: goto L_088D4428;
    case 42u: goto L_088D4448;
    case 43u: goto L_088D4450;
    case 44u: goto L_088D4458;
    case 45u: goto L_088D4484;
    case 46u: goto L_088D44B0;
    case 47u: goto L_088D44C8;
    case 48u: goto L_088D44E0;
    case 49u: goto L_088D44FC;
    case 50u: goto L_088D4524;
    case 51u: goto L_088D4534;
    case 52u: goto L_088D453C;
    case 53u: goto L_088D4544;
    case 54u: goto L_088D4554;
    case 55u: goto L_088D4564;
    case 56u: goto L_088D4568;
    case 57u: goto L_088D4578;
    case 58u: goto L_088D45A4;
    case 59u: goto L_088D45B4;
    case 60u: goto L_088D45C0;
    case 61u: goto L_088D45C8;
    case 62u: goto L_088D45D0;
    case 63u: goto L_088D4618;
    case 64u: goto L_088D4628;
    case 65u: goto L_088D4688;
    case 66u: goto L_088D46C4;
    case 67u: goto L_088D46D4;
    case 68u: goto L_088D46E0;
    case 69u: goto L_088D46EC;
    case 70u: goto L_088D46F4;
    case 71u: goto L_088D4720;
    case 72u: goto L_088D472C;
    case 73u: goto L_088D4750;
    case 74u: goto L_088D4758;
    case 75u: goto L_088D4764;
    case 76u: goto L_088D4788;
    case 77u: goto L_088D4790;
    case 78u: goto L_088D47B4;
    case 79u: goto L_088D47BC;
    case 80u: goto L_088D47C4;
    case 81u: goto L_088D47CC;
    case 82u: goto L_088D47E0;
    case 83u: goto L_088D47EC;
    case 84u: goto L_088D480C;
    case 85u: goto L_088D481C;
    case 86u: goto L_088D4824;
    case 87u: goto L_088D482C;
    case 88u: goto L_088D4844;
    case 89u: goto L_088D4858;
    case 90u: goto L_088D4864;
    case 91u: goto L_088D48A4;
    case 92u: goto L_088D48AC;
    case 93u: goto L_088D48B4;
    case 94u: goto L_088D48C4;
    case 95u: goto L_088D48D4;
    case 96u: goto L_088D48E0;
    case 97u: goto L_088D48F8;
    case 98u: goto L_088D4914;
    case 99u: goto L_088D4924;
    case 100u: goto L_088D492C;
    case 101u: goto L_088D4934;
    case 102u: goto L_088D4938;
    case 103u: goto L_088D4944;
    case 104u: goto L_088D494C;
    case 105u: goto L_088D4954;
    case 106u: goto L_088D495C;
    case 107u: goto L_088D4964;
    case 108u: goto L_088D496C;
    case 109u: goto L_088D4974;
    case 110u: goto L_088D4980;
    case 111u: goto L_088D4988;
    case 112u: goto L_088D4998;
    case 113u: goto L_088D49A4;
    case 114u: goto L_088D49B0;
    case 115u: goto L_088D49B8;
    case 116u: goto L_088D49C0;
    case 117u: goto L_088D49C8;
    case 118u: goto L_088D49D4;
    case 119u: goto L_088D49DC;
    case 120u: goto L_088D49E4;
    case 121u: goto L_088D49EC;
    case 122u: goto L_088D49FC;
    case 123u: goto L_088D4A1C;
    case 124u: goto L_088D4A3C;
    case 125u: goto L_088D4A60;
    case 126u: goto L_088D4A68;
    case 127u: goto L_088D4A70;
    case 128u: goto L_088D4A78;
    case 129u: goto L_088D4A84;
    case 130u: goto L_088D4A90;
    case 131u: goto L_088D4AAC;
    case 132u: goto L_088D4AC0;
    case 133u: goto L_088D4AD0;
    case 134u: goto L_088D4AD4;
    case 135u: goto L_088D4ADC;
    case 136u: goto L_088D4AF4;
    case 137u: goto L_088D4B08;
    case 138u: goto L_088D4B18;
    case 139u: goto L_088D4B1C;
    case 140u: goto L_088D4B24;
    case 141u: goto L_088D4B3C;
    case 142u: goto L_088D4B50;
    case 143u: goto L_088D4B60;
    case 144u: goto L_088D4B64;
    case 145u: goto L_088D4B6C;
    case 146u: goto L_088D4B88;
    case 147u: goto L_088D4B98;
    case 148u: goto L_088D4BA0;
    case 149u: goto L_088D4BA4;
    case 150u: goto L_088D4BAC;
    case 151u: goto L_088D4BE4;
    case 152u: goto L_088D4BEC;
    case 153u: goto L_088D4BF4;
    case 154u: goto L_088D4C08;
    case 155u: goto L_088D4C84;
    case 156u: goto L_088D4C8C;
    case 157u: goto L_088D4C98;
    case 158u: goto L_088D4CB4;
    case 159u: goto L_088D4CFC;
    case 160u: goto L_088D4D0C;
    case 161u: goto L_088D4D1C;
    case 162u: goto L_088D4D28;
    case 163u: goto L_088D4D4C;
    case 164u: goto L_088D4D54;
    case 165u: goto L_088D4D58;
    case 166u: goto L_088D4D6C;
    case 167u: goto L_088D4D74;
    case 168u: goto L_088D4D7C;
    case 169u: goto L_088D4D84;
    case 170u: goto L_088D4D90;
    case 171u: goto L_088D4DC4;
    case 172u: goto L_088D4DE0;
    case 173u: goto L_088D4DE8;
    case 174u: goto L_088D4DF4;
    case 175u: goto L_088D4E0C;
    case 176u: goto L_088D4E20;
    case 177u: goto L_088D4E24;
    case 178u: goto L_088D4E2C;
    case 179u: goto L_088D4E38;
    case 180u: goto L_088D4E44;
    case 181u: goto L_088D4E4C;
    case 182u: goto L_088D4E54;
    case 183u: goto L_088D4E5C;
    case 184u: goto L_088D4E64;
    case 185u: goto L_088D4E6C;
    case 186u: goto L_088D4E7C;
    case 187u: goto L_088D4E84;
    case 188u: goto L_088D4E8C;
    case 189u: goto L_088D4E94;
    case 190u: goto L_088D4EB4;
    case 191u: goto L_088D4EB8;
    case 192u: goto L_088D4F00;
    case 193u: goto L_088D4F50;
    case 194u: goto L_088D4F58;
    case 195u: goto L_088D4F68;
    case 196u: goto L_088D4F70;
    case 197u: goto L_088D4F94;
    case 198u: goto L_088D4F9C;
    case 199u: goto L_088D4FA4;
    case 200u: goto L_088D4FAC;
    case 201u: goto L_088D4FB4;
    case 202u: goto L_088D4FBC;
    case 203u: goto L_088D4FC0;
    case 204u: goto L_088D4FC8;
    case 205u: goto L_088D4FCC;
    case 206u: goto L_088D5004;
    case 207u: goto L_088D501C;
    case 208u: goto L_088D5024;
    case 209u: goto L_088D5028;
    case 210u: goto L_088D5048;
    case 211u: goto L_088D5064;
    case 212u: goto L_088D5070;
    case 213u: goto L_088D507C;
    case 214u: goto L_088D5080;
    case 215u: goto L_088D5088;
    case 216u: goto L_088D5094;
    case 217u: goto L_088D5098;
    case 218u: goto L_088D50A0;
    case 219u: goto L_088D50AC;
    case 220u: goto L_088D50B0;
    case 221u: goto L_088D50B8;
    case 222u: goto L_088D50D0;
    case 223u: goto L_088D50E0;
    case 224u: goto L_088D50F0;
    case 225u: goto L_088D5110;
    case 226u: goto L_088D5118;
    case 227u: goto L_088D5128;
    case 228u: goto L_088D5130;
    case 229u: goto L_088D513C;
    case 230u: goto L_088D514C;
    case 231u: goto L_088D5174;
    case 232u: goto L_088D5180;
    case 233u: goto L_088D518C;
    case 234u: goto L_088D5198;
    case 235u: goto L_088D51A0;
    case 236u: goto L_088D51A8;
    case 237u: goto L_088D51B4;
    case 238u: goto L_088D51B8;
    case 239u: goto L_088D51C0;
    case 240u: goto L_088D51CC;
    case 241u: goto L_088D51D4;
    case 242u: goto L_088D51DC;
    case 243u: goto L_088D51E4;
    case 244u: goto L_088D51EC;
    case 245u: goto L_088D51F4;
    case 246u: goto L_088D5210;
    case 247u: goto L_088D5224;
    case 248u: goto L_088D5234;
    case 249u: goto L_088D524C;
    case 250u: goto L_088D5264;
    case 251u: goto L_088D526C;
    case 252u: goto L_088D5288;
    case 253u: goto L_088D529C;
    case 254u: goto L_088D52A0;
    case 255u: goto L_088D52B8;
    case 256u: goto L_088D52C4;
    case 257u: goto L_088D5310;
    case 258u: goto L_088D5320;
    case 259u: goto L_088D5328;
    case 260u: goto L_088D5330;
    case 261u: goto L_088D5338;
    case 262u: goto L_088D534C;
    case 263u: goto L_088D5358;
    case 264u: goto L_088D5368;
    case 265u: goto L_088D5374;
    case 266u: goto L_088D5384;
    case 267u: goto L_088D538C;
    case 268u: goto L_088D5394;
    case 269u: goto L_088D5398;
    case 270u: goto L_088D53A4;
    case 271u: goto L_088D53B4;
    case 272u: goto L_088D53BC;
    case 273u: goto L_088D53C4;
    case 274u: goto L_088D53CC;
    case 275u: goto L_088D53DC;
    case 276u: goto L_088D53E8;
    case 277u: goto L_088D53F0;
    case 278u: goto L_088D53F8;
    case 279u: goto L_088D53FC;
    case 280u: goto L_088D5404;
    case 281u: goto L_088D5420;
    case 282u: goto L_088D5438;
    case 283u: goto L_088D5460;
    case 284u: goto L_088D5468;
    case 285u: goto L_088D5474;
    case 286u: goto L_088D5484;
    case 287u: goto L_088D5498;
    case 288u: goto L_088D54A8;
    case 289u: goto L_088D54B0;
    case 290u: goto L_088D54CC;
    case 291u: goto L_088D54DC;
    case 292u: goto L_088D54E4;
    case 293u: goto L_088D54EC;
    case 294u: goto L_088D54F4;
    case 295u: goto L_088D54F8;
    case 296u: goto L_088D5500;
    case 297u: goto L_088D5514;
    case 298u: goto L_088D5528;
    case 299u: goto L_088D5534;
    case 300u: goto L_088D5550;
    case 301u: goto L_088D555C;
    case 302u: goto L_088D5578;
    case 303u: goto L_088D5580;
    case 304u: goto L_088D5590;
    case 305u: goto L_088D5594;
    case 306u: goto L_088D55A4;
    case 307u: goto L_088D55AC;
    case 308u: goto L_088D55B4;
    case 309u: goto L_088D55BC;
    case 310u: goto L_088D55C8;
    case 311u: goto L_088D55F0;
    case 312u: goto L_088D5614;
    case 313u: goto L_088D561C;
    case 314u: goto L_088D5624;
    case 315u: goto L_088D5644;
    case 316u: goto L_088D564C;
    case 317u: goto L_088D5658;
    case 318u: goto L_088D5664;
    case 319u: goto L_088D566C;
    case 320u: goto L_088D5674;
    case 321u: goto L_088D5678;
    case 322u: goto L_088D5680;
    case 323u: goto L_088D5690;
    case 324u: goto L_088D5694;
    case 325u: goto L_088D56B0;
    case 326u: goto L_088D56C0;
    case 327u: goto L_088D56CC;
    case 328u: goto L_088D56E4;
    case 329u: goto L_088D56E8;
    case 330u: goto L_088D5700;
    case 331u: goto L_088D5710;
    case 332u: goto L_088D5718;
    case 333u: goto L_088D571C;
    case 334u: goto L_088D5724;
    case 335u: goto L_088D573C;
    case 336u: goto L_088D5750;
    case 337u: goto L_088D5788;
    case 338u: goto L_088D5798;
    case 339u: goto L_088D57A4;
    case 340u: goto L_088D57B0;
    case 341u: goto L_088D57B8;
    case 342u: goto L_088D57C0;
    case 343u: goto L_088D57D4;
    case 344u: goto L_088D57F0;
    case 345u: goto L_088D5804;
    case 346u: goto L_088D580C;
    case 347u: goto L_088D5814;
    case 348u: goto L_088D581C;
    case 349u: goto L_088D583C;
    case 350u: goto L_088D5844;
    case 351u: goto L_088D5864;
    case 352u: goto L_088D5878;
    case 353u: goto L_088D5894;
    case 354u: goto L_088D58AC;
    case 355u: goto L_088D58B8;
    case 356u: goto L_088D58C4;
    case 357u: goto L_088D58DC;
    case 358u: goto L_088D591C;
    case 359u: goto L_088D5930;
    case 360u: goto L_088D593C;
    case 361u: goto L_088D594C;
    case 362u: goto L_088D5954;
    case 363u: goto L_088D595C;
    case 364u: goto L_088D5968;
    case 365u: goto L_088D5980;
    case 366u: goto L_088D5990;
    case 367u: goto L_088D59A0;
    case 368u: goto L_088D59A8;
    case 369u: goto L_088D59BC;
    case 370u: goto L_088D59C4;
    case 371u: goto L_088D59D4;
    case 372u: goto L_088D59DC;
    case 373u: goto L_088D59E4;
    case 374u: goto L_088D59FC;
    case 375u: goto L_088D5A10;
    case 376u: goto L_088D5A24;
    case 377u: goto L_088D5A38;
    case 378u: goto L_088D5A48;
    case 379u: goto L_088D5A70;
    case 380u: goto L_088D5A80;
    case 381u: goto L_088D5A98;
    case 382u: goto L_088D5AC0;
    case 383u: goto L_088D5AE4;
    case 384u: goto L_088D5AEC;
    case 385u: goto L_088D5AF4;
    case 386u: goto L_088D5B04;
    case 387u: goto L_088D5B28;
    case 388u: goto L_088D5B34;
    case 389u: goto L_088D5B3C;
    case 390u: goto L_088D5B48;
    case 391u: goto L_088D5B54;
    case 392u: goto L_088D5B60;
    case 393u: goto L_088D5B6C;
    case 394u: goto L_088D5B88;
    case 395u: goto L_088D5BC4;
    case 396u: goto L_088D5BE4;
    case 397u: goto L_088D5BEC;
    case 398u: goto L_088D5BF8;
    case 399u: goto L_088D5C04;
    case 400u: goto L_088D5C10;
    case 401u: goto L_088D5C20;
    case 402u: goto L_088D5C60;
    case 403u: goto L_088D5C70;
    case 404u: goto L_088D5C78;
    case 405u: goto L_088D5C80;
    case 406u: goto L_088D5C88;
    case 407u: goto L_088D5C90;
    case 408u: goto L_088D5C9C;
    case 409u: goto L_088D5CA4;
    case 410u: goto L_088D5CC8;
    case 411u: goto L_088D5D04;
    case 412u: goto L_088D5D18;
    case 413u: goto L_088D5D4C;
    case 414u: goto L_088D5D60;
    case 415u: goto L_088D5D6C;
    case 416u: goto L_088D5D7C;
    case 417u: goto L_088D5D80;
    case 418u: goto L_088D5DA8;
    case 419u: goto L_088D5DE4;
    case 420u: goto L_088D5DF8;
    case 421u: goto L_088D5E04;
    case 422u: goto L_088D5E1C;
    case 423u: goto L_088D5E3C;
    case 424u: goto L_088D5E44;
    case 425u: goto L_088D5E48;
    case 426u: goto L_088D5E64;
    case 427u: goto L_088D5EA4;
    case 428u: goto L_088D5EB0;
    case 429u: goto L_088D5EC0;
    case 430u: goto L_088D5EC8;
    case 431u: goto L_088D5EE8;
    case 432u: goto L_088D5EF4;
    case 433u: goto L_088D5F0C;
    case 434u: goto L_088D5F18;
    case 435u: goto L_088D5F38;
    case 436u: goto L_088D5F8C;
    case 437u: goto L_088D5FE8;
    case 438u: goto L_088D5FF0;
    case 439u: goto L_088D60E4;
    case 440u: goto L_088D60EC;
    case 441u: goto L_088D6104;
    case 442u: goto L_088D6174;
    case 443u: goto L_088D617C;
    case 444u: goto L_088D6184;
    case 445u: goto L_088D6188;
    case 446u: goto L_088D61D8;
    case 447u: goto L_088D61EC;
    case 448u: goto L_088D623C;
    case 449u: goto L_088D6240;
    case 450u: goto L_088D6278;
    case 451u: goto L_088D6298;
    case 452u: goto L_088D62A4;
    case 453u: goto L_088D62B0;
    case 454u: goto L_088D62C0;
    case 455u: goto L_088D62CC;
    case 456u: goto L_088D62D8;
    case 457u: goto L_088D62E8;
    case 458u: goto L_088D62F4;
    case 459u: goto L_088D6300;
    case 460u: goto L_088D6310;
    case 461u: goto L_088D631C;
    case 462u: goto L_088D6328;
    case 463u: goto L_088D6338;
    case 464u: goto L_088D6344;
    case 465u: goto L_088D6350;
    case 466u: goto L_088D6374;
    case 467u: goto L_088D637C;
    case 468u: goto L_088D6390;
    case 469u: goto L_088D63A4;
    case 470u: goto L_088D63B4;
    case 471u: goto L_088D640C;
    case 472u: goto L_088D6434;
    case 473u: goto L_088D643C;
    case 474u: goto L_088D6440;
    case 475u: goto L_088D6448;
    case 476u: goto L_088D6468;
    case 477u: goto L_088D6470;
    case 478u: goto L_088D6480;
    case 479u: goto L_088D6490;
    case 480u: goto L_088D6494;
    case 481u: goto L_088D649C;
    case 482u: goto L_088D64A4;
    case 483u: goto L_088D64BC;
    case 484u: goto L_088D64C0;
    case 485u: goto L_088D64C4;
    case 486u: goto L_088D64F4;
    case 487u: goto L_088D64FC;
    case 488u: goto L_088D6500;
    case 489u: goto L_088D6508;
    case 490u: goto L_088D6560;
    case 491u: goto L_088D6568;
    case 492u: goto L_088D65A4;
    case 493u: goto L_088D65DC;
    case 494u: goto L_088D65EC;
    case 495u: goto L_088D6600;
    case 496u: goto L_088D6618;
    case 497u: goto L_088D664C;
    case 498u: goto L_088D6668;
    case 499u: goto L_088D6670;
    case 500u: goto L_088D667C;
    case 501u: goto L_088D6698;
    case 502u: goto L_088D66B8;
    case 503u: goto L_088D66C8;
    case 504u: goto L_088D66D0;
    case 505u: goto L_088D66E0;
    case 506u: goto L_088D66E8;
    case 507u: goto L_088D66F0;
    case 508u: goto L_088D66F8;
    case 509u: goto L_088D6708;
    case 510u: goto L_088D6720;
    case 511u: goto L_088D6728;
    case 512u: goto L_088D6734;
    case 513u: goto L_088D673C;
    case 514u: goto L_088D6758;
    case 515u: goto L_088D6764;
    case 516u: goto L_088D676C;
    case 517u: goto L_088D6778;
    case 518u: goto L_088D677C;
    case 519u: goto L_088D6784;
    case 520u: goto L_088D6790;
    case 521u: goto L_088D6794;
    case 522u: goto L_088D679C;
    case 523u: goto L_088D67B8;
    case 524u: goto L_088D67C8;
    case 525u: goto L_088D67CC;
    case 526u: goto L_088D67E4;
    case 527u: goto L_088D6800;
    case 528u: goto L_088D6804;
    case 529u: goto L_088D681C;
    case 530u: goto L_088D6834;
    case 531u: goto L_088D6844;
    case 532u: goto L_088D6854;
    case 533u: goto L_088D6860;
    case 534u: goto L_088D6868;
    case 535u: goto L_088D6870;
    case 536u: goto L_088D6880;
    case 537u: goto L_088D688C;
    case 538u: goto L_088D6890;
    case 539u: goto L_088D68B0;
    case 540u: goto L_088D68BC;
    case 541u: goto L_088D68C8;
    case 542u: goto L_088D68D0;
    case 543u: goto L_088D68D8;
    case 544u: goto L_088D68E4;
    case 545u: goto L_088D68F0;
    case 546u: goto L_088D68F8;
    case 547u: goto L_088D6900;
    case 548u: goto L_088D690C;
    case 549u: goto L_088D6918;
    case 550u: goto L_088D6920;
    case 551u: goto L_088D6928;
    case 552u: goto L_088D692C;
    case 553u: goto L_088D6974;
    case 554u: goto L_088D69D8;
    case 555u: goto L_088D69E4;
    case 556u: goto L_088D69F0;
    case 557u: goto L_088D6A08;
    case 558u: goto L_088D6A14;
    case 559u: goto L_088D6A1C;
    case 560u: goto L_088D6A28;
    case 561u: goto L_088D6A58;
    case 562u: goto L_088D6A60;
    case 563u: goto L_088D6A68;
    case 564u: goto L_088D6A70;
    case 565u: goto L_088D6A78;
    case 566u: goto L_088D6A80;
    case 567u: goto L_088D6A90;
    case 568u: goto L_088D6A9C;
    case 569u: goto L_088D6AA4;
    case 570u: goto L_088D6B38;
    case 571u: goto L_088D6B9C;
    case 572u: goto L_088D6BA4;
    case 573u: goto L_088D6BB4;
    case 574u: goto L_088D6C20;
    case 575u: goto L_088D6C24;
    case 576u: goto L_088D6C98;
    case 577u: goto L_088D6CF0;
    case 578u: goto L_088D6D08;
    case 579u: goto L_088D6D78;
    case 580u: goto L_088D6DD0;
    case 581u: goto L_088D6DD8;
    case 582u: goto L_088D6DE0;
    case 583u: goto L_088D6DF0;
    case 584u: goto L_088D6E54;
    case 585u: goto L_088D6E60;
    case 586u: goto L_088D6E64;
    case 587u: goto L_088D6E8C;
    case 588u: goto L_088D6E98;
    case 589u: goto L_088D6E9C;
    case 590u: goto L_088D6EA4;
    case 591u: goto L_088D6EAC;
    case 592u: goto L_088D6F40;
    case 593u: goto L_088D6F98;
    case 594u: goto L_088D6FB0;
    case 595u: goto L_088D6FB4;
    case 596u: goto L_088D6FC8;
    case 597u: goto L_088D6FCC;
    case 598u: goto L_088D6FE4;
    case 599u: goto L_088D6FF0;
    case 600u: goto L_088D6FF8;
    case 601u: goto L_088D7000;
    case 602u: goto L_088D7004;
    case 603u: goto L_088D7030;
    case 604u: goto L_088D7038;
    case 605u: goto L_088D7064;
    case 606u: goto L_088D7074;
    case 607u: goto L_088D7084;
    case 608u: goto L_088D70B4;
    case 609u: goto L_088D70B8;
    case 610u: goto L_088D70DC;
    case 611u: goto L_088D70E8;
    case 612u: goto L_088D7180;
    case 613u: goto L_088D71D8;
    case 614u: goto L_088D71E8;
    case 615u: goto L_088D7200;
    case 616u: goto L_088D7210;
    case 617u: goto L_088D721C;
    case 618u: goto L_088D722C;
    case 619u: goto L_088D7244;
    case 620u: goto L_088D7260;
    case 621u: goto L_088D7270;
    case 622u: goto L_088D7274;
    case 623u: goto L_088D727C;
    case 624u: goto L_088D7288;
    case 625u: goto L_088D7294;
    case 626u: goto L_088D729C;
    case 627u: goto L_088D72A4;
    case 628u: goto L_088D72A8;
    case 629u: goto L_088D72B8;
    case 630u: goto L_088D72C0;
    case 631u: goto L_088D72D8;
    case 632u: goto L_088D72E4;
    case 633u: goto L_088D72F4;
    case 634u: goto L_088D7300;
    case 635u: goto L_088D7310;
    case 636u: goto L_088D7330;
    case 637u: goto L_088D7340;
    case 638u: goto L_088D734C;
    case 639u: goto L_088D73B0;
    case 640u: goto L_088D73DC;
    case 641u: goto L_088D73E4;
    case 642u: goto L_088D73F8;
    case 643u: goto L_088D7404;
    case 644u: goto L_088D740C;
    case 645u: goto L_088D741C;
    case 646u: goto L_088D7450;
    case 647u: goto L_088D7458;
    case 648u: goto L_088D746C;
    case 649u: goto L_088D7478;
    case 650u: goto L_088D7480;
    case 651u: goto L_088D7490;
    case 652u: goto L_088D74A0;
    case 653u: goto L_088D74C4;
    case 654u: goto L_088D74D0;
    case 655u: goto L_088D74D8;
    case 656u: goto L_088D74EC;
    case 657u: goto L_088D74F8;
    case 658u: goto L_088D7500;
    case 659u: goto L_088D7510;
    case 660u: goto L_088D7524;
    case 661u: goto L_088D7530;
    case 662u: goto L_088D7534;
    case 663u: goto L_088D7560;
    case 664u: goto L_088D756C;
    case 665u: goto L_088D7580;
    case 666u: goto L_088D7588;
    case 667u: goto L_088D7598;
    case 668u: goto L_088D75BC;
    case 669u: goto L_088D75C4;
    case 670u: goto L_088D75E8;
    case 671u: goto L_088D75F0;
    case 672u: goto L_088D75F8;
    case 673u: goto L_088D7600;
    case 674u: goto L_088D7610;
    case 675u: goto L_088D761C;
    case 676u: goto L_088D7638;
    case 677u: goto L_088D7654;
    case 678u: goto L_088D765C;
    case 679u: goto L_088D7664;
    case 680u: goto L_088D766C;
    case 681u: goto L_088D7670;
    case 682u: goto L_088D767C;
    case 683u: goto L_088D7698;
    case 684u: goto L_088D76C4;
    case 685u: goto L_088D76FC;
    case 686u: goto L_088D775C;
    case 687u: goto L_088D7790;
    case 688u: goto L_088D77AC;
    case 689u: goto L_088D77BC;
    case 690u: goto L_088D77E0;
    case 691u: goto L_088D77E8;
    case 692u: goto L_088D77F4;
    case 693u: goto L_088D7804;
    case 694u: goto L_088D7814;
    case 695u: goto L_088D7830;
    case 696u: goto L_088D7854;
    case 697u: goto L_088D785C;
    case 698u: goto L_088D7868;
    case 699u: goto L_088D788C;
    case 700u: goto L_088D78B0;
    case 701u: goto L_088D78B8;
    case 702u: goto L_088D78BC;
    case 703u: goto L_088D78D4;
    case 704u: goto L_088D78F4;
    case 705u: goto L_088D78FC;
    case 706u: goto L_088D7900;
    case 707u: goto L_088D7918;
    case 708u: goto L_088D7920;
    case 709u: goto L_088D7940;
    case 710u: goto L_088D7948;
    case 711u: goto L_088D794C;
    case 712u: goto L_088D7954;
    case 713u: goto L_088D7964;
    case 714u: goto L_088D796C;
    case 715u: goto L_088D7974;
    case 716u: goto L_088D7980;
    case 717u: goto L_088D7988;
    case 718u: goto L_088D7990;
    case 719u: goto L_088D7998;
    case 720u: goto L_088D79A0;
    case 721u: goto L_088D79C0;
    case 722u: goto L_088D79CC;
    case 723u: goto L_088D79E4;
    case 724u: goto L_088D7A04;
    case 725u: goto L_088D7A0C;
    case 726u: goto L_088D7A10;
    case 727u: goto L_088D7A24;
    case 728u: goto L_088D7A28;
    case 729u: goto L_088D7A30;
    case 730u: goto L_088D7A4C;
    case 731u: goto L_088D7A70;
    case 732u: goto L_088D7A78;
    case 733u: goto L_088D7A84;
    case 734u: goto L_088D7A8C;
    case 735u: goto L_088D7A94;
    case 736u: goto L_088D7A98;
    case 737u: goto L_088D7AAC;
    case 738u: goto L_088D7ACC;
    case 739u: goto L_088D7AD4;
    case 740u: goto L_088D7ADC;
    case 741u: goto L_088D7AE4;
    case 742u: goto L_088D7AEC;
    case 743u: goto L_088D7AF4;
    case 744u: goto L_088D7AFC;
    case 745u: goto L_088D7B08;
    case 746u: goto L_088D7B10;
    case 747u: goto L_088D7B28;
    case 748u: goto L_088D7B48;
    case 749u: goto L_088D7B50;
    case 750u: goto L_088D7B5C;
    case 751u: goto L_088D7B68;
    case 752u: goto L_088D7B70;
    case 753u: goto L_088D7B88;
    case 754u: goto L_088D7BA0;
    case 755u: goto L_088D7BA8;
    case 756u: goto L_088D7BC4;
    case 757u: goto L_088D7BE4;
    case 758u: goto L_088D7BEC;
    case 759u: goto L_088D7BF4;
    case 760u: goto L_088D7C00;
    case 761u: goto L_088D7C04;
    case 762u: goto L_088D7C0C;
    case 763u: goto L_088D7C18;
    case 764u: goto L_088D7C20;
    case 765u: goto L_088D7C44;
    case 766u: goto L_088D7C60;
    case 767u: goto L_088D7C70;
    case 768u: goto L_088D7C80;
    case 769u: goto L_088D7CA4;
    case 770u: goto L_088D7CAC;
    case 771u: goto L_088D7CC0;
    case 772u: goto L_088D7CD8;
    case 773u: goto L_088D7CE8;
    case 774u: goto L_088D7CF8;
    case 775u: goto L_088D7CFC;
    case 776u: goto L_088D7D1C;
    case 777u: goto L_088D7D24;
    case 778u: goto L_088D7D40;
    case 779u: goto L_088D7D5C;
    case 780u: goto L_088D7D84;
    case 781u: goto L_088D7DA8;
    case 782u: goto L_088D7DF8;
    case 783u: goto L_088D7E1C;
    case 784u: goto L_088D7E2C;
    case 785u: goto L_088D7E44;
    case 786u: goto L_088D7E54;
    case 787u: goto L_088D7E5C;
    case 788u: goto L_088D7E64;
    case 789u: goto L_088D7E6C;
    case 790u: goto L_088D7E7C;
    case 791u: goto L_088D7E84;
    case 792u: goto L_088D7E98;
    case 793u: goto L_088D7EA0;
    case 794u: goto L_088D7EA8;
    case 795u: goto L_088D7EB0;
    case 796u: goto L_088D7EC0;
    case 797u: goto L_088D7EC8;
    case 798u: goto L_088D7EE8;
    case 799u: goto L_088D7F00;
    case 800u: goto L_088D7F08;
    case 801u: goto L_088D7F1C;
    case 802u: goto L_088D7F38;
    case 803u: goto L_088D7F48;
    case 804u: goto L_088D7F68;
    case 805u: goto L_088D7F74;
    case 806u: goto L_088D7F84;
    case 807u: goto L_088D7FA4;
    case 808u: goto L_088D7FD8;
    case 809u: goto L_088D7FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088D4000:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D400Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13476));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 350u, 0x08A018ACu>(ctx, &aot_mem) && ctx.pc == 0x088D400Cu) goto L_088D400C;
    return;
L_088D400C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
      if (branch_taken) {
          goto L_088D4044;
      }
      goto L_088D4028;
    }
L_088D4028:
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088D403C;
    }
    goto L_088D403C;
L_088D403C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4058;
      }
      goto L_088D4044;
    }
L_088D4044:
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088D4058;
    }
    goto L_088D4058;
L_088D4058:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (4u << 16u);
      if (branch_taken) {
          goto L_088D408C;
      }
      goto L_088D4060;
    }
L_088D4060:
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D408C;
L_088D408C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4450;
      }
      goto L_088D4094;
    }
L_088D4094:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] >> 6u);
    ctx.gpr[19] = (ctx.gpr[4] & 511u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D4128u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 352u, 0x088B9F0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4128u) goto L_088D4128;
    return;
L_088D4128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[20] >> 24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[21]);
    goto L_088D414C;
L_088D414C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088D414C;
      }
      goto L_088D417C;
    }
L_088D417C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_088D4198;
    }
    goto L_088D4188;
L_088D4188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D41C4;
      }
      goto L_088D4198;
    }
L_088D4198:
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_088D41C4;
L_088D41C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4450;
      }
      goto L_088D41CC;
    }
L_088D41CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (4u << 16u);
      if (branch_taken) {
          goto L_088D424C;
      }
      goto L_088D41DC;
    }
L_088D41DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[6] + static_cast<std::uint32_t>(13504));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088D4210u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088D4210u) goto L_088D4210;
    return;
L_088D4210:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088D4220u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 555u, 0x0891713Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4220u) goto L_088D4220;
    return;
L_088D4220:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D422Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 46u, 0x089282D0u>(ctx, &aot_mem) && ctx.pc == 0x088D422Cu) goto L_088D422C;
    return;
L_088D422C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (4u << 16u);
    goto L_088D424C;
L_088D424C:
    ctx.gpr[4] = (ctx.gpr[19] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D4450;
      }
      goto L_088D4278;
    }
L_088D4278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D42B8;
      }
      goto L_088D4288;
    }
L_088D4288:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] >> 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088D42C0;
      }
      goto L_088D42AC;
    }
L_088D42AC:
    ctx.gpr[21] = (ctx.gpr[20] & 31u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088D42E8;
      }
      goto L_088D42B8;
    }
L_088D42B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D4458;
      }
      goto L_088D42C0;
    }
L_088D42C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[6] = (ctx.gpr[6] >> 29u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088D42E8;
L_088D42E8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D4330;
      }
      goto L_088D42F4;
    }
L_088D42F4:
    ctx.gpr[4] = (ctx.gpr[21] << 3u);
    ctx.gpr[23] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D430Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 75u, 0x089284A4u>(ctx, &aot_mem) && ctx.pc == 0x088D430Cu) goto L_088D430C;
    return;
L_088D430C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D42F4;
      }
      goto L_088D4330;
    }
L_088D4330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4450;
      }
      goto L_088D4338;
    }
L_088D4338:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D4344u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 142u, 0x08878B94u>(ctx, &aot_mem) && ctx.pc == 0x088D4344u) goto L_088D4344;
    return;
L_088D4344:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4450;
      }
      goto L_088D434C;
    }
L_088D434C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] >> 6u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D4384u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 130u, 0x08878A78u>(ctx, &aot_mem) && ctx.pc == 0x088D4384u) goto L_088D4384;
    return;
L_088D4384:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_088D4428;
      }
      goto L_088D439C;
    }
L_088D439C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_088D43E0;
    }
    goto L_088D43B4;
L_088D43B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D4408;
      }
      goto L_088D43E0;
    }
L_088D43E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] >> 15u);
    ctx.gpr[5] = (ctx.gpr[5] & 511u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[31] = (0x088D43FCu);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 133u, 0x08878B00u>(ctx, &aot_mem) && ctx.pc == 0x088D43FCu) goto L_088D43FC;
    return;
L_088D43FC:
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_088D4408;
L_088D4408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D439C;
      }
      goto L_088D4424;
    }
L_088D4424:
    ctx.gpr[4] = (0u | 6u);
    goto L_088D4428;
L_088D4428:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4450;
      }
      goto L_088D4448;
    }
L_088D4448:
    ctx.gpr[31] = (0x088D4450u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 102u, 0x0891C7F4u>(ctx, &aot_mem) && ctx.pc == 0x088D4450u) goto L_088D4450;
    return;
L_088D4450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 377u, 0x088D2E04u>(ctx, &aot_mem); return;
      }
      goto L_088D4458;
    }
L_088D4458:
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
L_088D4484:
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
L_088D44B0:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
L_088D44C8:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
L_088D44E0:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
L_088D44FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D453C;
      }
      goto L_088D4524;
    }
L_088D4524:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4544;
      }
      goto L_088D4534;
    }
L_088D4534:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_088D4564;
      }
      goto L_088D453C;
    }
L_088D453C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_088D4568;
      }
      goto L_088D4544;
    }
L_088D4544:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088D4554u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x088D4554u) goto L_088D4554;
    return;
L_088D4554:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_088D4564;
L_088D4564:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    goto L_088D4568;
L_088D4568:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4578:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D45A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13688));
    goto L_088D4484;
L_088D45A4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D45B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x088D45B4u) goto L_088D45B4;
    return;
L_088D45B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D45C8;
      }
      goto L_088D45C0;
    }
L_088D45C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4618;
      }
      goto L_088D45C8;
    }
L_088D45C8:
    ctx.gpr[31] = (0x088D45D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 111u, 0x08A34AF8u>(ctx, &aot_mem) && ctx.pc == 0x088D45D0u) goto L_088D45D0;
    return;
L_088D45D0:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (0u | 80u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D4618u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088D4618u) goto L_088D4618;
    return;
L_088D4618:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4628:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4688:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D46C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088D46C4u) goto L_088D46C4;
    return;
L_088D46C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
      if (branch_taken) {
          goto L_088D46E0;
      }
      goto L_088D46D4;
    }
L_088D46D4:
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D47BC;
      }
      goto L_088D46E0;
    }
L_088D46E0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D47BC;
      }
      goto L_088D46EC;
    }
L_088D46EC:
    ctx.gpr[31] = (0x088D46F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D46F4u) goto L_088D46F4;
    return;
L_088D46F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7827));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_088D4758;
      }
      goto L_088D4720;
    }
L_088D4720:
    ctx.gpr[8] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088D4758;
      }
      goto L_088D472C;
    }
L_088D472C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] | 3u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 46u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x088D4750u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4750u) goto L_088D4750;
    return;
L_088D4750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D48A4;
      }
      goto L_088D4758;
    }
L_088D4758:
    ctx.gpr[8] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088D4790;
      }
      goto L_088D4764;
    }
L_088D4764:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] | 3u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x088D4788u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4788u) goto L_088D4788;
    return;
L_088D4788:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D48A4;
      }
      goto L_088D4790;
    }
L_088D4790:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] | 3u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 51u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x088D47B4u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088D47B4u) goto L_088D47B4;
    return;
L_088D47B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D48A4;
      }
      goto L_088D47BC;
    }
L_088D47BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D48A4;
      }
      goto L_088D47C4;
    }
L_088D47C4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D48A4;
      }
      goto L_088D47CC;
    }
L_088D47CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(21410));
      if (branch_taken) {
          goto L_088D480C;
      }
      goto L_088D47E0;
    }
L_088D47E0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D480C;
      }
      goto L_088D47EC;
    }
L_088D47EC:
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-26)));
      if (branch_taken) {
          goto L_088D4858;
      }
      goto L_088D480C;
    }
L_088D480C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D482C;
      }
      goto L_088D481C;
    }
L_088D481C:
    ctx.gpr[31] = (0x088D4824u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E218u>(ctx, &aot_mem) && ctx.pc == 0x088D4824u) goto L_088D4824;
    return;
L_088D4824:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
      if (branch_taken) {
          goto L_088D4844;
      }
      goto L_088D482C;
    }
L_088D482C:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088D4858;
      }
      goto L_088D4844;
    }
L_088D4844:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088D4858;
L_088D4858:
    ctx.gpr[4] = (0u | 209u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D48A4;
      }
      goto L_088D4864;
    }
L_088D4864:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] | 3u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088D48A4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088D48A4u) goto L_088D48A4;
    return;
L_088D48A4:
    ctx.gpr[31] = (0x088D48ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D48ACu) goto L_088D48AC;
    return;
L_088D48AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D48E0;
      }
      goto L_088D48B4;
    }
L_088D48B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D48E0;
      }
      goto L_088D48C4;
    }
L_088D48C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D48E0;
      }
      goto L_088D48D4;
    }
L_088D48D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D48E0u);
    ctx.gpr[5] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088D48E0u) goto L_088D48E0;
    return;
L_088D48E0:
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
L_088D48F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D495C;
      }
      goto L_088D4914;
    }
L_088D4914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
        goto L_088D4938;
    }
    goto L_088D4924;
L_088D4924:
    ctx.gpr[31] = (0x088D492Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D492Cu) goto L_088D492C;
    return;
L_088D492C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D495C;
      }
      goto L_088D4934;
    }
L_088D4934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    goto L_088D4938;
L_088D4938:
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D495C;
      }
      goto L_088D4944;
    }
L_088D4944:
    ctx.gpr[31] = (0x088D494Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088D494Cu) goto L_088D494C;
    return;
L_088D494C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088D4964;
      }
      goto L_088D4954;
    }
L_088D4954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4988;
      }
      goto L_088D495C;
    }
L_088D495C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D49EC;
      }
      goto L_088D4964;
    }
L_088D4964:
    ctx.gpr[31] = (0x088D496Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 335u, 0x088EE37Cu>(ctx, &aot_mem) && ctx.pc == 0x088D496Cu) goto L_088D496C;
    return;
L_088D496C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4988;
      }
      goto L_088D4974;
    }
L_088D4974:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D4980u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088D52C4;
L_088D4980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D49EC;
      }
      goto L_088D4988;
    }
L_088D4988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D49C8;
      }
      goto L_088D4998;
    }
L_088D4998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D49B8;
      }
      goto L_088D49A4;
    }
L_088D49A4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088D49B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088D52C4;
L_088D49B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D49EC;
      }
      goto L_088D49B8;
    }
L_088D49B8:
    ctx.gpr[31] = (0x088D49C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088D55F0;
L_088D49C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D49EC;
      }
      goto L_088D49C8;
    }
L_088D49C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D49E4;
      }
      goto L_088D49D4;
    }
L_088D49D4:
    ctx.gpr[31] = (0x088D49DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x088D49DCu) goto L_088D49DC;
    return;
L_088D49DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D49EC;
      }
      goto L_088D49E4;
    }
L_088D49E4:
    ctx.gpr[31] = (0x088D49ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x088D49ECu) goto L_088D49EC;
    return;
L_088D49EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D49FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D4A68;
      }
      goto L_088D4A1C;
    }
L_088D4A1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088D4A3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4A3Cu) goto L_088D4A3C;
    return;
L_088D4A3C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (32u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 201u);
      if (branch_taken) {
          goto L_088D4A70;
      }
      goto L_088D4A60;
    }
L_088D4A60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D4A78;
      }
      goto L_088D4A68;
    }
L_088D4A68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4BF4;
      }
      goto L_088D4A70;
    }
L_088D4A70:
    ctx.gpr[4] = (0u | 57u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_088D4A78;
L_088D4A78:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D4A84u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D4A84u) goto L_088D4A84;
    return;
L_088D4A84:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4AD4;
      }
      goto L_088D4A90;
    }
L_088D4A90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4AD4;
      }
      goto L_088D4AAC;
    }
L_088D4AAC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 202u);
        goto L_088D4AC0;
    }
    goto L_088D4AC0;
L_088D4AC0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D4AD0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D4AD0u) goto L_088D4AD0;
    return;
L_088D4AD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D4AD4;
L_088D4AD4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4B1C;
      }
      goto L_088D4ADC;
    }
L_088D4ADC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 16384u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4B1C;
      }
      goto L_088D4AF4;
    }
L_088D4AF4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 205u);
        goto L_088D4B08;
    }
    goto L_088D4B08;
L_088D4B08:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D4B18u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D4B18u) goto L_088D4B18;
    return;
L_088D4B18:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D4B1C;
L_088D4B1C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4B64;
      }
      goto L_088D4B24;
    }
L_088D4B24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4B64;
      }
      goto L_088D4B3C;
    }
L_088D4B3C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 202u);
        goto L_088D4B50;
    }
    goto L_088D4B50;
L_088D4B50:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D4B60u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D4B60u) goto L_088D4B60;
    return;
L_088D4B60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D4B64;
L_088D4B64:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4BA4;
      }
      goto L_088D4B6C;
    }
L_088D4B6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[17] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4BA4;
      }
      goto L_088D4B88;
    }
L_088D4B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (0u | 205u);
        goto L_088D4B98;
    }
    goto L_088D4B98;
L_088D4B98:
    ctx.gpr[31] = (0x088D4BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D4BA0u) goto L_088D4BA0;
    return;
L_088D4BA0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D4BA4;
L_088D4BA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4BEC;
      }
      goto L_088D4BAC;
    }
L_088D4BAC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2190u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1548));
    ctx.gpr[31] = (0x088D4BE4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 48u, 0x088B43F4u>(ctx, &aot_mem) && ctx.pc == 0x088D4BE4u) goto L_088D4BE4;
    return;
L_088D4BE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4BF4;
      }
      goto L_088D4BEC;
    }
L_088D4BEC:
    ctx.gpr[31] = (0x088D4BF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088D48F8;
L_088D4BF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4C08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (16268u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[6] & 255u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D4C84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 140u, 0x08850DC0u>(ctx, &aot_mem) && ctx.pc == 0x088D4C84u) goto L_088D4C84;
    return;
L_088D4C84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088D4C98;
      }
      goto L_088D4C8C;
    }
L_088D4C8C:
    ctx.gpr[4] = (16332u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088D4C98;
L_088D4C98:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088D4EB4;
      }
      goto L_088D4CB4;
    }
L_088D4CB4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (16262u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.gpr[30] = (0u | 55u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 45u);
    ctx.gpr[21] = (2229u << 16u);
    goto L_088D4CFC;
L_088D4CFC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4D1C;
      }
      goto L_088D4D0C;
    }
L_088D4D0C:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
      if (branch_taken) {
          goto L_088D4D6C;
      }
      goto L_088D4D1C;
    }
L_088D4D1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(27772)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
        goto L_088D4D58;
    }
    goto L_088D4D28;
L_088D4D28:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1872)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D4D4Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 229u, 0x088A8FACu>(ctx, &aot_mem) && ctx.pc == 0x088D4D4Cu) goto L_088D4D4C;
    return;
L_088D4D4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4D6C;
      }
      goto L_088D4D54;
    }
L_088D4D54:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    goto L_088D4D58;
L_088D4D58:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1872)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    goto L_088D4D6C;
L_088D4D6C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4D7C;
      }
      goto L_088D4D74;
    }
L_088D4D74:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088D4E94;
      }
      goto L_088D4D7C;
    }
L_088D4D7C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4D90;
      }
      goto L_088D4D84;
    }
L_088D4D84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4E94;
      }
      goto L_088D4D90;
    }
L_088D4D90:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D4E94;
      }
      goto L_088D4DC4;
    }
L_088D4DC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x088D4DE0u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4DE0u) goto L_088D4DE0;
    return;
L_088D4DE0:
    ctx.gpr[31] = (0x088D4DE8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x088D4DE8u) goto L_088D4DE8;
    return;
L_088D4DE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x088D4DF4u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x088D4DF4u) goto L_088D4DF4;
    return;
L_088D4DF4:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088D4E0C;
    }
    goto L_088D4E0C;
L_088D4E0C:
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[30] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D4E24;
      }
      goto L_088D4E20;
    }
L_088D4E20:
    ctx.fpr[30] = ctx.fpr[26] - ctx.fpr[12];
    goto L_088D4E24;
L_088D4E24:
    ctx.gpr[31] = (0x088D4E2Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088D44FC;
L_088D4E2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D4E6C;
      }
      goto L_088D4E38;
    }
L_088D4E38:
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 43u);
      if (branch_taken) {
          goto L_088D4E64;
      }
      goto L_088D4E44;
    }
L_088D4E44:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 54u);
      if (branch_taken) {
          goto L_088D4E64;
      }
      goto L_088D4E4C;
    }
L_088D4E4C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D4E64;
      }
      goto L_088D4E54;
    }
L_088D4E54:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088D4E64;
      }
      goto L_088D4E5C;
    }
L_088D4E5C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088D4E6C;
      }
      goto L_088D4E64;
    }
L_088D4E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4EB4;
      }
      goto L_088D4E6C;
    }
L_088D4E6C:
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D4E94;
      }
      goto L_088D4E7C;
    }
L_088D4E7C:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088D4E8C;
      }
      goto L_088D4E84;
    }
L_088D4E84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_088D4EB8;
      }
      goto L_088D4E8C;
    }
L_088D4E8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D4EB8;
      }
      goto L_088D4E94;
    }
L_088D4E94:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D4CFC;
      }
      goto L_088D4EB4;
    }
L_088D4EB4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088D4EB8;
L_088D4EB8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D4F00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[7] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D4F50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x088D4F50u) goto L_088D4F50;
    return;
L_088D4F50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4F9C;
      }
      goto L_088D4F58;
    }
L_088D4F58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D4F9C;
      }
      goto L_088D4F68;
    }
L_088D4F68:
    ctx.gpr[31] = (0x088D4F70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x088D4F70u) goto L_088D4F70;
    return;
L_088D4F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65408u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
        goto L_088D4FA4;
    }
    goto L_088D4F94;
L_088D4F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 30u);
      if (branch_taken) {
          goto L_088D4FCC;
      }
      goto L_088D4F9C;
    }
L_088D4F9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5028;
      }
      goto L_088D4FA4;
    }
L_088D4FA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D4FC0;
      }
      goto L_088D4FAC;
    }
L_088D4FAC:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_088D4FC0;
    }
    goto L_088D4FB4;
L_088D4FB4:
    ctx.gpr[31] = (0x088D4FBCu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088D4FBCu) goto L_088D4FBC;
    return;
L_088D4FBC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_088D4FC0;
L_088D4FC0:
    ctx.gpr[31] = (0x088D4FC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D4FC8u) goto L_088D4FC8;
    return;
L_088D4FC8:
    ctx.gpr[4] = (0u | 30u);
    goto L_088D4FCC;
L_088D4FCC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1784), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(652), ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1340), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088D5024;
      }
      goto L_088D5004;
    }
L_088D5004:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D501Cu);
    ctx.gpr[6] = (0u | 158u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D501Cu) goto L_088D501C;
    return;
L_088D501C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5028;
      }
      goto L_088D5024;
    }
L_088D5024:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1780), 0u);
    goto L_088D5028;
L_088D5028:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5048:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D5064u);
    ctx.gpr[5] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D5064u) goto L_088D5064;
    return;
L_088D5064:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5080;
      }
      goto L_088D5070;
    }
L_088D5070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D507Cu);
    ctx.gpr[5] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D507Cu) goto L_088D507C;
    return;
L_088D507C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D5080;
L_088D5080:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5098;
      }
      goto L_088D5088;
    }
L_088D5088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D5094u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D5094u) goto L_088D5094;
    return;
L_088D5094:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D5098;
L_088D5098:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D50B0;
      }
      goto L_088D50A0;
    }
L_088D50A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D50ACu);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D50ACu) goto L_088D50AC;
    return;
L_088D50AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D50B0;
L_088D50B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D50D0;
      }
      goto L_088D50B8;
    }
L_088D50B8:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088D50D0;
L_088D50D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(652)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D50F0;
      }
      goto L_088D50E0;
    }
L_088D50E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1784), ctx.gpr[4]);
    goto L_088D50F0;
L_088D50F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(656), 0u);
    ctx.gpr[31] = (0x088D5110u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x088D5110u) goto L_088D5110;
    return;
L_088D5110:
    ctx.gpr[31] = (0x088D5118u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5118u) goto L_088D5118;
    return;
L_088D5118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D5130;
      }
      goto L_088D5128;
    }
L_088D5128:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D513C;
      }
      goto L_088D5130;
    }
L_088D5130:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D513Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088D513Cu) goto L_088D513C;
    return;
L_088D513C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D514C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D51A0;
      }
      goto L_088D5174;
    }
L_088D5174:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), 0u);
    ctx.gpr[31] = (0x088D5180u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5180u) goto L_088D5180;
    return;
L_088D5180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D518Cu);
    ctx.gpr[5] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D518Cu) goto L_088D518C;
    return;
L_088D518C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D51A8;
      }
      goto L_088D5198;
    }
L_088D5198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D51B8;
      }
      goto L_088D51A0;
    }
L_088D51A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D52A0;
      }
      goto L_088D51A8;
    }
L_088D51A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D51B4u);
    ctx.gpr[5] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D51B4u) goto L_088D51B4;
    return;
L_088D51B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D51B8;
L_088D51B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D51CC;
      }
      goto L_088D51C0;
    }
L_088D51C0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088D51CC;
L_088D51CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D51E4;
      }
      goto L_088D51D4;
    }
L_088D51D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_088D529C;
      }
      goto L_088D51DC;
    }
L_088D51DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D526C;
      }
      goto L_088D51E4;
    }
L_088D51E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D5234;
      }
      goto L_088D51EC;
    }
L_088D51EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D529C;
      }
      goto L_088D51F4;
    }
L_088D51F4:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088D5210u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D5210u) goto L_088D5210;
    return;
L_088D5210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D5224u);
    ctx.gpr[6] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D5224u) goto L_088D5224;
    return;
L_088D5224:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088D529C;
      }
      goto L_088D5234;
    }
L_088D5234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x088D524Cu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D524Cu) goto L_088D524C;
    return;
L_088D524C:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D5264u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D5264u) goto L_088D5264;
    return;
L_088D5264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D529C;
      }
      goto L_088D526C;
    }
L_088D526C:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088D5288u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D5288u) goto L_088D5288;
    return;
L_088D5288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D529Cu);
    ctx.gpr[6] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D529Cu) goto L_088D529C;
    return;
L_088D529C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), 0u);
    goto L_088D52A0;
L_088D52A0:
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
L_088D52B8:
    ctx.gpr[5] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(21404), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D52C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D5310u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5310u) goto L_088D5310;
    return;
L_088D5310:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5330;
      }
      goto L_088D5320;
    }
L_088D5320:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[19] = (0u | 22u);
      if (branch_taken) {
          goto L_088D5338;
      }
      goto L_088D5328;
    }
L_088D5328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5368;
      }
      goto L_088D5330;
    }
L_088D5330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D55C8;
      }
      goto L_088D5338;
    }
L_088D5338:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088D534Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x088D534Cu) goto L_088D534C;
    return;
L_088D534C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D5358u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 46u, 0x089A0358u>(ctx, &aot_mem) && ctx.pc == 0x088D5358u) goto L_088D5358;
    return;
L_088D5358:
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D5368u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x088D5368u) goto L_088D5368;
    return;
L_088D5368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088D53BC;
      }
      goto L_088D5374;
    }
L_088D5374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
        goto L_088D5398;
    }
    goto L_088D5384;
L_088D5384:
    ctx.gpr[31] = (0x088D538Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D538Cu) goto L_088D538C;
    return;
L_088D538C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D53BC;
      }
      goto L_088D5394;
    }
L_088D5394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    goto L_088D5398;
L_088D5398:
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D53BC;
      }
      goto L_088D53A4;
    }
L_088D53A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088D53C4;
      }
      goto L_088D53B4;
    }
L_088D53B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D53CC;
      }
      goto L_088D53BC;
    }
L_088D53BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D55C8;
      }
      goto L_088D53C4;
    }
L_088D53C4:
    ctx.gpr[31] = (0x088D53CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x088D53CCu) goto L_088D53CC;
    return;
L_088D53CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D5404;
      }
      goto L_088D53DC;
    }
L_088D53DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D53FC;
      }
      goto L_088D53E8;
    }
L_088D53E8:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_088D53FC;
    }
    goto L_088D53F0;
L_088D53F0:
    ctx.gpr[31] = (0x088D53F8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088D53F8u) goto L_088D53F8;
    return;
L_088D53F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_088D53FC;
L_088D53FC:
    ctx.gpr[31] = (0x088D5404u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5404u) goto L_088D5404;
    return;
L_088D5404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D5420u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5420u) goto L_088D5420;
    return;
L_088D5420:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088D5498;
      }
      goto L_088D5438;
    }
L_088D5438:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (49520u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[29] | 0u);
    goto L_088D5460;
L_088D5460:
    ctx.gpr[31] = (0x088D5468u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D5468u) goto L_088D5468;
    return;
L_088D5468:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5484;
      }
      goto L_088D5474;
    }
L_088D5474:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088D5484;
L_088D5484:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088D5460;
      }
      goto L_088D5498;
    }
L_088D5498:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
      if (branch_taken) {
          goto L_088D54EC;
      }
      goto L_088D54A8;
    }
L_088D54A8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D54EC;
      }
      goto L_088D54B0;
    }
L_088D54B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D54EC;
      }
      goto L_088D54CC;
    }
L_088D54CC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 202u);
        goto L_088D54DC;
    }
    goto L_088D54DC;
L_088D54DC:
    ctx.gpr[31] = (0x088D54E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D54E4u) goto L_088D54E4;
    return;
L_088D54E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D54F8;
      }
      goto L_088D54EC;
    }
L_088D54EC:
    ctx.gpr[31] = (0x088D54F4u);
    ctx.gpr[5] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D54F4u) goto L_088D54F4;
    return;
L_088D54F4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_088D54F8;
L_088D54F8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5514;
      }
      goto L_088D5500;
    }
L_088D5500:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D55A4;
      }
      goto L_088D5514;
    }
L_088D5514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_088D5580;
      }
      goto L_088D5528;
    }
L_088D5528:
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5580;
      }
      goto L_088D5534;
    }
L_088D5534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[18] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5580;
      }
      goto L_088D5550;
    }
L_088D5550:
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[4] = (0u | 202u);
        goto L_088D555C;
    }
    goto L_088D555C;
L_088D555C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[31] = (0x088D5578u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D5578u) goto L_088D5578;
    return;
L_088D5578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D5594;
      }
      goto L_088D5580;
    }
L_088D5580:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088D5590u);
    ctx.gpr[6] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5590u) goto L_088D5590;
    return;
L_088D5590:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_088D5594;
L_088D5594:
    ctx.gpr[4] = (16640u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D55A4;
L_088D55A4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D55C8;
      }
      goto L_088D55AC;
    }
L_088D55AC:
    ctx.gpr[31] = (0x088D55B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D55B4u) goto L_088D55B4;
    return;
L_088D55B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D55C8;
      }
      goto L_088D55BC;
    }
L_088D55BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D55C8u);
    ctx.gpr[5] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088D55C8u) goto L_088D55C8;
    return;
L_088D55C8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_088D55F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D561C;
      }
      goto L_088D5614;
    }
L_088D5614:
    ctx.gpr[31] = (0x088D561Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x088D561Cu) goto L_088D561C;
    return;
L_088D561C:
    ctx.gpr[31] = (0x088D5624u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 53u, 0x089A03F8u>(ctx, &aot_mem) && ctx.pc == 0x088D5624u) goto L_088D5624;
    return;
L_088D5624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_088D564C;
      }
      goto L_088D5644;
    }
L_088D5644:
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_088D5694;
    }
    goto L_088D564C;
L_088D564C:
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D5680;
      }
      goto L_088D5658;
    }
L_088D5658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5678;
      }
      goto L_088D5664;
    }
L_088D5664:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_088D5678;
    }
    goto L_088D566C;
L_088D566C:
    ctx.gpr[31] = (0x088D5674u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x088D5674u) goto L_088D5674;
    return;
L_088D5674:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_088D5678;
L_088D5678:
    ctx.gpr[31] = (0x088D5680u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5680u) goto L_088D5680;
    return;
L_088D5680:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[31] = (0x088D5690u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5690u) goto L_088D5690;
    return;
L_088D5690:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_088D5694;
L_088D5694:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088D56B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088D56B0u) goto L_088D56B0;
    return;
L_088D56B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088D56C0u);
    ctx.gpr[5] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D56C0u) goto L_088D56C0;
    return;
L_088D56C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
        goto L_088D56E8;
    }
    goto L_088D56CC;
L_088D56CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D571C;
      }
      goto L_088D56E4;
    }
L_088D56E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    goto L_088D56E8;
L_088D56E8:
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[17] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D571C;
      }
      goto L_088D5700;
    }
L_088D5700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (0u | 0u);
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[16] = (0u | 202u);
        goto L_088D5710;
    }
    goto L_088D5710;
L_088D5710:
    ctx.gpr[31] = (0x088D5718u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D5718u) goto L_088D5718;
    return;
L_088D5718:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088D571C;
L_088D571C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D573C;
      }
      goto L_088D5724;
    }
L_088D5724:
    ctx.gpr[5] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088D573C;
L_088D573C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5750:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D5788u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5788u) goto L_088D5788;
    return;
L_088D5788:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D57B8;
      }
      goto L_088D5798;
    }
L_088D5798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D57A4u);
    ctx.gpr[5] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D57A4u) goto L_088D57A4;
    return;
L_088D57A4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088D57D4;
      }
      goto L_088D57B0;
    }
L_088D57B0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088D57C0;
      }
      goto L_088D57B8;
    }
L_088D57B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D58C4;
      }
      goto L_088D57C0;
    }
L_088D57C0:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D5814;
      }
      goto L_088D57D4;
    }
L_088D57D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5814;
      }
      goto L_088D57F0;
    }
L_088D57F0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (0u | 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (0u | 202u);
        goto L_088D5804;
    }
    goto L_088D5804;
L_088D5804:
    ctx.gpr[31] = (0x088D580Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D580Cu) goto L_088D580C;
    return;
L_088D580C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088D5814;
L_088D5814:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_088D58C4;
      }
      goto L_088D581C;
    }
L_088D581C:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D58C4;
      }
      goto L_088D583C;
    }
L_088D583C:
    ctx.gpr[31] = (0x088D5844u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088D5844u) goto L_088D5844;
    return;
L_088D5844:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_088D5878;
    }
    goto L_088D5864;
L_088D5864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_088D5878;
L_088D5878:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088D5894u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5894u) goto L_088D5894;
    return;
L_088D5894:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
      if (branch_taken) {
          goto L_088D58B8;
      }
      goto L_088D58AC;
    }
L_088D58AC:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D58C4;
      }
      goto L_088D58B8;
    }
L_088D58B8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    goto L_088D58C4;
L_088D58C4:
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
L_088D58DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D591Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088D591Cu) goto L_088D591C;
    return;
L_088D591C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088D5954;
      }
      goto L_088D5930;
    }
L_088D5930:
    ctx.gpr[6] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D5954;
      }
      goto L_088D593C;
    }
L_088D593C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[7] = (ctx.gpr[6] & 16u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_088D595C;
      }
      goto L_088D594C;
    }
L_088D594C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5A24;
      }
      goto L_088D5954;
    }
L_088D5954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5B6C;
      }
      goto L_088D595C;
    }
L_088D595C:
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5A24;
      }
      goto L_088D5968;
    }
L_088D5968:
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D59A8;
      }
      goto L_088D5980;
    }
L_088D5980:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 202u);
        goto L_088D5990;
    }
    goto L_088D5990;
L_088D5990:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088D59A0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D59A0u) goto L_088D59A0;
    return;
L_088D59A0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    goto L_088D59A8;
L_088D59A8:
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5B34;
      }
      goto L_088D59BC;
    }
L_088D59BC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D5B34;
      }
      goto L_088D59C4;
    }
L_088D59C4:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 204u);
        goto L_088D59D4;
    }
    goto L_088D59D4;
L_088D59D4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D5B34;
      }
      goto L_088D59DC;
    }
L_088D59DC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5B34;
      }
      goto L_088D59E4;
    }
L_088D59E4:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D59FCu);
    ctx.gpr[6] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D59FCu) goto L_088D59FC;
    return;
L_088D59FC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D5A10u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088D5A10u) goto L_088D5A10;
    return;
L_088D5A10:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D5B34;
      }
      goto L_088D5A24;
    }
L_088D5A24:
    ctx.gpr[5] = (ctx.gpr[4] & 2048u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5B34;
      }
      goto L_088D5A38;
    }
L_088D5A38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5B34;
      }
      goto L_088D5A48;
    }
L_088D5A48:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (32u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (0u | 201u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 57u);
        goto L_088D5A70;
    }
    goto L_088D5A70;
L_088D5A70:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D5A80u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D5A80u) goto L_088D5A80;
    return;
L_088D5A80:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2190u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D5A98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1548));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x088D5A98u) goto L_088D5A98;
    return;
L_088D5A98:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088D5AF4;
      }
      goto L_088D5AC0;
    }
L_088D5AC0:
    ctx.gpr[4] = (15651u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088D5AE4;
    }
    goto L_088D5AE4;
L_088D5AE4:
    ctx.gpr[31] = (0x088D5AECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088D5AECu) goto L_088D5AEC;
    return;
L_088D5AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5B34;
      }
      goto L_088D5AF4;
    }
L_088D5AF4:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15651u << 16u);
      if (branch_taken) {
          goto L_088D5B34;
      }
      goto L_088D5B04;
    }
L_088D5B04:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088D5B28;
    }
    goto L_088D5B28;
L_088D5B28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D5B34u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088D5B34u) goto L_088D5B34;
    return;
L_088D5B34:
    ctx.gpr[31] = (0x088D5B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088D5B3Cu) goto L_088D5B3C;
    return;
L_088D5B3C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088D5B6C;
      }
      goto L_088D5B48;
    }
L_088D5B48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5B6C;
      }
      goto L_088D5B54;
    }
L_088D5B54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[31] = (0x088D5B60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 505u, 0x0899ED08u>(ctx, &aot_mem) && ctx.pc == 0x088D5B60u) goto L_088D5B60;
    return;
L_088D5B60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[31] = (0x088D5B6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088D52C4;
L_088D5B6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5B88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D5C10;
      }
      goto L_088D5BC4;
    }
L_088D5BC4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1753), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D5BE4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D5BE4u) goto L_088D5BE4;
    return;
L_088D5BE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5C10;
      }
      goto L_088D5BEC;
    }
L_088D5BEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5C10;
      }
      goto L_088D5BF8;
    }
L_088D5BF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[31] = (0x088D5C04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 505u, 0x0899ED08u>(ctx, &aot_mem) && ctx.pc == 0x088D5C04u) goto L_088D5C04;
    return;
L_088D5C04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[31] = (0x088D5C10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088D52C4;
L_088D5C10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5C20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(668)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088D5C90;
      }
      goto L_088D5C60;
    }
L_088D5C60:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5C88;
      }
      goto L_088D5C70;
    }
L_088D5C70:
    ctx.gpr[31] = (0x088D5C78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5C78u) goto L_088D5C78;
    return;
L_088D5C78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5CA4;
      }
      goto L_088D5C80;
    }
L_088D5C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5D60;
      }
      goto L_088D5C88;
    }
L_088D5C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5D80;
      }
      goto L_088D5C90;
    }
L_088D5C90:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088D5C9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13720));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x088D5C9Cu) goto L_088D5C9C;
    return;
L_088D5C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D5D80;
      }
      goto L_088D5CA4;
    }
L_088D5CA4:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(784));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D5CC8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 38u, 0x08AA8314u>(ctx, &aot_mem) && ctx.pc == 0x088D5CC8u) goto L_088D5CC8;
    return;
L_088D5CC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (15820u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (0u | 74u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D5D04u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088D5D04u) goto L_088D5D04;
    return;
L_088D5D04:
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_088D5D18;
L_088D5D18:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D5D4Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088D5D4Cu) goto L_088D5D4C;
    return;
L_088D5D4C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5D18;
      }
      goto L_088D5D60;
    }
L_088D5D60:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D5D7C;
      }
      goto L_088D5D6C;
    }
L_088D5D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088D5D7C;
L_088D5D7C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1826), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_088D5D80;
L_088D5D80:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D5DA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D5DE4u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5DE4u) goto L_088D5DE4;
    return;
L_088D5DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088D5DF8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x088D5DF8u) goto L_088D5DF8;
    return;
L_088D5DF8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088D5E04u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x088D5E04u) goto L_088D5E04;
    return;
L_088D5E04:
    ctx.gpr[7] = (ctx.gpr[18] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088D5E1Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 643u, 0x088B7F1Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5E1Cu) goto L_088D5E1C;
    return;
L_088D5E1C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D5E44;
      }
      goto L_088D5E3C;
    }
L_088D5E3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D5E48;
      }
      goto L_088D5E44;
    }
L_088D5E44:
    ctx.gpr[2] = (0u | 0u);
    goto L_088D5E48;
L_088D5E48:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_088D5E64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088D5EB0;
      }
      goto L_088D5EA4;
    }
L_088D5EA4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 18 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D5EC0;
      }
      goto L_088D5EB0;
    }
L_088D5EB0:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D5F18;
      }
      goto L_088D5EC0;
    }
L_088D5EC0:
    ctx.gpr[31] = (0x088D5EC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5EC8u) goto L_088D5EC8;
    return;
L_088D5EC8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(668));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088D5EE8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x088D5EE8u) goto L_088D5EE8;
    return;
L_088D5EE8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D5EF4u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x088D5EF4u) goto L_088D5EF4;
    return;
L_088D5EF4:
    ctx.gpr[7] = (ctx.gpr[16] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088D5F0Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 643u, 0x088B7F1Cu>(ctx, &aot_mem) && ctx.pc == 0x088D5F0Cu) goto L_088D5F0C;
    return;
L_088D5F0C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[2] = (0u | 1u);
    goto L_088D5F18;
L_088D5F18:
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
L_088D5F38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x088D5F8Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 297u, 0x0890DF38u>(ctx, &aot_mem) && ctx.pc == 0x088D5F8Cu) goto L_088D5F8C;
    return;
L_088D5F8C:
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[22] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088D5FE8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x088D5FE8u) goto L_088D5FE8;
    return;
L_088D5FE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D623C;
      }
      goto L_088D5FF0;
    }
L_088D5FF0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4272));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x088D60E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x088D60E4u) goto L_088D60E4;
    return;
L_088D60E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6104;
      }
      goto L_088D60EC;
    }
L_088D60EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16204u << 16u);
      if (branch_taken) {
          goto L_088D6188;
      }
      goto L_088D6104;
    }
L_088D6104:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x088D6174u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x088D6174u) goto L_088D6174;
    return;
L_088D6174:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
        goto L_088D61D8;
    }
    goto L_088D617C;
L_088D617C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D623C;
      }
      goto L_088D6184;
    }
L_088D6184:
    ctx.gpr[4] = (16204u << 16u);
    goto L_088D6188;
L_088D6188:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_088D6240;
      }
      goto L_088D61D8;
    }
L_088D61D8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16204u << 16u);
      if (branch_taken) {
          goto L_088D623C;
      }
      goto L_088D61EC;
    }
L_088D61EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_088D6240;
      }
      goto L_088D623C;
    }
L_088D623C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088D6240;
L_088D6240:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6278:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D6298u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6298u) goto L_088D6298;
    return;
L_088D6298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D62A4u);
    ctx.gpr[5] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D62A4u) goto L_088D62A4;
    return;
L_088D62A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D62C0;
      }
      goto L_088D62B0;
    }
L_088D62B0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088D62C0;
L_088D62C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D62CCu);
    ctx.gpr[5] = (0u | 202u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D62CCu) goto L_088D62CC;
    return;
L_088D62CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D62E8;
      }
      goto L_088D62D8;
    }
L_088D62D8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088D62E8;
L_088D62E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D62F4u);
    ctx.gpr[5] = (0u | 205u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D62F4u) goto L_088D62F4;
    return;
L_088D62F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6310;
      }
      goto L_088D6300;
    }
L_088D6300:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088D6310;
L_088D6310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D631Cu);
    ctx.gpr[5] = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D631Cu) goto L_088D631C;
    return;
L_088D631C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6338;
      }
      goto L_088D6328;
    }
L_088D6328:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088D6338;
L_088D6338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D6344u);
    ctx.gpr[5] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D6344u) goto L_088D6344;
    return;
L_088D6344:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6390;
      }
      goto L_088D6350;
    }
L_088D6350:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D637C;
      }
      goto L_088D6374;
    }
L_088D6374:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088D6390;
      }
      goto L_088D637C;
    }
L_088D637C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x088D6390u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088D6390u) goto L_088D6390;
    return;
L_088D6390:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D63A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D643C;
      }
      goto L_088D63B4;
    }
L_088D63B4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16332u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D643C;
      }
      goto L_088D640C;
    }
L_088D640C:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D643C;
      }
      goto L_088D6434;
    }
L_088D6434:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D6440;
      }
      goto L_088D643C;
    }
L_088D643C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088D6440;
L_088D6440:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D649C;
      }
      goto L_088D6468;
    }
L_088D6468:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_088D6470;
L_088D6470:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_088D6490;
    }
    goto L_088D6480;
L_088D6480:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088D6494;
      }
      goto L_088D6490;
    }
L_088D6490:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_088D6494;
L_088D6494:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_088D6470;
    }
    goto L_088D649C;
L_088D649C:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_088D64C0;
    }
    goto L_088D64A4;
L_088D64A4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
        goto L_088D64C4;
    }
    goto L_088D64BC;
L_088D64BC:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_088D64C0;
L_088D64C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_088D64C4;
L_088D64C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D64FC;
      }
      goto L_088D64F4;
    }
L_088D64F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D6500;
      }
      goto L_088D64FC;
    }
L_088D64FC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_088D6500;
L_088D6500:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6508:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-29196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D6568;
      }
      goto L_088D6560;
    }
L_088D6560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088D692C;
      }
      goto L_088D6568;
    }
L_088D6568:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 0u);
      if (branch_taken) {
          goto L_088D68B0;
      }
      goto L_088D65A4;
    }
L_088D65A4:
    ctx.gpr[4] = (48921u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16295u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36151u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16134u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[20] = (0u | 55u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088D65DC;
L_088D65DC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
        goto L_088D6600;
    }
    goto L_088D65EC;
L_088D65EC:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088D6618;
      }
      goto L_088D6600;
    }
L_088D6600:
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1872)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_088D6618;
L_088D6618:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D6890;
      }
      goto L_088D664C;
    }
L_088D664C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x088D6668u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6668u) goto L_088D6668;
    return;
L_088D6668:
    ctx.gpr[31] = (0x088D6670u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x088D6670u) goto L_088D6670;
    return;
L_088D6670:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x088D667Cu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x088D667Cu) goto L_088D667C;
    return;
L_088D667C:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088D6698;
    }
    goto L_088D6698;
L_088D6698:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D66C8;
      }
      goto L_088D66B8;
    }
L_088D66B8:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_088D66C8;
L_088D66C8:
    ctx.gpr[31] = (0x088D66D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088D44FC;
L_088D66D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 43u);
      if (branch_taken) {
          goto L_088D66F8;
      }
      goto L_088D66E0;
    }
L_088D66E0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 54u);
      if (branch_taken) {
          goto L_088D66F8;
      }
      goto L_088D66E8;
    }
L_088D66E8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D66F8;
      }
      goto L_088D66F0;
    }
L_088D66F0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088D679C;
      }
      goto L_088D66F8;
    }
L_088D66F8:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (16273u << 16u);
      if (branch_taken) {
          goto L_088D6890;
      }
      goto L_088D6708;
    }
L_088D6708:
    ctx.gpr[5] = (ctx.gpr[5] | 13854u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D6890;
      }
      goto L_088D6720;
    }
L_088D6720:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088D673C;
      }
      goto L_088D6728;
    }
L_088D6728:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D6890;
      }
      goto L_088D6734;
    }
L_088D6734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088D6890;
      }
      goto L_088D673C;
    }
L_088D673C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D676C;
      }
      goto L_088D6758;
    }
L_088D6758:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D6764u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_088D5DA8;
L_088D6764:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088D677C;
      }
      goto L_088D676C;
    }
L_088D676C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (0x088D6778u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 123u, 0x089808D0u>(ctx, &aot_mem) && ctx.pc == 0x088D6778u) goto L_088D6778;
    return;
L_088D6778:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_088D677C;
L_088D677C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6794;
      }
      goto L_088D6784;
    }
L_088D6784:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D6794;
      }
      goto L_088D6790;
    }
L_088D6790:
    ctx.gpr[22] = (ctx.gpr[16] | 0u);
    goto L_088D6794;
L_088D6794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6890;
      }
      goto L_088D679C;
    }
L_088D679C:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16294u << 16u);
      if (branch_taken) {
          goto L_088D67CC;
      }
      goto L_088D67B8;
    }
L_088D67B8:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D6854;
      }
      goto L_088D67C8;
    }
L_088D67C8:
    ctx.gpr[4] = (16294u << 16u);
    goto L_088D67CC;
L_088D67CC:
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16345u << 16u);
      if (branch_taken) {
          goto L_088D6804;
      }
      goto L_088D67E4;
    }
L_088D67E4:
    ctx.gpr[4] = (16245u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48651u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D6854;
      }
      goto L_088D6800;
    }
L_088D6800:
    ctx.gpr[4] = (16345u << 16u);
    goto L_088D6804;
L_088D6804:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16156u << 16u);
      if (branch_taken) {
          goto L_088D6834;
      }
      goto L_088D681C;
    }
L_088D681C:
    ctx.gpr[4] = (ctx.gpr[4] | 25003u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D6854;
      }
      goto L_088D6834;
    }
L_088D6834:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D6870;
      }
      goto L_088D6844;
    }
L_088D6844:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D6870;
      }
      goto L_088D6854;
    }
L_088D6854:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D6868;
      }
      goto L_088D6860;
    }
L_088D6860:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088D6868;
L_088D6868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088D692C;
      }
      goto L_088D6870;
    }
L_088D6870:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D6890;
      }
      goto L_088D6880;
    }
L_088D6880:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D6890;
      }
      goto L_088D688C;
    }
L_088D688C:
    ctx.gpr[30] = (ctx.gpr[16] | 0u);
    goto L_088D6890;
L_088D6890:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D65DC;
      }
      goto L_088D68B0;
    }
L_088D68B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D68D8;
      }
      goto L_088D68BC;
    }
L_088D68BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D68D0;
      }
      goto L_088D68C8;
    }
L_088D68C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    goto L_088D68D0;
L_088D68D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_088D692C;
      }
      goto L_088D68D8;
    }
L_088D68D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(69)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6900;
      }
      goto L_088D68E4;
    }
L_088D68E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D68F8;
      }
      goto L_088D68F0;
    }
L_088D68F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    goto L_088D68F8;
L_088D68F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_088D692C;
      }
      goto L_088D6900;
    }
L_088D6900:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(70)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6928;
      }
      goto L_088D690C;
    }
L_088D690C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088D6920;
      }
      goto L_088D6918;
    }
L_088D6918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    goto L_088D6920;
L_088D6920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D692C;
      }
      goto L_088D6928;
    }
L_088D6928:
    ctx.gpr[2] = (0u | 0u);
    goto L_088D692C;
L_088D692C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D6974:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-592));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[21] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[21] + static_cast<std::uint32_t>(6), ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D69D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x088D69D8u) goto L_088D69D8;
    return;
L_088D69D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6A78;
      }
      goto L_088D69E4;
    }
L_088D69E4:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6A70;
      }
      goto L_088D69F0;
    }
L_088D69F0:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[21] + static_cast<std::uint32_t>(5), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x088D6A08u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x088D6A08u) goto L_088D6A08;
    return;
L_088D6A08:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6A68;
      }
      goto L_088D6A14;
    }
L_088D6A14:
    ctx.gpr[31] = (0x088D6A1Cu);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6A1Cu) goto L_088D6A1C;
    return;
L_088D6A1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6A60;
      }
      goto L_088D6A28;
    }
L_088D6A28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[4]);
    ctx.gpr[6] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[30] = (2227u << 16u);
      if (branch_taken) {
          goto L_088D6A80;
      }
      goto L_088D6A58;
    }
L_088D6A58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
      if (branch_taken) {
          goto L_088D6E64;
      }
      goto L_088D6A60;
    }
L_088D6A60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D76C4;
      }
      goto L_088D6A68;
    }
L_088D6A68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D76C4;
      }
      goto L_088D6A70;
    }
L_088D6A70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D76C4;
      }
      goto L_088D6A78;
    }
L_088D6A78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D76C4;
      }
      goto L_088D6A80;
    }
L_088D6A80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[23]);
      if (branch_taken) {
          goto L_088D6E60;
      }
      goto L_088D6A90;
    }
L_088D6A90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[23]);
    ctx.gpr[31] = (0x088D6A9Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6A9Cu) goto L_088D6A9C;
    return;
L_088D6A9C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
        goto L_088D6E64;
    }
    goto L_088D6AA4;
L_088D6AA4:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(25));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(29));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(33));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.gpr[19] = (ctx.gpr[21] + static_cast<std::uint32_t>(13));
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(17));
    ctx.gpr[17] = (ctx.gpr[21] + static_cast<std::uint32_t>(21));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088D6BA4;
      }
      goto L_088D6B38;
    }
L_088D6B38:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21752)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21756)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088D6B9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x088D6B9Cu) goto L_088D6B9C;
    return;
L_088D6B9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[21]);
      if (branch_taken) {
          goto L_088D6C24;
      }
      goto L_088D6BA4;
    }
L_088D6BA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.gpr[5] = (0u | 10u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[21]);
        goto L_088D6C24;
    }
    goto L_088D6BB4;
L_088D6BB4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21752)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21756)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088D6C20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x088D6C20u) goto L_088D6C20;
    return;
L_088D6C20:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[21]);
    goto L_088D6C24;
L_088D6C24:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[23]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D6C98u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088D6C98u) goto L_088D6C98;
    return;
L_088D6C98:
    ctx.gpr[22] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[22]));
    ctx.gpr[22] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.gpr[30] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[30]));
    ctx.gpr[30] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.gpr[20] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[20]));
    ctx.gpr[20] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D6CF0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088D6CF0u) goto L_088D6CF0;
    return;
L_088D6CF0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
      if (branch_taken) {
          goto L_088D6DD8;
      }
      goto L_088D6D08;
    }
L_088D6D08:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[30]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D6D78u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088D6D78u) goto L_088D6D78;
    return;
L_088D6D78:
    ctx.gpr[30] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[30]));
    ctx.gpr[30] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[30]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.gpr[23] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[23]));
    ctx.gpr[23] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[23]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.gpr[20] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[20]));
    ctx.gpr[20] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D6DD0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088D6DD0u) goto L_088D6DD0;
    return;
L_088D6DD0:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    goto L_088D6DD8;
L_088D6DD8:
    ctx.gpr[31] = (0x088D6DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088D6DE0u) goto L_088D6DE0;
    return;
L_088D6DE0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6E54;
      }
      goto L_088D6DF0;
    }
L_088D6DF0:
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.gpr[4] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (0u | 74u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D6E54u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088D6E54u) goto L_088D6E54;
    return;
L_088D6E54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[21]);
      if (branch_taken) {
          goto L_088D6FB4;
      }
      goto L_088D6E60;
    }
L_088D6E60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    goto L_088D6E64;
L_088D6E64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[22]);
        goto L_088D6E9C;
    }
    goto L_088D6E8C;
L_088D6E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[22]);
      if (branch_taken) {
          goto L_088D6FB4;
      }
      goto L_088D6E98;
    }
L_088D6E98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[22]);
    goto L_088D6E9C;
L_088D6E9C:
    ctx.gpr[31] = (0x088D6EA4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6EA4u) goto L_088D6EA4;
    return;
L_088D6EA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D6FB4;
      }
      goto L_088D6EAC;
    }
L_088D6EAC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(25));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(29));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(33));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(13));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(17));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(21));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    goto L_088D6F40;
L_088D6F40:
    ctx.gpr[18] = (rt.memory().aot_load_word_left(ctx.gpr[22] + static_cast<std::uint32_t>(3), ctx.gpr[18]));
    ctx.gpr[18] = (rt.memory().aot_load_word_right(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[18]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[17] = (rt.memory().aot_load_word_left(ctx.gpr[21] + static_cast<std::uint32_t>(3), ctx.gpr[17]));
    ctx.gpr[17] = (rt.memory().aot_load_word_right(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[17]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[16] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[16]));
    ctx.gpr[16] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[16]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D6F98u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088D6F98u) goto L_088D6F98;
    return;
L_088D6F98:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D6F40;
      }
      goto L_088D6FB0;
    }
L_088D6FB0:
    ctx.gpr[30] = (2227u << 16u);
    goto L_088D6FB4;
L_088D6FB4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088D6FCC;
      }
      goto L_088D6FC8;
    }
L_088D6FC8:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_088D6FCC;
L_088D6FCC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x088D6FE4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 319u, 0x0889942Cu>(ctx, &aot_mem) && ctx.pc == 0x088D6FE4u) goto L_088D6FE4;
    return;
L_088D6FE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
        goto L_088D7004;
    }
    goto L_088D6FF0;
L_088D6FF0:
    ctx.gpr[31] = (0x088D6FF8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D6FF8u) goto L_088D6FF8;
    return;
L_088D6FF8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
        goto L_088D7038;
    }
    goto L_088D7000;
L_088D7000:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    goto L_088D7004;
L_088D7004:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D7030u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 674u, 0x088DAF3Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7030u) goto L_088D7030;
    return;
L_088D7030:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7064;
      }
      goto L_088D7038;
    }
L_088D7038:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D7064u);
    ctx.gpr[8] = (0u | 101u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 674u, 0x088DAF3Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7064u) goto L_088D7064;
    return;
L_088D7064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[17] = (0u | 54u);
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
        goto L_088D70B8;
    }
    goto L_088D7074;
L_088D7074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
        goto L_088D70B8;
    }
    goto L_088D7084;
L_088D7084:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(7), ctx.gpr[7]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(10), ctx.gpr[7]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(10)));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088D70B4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x088D70B4u) goto L_088D70B4;
    return;
L_088D70B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    goto L_088D70B8;
L_088D70B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7200;
      }
      goto L_088D70DC;
    }
L_088D70DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088D7200;
      }
      goto L_088D70E8;
    }
L_088D70E8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(516), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(25));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(29));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(33));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(13));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(17));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(21));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    goto L_088D7180;
L_088D7180:
    ctx.gpr[18] = (rt.memory().aot_load_word_left(ctx.gpr[22] + static_cast<std::uint32_t>(3), ctx.gpr[18]));
    ctx.gpr[18] = (rt.memory().aot_load_word_right(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[18]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[17] = (rt.memory().aot_load_word_left(ctx.gpr[21] + static_cast<std::uint32_t>(3), ctx.gpr[17]));
    ctx.gpr[17] = (rt.memory().aot_load_word_right(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[17]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[16] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(3), ctx.gpr[16]));
    ctx.gpr[16] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[16]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088D71D8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088D71D8u) goto L_088D71D8;
    return;
L_088D71D8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7180;
      }
      goto L_088D71E8;
    }
L_088D71E8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[17] = (0u | 54u);
    ctx.gpr[18] = (0u | 1u);
    goto L_088D7200;
L_088D7200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[22] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088D72F4;
      }
      goto L_088D7210;
    }
L_088D7210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088D72F4;
      }
      goto L_088D721C;
    }
L_088D721C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D72F4;
      }
      goto L_088D722C;
    }
L_088D722C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D72F4;
      }
      goto L_088D7244;
    }
L_088D7244:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
        goto L_088D7274;
    }
    goto L_088D7260;
L_088D7260:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D72C0;
      }
      goto L_088D7270;
    }
L_088D7270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    goto L_088D7274;
L_088D7274:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1380)));
        goto L_088D72A8;
    }
    goto L_088D727C;
L_088D727C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1380)));
        goto L_088D72A8;
    }
    goto L_088D7288;
L_088D7288:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1380)));
        goto L_088D72A8;
    }
    goto L_088D7294;
L_088D7294:
    ctx.gpr[31] = (0x088D729Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D729Cu) goto L_088D729C;
    return;
L_088D729C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D72C0;
      }
      goto L_088D72A4;
    }
L_088D72A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1380)));
    goto L_088D72A8;
L_088D72A8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D72C0;
      }
      goto L_088D72B8;
    }
L_088D72B8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D72F4;
      }
      goto L_088D72C0;
    }
L_088D72C0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(10)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088D72D8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x088D72D8u) goto L_088D72D8;
    return;
L_088D72D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088D72F4;
      }
      goto L_088D72E4;
    }
L_088D72E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088D72F4;
L_088D72F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088D7310;
      }
      goto L_088D7300;
    }
L_088D7300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7560;
      }
      goto L_088D7310;
    }
L_088D7310:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21764)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21760)));
      if (branch_taken) {
          goto L_088D734C;
      }
      goto L_088D7330;
    }
L_088D7330:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[31] = (0x088D7340u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x088D7340u) goto L_088D7340;
    return;
L_088D7340:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088D734C;
L_088D734C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D740C;
      }
      goto L_088D73B0;
    }
L_088D73B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[5] = (15523u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088D73DC;
    }
    goto L_088D73DC;
L_088D73DC:
    ctx.gpr[31] = (0x088D73E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088D73E4u) goto L_088D73E4;
    return;
L_088D73E4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088D73F8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x088D73F8u) goto L_088D73F8;
    return;
L_088D73F8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088D7404u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x088D7404u) goto L_088D7404;
    return;
L_088D7404:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088D7534;
      }
      goto L_088D740C;
    }
L_088D740C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D7480;
      }
      goto L_088D741C;
    }
L_088D741C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[5] = (16153u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088D7450;
    }
    goto L_088D7450;
L_088D7450:
    ctx.gpr[31] = (0x088D7458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088D7458u) goto L_088D7458;
    return;
L_088D7458:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088D746Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x088D746Cu) goto L_088D746C;
    return;
L_088D746C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088D7478u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x088D7478u) goto L_088D7478;
    return;
L_088D7478:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088D7534;
      }
      goto L_088D7480;
    }
L_088D7480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D7500;
      }
      goto L_088D7490;
    }
L_088D7490:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7500;
      }
      goto L_088D74A0;
    }
L_088D74A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[5] = (16736u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088D74D0;
      }
      goto L_088D74C4;
    }
L_088D74C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_088D74D0;
L_088D74D0:
    ctx.gpr[31] = (0x088D74D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088D74D8u) goto L_088D74D8;
    return;
L_088D74D8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088D74ECu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x088D74ECu) goto L_088D74EC;
    return;
L_088D74EC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088D74F8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x088D74F8u) goto L_088D74F8;
    return;
L_088D74F8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088D7534;
      }
      goto L_088D7500;
    }
L_088D7500:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088D7510u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088D7510u) goto L_088D7510;
    return;
L_088D7510:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088D7524u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x088D7524u) goto L_088D7524;
    return;
L_088D7524:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088D7530u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x088D7530u) goto L_088D7530;
    return;
L_088D7530:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088D7534;
L_088D7534:
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (0x088D7560u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x088D7560u) goto L_088D7560;
    return;
L_088D7560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
      if (branch_taken) {
          goto L_088D76C4;
      }
      goto L_088D756C;
    }
L_088D756C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D75F0;
      }
      goto L_088D7580;
    }
L_088D7580:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D75F0;
      }
      goto L_088D7588;
    }
L_088D7588:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
      if (branch_taken) {
          goto L_088D75C4;
      }
      goto L_088D7598;
    }
L_088D7598:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] | 3u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088D75BCu);
    ctx.gpr[6] = (0u | 50u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088D75BCu) goto L_088D75BC;
    return;
L_088D75BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D76C4;
      }
      goto L_088D75C4;
    }
L_088D75C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] | 3u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088D75E8u);
    ctx.gpr[6] = (0u | 51u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088D75E8u) goto L_088D75E8;
    return;
L_088D75E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D76C4;
      }
      goto L_088D75F0;
    }
L_088D75F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 13 ? 1u : 0u);
      if (branch_taken) {
          goto L_088D76C4;
      }
      goto L_088D75F8;
    }
L_088D75F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D76C4;
      }
      goto L_088D7600;
    }
L_088D7600:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21410));
      if (branch_taken) {
          goto L_088D7638;
      }
      goto L_088D7610;
    }
L_088D7610:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7638;
      }
      goto L_088D761C;
    }
L_088D761C:
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-86)));
      if (branch_taken) {
          goto L_088D7670;
      }
      goto L_088D7638;
    }
L_088D7638:
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[7] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D7664;
      }
      goto L_088D7654;
    }
L_088D7654:
    ctx.gpr[31] = (0x088D765Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E218u>(ctx, &aot_mem) && ctx.pc == 0x088D765Cu) goto L_088D765C;
    return;
L_088D765C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D766C;
      }
      goto L_088D7664;
    }
L_088D7664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-52)));
      if (branch_taken) {
          goto L_088D7670;
      }
      goto L_088D766C;
    }
L_088D766C:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-60)));
    goto L_088D7670;
L_088D7670:
    ctx.gpr[4] = (0u | 209u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D76C4;
      }
      goto L_088D767C;
    }
L_088D767C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x088D7698u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 99u, 0x08864748u>(ctx, &aot_mem) && ctx.pc == 0x088D7698u) goto L_088D7698;
    return;
L_088D7698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | 3u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088D76C4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088D76C4u) goto L_088D76C4;
    return;
L_088D76C4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088D76FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[31]);
    ctx.gpr[31] = (0x088D775Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088D775Cu) goto L_088D775C;
    return;
L_088D775C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (ctx.gpr[4] & 4u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[16] = (0u < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088D7804;
      }
      goto L_088D7790;
    }
L_088D7790:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D78BC;
      }
      goto L_088D77AC;
    }
L_088D77AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D78BC;
      }
      goto L_088D77BC;
    }
L_088D77BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (0u | 202u);
        goto L_088D77E0;
    }
    goto L_088D77E0;
L_088D77E0:
    ctx.gpr[31] = (0x088D77E8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D77E8u) goto L_088D77E8;
    return;
L_088D77E8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D78BC;
      }
      goto L_088D77F4;
    }
L_088D77F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_088D78BC;
      }
      goto L_088D7804;
    }
L_088D7804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D788C;
      }
      goto L_088D7814;
    }
L_088D7814:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D788C;
      }
      goto L_088D7830;
    }
L_088D7830:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (0u | 205u);
        goto L_088D7854;
    }
    goto L_088D7854;
L_088D7854:
    ctx.gpr[31] = (0x088D785Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D785Cu) goto L_088D785C;
    return;
L_088D785C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (16059u << 16u);
      if (branch_taken) {
          goto L_088D78BC;
      }
      goto L_088D7868;
    }
L_088D7868:
    ctx.gpr[4] = (ctx.gpr[4] | 48060u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16162u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8738u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16110u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 61167u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088D78BC;
      }
      goto L_088D788C;
    }
L_088D788C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (32u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (0u | 201u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (0u | 57u);
        goto L_088D78B0;
    }
    goto L_088D78B0;
L_088D78B0:
    ctx.gpr[31] = (0x088D78B8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D78B8u) goto L_088D78B8;
    return;
L_088D78B8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_088D78BC;
L_088D78BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7900;
      }
      goto L_088D78D4;
    }
L_088D78D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] & 32768u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (0u | 203u);
        goto L_088D78F4;
    }
    goto L_088D78F4;
L_088D78F4:
    ctx.gpr[31] = (0x088D78FCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D78FCu) goto L_088D78FC;
    return;
L_088D78FC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    goto L_088D7900;
L_088D7900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D794C;
      }
      goto L_088D7918;
    }
L_088D7918:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D794C;
      }
      goto L_088D7920;
    }
L_088D7920:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] & 32768u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (0u | 204u);
        goto L_088D7940;
    }
    goto L_088D7940;
L_088D7940:
    ctx.gpr[31] = (0x088D7948u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D7948u) goto L_088D7948;
    return;
L_088D7948:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    goto L_088D794C;
L_088D794C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7998;
      }
      goto L_088D7954;
    }
L_088D7954:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7998;
      }
      goto L_088D7964;
    }
L_088D7964:
    ctx.gpr[31] = (0x088D796Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D796Cu) goto L_088D796C;
    return;
L_088D796C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7988;
      }
      goto L_088D7974;
    }
L_088D7974:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2964)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7988;
      }
      goto L_088D7980;
    }
L_088D7980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 223u, 0x088D911Cu>(ctx, &aot_mem); return;
      }
      goto L_088D7988;
    }
L_088D7988:
    ctx.gpr[31] = (0x088D7990u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_088D48F8;
L_088D7990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 223u, 0x088D911Cu>(ctx, &aot_mem); return;
      }
      goto L_088D7998;
    }
L_088D7998:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_088D79CC;
      }
      goto L_088D79A0;
    }
L_088D79A0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088D79CC;
      }
      goto L_088D79C0;
    }
L_088D79C0:
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D79CC;
L_088D79CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7A10;
      }
      goto L_088D79E4;
    }
L_088D79E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] & 1024u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (0u | 203u);
        goto L_088D7A04;
    }
    goto L_088D7A04;
L_088D7A04:
    ctx.gpr[31] = (0x088D7A0Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D7A0Cu) goto L_088D7A0C;
    return;
L_088D7A0C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088D7A10;
L_088D7A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7A28;
      }
      goto L_088D7A24;
    }
L_088D7A24:
    ctx.gpr[16] = (0u | 1u);
    goto L_088D7A28;
L_088D7A28:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088D7B08;
      }
      goto L_088D7A30;
    }
L_088D7A30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B08;
      }
      goto L_088D7A4C;
    }
L_088D7A4C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (0u | 203u);
        goto L_088D7A70;
    }
    goto L_088D7A70;
L_088D7A70:
    ctx.gpr[31] = (0x088D7A78u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D7A78u) goto L_088D7A78;
    return;
L_088D7A78:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B08;
      }
      goto L_088D7A84;
    }
L_088D7A84:
    ctx.gpr[31] = (0x088D7A8Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D7A8Cu) goto L_088D7A8C;
    return;
L_088D7A8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7A98;
      }
      goto L_088D7A94;
    }
L_088D7A94:
    ctx.gpr[17] = (0u | 1u);
    goto L_088D7A98;
L_088D7A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (15948u << 16u);
      if (branch_taken) {
          goto L_088D7AFC;
      }
      goto L_088D7AAC;
    }
L_088D7AAC:
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088D7AEC;
      }
      goto L_088D7ACC;
    }
L_088D7ACC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088D7AF4;
      }
      goto L_088D7AD4;
    }
L_088D7AD4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088D7AF4;
      }
      goto L_088D7ADC;
    }
L_088D7ADC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088D7AFC;
      }
      goto L_088D7AE4;
    }
L_088D7AE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7AFC;
      }
      goto L_088D7AEC;
    }
L_088D7AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7AFC;
      }
      goto L_088D7AF4;
    }
L_088D7AF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7AFC;
      }
      goto L_088D7AFC;
    }
L_088D7AFC:
    ctx.gpr[4] = (17095u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088D7B08;
L_088D7B08:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B68;
      }
      goto L_088D7B10;
    }
L_088D7B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B68;
      }
      goto L_088D7B28;
    }
L_088D7B28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (0u | 202u);
        goto L_088D7B48;
    }
    goto L_088D7B48;
L_088D7B48:
    ctx.gpr[31] = (0x088D7B50u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D7B50u) goto L_088D7B50;
    return;
L_088D7B50:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7B68;
      }
      goto L_088D7B5C;
    }
L_088D7B5C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    goto L_088D7B68;
L_088D7B68:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7C18;
      }
      goto L_088D7B70;
    }
L_088D7B70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088D7BA0;
      }
      goto L_088D7B88;
    }
L_088D7B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_088D7BA0;
L_088D7BA0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7BF4;
      }
      goto L_088D7BA8;
    }
L_088D7BA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (0u | 202u);
      if (branch_taken) {
          goto L_088D7BE4;
      }
      goto L_088D7BC4;
    }
L_088D7BC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (0u | 205u);
        goto L_088D7BE4;
    }
    goto L_088D7BE4;
L_088D7BE4:
    ctx.gpr[31] = (0x088D7BECu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D7BECu) goto L_088D7BEC;
    return;
L_088D7BEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088D7C04;
      }
      goto L_088D7BF4;
    }
L_088D7BF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088D7C00u);
    ctx.gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088D7C00u) goto L_088D7C00;
    return;
L_088D7C00:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_088D7C04;
L_088D7C04:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7C18;
      }
      goto L_088D7C0C;
    }
L_088D7C0C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    goto L_088D7C18;
L_088D7C18:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 175u, 0x088D8DD4u>(ctx, &aot_mem); return;
      }
      goto L_088D7C20;
    }
L_088D7C20:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 11u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[30] = (0u | 15u);
      if (branch_taken) {
          goto L_088D7CF8;
      }
      goto L_088D7C44;
    }
L_088D7C44:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D7CFC;
    }
    goto L_088D7C60;
L_088D7C60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088D7CAC;
      }
      goto L_088D7C70;
    }
L_088D7C70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088D7CC0;
      }
      goto L_088D7C80;
    }
L_088D7C80:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[8] = (4u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (0u | 205u);
        goto L_088D7CA4;
    }
    goto L_088D7CA4;
L_088D7CA4:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088D7CC0;
      }
      goto L_088D7CAC;
    }
L_088D7CAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(828)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(828), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D7CF8;
      }
      goto L_088D7CC0;
    }
L_088D7CC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7CE8;
      }
      goto L_088D7CD8;
    }
L_088D7CD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(828)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(828), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D7CF8;
      }
      goto L_088D7CE8;
    }
L_088D7CE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(828)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(828), ctx.gpr[5]);
    goto L_088D7CF8;
L_088D7CF8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    goto L_088D7CFC;
L_088D7CFC:
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D7EC8;
    }
    goto L_088D7D1C;
L_088D7D1C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (16128u << 16u);
      if (branch_taken) {
          goto L_088D7D40;
      }
      goto L_088D7D24;
    }
L_088D7D24:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D7EC8;
    }
    goto L_088D7D40;
L_088D7D40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
        goto L_088D7EC8;
    }
    goto L_088D7D5C;
L_088D7D5C:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 202u);
    ctx.gpr[17] = (0u | 4u);
    ctx.gpr[16] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7827));
      if (branch_taken) {
          goto L_088D7DA8;
      }
      goto L_088D7D84;
    }
L_088D7D84:
    ctx.gpr[5] = (16179u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D7DA8;
L_088D7DA8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088D7DF8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 186u, 0x088550F0u>(ctx, &aot_mem) && ctx.pc == 0x088D7DF8u) goto L_088D7DF8;
    return;
L_088D7DF8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088D7E84;
      }
      goto L_088D7E1C;
    }
L_088D7E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(300)));
    ctx.gpr[5] = (16448u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088D7E44;
      }
      goto L_088D7E2C;
    }
L_088D7E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_088D7E44;
L_088D7E44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D7E54u);
    ctx.gpr[6] = (0u | 54u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7E54u) goto L_088D7E54;
    return;
L_088D7E54:
    ctx.gpr[31] = (0x088D7E5Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D7E5Cu) goto L_088D7E5C;
    return;
L_088D7E5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7E7C;
      }
      goto L_088D7E64;
    }
L_088D7E64:
    ctx.gpr[31] = (0x088D7E6Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088D7E6Cu) goto L_088D7E6C;
    return;
L_088D7E6C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 240u);
    ctx.gpr[31] = (0x088D7E7Cu);
    ctx.gpr[6] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 645u, 0x08A96C48u>(ctx, &aot_mem) && ctx.pc == 0x088D7E7Cu) goto L_088D7E7C;
    return;
L_088D7E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7EC0;
      }
      goto L_088D7E84;
    }
L_088D7E84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088D7E98u);
    ctx.gpr[6] = (0u | 53u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7E98u) goto L_088D7E98;
    return;
L_088D7E98:
    ctx.gpr[31] = (0x088D7EA0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088D7EA0u) goto L_088D7EA0;
    return;
L_088D7EA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088D7EC0;
      }
      goto L_088D7EA8;
    }
L_088D7EA8:
    ctx.gpr[31] = (0x088D7EB0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088D7EB0u) goto L_088D7EB0;
    return;
L_088D7EB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 240u);
    ctx.gpr[31] = (0x088D7EC0u);
    ctx.gpr[6] = (0u | 90u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 645u, 0x08A96C48u>(ctx, &aot_mem) && ctx.pc == 0x088D7EC0u) goto L_088D7EC0;
    return;
L_088D7EC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 53u, 0x088D83ACu>(ctx, &aot_mem); return;
      }
      goto L_088D7EC8;
    }
L_088D7EC8:
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D7F08;
      }
      goto L_088D7EE8;
    }
L_088D7EE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 52u);
    ctx.gpr[31] = (0x088D7F00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088D7F00u) goto L_088D7F00;
    return;
L_088D7F00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 53u, 0x088D83ACu>(ctx, &aot_mem); return;
      }
      goto L_088D7F08;
    }
L_088D7F08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 51u, 0x088D838Cu>(ctx, &aot_mem); return;
      }
      goto L_088D7F1C;
    }
L_088D7F1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 51u, 0x088D838Cu>(ctx, &aot_mem); return;
      }
      goto L_088D7F38;
    }
L_088D7F38:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 51u, 0x088D838Cu>(ctx, &aot_mem); return;
      }
      goto L_088D7F48;
    }
L_088D7F48:
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[22] = (0u | 4u);
      if (branch_taken) {
          goto L_088D7F74;
      }
      goto L_088D7F68;
    }
L_088D7F68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088D7FD8;
      }
      goto L_088D7F74;
    }
L_088D7F74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 202u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16179u << 16u);
      if (branch_taken) {
          goto L_088D7FA4;
      }
      goto L_088D7F84;
    }
L_088D7F84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088D7FA4;
L_088D7FA4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 11u, 0x088D8088u>(ctx, &aot_mem); return;
      }
      goto L_088D7FD8;
    }
L_088D7FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 2u, 0x088D8018u>(ctx, &aot_mem); return;
      }
      goto L_088D7FE4;
    }
L_088D7FE4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(48);
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
    ctx.pc = 0x088D8000u; return;
}

void recomp_unit_0052(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0052_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_52(Runtime &runtime) {
    runtime.register_generated_unit(52u, 0x088D4000u, 16384u, &recomp_unit_0052, &recomp_unit_0052_entry);
    runtime.register_function(0x088D4000u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D400Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4028u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D403Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4044u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4058u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4060u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D408Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4094u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4128u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D414Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D417Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4188u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4198u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D41DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4210u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4220u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D422Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D424Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4278u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4288u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D42F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D430Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4330u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4338u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4344u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D434Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4384u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D439Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D43FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4408u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4424u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4428u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4448u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4450u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4458u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4484u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D44FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4524u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4534u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D453Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4544u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4554u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4564u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4568u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4578u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D45D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4618u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4628u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4688u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D46C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D46D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D46E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D46ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D46F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4720u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D472Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4750u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4758u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4764u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4788u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4790u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D47B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D47BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D47C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D47CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D47E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D47ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D480Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D481Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4824u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D482Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4844u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4858u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4864u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D48F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4914u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4924u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D492Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4934u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4938u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4944u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D494Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4954u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D495Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4964u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D496Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4974u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4980u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4988u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4998u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D49FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A1Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A3Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A78u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4A90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AD4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4ADCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4AF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B1Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B3Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4B98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4BF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4C98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4CFCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D1Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D4Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D74u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4D90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DC4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DE0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4DF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E2Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E44u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E4Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4E94u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4EB8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F94u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4F9Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FBCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D4FCCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5004u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D501Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5024u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5028u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5048u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5064u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5070u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D507Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5080u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5088u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5094u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5098u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D50F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5110u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5118u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5128u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5130u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D513Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D514Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5174u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5180u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D518Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5198u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D51F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5210u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5224u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5234u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D524Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5264u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D526Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5288u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D529Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D52A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D52B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D52C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5310u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5320u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5328u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5330u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5338u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D534Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5358u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5368u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5374u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5384u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D538Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5394u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5398u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D53FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5404u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5420u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5438u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5460u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5468u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5474u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5484u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5498u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D54F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5500u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5514u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5528u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5534u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5550u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D555Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5578u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5580u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5590u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5594u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D55F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5614u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D561Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5624u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5644u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D564Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5658u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5664u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D566Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5674u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5678u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5680u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5690u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5694u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D56E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5700u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5710u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5718u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D571Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5724u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D573Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5750u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5788u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5798u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D57A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D57B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D57B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D57C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D57D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D57F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5804u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D580Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5814u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D581Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D583Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5844u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5864u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5878u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5894u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D58ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D58B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D58C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D58DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D591Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5930u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D593Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D594Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5954u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D595Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5968u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5980u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5990u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D59FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5A98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5AC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5AE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5AECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5AF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B34u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B3Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5B88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5BC4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5BE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5BECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5BF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C78u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5C9Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5CA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5CC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D4Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5D80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5DA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5DE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5DF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E1Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E3Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E44u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5E64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5EA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5EB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5EC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5EC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5EE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5EF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5F8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5FE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D5FF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D60E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D60ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6104u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6174u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D617Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6184u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6188u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D61D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D61ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D623Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6240u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6278u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6298u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D62A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D62B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D62C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D62CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D62D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D62E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D62F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6300u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6310u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D631Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6328u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6338u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6344u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6350u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6374u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D637Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6390u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D63A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D63B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D640Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6434u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D643Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6440u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6448u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6468u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6470u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6480u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6490u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6494u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D649Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D64FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6500u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6508u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6560u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6568u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D65A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D65DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D65ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6600u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6618u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D664Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6668u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6670u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D667Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6698u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D66B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D66C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D66D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D66E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D66E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D66F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D66F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6708u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6720u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6728u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6734u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D673Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6758u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6764u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D676Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6778u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D677Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6784u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6790u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6794u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D679Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D67B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D67C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D67CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D67E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6800u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6804u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D681Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6834u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6844u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6854u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6860u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6868u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6870u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6880u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D688Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6890u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68C8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D68F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6900u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D690Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6918u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6920u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6928u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D692Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6974u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D69F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A14u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A1Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A58u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A78u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A90u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6A9Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6AA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6B9Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6BA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6BB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6C98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6CF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6D08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6D78u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6DD0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6DD8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6DE0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6DF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6E9Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6EA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6EACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6F98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6FB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6FB4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6FC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6FCCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6FE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6FF0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D6FF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7000u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7004u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7030u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7038u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7064u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7074u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7084u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D70B4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D70B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D70DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D70E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7180u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D71D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D71E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7200u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7210u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D721Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D722Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7244u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7260u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7270u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7274u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D727Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7288u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7294u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D729Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72A4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72A8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D72F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7300u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7310u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7330u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7340u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D734Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D73B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D73DCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D73E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D73F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7404u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D740Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D741Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7450u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7458u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D746Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7478u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7480u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7490u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D74A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D74C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D74D0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D74D8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D74ECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D74F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7500u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7510u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7524u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7530u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7534u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7560u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D756Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7580u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7588u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7598u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D75BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D75C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D75E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D75F0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D75F8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7600u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7610u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D761Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7638u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7654u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D765Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7664u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D766Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7670u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D767Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7698u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76C4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D76FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D775Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7790u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D77ACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D77BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D77E0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D77E8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D77F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7804u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7814u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7830u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7854u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D785Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7868u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D788Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78B0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78B8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78BCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78D4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78F4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D78FCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7900u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7918u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7920u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7940u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7948u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D794Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7954u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7964u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D796Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7974u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7980u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7988u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7990u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7998u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79A0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79C0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79CCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D79E4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A30u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A4Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A78u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A8Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A94u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7A98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7ACCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AD4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7ADCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7AFCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B10u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B28u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B50u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7B88u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BC4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BE4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BECu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7BF4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C04u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C0Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C18u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C20u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C44u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C60u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C70u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7C80u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CACu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CD8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7CFCu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D1Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D24u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D40u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7D84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7DF8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E1Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E2Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E44u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E54u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E5Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E64u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E6Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E7Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7E98u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EA0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EA8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EB0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EC0u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EC8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7EE8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F00u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F08u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F1Cu, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F38u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F48u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F68u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F74u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7F84u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FA4u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FD8u, &recomp_unit_0052, "recomp_unit_0052");
    runtime.register_function(0x088D7FE4u, &recomp_unit_0052, "recomp_unit_0052");
}
} // namespace psprecomp
